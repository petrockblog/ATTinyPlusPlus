/*
 * LogicLED.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include <LogicLED.h>

namespace hal {

LogicLED::LogicLED(uint8_t channel, mcal::DigitalIO &gpio) :
		LED(channel), gpio(gpio) {
	gpio.open(channel);
	gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_OUT);
	gpio.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
}


void LogicLED::set(LED::LEDLevel_e level) {
	if (level == LED_LOW) {
		gpio.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
	} else {
		gpio.write(channel, mcal::DigitalIO::DIOLEVEL_HIGH);
	}
}

void LogicLED::toggle(void) {
	gpio.toggle(channel);
}

} /* namespace hal */
