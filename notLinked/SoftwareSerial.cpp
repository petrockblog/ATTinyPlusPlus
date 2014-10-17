/*
 * SoftwareSerial.cpp
 *
 *  Created on: 14.10.2014
 *      Author: florian
 */

#include <SoftwareSerial.h>

//
// Hardcoded TX/RX
//
//#define SERDDR  DDRA
//#define SERPORT PORTA
//#define SERPIN  PINA
#define RXPIN   0
#define TXPIN   1
#define RXDEVICE   GPIO::GPIODevice0
#define TXDEVICE   GPIO::GPIODevice1
//
// Includes
//
#include "SoftwareSerial.h"

// private methods
//#define rx_pin_read() (SERPIN & (1<<RXPIN))

//
// Globals
//

using namespace mcal;

namespace hal {

char SoftwareSerial::_receive_buffer[] = { 0 };
volatile std::uint8_t SoftwareSerial::_receive_buffer_tail = 0;
volatile std::uint8_t SoftwareSerial::_receive_buffer_head = 0;

std::uint16_t SoftwareSerial::_rx_delay_centering = 0;
std::uint16_t SoftwareSerial::_rx_delay_intrabit = 0;
std::uint16_t SoftwareSerial::_rx_delay_stopbit = 0;
std::uint16_t SoftwareSerial::_tx_delay = 0;
std::uint16_t SoftwareSerial::_buffer_overflow = false;
const int SoftwareSerial::XMIT_START_ADJUSTMENT = 5;

SoftwareSerial::SoftwareSerial() {
//	_receive_buffer_tail = 0;
//	_receive_buffer_head = 0;
//
//	_rx_delay_centering = 0;
//	_rx_delay_intrabit = 0;
//	_rx_delay_stopbit = 0;
//	_tx_delay = 0;
//	_buffer_overflow = false;
//	XMIT_START_ADJUSTMENT = 5;
}

void SoftwareSerial::begin(long speed) {
	unsigned i;

	GPIO gpio = GPIO::getInstance();

	_receive_buffer_head = 0;
	_receive_buffer_tail = 0;
	_buffer_overflow = false;
	gpio.open(RXDEVICE);
	gpio.open(TXDEVICE);
	//	SERDDR |= (1 << TXPIN); // set TX for output
	gpio.control(TXDEVICE, GPIO::GPIOCMD_DIR_OUT, NULL);
	//	SERDDR &= ~(1 << RXPIN); // set RX for input
	gpio.control(RXDEVICE, GPIO::GPIOCMD_DIR_IN, NULL);

//	SERPORT |= (1 << TXPIN) | (1 << RXPIN); // assumes no inverse logic
	gpio.control(RXDEVICE, GPIO::GPIOCMD_PULLUP_ENABLE, NULL);
	gpio.control(TXDEVICE, GPIO::GPIOCMD_PULLUP_ENABLE, NULL);

	for (i = 0; i < sizeof(delayTable) / sizeof(delayTable[0]); ++i) {
		long baud = pgm_read_dword(&delayTable[i].baud);
		if (baud == speed) {
			_rx_delay_centering = pgm_read_word(&delayTable[i].rx_delay_centering);
			_rx_delay_intrabit = pgm_read_word(&delayTable[i].rx_delay_intrabit);
			_rx_delay_stopbit = pgm_read_word(&delayTable[i].rx_delay_stopbit);
			_tx_delay = pgm_read_word(&delayTable[i].tx_delay);
			// Set up RX interrupts, but only if we have a valid RX baud rate

			gpio.control(RXDEVICE, GPIO::GPIOCMD_IRQ_PINCHANGE_HANDLER,
			(void*)SoftwareSerial::pinChangeInterruptHandler);
			gpio.control(RXDEVICE, GPIO::GPIOCMD_IRQ_PINCHANGE_ENABLE,
			NULL);
//			GIMSK |= (1 << PCIE0);
//			PCMSK0 |= (1 << RXPIN);
			tunedDelay(_tx_delay);
			sei();
			return;
		}
	}

	// No valid rate found
	// Indicate an error
}

void SoftwareSerial::end() {
//        PCMSK0 = 0;
	GPIO gpio = GPIO::getInstance();
	gpio.control(RXDEVICE, GPIO::GPIOCMD_IRQ_PINCHANGE_DISABLE, NULL);
}

size_t SoftwareSerial::write(uint8_t transData) {

	GPIO gpio = GPIO::getInstance();

	if (_tx_delay == 0) {
		//setWriteError();
		return 0;
	}

	uint8_t oldSREG = SREG; // store interrupt flag
	cli();
	// turn off interrupts for a clean txmit

	// Write the start bit
//	SERPORT &= ~(1 << TXPIN); // tx pin low
	gpio.write(TXDEVICE,GPIO::GPIOLEVEL_LOW);
	tunedDelay(_tx_delay + XMIT_START_ADJUSTMENT);

	// Write each of the 8 bits
	for (char mask = 0x01; mask; mask <<= 1) {
		if (transData & mask) { // choose bit
//			SERPORT |= (1 << TXPIN); // tx pin high, send 1
			gpio.write(TXDEVICE, GPIO::GPIOLEVEL_HIGH);
		} else {
//			SERPORT &= ~(1 << TXPIN); // tx pin low, send 0
			gpio.write(TXDEVICE, GPIO::GPIOLEVEL_LOW);
		}
		tunedDelay(_tx_delay);
	}
//	SERPORT |= (1 << TXPIN); // tx pin high, restore pin to natural state
	gpio.write(TXDEVICE, GPIO::GPIOLEVEL_HIGH);

	sei();
	SREG = oldSREG; // turn interrupts back on
	tunedDelay(_tx_delay);

	return 1;
}

void SoftwareSerial::flush() {
	uint8_t oldSREG = SREG; // store interrupt flag
	cli();
	_receive_buffer_head = _receive_buffer_tail = 0;
	SREG = oldSREG; // restore interrupt flag
	//	TODO sei() an oder aus hier?
	//sei();
}

inline void SoftwareSerial::tunedDelay(uint16_t delay) {
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

void SoftwareSerial::pinChangeInterruptHandler() {
	uint8_t d = 0;

	GPIO gpio = GPIO::getInstance();
	// If RX line is high, then we don't see any start bit
	// so interrupt is probably not for us
//	if (!rx_pin_read()) {
	GPIO::GPIOLevel_e gpioLevel;
	gpio.read(RXDEVICE, gpioLevel);
	if (gpioLevel == GPIO::GPIOLEVEL_LOW) {
		// Wait approximately 1/2 of a bit width to "center" the sample
		tunedDelay(_rx_delay_centering);

		// Read each of the 8 bits
		for (uint8_t i = 0x1; i; i <<= 1) {
			tunedDelay(_rx_delay_intrabit);
			uint8_t noti = ~i;
			gpio.read(RXDEVICE, gpioLevel);
			if (gpioLevel == GPIO::GPIOLEVEL_HIGH) {
				d |= i;
			} else {
				// else clause added to ensure function timing is ~balanced
				d &= noti;
			}
		}

		// skip the stop bit
		tunedDelay(_rx_delay_stopbit);

		// if buffer full, set the overflow flag and return
		if (((_receive_buffer_tail + 1) & _SS_RX_BUFF_MASK)
				!= _receive_buffer_head) {  // circular buffer
			// save new data in buffer: tail points to where byte goes
			_receive_buffer[_receive_buffer_tail] = d; // save new byte
			_receive_buffer_tail =
					(_receive_buffer_tail + 1) & _SS_RX_BUFF_MASK; // circular buffer
		} else {
			_buffer_overflow = true;
		}
	}
}

// Read data from buffer
int SoftwareSerial::read() {
	// Empty buffer?
	if (_receive_buffer_head == _receive_buffer_tail)
		return -1;

	// Read from "head"
	uint8_t d = _receive_buffer[_receive_buffer_head]; // grab next byte
	_receive_buffer_head = (_receive_buffer_head + 1) & _SS_RX_BUFF_MASK; // circular buffer
	return d;
}

int SoftwareSerial::getBytesAvailable() {
	return (_receive_buffer_tail + _SS_MAX_RX_BUFF - _receive_buffer_head)
			& _SS_RX_BUFF_MASK; // circular buffer
}

bool SoftwareSerial::isOverflow(void) {
	bool ret = _buffer_overflow;
	_buffer_overflow = false;
	return ret;
}

int SoftwareSerial::peek() {
	// Empty buffer?
	if (_receive_buffer_head == _receive_buffer_tail)
		return -1;

	// Read from "head"
	return _receive_buffer[_receive_buffer_head];
}

} /* namespace hal */
