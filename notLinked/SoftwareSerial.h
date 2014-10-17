/*
 * SoftwareSerial.h
 *
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

#ifndef SOFTWARESERIAL_H_
#define SOFTWARESERIAL_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <cstdint.h>
#include <stddef.h>
#include <gpio.h>

#define _SS_MAX_RX_BUFF 64 // RX buffer size, must be (1<<n)
#define _SS_RX_BUFF_MASK (_SS_MAX_RX_BUFF-1)

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

// 16MHz
static const DELAY_TABLE delayTable[] PROGMEM = {
                //  baud    rxcenter   rxintra    rxstop    tx
                { 115200, 1, 17, 17, 12 },                     // 117647 off by 2.12%, causes problems
                { 57600, 10, 37, 37, 33 },                     // 57971 off by 0.644%, causes problems
                { 38400, 25, 57, 57, 54 },
                { 31250, 31, 70, 70, 68 },
                { 28800, 34, 77, 77, 74 },
                { 19200, 54, 117, 117, 114 },
                { 14400, 74, 156, 156, 153 },
                { 9600, 114, 236, 236, 233 },
                { 4800, 233, 474, 474, 471 },
                { 2400, 471, 950, 950, 947 },
                { 1200, 947, 1902, 1902, 1899 },
                { 600, 1902, 3804, 3804, 3800 },
                { 300, 3804, 7617, 7617, 7614 } };


namespace hal {

class SoftwareSerial {
public:

//	static SoftwareSerial& getInstance() {
//		static SoftwareSerial instance;
//		return instance;
//	}
	SoftwareSerial();

	void begin(long speed);
	void end();
	size_t write(uint8_t byte);
	void flush();
	int read();
	int getBytesAvailable();
	bool isOverflow();
	int peek();

private:

	static const int XMIT_START_ADJUSTMENT;

	static std::uint16_t _rx_delay_centering;
	static std::uint16_t _rx_delay_intrabit;
	static std::uint16_t _rx_delay_stopbit;
	static std::uint16_t _tx_delay;

	static std::uint16_t _buffer_overflow;

	static char _receive_buffer[_SS_MAX_RX_BUFF];
	static volatile std::uint8_t _receive_buffer_tail;
	static volatile std::uint8_t _receive_buffer_head;

	static void tunedDelay(std::uint16_t delay);
	static void pinChangeInterruptHandler();

};

} /* namespace hal */

#endif /* SOFTWARESERIAL_H_ */
