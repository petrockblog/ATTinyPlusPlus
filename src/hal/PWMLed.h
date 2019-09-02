/*
 * PWMLed.h
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#ifndef PWMLED_H_
#define PWMLED_H_

#include "lib/STL/cstdint.h"
#include "mcal/pwm.h"
//#include "lib/fixedptc.h"

namespace hal {

class PWMLed {
public:
	struct PWMLEDParams_s{
		uint8_t amplitude;
		uint16_t delayTime;
		uint16_t rampupTime;
	};

//	PWMLed(uint8_t channel_, mcal::PWM& pwm_);
	PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
			uint16_t delayTime, uint16_t rampupTime);
//	PWMLed(uint8_t channel_, mcal::PWM& pwm_, PWMLEDParams_s& params);
	virtual ~PWMLed() = default;

//	void setAmplitude(uint8_t amplitude_);
//	void setDelayTime(uint16_t delayTime_);
//	void setRampupTime(uint16_t rampupTime_);
	void setConfiguration(const PWMLEDParams_s& params);
	void update();

protected:
	uint8_t channel_;
	mcal::PWM& pwm_;
	uint8_t amplitude_;
	uint16_t delayTime_;
	uint16_t rampupTime_;

	uint16_t currentState_;
    uint8_t slope_;

	void initialize();
	void updateSlope();
};

} /* namespace hal */

#endif /* PWMLED_H_ */
