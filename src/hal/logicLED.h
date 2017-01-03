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
	LogicLED(uint8_t channel, mcal::DigitalIO &gpio);

	virtual void set(LEDLevel_e level);
	virtual void toggle(void);

private:
	mcal::DigitalIO &dio;

};

} /* namespace hal */

#endif /* LOGICLED_H_ */
