#include <util/delay.h>
#include <mcal.h>
#include "digitalio_attiny85.h"
#include "logicLED.h"
#include "systemtick_attiny85.h"
#include "MomentaryButton.h"
#include "SoftwareSerial.h"
#include "Powerswitch.h"
#include "USITWISlave.h"
#include "pwm_attiny85.h"
#include "adconverter.h"
#include "PWMLed.h"

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

	mcal::PWM& pwm = mcal::ATTiny85PWM::getInstance();
	hal::PWMLed pwmLed = hal::PWMLed(2, pwm, 200, 0, 60);

	app::Powerswitch powerswitch = app::Powerswitch(powerButton, rpiPower,
			powerSwitch);

	while (1) {

		pwmLed.update();

		/**
		 * This is the only way we can detect stop condition (http://www.avrfreaks.net/index.php?name=PNphpBB2&file=viewtopic&p=984716&sid=82e9dc7299a8243b86cf7969dd41b5b5#984716)
		 * it needs to be called in a very tight loop in order not to miss any (REMINDER: Do *not* use delay() anywhere, use tws_delay() instead).
		 * It will call the function registered via TinyWireS.onReceive(); if there is data in the buffer on stop.
		 */
//		twiSlave.tws_delay(10, systick);
//		powerswitch.update();
		_delay_ms(10);

	}

	return 0;
}

