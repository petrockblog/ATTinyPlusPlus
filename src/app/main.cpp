#include <util/delay.h>
#include <mcal.h>
#include "digitalio_attiny85.h"
#include "logicLED.h"
#include "systemtick_attiny85.h"
#include "MomentaryButton.h"
#include "pwm_attiny85.h"
#include "Powerswitch.h"

namespace {
const mcal::Systemtick::systick_t LOOPDELAY = 15;
}

int main() {

	// initialize system tick (with 1 ms period)
	mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
	systick.start();

	mcal::DigitalIO &gpio = mcal::ATTiny85DigitalIO::getInstance();

	hal::MomentaryButton fromRPi = hal::MomentaryButton(3, gpio,
			hal::MomentaryButton::ACTIVELEVEL_HIGH);
	hal::MomentaryButton powerButton = hal::MomentaryButton(0, gpio,
			hal::MomentaryButton::ACTIVELEVEL_LOW);
	hal::LogicLED mosfetswitch = hal::LogicLED(4, gpio);
	hal::LogicLED toRPi = hal::LogicLED(2, gpio);

//	hal::LogicLED signalLED = hal::LogicLED(1, gpio);
	mcal::PWM& pwm = mcal::ATTiny85PWM::getInstance();
	// PWM channel 2 uses PB4
	hal::PWMLed pwmLed = hal::PWMLed(1, pwm, 0, 0, 0);

//	app::Powerswitch powerswitch = app::Powerswitch(powerButton, fromRPi,
//			mosfetswitch, signalLED, toRPi);
	app::Powerswitch powerswitch = app::Powerswitch(powerButton, fromRPi,
			mosfetswitch, pwmLed, toRPi);

	while (1) {
		mcal::Systemtick::systick_t start = systick.getTick();

		powerButton.updateState();
		fromRPi.updateState();
		pwmLed.update();

		powerswitch.update();

		// delay to keep a constant loop rate
		while (systick.getTick() - start < LOOPDELAY) {
		}

	}

	return 0;
}

