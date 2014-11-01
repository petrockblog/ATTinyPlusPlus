/*
 SoftwareSerial.c (formerly SoftwareSerial.cpp, formerly NewSoftSerial.c) -
 Single-instance software serial library for ATtiny84A, modified from Arduino SoftwareSerial.
 -- Interrupt-driven receive and other improvements by ladyada
 (http://ladyada.net)
 -- Tuning, circular buffer, derivation from class Print/Stream,
 multi-instance support, porting to 8MHz processors,
 various optimizations, PROGMEM delay tables, inverse logic and
 direct port writing by Mikal Hart (http://www.arduiniana.org)
 -- Pin change interrupt macros by Paul Stoffregen (http://www.pjrc.com)
 -- 20MHz processor support by Garrett Mace (http://www.macetech.com)
 -- ATmega1280/2560 support by Brett Hagman (http://www.roguerobotics.com/)
 -- Port to ATtiny84A / C by Michael Shimniok (http://www.bot-thoughts.com/)

 Notes on the ATtiny84A port. To save space I've:
 - Converted back to C
 - Removed the ability to have mulitple serial ports,
 - Hardcoded the RX pin to PA0 and TX pin to PA1
 - Using & mask versus modulo (%)
 - A few other tweaks to get the code near 1k
 More notes:
 - Converted from Arduinoish library stuff (pins etc)
 - Error is too high at 57600 (0.64%) and 115200 (2.12%)
 - Ok at 38400 and lower.
 - Still working out how to prevent missing bits when writing characters

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

 */

// Hardcoded TX/RX
#define RXPIN   0
#define TXPIN   1
#define RXDEVICE 0
#define TXDEVICE 1

//
// Includes
//
#include <avr/pgmspace.h>
#include "SoftwareSerial.h"
#include <mcal.h>

//
// Lookup table
//
typedef struct _DELAY_TABLE {
	long baud;
	unsigned short rx_delay_centering;
	unsigned short rx_delay_intrabit;
	unsigned short rx_delay_stopbit;
	unsigned short tx_delay;
} DELAY_TABLE;

// These delays are tuned for 8 MHz
static const DELAY_TABLE PROGMEM table[] = {
// TODO possibly fine tune these values with oscilloscope/logic analyzer
//  baud    rxcenter   rxintra    rxstop    tx
		{ 115200, 1, 8, 8, 6 },          // 117647 off by 2.12%, causes problems
		{ 57600, 5, 18, 18, 16 },        // 57971 off by 0.644%, causes problems
		{ 38400, 12, 28, 28, 27 },
		{ 31250, 15, 35, 35, 34 },
		{ 28800, 34, 77, 77, 74 },
		{ 19200, 26, 52, 52, 50 }, // this works very reliable
		{ 14400, 37, 78, 78, 76 },
		{ 9600, 52, 104, 104, 102 }, // this works very reliable
		{ 4800, 116, 236, 236, 235 },
		{ 2400, 235, 475, 475, 473 },
		{ 1200, 947, 1902, 1902, 1899 },
		{ 600, 951, 1902, 1902, 1900 },
		{ 300, 1902, 3808, 3808, 3807 }
};

using namespace mcal;

const int ATSerial::XMIT_START_ADJUSTMENT = 5;

uint16_t ATSerial::_rx_delay_centering = 0;
uint16_t ATSerial::_rx_delay_intrabit = 0;
uint16_t ATSerial::_rx_delay_stopbit = 0;
uint16_t ATSerial::_tx_delay = 0;
uint16_t ATSerial::_buffer_overflow = false;

char ATSerial::_receive_buffer[_SS_MAX_RX_BUFF] = { 0 };
volatile uint8_t ATSerial::_receive_buffer_tail = 0;
volatile uint8_t ATSerial::_receive_buffer_head = 0;

ATSerial::ATSerial() {
}

/* static */
inline void ATSerial::tunedDelay(uint16_t delay) {
	uint8_t tmp = 0;

	asm volatile("sbiw    %0, 0x01 \n\t"
			"ldi %1, 0xFF \n\t"
			"cpi %A0, 0xFF \n\t"
			"cpc %B0, %1 \n\t"
			"brne .-10 \n\t"
			: "+w" (delay), "+a" (tmp)
			: "0" (delay)
	);
}

//
// Interrupt handling, receive routine
//
void ATSerial::pinChangeHandler() {
	uint8_t returnValue = 0;
	DigitalIO &gpio = ATTiny85GPIO::getInstance();

	if (gpio.read(RXDEVICE) == DigitalIO::DIOLEVEL_LOW ) {
		// Wait approximately 1/2 of a bit width to "center" the sample
		ATSerial::tunedDelay(ATSerial::_rx_delay_centering);

		// Read each of the 8 bits
		for (uint8_t counter = 0x1; counter; counter <<= 1) {
			ATSerial::tunedDelay(ATSerial::_rx_delay_intrabit);
			uint8_t noti = ~counter;
			if (gpio.read(RXDEVICE) == DigitalIO::DIOLEVEL_HIGH)
			returnValue |= counter;
			else // else clause added to ensure function timing is ~balanced
			returnValue &= noti;
		}

		// skip the stop bit
		ATSerial::tunedDelay(ATSerial::_rx_delay_stopbit);

		// if buffer full, set the overflow flag and return
		if (((ATSerial::_receive_buffer_tail + 1) & _SS_RX_BUFF_MASK) != ATSerial::_receive_buffer_head) { // circular buffer
			// save new data in buffer: tail points to where byte goes
			ATSerial::_receive_buffer[ATSerial::_receive_buffer_tail] = returnValue;// save new byte
			ATSerial::_receive_buffer_tail = (ATSerial::_receive_buffer_tail + 1) & _SS_RX_BUFF_MASK;// circular buffer
		} else {
			ATSerial::_buffer_overflow = true;
		}
	}
}

