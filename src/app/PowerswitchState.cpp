/*
 * PowerswitchStates.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "app/PowerswitchState.h"

namespace app {

PowerswitchState::PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern) :
    ledPattern(pattern) {
}

void PowerswitchStateOff::onEnter(Powerswitch &powerSwitch) {
  onEnterTick = mcal::ATTiny85Systemtick::getInstance().getTick();
  powerSwitch.setLEDPattern(this->ledPattern);
  powerSwitch.setSwitch(hal::LED::LED_HIGH);
  powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateOff::step(Powerswitch &powerSwitch,
                               hal::Button::ButtonState_e btnState,
                               hal::Button::ButtonState_e rpiPowerState) {

  if ((btnState == hal::Button::BUTTON_PRESSED) || (rpiPowerState == hal::Button::BUTTON_PRESSED)) {
    powerSwitch.setState(powerSwitch.getStateBoot());
  }

//
//	if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED)
//	{
//		powerSwitch.setState(powerSwitch.getStateOff());
//	}
//	else if ((btnState == hal::Button::BUTTON_PRESSED)
//			&& (rpiPowerState == hal::Button::BUTTON_RELEASED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - onEnterTick
//					>= OFFSTATEDELAY))
//	{
//		powerSwitch.setState(powerSwitch.getStateBoot());
//	}
//	else if ((btnState == hal::Button::BUTTON_RELEASED)
//			&& (rpiPowerState == hal::Button::BUTTON_PRESSED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - onEnterTick
//					>= OFFSTATEDELAY))
//	{
//		powerSwitch.setState(powerSwitch.getStateBoot());
//	}
//	else if ((btnState == hal::Button::BUTTON_PRESSED)
//			&& (rpiPowerState == hal::Button::BUTTON_PRESSED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - onEnterTick
//					>= OFFSTATEDELAY))
//	{
//		powerSwitch.setState(powerSwitch.getStateBoot());
//	}
}

void PowerswitchStateBoot::onEnter(Powerswitch &powerSwitch) {
  powerSwitch.setLEDPattern(this->ledPattern);
  powerSwitch.setSwitch(hal::LED::LED_LOW);
  powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateBoot::step(Powerswitch &powerSwitch,
                                hal::Button::ButtonState_e btnState,
                                hal::Button::ButtonState_e rpiPowerState) {

  if (rpiPowerState == hal::Button::BUTTON_PRESSED) {
    powerSwitch.setState(powerSwitch.getStateOn());
  }

//	if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateBoot());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateBoot());
//	} else if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateOn());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateOn());
//	}
}

void PowerswitchStateOn::onEnter(Powerswitch &powerSwitch) {
  powerSwitch.setLEDPattern(this->ledPattern);
  powerSwitch.setSwitch(hal::LED::LED_LOW);
  powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateOn::step(Powerswitch &powerSwitch,
                              hal::Button::ButtonState_e btnState,
                              hal::Button::ButtonState_e rpiPowerState) {

  if ((btnState == hal::Button::BUTTON_RELEASED) || (rpiPowerState == hal::Button::BUTTON_RELEASED)) {
    powerSwitch.setState(powerSwitch.getStateShutdown());
  }

//	if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateShutdown());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateShutdown());
//	} else if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateShutdown());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateOn());
//	}
}

void PowerswitchStateShutdown::onEnter(Powerswitch &powerSwitch) {
  powerSwitch.setLEDPattern(this->ledPattern);
  powerSwitch.setSwitch(hal::LED::LED_LOW);
  powerSwitch.setShutdownSignal(Powerswitch::SHUTDOWN_TRUE);
}

void PowerswitchStateShutdown::step(Powerswitch &powerSwitch,
                                    hal::Button::ButtonState_e btnState,
                                    hal::Button::ButtonState_e rpiPowerState) {

  if (rpiPowerState == hal::Button::BUTTON_RELEASED) {
    powerSwitch.setState(powerSwitch.getStateOff());
  }

//	if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateOff());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_RELEASED) {
//		powerSwitch.setState(powerSwitch.getStateOff());
//	} else if (btnState == hal::Button::BUTTON_RELEASED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateShutdown());
//	} else if (btnState == hal::Button::BUTTON_PRESSED
//			&& rpiPowerState == hal::Button::BUTTON_PRESSED) {
//		powerSwitch.setState(powerSwitch.getStateShutdown());
//	}
}

} /* namespace app */
