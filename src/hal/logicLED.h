/*
 * LogicLed.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef LOGICLED_H_
#define LOGICLED_H_

#include "hal/Led.h"
#include "mcal/digitalio.h"

namespace hal {

class LogicLed: public Led {

public:
	LogicLed(uint8_t channel, mcal::DigitalIO &digital_io);

	void Set(LedLevel level) override;
	void Toggle() override;

private:
	mcal::DigitalIO &dio;

};

} /* namespace hal */

#endif /* LOGICLED_H_ */
