/*
 * MomentaryButton.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include "hal/MomentaryButton.h"

namespace hal {

MomentaryButton::MomentaryButton(uint8_t channel, mcal::DigitalIO& gpio,
		activelevel_e pullup) :
		hal::Button(channel), gpio(gpio) {
	gpio.open(channel);
	gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_IN);
	if (pullup == MomentaryButton::ACTIVELEVEL_LOW) {
		gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_ENABLE);
		logicHigh = mcal::DigitalIO::DIOLEVEL_LOW;
		logicLow = mcal::DigitalIO::DIOLEVEL_HIGH;
	} else {
		gpio.control(channel, mcal::DigitalIO::DIOCMD_PULLUP_DISABLE);
		logicHigh = mcal::DigitalIO::DIOLEVEL_HIGH;
		logicLow = mcal::DigitalIO::DIOLEVEL_LOW;
	}
}

Button::ButtonInfos_s MomentaryButton::getButtonInfos() const {
	return infos;
}

Button::ButtonState_e MomentaryButton::getButtonState() const {
	return infos.state;
}

bool MomentaryButton::isPressed() const {
	return infos.state == BUTTON_PRESSED;
}
void MomentaryButton::updateState() {
	mcal::Systemtick::systick_t currentTickCount =
			mcal::ATTiny85Systemtick::getInstance().getTick();

	if (currentTickCount - infos.eventTime
			>= MomentaryButton::DEBOUNCETIMEINMS) {
		// button is implemented with active low
		if ((gpio.read(channel) == logicHigh)
				&& (infos.state == BUTTON_RELEASED)) {
			infos.state = BUTTON_PRESSED;
			infos.eventTime = currentTickCount;
		} else if ((gpio.read(channel) == logicLow)
				&& (infos.state == BUTTON_PRESSED)) {
			infos.state = BUTTON_RELEASED;
			infos.eventTime = currentTickCount;
		}
	}

}

mcal::Systemtick::systick_t MomentaryButton::getLastEventTick() const {
	return infos.eventTime;
}

} /* namespace hal */
