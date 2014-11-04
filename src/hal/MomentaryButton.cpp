/*
 * MomentaryButton.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include <MomentaryButton.h>

namespace hal {

MomentaryButton::MomentaryButton(uint8_t channel, mcal::DigitalIO& gpio) :
		hal::Button(channel), gpio(gpio) {
	gpio.open(channel);
	gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_IN);
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
		if ((gpio.read(channel) == mcal::DigitalIO::DIOLEVEL_HIGH)
				&& (infos.state == BUTTON_RELEASED)) {
			infos.state = BUTTON_PRESSED;
			infos.eventTime = currentTickCount;
		} else if ((gpio.read(channel) == mcal::DigitalIO::DIOLEVEL_LOW)
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
