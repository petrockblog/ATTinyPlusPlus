/*
 * PowerswitchStates.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "PowerswitchState.h"

namespace app {

PowerswitchState::PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern) :
		ledPattern(pattern) {
}

PowerswitchState::~PowerswitchState() {
}

void PowerswitchStateOff::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
//	powerSwitch.setLEDPattern(0);
	powerSwitch.setLEDPattern(this->ledPattern);
	powerSwitch.setSwitch(hal::LED::LED_HIGH);
	powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateOff());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateBoot());
	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateBoot());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateBoot());
	}
}

PowerswitchStateOff::~PowerswitchStateOff() {
}

void PowerswitchStateBoot::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
//	powerSwitch.setLEDPattern(1);
	powerSwitch.setLEDPattern(this->ledPattern);
	powerSwitch.setSwitch(hal::LED::LED_LOW);
	powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateBoot());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateBoot());
	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateOn());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateOn());
	}
}

PowerswitchStateBoot::~PowerswitchStateBoot() {
}

void PowerswitchStateOn::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
//	powerSwitch.setLEDPattern(2);
	powerSwitch.setLEDPattern(this->ledPattern);
	powerSwitch.setSwitch(hal::LED::LED_LOW);
	powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateShutdown());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateShutdown());
	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateShutdown());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateOn());
	}
}

PowerswitchStateOn::~PowerswitchStateOn() {
}

void PowerswitchStateShutdown::step(Powerswitch& powerSwitch,
		hal::Button::ButtonState_e btnState,
		hal::Button::ButtonState_e rpiPowerState) {
//	powerSwitch.setLEDPattern(3);
	powerSwitch.setLEDPattern(this->ledPattern);
	powerSwitch.setSwitch(hal::LED::LED_LOW);
	powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_TRUE);
	if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateOff());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
		powerSwitch.setState(powerSwitch.getStateOff());
	} else if (btnState == hal::Button::BUTTON_RELEASED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateShutdown());
	} else if (btnState == hal::Button::BUTTON_PRESSED
			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
		powerSwitch.setState(powerSwitch.getStateShutdown());
	}
}

PowerswitchStateShutdown::~PowerswitchStateShutdown() {
}

} /* namespace app */
