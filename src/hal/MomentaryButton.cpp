/*
 * MomentaryButton.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include "hal/MomentaryButton.h"

namespace hal {

MomentaryButton::MomentaryButton(uint8_t channel, mcal::DigitalIO &gpio,
                                 Activelevel pullup) :
    channel_(channel), infos_({BUTTON_RELEASED, 0u }), gpio_(gpio), input_history_(kButtonReleaseStable) {
  gpio.open(channel);
  gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_IN);
  if (pullup == MomentaryButton::ACTIVELEVEL_LOW) {
    gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_ENABLE);
    logic_high_ = mcal::DigitalIO::DIOLEVEL_LOW;
    logic_low_ = mcal::DigitalIO::DIOLEVEL_HIGH;
  } else {
    gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_DISABLE);
    logic_high_ = mcal::DigitalIO::DIOLEVEL_HIGH;
    logic_low_ = mcal::DigitalIO::DIOLEVEL_LOW;
  }
}

void MomentaryButton::UpdateState() {
  // the debouncing logic in this method implements a debounce time of 31 ms assuming that this method is called once
  // every millisecond.

  const mcal::DigitalIO::DIOLevel_e kCurrentButtonLevel = gpio_.read(channel_);
  input_history_ = (input_history_ << 1u);
  if (kCurrentButtonLevel == logic_high_) {
    input_history_ |= static_cast<uint32_t>(1u);
  } else {
    input_history_  &= (~static_cast<uint32_t>(1u));
  }

  if (input_history_ == kButtonReleaseStable) {
    infos_.state_ = BUTTON_RELEASED;
    infos_.ticks_in_current_state_ = 0u;
  } else if (input_history_ == kButtonPressStable) {
    infos_.state_ = BUTTON_PRESSED;
    infos_.ticks_in_current_state_ = 0u;
  }
  infos_.ticks_in_current_state_ += 1u;
}
const MomentaryButton::ButtonInfos &MomentaryButton::GetButtonInfos() const {
  return infos_;
}

} /* namespace hal */
