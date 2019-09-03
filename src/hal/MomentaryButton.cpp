/*
 * MomentaryButton.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include "hal/MomentaryButton.h"

namespace hal {

MomentaryButton::MomentaryButton(uint8_t channel, mcal::DigitalIO &gpio,
                                 activelevel_e pullup) :
    hal::Button(channel), gpio(gpio), input_history_(kButtonReleaseStable) {
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

Button::ButtonState MomentaryButton::GetButtonState() const {
  return infos_.state_;
}

bool MomentaryButton::IsPressed() const {
  return infos_.state_ == BUTTON_PRESSED;
}

void MomentaryButton::UpdateState() {
  // the debouncing logic in this method implements a debounce time of 31 ms assuming that this method is called once
  // every millisecond.

  const mcal::DigitalIO::DIOLevel_e currentButtonLevel = gpio.read(channel_);
  input_history_ = (input_history_ << 1u);
  if (currentButtonLevel == logic_high_) {
    input_history_ |= static_cast<uint32_t>(1u);
  } else {
    input_history_  &= (~static_cast<uint32_t>(1u));
  }

//  const mcal::Systemtick::systick_t currentTickCount =
//      mcal::ATTiny85Systemtick::getInstance().getTick();
  if (input_history_ == kButtonReleaseStable) {
    infos_.state_ = BUTTON_RELEASED;
//    infos_.event_time_ = currentTickCount;
  } else if (input_history_ == kButtonPressStable) {
    infos_.state_ = BUTTON_PRESSED;
 //   infos_.event_time_ = currentTickCount;
  }
}

} /* namespace hal */
