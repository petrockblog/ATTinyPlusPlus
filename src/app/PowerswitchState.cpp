/*
 * PowerswitchStates.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include <PowerswitchState.h>

namespace app {

PowerswitchState::PowerswitchState() {
}

PowerswitchState::~PowerswitchState() {
}

void PowerswitchStateOff::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_LOW);
		powerSwitch.setState(powerSwitch.getStateOff());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateBoot());

	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateShutdown());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateOn());

	}
}

PowerswitchStateOff::~PowerswitchStateOff() {
}

void PowerswitchStateBoot::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateBoot());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateBoot());

	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateShutdown());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateOn());

	}
}

PowerswitchStateBoot::~PowerswitchStateBoot() {
}

void PowerswitchStateOn::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_LOW);
		powerSwitch.setState(powerSwitch.getStateOff());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_LOW);
		powerSwitch.setState(powerSwitch.getStateOff());

	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateShutdown());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateOn());

	}
}

PowerswitchStateOn::~PowerswitchStateOn() {
}

void PowerswitchStateShutdown::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_LOW);
		powerSwitch.setState(powerSwitch.getStateOff());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setSwitch(hal::LED::LED_LOW);
		powerSwitch.setState(powerSwitch.getStateOff());

	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateShutdown());

	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setSwitch(hal::LED::LED_HIGH);
		powerSwitch.setState(powerSwitch.getStateShutdown());

	}
}

PowerswitchStateShutdown::~PowerswitchStateShutdown() {
}

} /* namespace app */
