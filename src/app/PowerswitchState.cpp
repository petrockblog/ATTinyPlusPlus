/*
 * PowerswitchStates.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "app/PowerswitchState.h"

namespace app {

PowerswitchState::PowerswitchState(hal::PwmLed::PwmledParams pattern) :
    led_pattern_(pattern) {
}

void PowerswitchStateOff::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_LOW);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
  buttonWasReleasedOnce_ = false;
}

void PowerswitchStateOff::Step(Powerswitch &power_switch,
                               ConstButtonRef btn_infos,
                               ConstButtonRef rpi_power_infos) {
	
	if (btn_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED) {
		buttonWasReleasedOnce_ = true;
	}
	
	if ((power_switch.IsUsingMomentaryPowerButton() && buttonWasReleasedOnce_) || !power_switch.IsUsingMomentaryPowerButton()) {
	  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED) || (rpi_power_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED)) {
		power_switch.SetState(power_switch.GetStateBoot());
	  }
	}
}

void PowerswitchStateBoot::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_HIGH);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateBoot::Step(Powerswitch &power_switch,
                                ConstButtonRef btn_infos,
                                ConstButtonRef rpi_power_infos) {

  const mcal::Systemtick::systick_t kMinstatedelayTicks = 2500u;
  const mcal::Systemtick::systick_t kTimeInState = power_switch.GetTicksInState();
  if ((rpi_power_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED) && (kTimeInState >= kMinstatedelayTicks)){
    power_switch.SetState(power_switch.GetStateOn());
  }
  
  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED) && (kTimeInState < kMinstatedelayTicks)) {
	  power_switch.SetUsingMomentaryPowerButton(true);
  } 

  if (power_switch.IsUsingMomentaryPowerButton()) {
	  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED) && (btn_infos.ticks_in_current_state_ > 5000u)) {
		  power_switch.SetState(power_switch.GetStateOff());
	  }
  }
}

void PowerswitchStateOn::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_HIGH);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_FALSE);
}

void PowerswitchStateOn::Step(Powerswitch &power_switch,
                              ConstButtonRef btn_infos,
                              ConstButtonRef rpi_power_infos) {

	if (power_switch.IsUsingMomentaryPowerButton()) {
	  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED) || (rpi_power_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED)) {
		  power_switch.SetState(power_switch.GetStateShutdown());
	  }
	} else {
	  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED) || (rpi_power_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED)) {
		power_switch.SetState(power_switch.GetStateShutdown());
	  }
	}
}

void PowerswitchStateShutdown::OnEnter(Powerswitch &power_switch) {
  power_switch.SetLedPattern(this->led_pattern_);
  power_switch.SetSwitch(hal::Led::LED_HIGH);
  power_switch.SetShutdownSignal(Powerswitch::SHUTDOWN_TRUE);
}

void PowerswitchStateShutdown::Step(Powerswitch &power_switch,
                                    ConstButtonRef btn_infos,
                                    ConstButtonRef rpi_power_infos) {

  const mcal::Systemtick::systick_t kMinstatedelayTicks = 2500u;   // 2.5 seconds
  const mcal::Systemtick::systick_t kForcedOffPress     = 5000u;   // 5 seconds for forced-off button press
  const mcal::Systemtick::systick_t kMaxstatedelayTicks = 30000u;  // 30 seconds until power is shut off automatically

  if ((rpi_power_infos.state_ == hal::MomentaryButton::BUTTON_RELEASED) && (power_switch.GetTicksInState() >= kMinstatedelayTicks)) {
    power_switch.SetState(power_switch.GetStateOff());
  }

  if (power_switch.IsUsingMomentaryPowerButton()) {
	  if ((btn_infos.state_ == hal::MomentaryButton::BUTTON_PRESSED) && (btn_infos.ticks_in_current_state_ > kForcedOffPress)) {
		  power_switch.SetState(power_switch.GetStateOff());
	  }
  }

  if (!power_switch.IsUsingMomentaryPowerButton() && (power_switch.GetTicksInState() >= kMaxstatedelayTicks)) {
    power_switch.SetState(power_switch.GetStateOff());
  }

}

} /* namespace app */
