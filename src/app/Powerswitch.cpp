/*
 * Powerswitch.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include <util/delay.h>
#include "app/Powerswitch.h"

namespace app {

Powerswitch::Powerswitch(hal::Button &btn, hal::Button &fromRPi, hal::LED &powerSwitch,
                         hal::PWMLed &led, hal::LED &toRPi) :
    currentState(stateOff), stateOff(new PowerswitchStateOff()), stateBoot(
    new PowerswitchStateBoot()), stateOn(new PowerswitchStateOn()), stateShutdown(
    new PowerswitchStateShutdown()), button(btn), fromRPi(fromRPi), powerSwitch(
    powerSwitch), toRPi(toRPi), pwmLED(led) {
  setState(stateOff);
}

Powerswitch::~Powerswitch() = default;

void Powerswitch::update() {
  if (currentState != nullptr) {
    currentState->step(*this, button.getButtonState(), fromRPi.getButtonState());
  }
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
  currentState->onEnter(*this);
}

} /* namespace app */
