/*
 * PWMLed.cpp
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#include "hal/PWMLed.h"

namespace hal {

//PWMLed::PWMLed(uint8_t channel_, mcal::PWM& pwm_) :
//		channel_(channel_), pwm_(pwm_), amplitude_(0), delayTime_(0), rampupTime_(0), currentState_(
//				0), slope_(0) {
//	initialize();
//}

PWMLed::PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
		uint16_t delayTime, uint16_t rampupTime) :
    channel_(channel), pwm_(pwm), amplitude_(amplitude), delayTime_(delayTime), rampupTime_(
				rampupTime), currentState_(0), slope_(0) {
	initialize();
}

//PWMLed::PWMLed(uint8_t channel_, mcal::PWM& pwm_, PWMLEDParams_s& params) :
//		channel_(channel_), pwm_(pwm_), amplitude_(params.amplitude_), delayTime_(
//				params.delayTime_), rampupTime_(params.rampupTime_), currentState_(
//				0), slope_(0) {
//	initialize();
//}

void PWMLed::initialize() {
	pwm_.open(channel_);
	updateSlope();
}

//void PWMLed::setAmplitude(uint8_t amplitude_) {
//	if (this->amplitude_ != amplitude_) {
//		this->amplitude_ = amplitude_;
//		updateSlope();
//	}
//}
//
//void PWMLed::setDelayTime(uint16_t delayTime_) {
//	if (this->delayTime_ != delayTime_) {
//		this->delayTime_ = delayTime_;
//		updateSlope();
//	}
//}
//
//void PWMLed::setRampupTime(uint16_t rampupTime_) {
//	if (this->rampupTime_ != rampupTime_) {
//		this->rampupTime_ = rampupTime_;
//		updateSlope();
//	}
//}

void PWMLed::setConfiguration(const PWMLEDParams_s& params) {
	if ((this->amplitude_ != params.amplitude)
			|| (this->delayTime_ != params.delayTime)
			|| (this->rampupTime_ != params.rampupTime)) {
		this->amplitude_ = params.amplitude;
		this->delayTime_ = params.delayTime;
		this->rampupTime_ = params.rampupTime;
		updateSlope();
	}
}

void PWMLed::update() {
//	fixedpt newLevel = 0;
  uint8_t newLevel = 0u;

  currentState_ = (currentState_ + 1) % (delayTime_ + rampupTime_ + rampupTime_);

	if (0 == slope_) {
//		newLevel = fixedpt_fromint(amplitude_);
      newLevel = amplitude_;
	} else {
		if (currentState_ < delayTime_) {
			pwm_.write(channel_, 0);
		} else if ((currentState_ >= delayTime_)
				&& (currentState_ < delayTime_ + rampupTime_)) {
//			newLevel = fixedpt_mul(slope_,
//					fixedpt_fromint(currentState_ - delayTime_));
          newLevel = slope_ * (currentState_ - delayTime_);
		} else {
//			newLevel = fixedpt_fromint(amplitude_);
//			newLevel =
//					fixedpt_add(newLevel,
//							fixedpt_mul(-slope_, fixedpt_fromint(currentState_ - delayTime_ - rampupTime_)));
          newLevel = amplitude_ + (-slope_ * (currentState_ - delayTime_ - rampupTime_));
		}
	}
//	if (newLevel < 0) {
//		newLevel = 0;
//	} else if (newLevel > fixedpt_fromint(255)) {
//		newLevel = fixedpt_fromint(255);
//	}
//	pwm_.write(channel_, (uint8_t) fixedpt_toint(newLevel));
  pwm_.write(channel_, newLevel);

}

void PWMLed::updateSlope() {
	if (rampupTime_ > 0) {
//		slope_ = fixedpt_div(fixedpt_fromint(amplitude_),
//				fixedpt_fromint(rampupTime_));
      slope_ = amplitude_ / rampupTime_;
	} else {
      slope_ = 0;
	}
  currentState_ = 0;
}

} /* namespace hal */
