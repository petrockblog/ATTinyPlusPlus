/*
 * Powerswitch.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "app/Powerswitch.h"

namespace app {

Powerswitch::Powerswitch(hal::Button &btn, hal::Button &from_r_pi, hal::Led &power_switch,
                         hal::PWMLed &led, hal::Led &to_r_pi) :
    current_state_(nullptr), state_off_(new PowerswitchStateOff()), state_boot_(
    new PowerswitchStateBoot()), state_on_(new PowerswitchStateOn()), state_shutdown_(
    new PowerswitchStateShutdown()), button_(btn), from_r_pi_(from_r_pi), power_switch_(
    power_switch), to_r_pi_(to_r_pi), pwm_led_(led) {
  SetState(state_off_);
}

Powerswitch::~Powerswitch() = default;

void Powerswitch::Update() {
  if (current_state_ != nullptr) {
    current_state_->Step(*this, button_.GetButtonState(), from_r_pi_.GetButtonState());
  }
}

void Powerswitch::SetSwitch(hal::Led::LedLevel level) {
  power_switch_.Set(level);
}

void Powerswitch::SetShutdownSignal(Shutdown do_shutdown) {
  if (do_shutdown == SHUTDOWN_TRUE) {
    to_r_pi_.Set(hal::Led::LED_HIGH);
  } else {
    to_r_pi_.Set(hal::Led::LED_LOW);
  }
}

void Powerswitch::SetState(PowerswitchState *new_state) {
  current_state_ = new_state;
  current_state_->OnEnter(*this);
}

} /* namespace app */
