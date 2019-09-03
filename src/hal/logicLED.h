/*
 * LogicLED.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef LOGICLED_H_
#define LOGICLED_H_

#include "hal/LED.h"
#include "mcal/digitalio.h"

namespace hal {

class LogicLED: public LED {

public:
	LogicLED(uint8_t channel, mcal::DigitalIO &digital_io);

	void set(LEDLevel_e level) override;
	void toggle() override;

private:
	mcal::DigitalIO &dio;

};

} /* namespace hal */

#endif /* LOGICLED_H_ */
