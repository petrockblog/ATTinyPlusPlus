/*
 * LogicLED.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include <LogicLED.h>

namespace hal {

LogicLED::LogicLED(uint8_t channel, mcal::DigitalIO &gpio) :
		LED(channel), dio(gpio) {
	gpio.open(channel);
	gpio.control(channel, mcal::DigitalIO::DIOCMD_DIR_OUT);
	gpio.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
}


void LogicLED::set(LED::LEDLevel_e level) {
	if (level == LED_LOW) {
		dio.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
	} else {
		dio.write(channel, mcal::DigitalIO::DIOLEVEL_HIGH);
	}
}

void LogicLED::toggle(void) {
	dio.toggle(channel);
}

} /* namespace hal */