void ATSerial::begin(long speed) {
	unsigned counter;

	DigitalIO &gpio = ATTiny85GPIO::getInstance();
	gpio.open(RXDEVICE);
	gpio.open(TXDEVICE);
	gpio.control(RXDEVICE,DigitalIO::DIOCMD_DIR_IN,NULL); // set RX for input
	gpio.control(TXDEVICE,DigitalIO::DIOCMD_DIR_OUT,NULL); // set TX for output
	gpio.control(RXDEVICE, DigitalIO::DIOCMD_PULLUP_ENABLE, NULL);
	gpio.control(TXDEVICE, DigitalIO::DIOCMD_PULLUP_ENABLE, NULL);

	for (counter = 0; counter < sizeof(table) / sizeof(table[0]); ++counter) {
		long baud = pgm_read_dword(&table[counter].baud);
		if (baud == speed) {
			_rx_delay_centering = pgm_read_word(
					&table[counter].rx_delay_centering);
			_rx_delay_intrabit = pgm_read_word(
					&table[counter].rx_delay_intrabit);
			_rx_delay_stopbit = pgm_read_word(&table[counter].rx_delay_stopbit);
			_tx_delay = pgm_read_word(&table[counter].tx_delay);
			// Set up RX interrupts, but only if we have a valid RX baud rate

			gpio.control(RXDEVICE, DigitalIO::DIOCMD_IRQ_PINCHANGE_HANDLER, (void*)&ATSerial::pinChangeHandler);
			gpio.control(RXDEVICE, DigitalIO::DIOCMD_IRQ_PINCHANGE_ENABLE, 0);
			return;
		}
	}

	// todo No valid rate found, Indicate an error
}

void ATSerial::end() {
	DigitalIO& gpio = ATTiny85GPIO::getInstance();
	gpio.control(RXDEVICE, DigitalIO::DIOCMD_IRQ_PINCHANGE_DISABLE, NULL);
}

// Read data from buffer
int ATSerial::read() {
	// Empty buffer?
	if (_receive_buffer_head == _receive_buffer_tail) {
		return -1;
	}

	// Read from "head"
	uint8_t d = _receive_buffer[_receive_buffer_head]; // grab next byte
	_receive_buffer_head = (_receive_buffer_head + 1) & _SS_RX_BUFF_MASK; // circular buffer
	return d;
}

int ATSerial::bytesAvailable() {
	return (_receive_buffer_tail + _SS_MAX_RX_BUFF - _receive_buffer_head)
			& _SS_RX_BUFF_MASK; // circular buffer
}

bool ATSerial::isOverflow(void) {
	bool returnValue = _buffer_overflow;
	_buffer_overflow = false;
	return returnValue;
}

size_t ATSerial::write(uint8_t b) {
	DigitalIO &gpio = ATTiny85GPIO::getInstance();

	if (_tx_delay == 0) {
		//setWriteError();
		return 0;
	}

	// store interrupt flag
	uint8_t oldSREG = reg::sreg::reg_get();

	cli();
	// turn off interrupts for a clean txmit

	// Write the start bit
	gpio.write(TXDEVICE, DigitalIO::DIOLEVEL_LOW);
	tunedDelay(_tx_delay + XMIT_START_ADJUSTMENT);

	// Write each of the 8 bits
	for (char mask = 0x01; mask; mask <<= 1) {
		if (b & mask) // choose bit
			gpio.write(TXDEVICE, DigitalIO::DIOLEVEL_HIGH);
			else
			gpio.write(TXDEVICE, DigitalIO::DIOLEVEL_LOW);
			tunedDelay(_tx_delay);
		}
	gpio.write(TXDEVICE, DigitalIO::DIOLEVEL_HIGH);

	// turn interrupts back on
	reg::sreg::reg_set(oldSREG);
	tunedDelay(_tx_delay);

	return 1;
}

size_t ATSerial::write(const char* string) {
	uint8_t counter = 0;
	while (*string) {
		write((uint8_t) *string);
		string++;
		counter++;
	}
	return counter;
}

size_t ATSerial::write(const char* string, size_t size) {
	uint8_t counter = 0;
	while (*string && counter < size) {
		write((uint8_t) *string);
		string++;
		counter++;
	}
	return counter;
}

void ATSerial::flush() {
	uint8_t oldSREG = reg::sreg::reg_get();
	cli();
	_receive_buffer_head = 0;
	_receive_buffer_tail = 0;
	reg::sreg::reg_set(oldSREG);
}

int ATSerial::peek() {
	// Empty buffer?
	if (_receive_buffer_head == _receive_buffer_tail)
		return -1;

	// Read from "head"
	return _receive_buffer[_receive_buffer_head];
}
