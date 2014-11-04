/*
 * Powerswitch.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include <Powerswitch.h>

namespace app {

Powerswitch::Powerswitch(hal::Button &btn, hal::Button &rpiPower,
		hal::LED& powerSwitch) :
		stateOff(new PowerswitchStateOff()), stateBoot(
				new PowerswitchStateBoot()), stateOn(new PowerswitchStateOn()), stateShutdown(
				new PowerswitchStateShutdown()), currentState(stateOff), button(
				btn), rpiPower(rpiPower), powerSwitch(powerSwitch) {
}

Powerswitch::~Powerswitch() {
}

void Powerswitch::update() {
	currentState->step(*this, button.getButtonState(),
			rpiPower.getButtonState());
}

void Powerswitch::setSwitch(hal::LED::LEDLevel_e level) {
	powerSwitch.set(level);
}

void Powerswitch::setState(PowerswitchState *newState) {
	currentState = newState;
}

} /* namespace app */
