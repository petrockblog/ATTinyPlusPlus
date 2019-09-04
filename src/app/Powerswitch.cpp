/*
 * Powerswitch.cpp
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#include "app/Powerswitch.h"

namespace app {

Powerswitch::Powerswitch(hal::MomentaryButton &btn, hal::MomentaryButton &from_rpi, hal::Led &power_switch,
                         hal::PwmLed &led, hal::Led &to_rpi) :
    current_state_(nullptr), state_off_(new PowerswitchStateOff()), state_boot_(
    new PowerswitchStateBoot()), state_on_(new PowerswitchStateOn()), state_shutdown_(
    new PowerswitchStateShutdown()), button_(btn), from_rpi_(from_rpi), power_switch_(
    power_switch), to_rpi_(to_rpi), pwm_led_(led), using_momentary_power_button_(false),
    on_state_enter_tick_(0u) {
  SetState(state_off_);
}

Powerswitch::~Powerswitch() = default;

void Powerswitch::Update() {
  if (current_state_ != nullptr) {
    current_state_->Step(*this, button_.GetButtonInfos(), from_rpi_.GetButtonInfos());
  }
}

void Powerswitch::SetSwitch(hal::Led::LedLevel level) {
  power_switch_.Set(level);
}

void Powerswitch::SetShutdownSignal(Shutdown do_shutdown) {
  if (do_shutdown == SHUTDOWN_TRUE) {
    to_rpi_.Set(hal::Led::LED_HIGH);
  } else {
    to_rpi_.Set(hal::Led::LED_LOW);
  }
}

void Powerswitch::SetState(PowerswitchState *new_state) {
  on_state_enter_tick_ = mcal::ATTiny85Systemtick::getInstance().getTick();
  current_state_ = new_state;
  current_state_->OnEnter(*this);
}

void Powerswitch::SetLedPattern(const hal::PwmLed::PwmledParams &pattern) {
  pwm_led_.SetConfiguration(pattern);
}

mcal::Systemtick::systick_t Powerswitch::GetTicksInState() {
  const mcal::Systemtick::systick_t kCurrentTick = mcal::ATTiny85Systemtick::getInstance().getTick();
  if (kCurrentTick >= on_state_enter_tick_) {
    return kCurrentTick - on_state_enter_tick_;
  } else {  // systick overflow ocurred
    return static_cast<mcal::Systemtick::systick_t>(0xFFFFFFFF) - on_state_enter_tick_ + kCurrentTick;
  }
}

} /* namespace app */
