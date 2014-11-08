/*
 * PWMLed.h
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#ifndef PWMLED_H_
#define PWMLED_H_

#include "cstdint.h"
#include "pwm.h"
#include "systemtick.h"
#include "fixedptc.h"

namespace hal {

class PWMLed {
public:
	PWMLed(uint8_t channel, mcal::PWM& pwm);
	PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude, uint16_t delayTime,
			uint16_t rampupTime);
	virtual ~PWMLed();

	void setAmplitude(uint8_t amplitude);
	void setDelayTime(uint16_t delayTime);
	void setRampupTime(uint16_t rampupTime);
	void update();

protected:
	uint8_t channel;
	mcal::PWM& pwm;
	uint8_t amplitude;
	uint16_t delayTime;
	uint16_t rampupTime;

	uint16_t currentState;
	fixedpt slope;

	void initialize();
	void updateSlope();
};

} /* namespace hal */

#endif /* PWMLED_H_ */
