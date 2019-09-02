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
    hal::Button(channel), gpio(gpio), inputHistory_(0u) {
  gpio.open(channel);
  gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_IN);
  if (pullup == MomentaryButton::ACTIVELEVEL_LOW) {
    gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_ENABLE);
    logicHigh_ = mcal::DigitalIO::DIOLEVEL_LOW;
    logicLow_ = mcal::DigitalIO::DIOLEVEL_HIGH;
  } else {
    gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_DISABLE);
    logicHigh_ = mcal::DigitalIO::DIOLEVEL_HIGH;
    logicLow_ = mcal::DigitalIO::DIOLEVEL_LOW;
  }
}

Button::ButtonInfos_s MomentaryButton::getButtonInfos() const {
  return infos_;
}

Button::ButtonState_e MomentaryButton::getButtonState() const {
  return infos_.state;
}

bool MomentaryButton::isPressed() const {
  return infos_.state == BUTTON_PRESSED;
}

void MomentaryButton::updateState() {
  // the debouncing logic in this method implements a debounce time of 31 ms assuming that this method is called once
  // every millisecond.

  const mcal::DigitalIO::DIOLevel_e currentButtonLevel = gpio.read(channel_);
  inputHistory_ = (inputHistory_ << 1);
  if (currentButtonLevel == logicHigh_) {
    inputHistory_ |= 0x1;
  }

  const mcal::Systemtick::systick_t currentTickCount =
      mcal::ATTiny85Systemtick::getInstance().getTick();
  if (inputHistory_ == BUTTONRELEASESTABLE) {
    infos_.state = BUTTON_RELEASED;
    infos_.eventTime = currentTickCount;
  } else if (inputHistory_ == BUTTONPRESSSTABLE) {
    infos_.state = BUTTON_PRESSED;
    infos_.eventTime = currentTickCount;
  }

//
//	if (currentTickCount - infos_.eventTime
//			>= MomentaryButton::DEBOUNCETIMEINMS) {
//		// button is implemented with active low
//		if ((gpio.read(channel_) == logicHigh_)
//				&& (infos_.state == BUTTON_RELEASED)) {
//			infos_.state = BUTTON_PRESSED;
//			infos_.eventTime = currentTickCount;
//		} else if ((gpio.read(channel_) == logicLow_)
//				&& (infos_.state == BUTTON_PRESSED)) {
//			infos_.state = BUTTON_RELEASED;
//			infos_.eventTime = currentTickCount;
//		}
//	}

}

mcal::Systemtick::systick_t MomentaryButton::getLastEventTick() const {
  return infos_.eventTime;
}

} /* namespace hal */
