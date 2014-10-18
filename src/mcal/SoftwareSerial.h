/*
 SoftwareSerial.h (formerly NewSoftSerial.h) -
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

#ifndef SoftwareSerial_h
#define SoftwareSerial_h

#include <inttypes.h>
#include <stddef.h>
#include <gpio.h>


namespace mcal {

class ATSerial {

public:

	//
// Definitions
//
#define _SS_MAX_RX_BUFF 64 // RX buffer size, must be (1<<n)
#define _SS_RX_BUFF_MASK (_SS_MAX_RX_BUFF-1)

	ATSerial();
	void begin(long speed);
	void end();
	bool isOverflow();
	int peek();
	size_t write(uint8_t byte);
	int read();
	int bytesAvailable();
	void flush();

	static uint16_t _rx_delay_centering;
	static uint16_t _rx_delay_intrabit;
	static uint16_t _rx_delay_stopbit;
	static uint16_t _tx_delay;
	static uint16_t _buffer_overflow;

	// static data
	static char _receive_buffer[_SS_MAX_RX_BUFF];
	static volatile uint8_t _receive_buffer_tail;
	static volatile uint8_t _receive_buffer_head;

private:

	static const int XMIT_START_ADJUSTMENT;

	static void pinChangeHandler();
	static inline void tunedDelay(uint16_t delay);

};

}

#endif
