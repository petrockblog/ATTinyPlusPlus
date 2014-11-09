#include <util/delay.h>
#include <mcal.h>
#include "digitalio_attiny85.h"
#include "logicLED.h"
#include "systemtick_attiny85.h"
#include "MomentaryButton.h"
#include "SoftwareSerial.h"
#include "Powerswitch.h"
#include "pwm_attiny85.h"
#include "PWMLed.h"

namespace {
const mcal::Systemtick::systick_t LOOPDELAY = 15;
}

int main() {

	// initialize system tick (with 1 ms period)
	mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
	systick.start();

	mcal::DigitalIO &gpio = mcal::ATTiny85DigitalIO::getInstance();

	hal::MomentaryButton rpiStatus = hal::MomentaryButton(2, gpio);
	hal::MomentaryButton powerButton = hal::MomentaryButton(1, gpio);
	hal::LogicLED powerSwitch = hal::LogicLED(3, gpio);

	mcal::PWM& pwm = mcal::ATTiny85PWM::getInstance();
	// PWM channel 2 uses PB4
	hal::PWMLed pwmLed = hal::PWMLed(2, pwm, 200, 0, 60);

	app::Powerswitch powerswitch = app::Powerswitch(powerButton, rpiStatus,
			powerSwitch, pwmLed);

	while (1) {
		mcal::Systemtick::systick_t start = systick.getTick();

		powerswitch.update();
		pwmLed.update();

		// delay to keep a constant loop rate
		while (systick.getTick() - start < LOOPDELAY) {
		}

	}

	return 0;
}

