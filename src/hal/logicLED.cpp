/*
 * LogicLed.cpp
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#include "hal/logicLED.h"

namespace hal {

LogicLed::LogicLed(uint8_t channel, mcal::DigitalIO &digital_io) :
    Led(channel), dio(digital_io) {
	digital_io.open(channel);
	digital_io.control(channel, mcal::DigitalIO::DIOCMD_DIR_OUT);
	digital_io.write(channel, mcal::DigitalIO::DIOLEVEL_LOW);
}


void LogicLed::Set(Led::LedLevel level) {
	if (level == LED_LOW) {
		dio.write(channel_, mcal::DigitalIO::DIOLEVEL_LOW);
	} else {
		dio.write(channel_, mcal::DigitalIO::DIOLEVEL_HIGH);
	}
}

void LogicLed::Toggle() {
	dio.toggle(channel_);
}

} /* namespace hal */
