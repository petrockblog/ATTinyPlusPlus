#include <util/delay.h>
#include <mcal.h>
#include <digitalio_attiny85.h>
#include <logicLED.h>
#include <systemtick_attiny85.h>
#include <MomentaryButton.h>
#include <SoftwareSerial.h>
#include "Powerswitch.h"
#include "USITWISlave.h"
#include "pwm.h"
#include <adconverter.h>

#define I2C_SLAVE_ADDRESS 0x4 // the 7-bit address (remember to change this when adapting this example)
// Get this from https://github.com/rambo/TinyWire
// The default buffer size, Can't recall the scope of defines right now
#ifndef TWI_RX_BUFFER_SIZE
#define TWI_RX_BUFFER_SIZE ( 16 )
#endif

volatile uint8_t i2c_regs[] = { 0xDE, 0xAD, 0xBE, 0xEF, };
// Tracks the current register pointer position
volatile uint8_t reg_position;
const char reg_size = sizeof(i2c_regs);

/**
 * This is called for each read request we receive, never put more than one byte of data (with TinyWireS.send) to the
 * send-buffer when using this callback
 */
void requestEvent() {
	mcal::USITWISlave::getInstance().send(i2c_regs[reg_position]);
	// Increment the reg position on each read, and loop back to zero
	reg_position++;
	if (reg_position >= reg_size) {
		reg_position = 0;
	}
}

/**
 * The I2C data received -handler
 *
 * This needs to complete before the next incoming transaction (start, data, restart/stop) on the bus does
 * so be quick, set flags for long running tasks to be called from the mainloop instead of running them directly,
 */
void receiveEvent(uint8_t howMany) {
	if (howMany < 1) {
		// Sanity-check
		return;
	}
	if (howMany > TWI_RX_BUFFER_SIZE) {
		// Also insane number
		return;
	}

	reg_position = mcal::USITWISlave::getInstance().receive();
	howMany--;
	if (!howMany) {
		// This write was only to set the buffer for next read
		return;
	}
	while (howMany--) {
		i2c_regs[reg_position] = mcal::USITWISlave::getInstance().receive();
		reg_position++;
		if (reg_position >= reg_size) {
			reg_position = 0;
		}
	}
}

int main() {

	// initialize system tick
	mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
	systick.start();

	mcal::USITWISlave twiSlave = mcal::USITWISlave::getInstance();
	twiSlave.begin(I2C_SLAVE_ADDRESS);
	twiSlave.onReceive(receiveEvent);
	twiSlave.onRequest(requestEvent);

	// initialize peripherals and power switch
	mcal::DigitalIO &gpio = mcal::ATTiny85DigitalIO::getInstance();

	hal::MomentaryButton powerButton = hal::MomentaryButton(0, gpio);
	hal::MomentaryButton rpiPower = hal::MomentaryButton(1, gpio);
	hal::LogicLED powerSwitch(2, gpio);

	app::Powerswitch powerswitch = app::Powerswitch(powerButton, rpiPower,
			powerSwitch);
	powerswitch.update();

	//	uint32_t lastChange;
//	uint16_t adcValue;
//	char charBuffer[50];
//	const uint8_t sineValues[255] = { 131, 134, 137, 140, 143, 146, 149, 152,
//			156, 159, 162, 165, 168, 171, 174, 176, 179, 182, 185, 188, 191,
//			193, 196, 199, 201, 204, 206, 209, 211, 213, 216, 218, 220, 222,
//			224, 226, 228, 230, 232, 234, 235, 237, 239, 240, 242, 243, 244,
//			246, 247, 248, 249, 250, 251, 251, 252, 253, 253, 254, 254, 254,
//			255, 255, 255, 255, 255, 255, 255, 254, 254, 253, 253, 252, 252,
//			251, 250, 249, 248, 247, 246, 245, 244, 242, 241, 239, 238, 236,
//			235, 233, 231, 229, 227, 225, 223, 221, 219, 217, 215, 212, 210,
//			207, 205, 202, 200, 197, 195, 192, 189, 186, 184, 181, 178, 175,
//			172, 169, 166, 163, 160, 157, 154, 151, 148, 145, 142, 138, 135,
//			132, 129, 126, 123, 120, 117, 113, 110, 107, 104, 101, 98, 95, 92,
//			89, 86, 83, 80, 77, 74, 71, 69, 66, 63, 60, 58, 55, 53, 50, 48, 45,
//			43, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 19, 17, 16, 14, 13,
//			11, 10, 9, 8, 7, 6, 5, 4, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1,
//			1, 1, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9, 11, 12, 13, 15, 16, 18, 20, 21,
//			23, 25, 27, 29, 31, 33, 35, 37, 39, 42, 44, 46, 49, 51, 54, 56, 59,
//			62, 64, 67, 70, 73, 76, 79, 81, 84, 87, 90, 93, 96, 99, 103, 106,
//			109, 112, 115, 118, 121, 124, 128 };
//	uint16_t index = 0;
//	uint32_t ledInterval = 500;

//	mcal::PWM::open(mcal::PWM::PWMDevice0);
//	mcal::PWM::open(mcal::PWM::PWMDevice1);
//	mcal::PWM::getInstance().open(mcal::PWM::PWMDevice1);

	while (1) {
		/**
		 * This is the only way we can detect stop condition (http://www.avrfreaks.net/index.php?name=PNphpBB2&file=viewtopic&p=984716&sid=82e9dc7299a8243b86cf7969dd41b5b5#984716)
		 * it needs to be called in a very tight loop in order not to miss any (REMINDER: Do *not* use delay() anywhere, use tws_delay() instead).
		 * It will call the function registered via TinyWireS.onReceive(); if there is data in the buffer on stop.
		 */
		twiSlave.stop_check();
	}

	return 0;
}

