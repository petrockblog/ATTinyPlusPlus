/*
 * Powerswitch.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "Powerswitch.h"

namespace app {

//Powerswitch::Powerswitch(hal::Button &btn, hal::Button &fromRPi, hal::LED& powerSwitch,
//		hal::LED &led, hal::LED &toRPi) :
Powerswitch::Powerswitch(hal::Button &btn, hal::Button &fromRPi, hal::LED& powerSwitch,
				hal::PWMLed &led, hal::LED &toRPi) :
		currentState(stateOff), stateOff(new PowerswitchStateOff()), stateBoot(
				new PowerswitchStateBoot()), stateOn(new PowerswitchStateOn()), stateShutdown(
				new PowerswitchStateShutdown()), button(btn), fromRPi(fromRPi), powerSwitch(
						powerSwitch), toRPi(toRPi), pwmLED(led) {
//						powerSwitch), toRPi(toRPi), signalLED(led), ledcontroller(led) {
	currentState = stateOff;
}

Powerswitch::~Powerswitch() {
}

void Powerswitch::update() {
	if (currentState != nullptr) {
		currentState->step(*this, button.getButtonState(),
				fromRPi.getButtonState());
	}
//	ledcontroller.update();
}

void Powerswitch::setSwitch(hal::LED::LEDLevel_e level) {
	powerSwitch.set(level);
}

void Powerswitch::setShutdownSignal(shutdown_e doShutdown) {
	if (doShutdown == SHUTDOWN_TRUE) {
		toRPi.set(hal::LED::LED_HIGH);
	} else {
		toRPi.set(hal::LED::LED_LOW);
	}
}

void Powerswitch::setState(PowerswitchState *newState) {
	currentState = newState;
}

//void Powerswitch::setLEDPattern(uint8_t index) {
//	ledcontroller.setPattern(index);
//}

} /* namespace app */
