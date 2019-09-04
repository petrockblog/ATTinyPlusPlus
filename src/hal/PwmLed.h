/*
 * PwmLed.h
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_HAL_PWMLED_H_
#define ATTINYPLUSPLUS_SRC_HAL_PWMLED_H_

#include "lib/STL/cstdint.h"
#include "mcal/pwm.h"

namespace hal {

class PwmLed {
public:
	struct PwmledParams{
		uint8_t amplitude;
		uint16_t delayTime;
		uint16_t rampupTime;
	};

	PwmLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
           uint16_t delay_time, uint16_t rampup_time);
	virtual ~PwmLed() = default;

	void SetConfiguration(const PwmledParams& params);
	void Update();

protected:
	uint8_t channel_;
	mcal::PWM& pwm_;
	uint8_t amplitude_;
	uint16_t delay_time_;
	uint16_t rampup_time_;

	uint16_t current_state_;
    uint8_t slope_;

	void Initialize();
	void UpdateSlope();
};

} /* namespace hal */

#endif /*ATTINYPLUSPLUS_SRC_HAL_PWMLED_H_*/
