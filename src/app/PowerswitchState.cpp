/*
 * PowerswitchStates.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "app/PowerswitchState.h"

namespace app {

PowerswitchState::PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern) :
    led_pattern_(pattern) {
}

void PowerswitchStateOff::OnEnter(Powerswitch &power_switch) {
  on_enter_tick_ = mcal::ATTiny85Systemtick::getInstance().getTick();
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_HIGH);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateOff::Step(Powerswitch &power_switch,
                               hal::Button::ButtonState btn_state,
                               hal::Button::ButtonState rpi_power_state) {

  if ((btn_state == hal::Button::BUTTON_PRESSED) || (rpi_power_state == hal::Button::BUTTON_PRESSED)) {
    power_switch.SetState(power_switch.GetStateBoot());
  }

//
//	if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED)
//	{
//		power_switch_.SetState(power_switch_.GetStateOff());
//	}
//	else if ((btn_state == hal::Button::BUTTON_PRESSED)
//			&& (rpi_power_state == hal::Button::BUTTON_RELEASED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - on_enter_tick_
//					>= OFFSTATEDELAY))
//	{
//		power_switch_.SetState(power_switch_.GetStateBoot());
//	}
//	else if ((btn_state == hal::Button::BUTTON_RELEASED)
//			&& (rpi_power_state == hal::Button::BUTTON_PRESSED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - on_enter_tick_
//					>= OFFSTATEDELAY))
//	{
//		power_switch_.SetState(power_switch_.GetStateBoot());
//	}
//	else if ((btn_state == hal::Button::BUTTON_PRESSED)
//			&& (rpi_power_state == hal::Button::BUTTON_PRESSED)
//			&& (mcal::ATTiny85Systemtick::getInstance().getTick() - on_enter_tick_
//					>= OFFSTATEDELAY))
//	{
//		power_switch_.SetState(power_switch_.GetStateBoot());
//	}
}

void PowerswitchStateBoot::OnEnter(Powerswitch &power_switch) {
  on_enter_tick_ = mcal::ATTiny85Systemtick::getInstance().getTick();
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_LOW);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateBoot::Step(Powerswitch &power_switch,
                                hal::Button::ButtonState btn_state,
                                hal::Button::ButtonState rpi_power_state) {

  const mcal::Systemtick::systick_t currentTick = mcal::ATTiny85Systemtick::getInstance().getTick();
  const mcal::Systemtick::systick_t timeInState = (currentTick - on_enter_tick_);
  const mcal::Systemtick::systick_t MINSTATEDELAY_TICKS = 2500u;
  
  if ((rpi_power_state == hal::Button::BUTTON_PRESSED) && (timeInState >= MINSTATEDELAY_TICKS)){
    power_switch.SetState(power_switch.GetStateOn());
  }
  
  if ((btn_state == hal::Button::BUTTON_RELEASED) && (timeInState < MINSTATEDELAY_TICKS)) {
	  power_switch.SetUsingMomentaryPowerButton(true);
  }

//	if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateBoot());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateBoot());
//	} else if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateOn());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateOn());
//	}
}

void PowerswitchStateOn::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_LOW);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateOn::Step(Powerswitch &power_switch,
                              hal::Button::ButtonState btn_state,
                              hal::Button::ButtonState rpi_power_state) {

	if (power_switch.GetUsingMomentaryPowerButton()) {
	  if ((btn_state == hal::Button::BUTTON_PRESSED) || (rpi_power_state == hal::Button::BUTTON_RELEASED)) {
		  power_switch.SetState(power_switch.GetStateShutdown());
	  }
	} else {
	  if ((btn_state == hal::Button::BUTTON_RELEASED) || (rpi_power_state == hal::Button::BUTTON_RELEASED)) {
		power_switch.SetState(power_switch.GetStateShutdown());
	  }
	}

//	if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateShutdown());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateShutdown());
//	} else if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateShutdown());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateOn());
//	}
}

void PowerswitchStateShutdown::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_LOW);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_TRUE);
}

void PowerswitchStateShutdown::Step(Powerswitch &power_switch,
                                    hal::Button::ButtonState btn_state,
                                    hal::Button::ButtonState rpi_power_state) {

  const mcal::Systemtick::systick_t currentTick = mcal::ATTiny85Systemtick::getInstance().getTick();
  const mcal::Systemtick::systick_t timeInState = (currentTick - on_enter_tick_);
  const mcal::Systemtick::systick_t MINSTATEDELAY_TICKS = 2500u;

  if ((rpi_power_state == hal::Button::BUTTON_RELEASED) && (timeInState >= MINSTATEDELAY_TICKS)) {
    power_switch.SetState(power_switch.GetStateOff());
  }

//	if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateOff());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_RELEASED) {
//		power_switch_.SetState(power_switch_.GetStateOff());
//	} else if (btn_state == hal::Button::BUTTON_RELEASED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateShutdown());
//	} else if (btn_state == hal::Button::BUTTON_PRESSED
//			&& rpi_power_state == hal::Button::BUTTON_PRESSED) {
//		power_switch_.SetState(power_switch_.GetStateShutdown());
//	}
}

} /* namespace app */
