/*
 * LogicLED.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include "hal/LogicLED.h"

namespace hal {

LogicLED::LogicLED(uint8_t channel, mcal::DigitalIO &digital_io) :
		LED(channel), dio(digital_io) {
	digital_io.open(channel);
	digital_io.control(channel, mcal::DigitalIO::DIOCMD_DIR_OUT);
	digital_io.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
}


void LogicLED::set(LED::LEDLevel_e level) {
	if (level == LED_LOW) {
		dio.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
	} else {
		dio.write(channel, mcal::DigitalIO::DIOLEVEL_HIGH);
	}
}

void LogicLED::toggle() {
	dio.toggle(channel);
}

} /* namespace hal */
