/*
 * PWMLed.cpp
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#include "hal/PWMLed.h"

namespace hal {

//PWMLed::PWMLed(uint8_t channel_, mcal::PWM& pwm_) :
//		channel_(channel_), pwm_(pwm_), amplitude_(0), delay_time_(0), rampup_time_(0), current_state_(
//				0), slope_(0) {
//	Initialize();
//}

PWMLed::PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
               uint16_t delay_time, uint16_t rampup_time) :
    channel_(channel), pwm_(pwm), amplitude_(amplitude), delay_time_(delay_time), rampup_time_(
    rampup_time), current_state_(0), slope_(0) {
  Initialize();
}

//PWMLed::PWMLed(uint8_t channel_, mcal::PWM& pwm_, PWMLEDParams_s& params) :
//		channel_(channel_), pwm_(pwm_), amplitude_(params.amplitude_), delay_time_(
//				params.delay_time_), rampup_time_(params.rampup_time_), current_state_(
//				0), slope_(0) {
//	Initialize();
//}

void PWMLed::Initialize() {
	pwm_.open(channel_);
  UpdateSlope();
}

//void PWMLed::setAmplitude(uint8_t amplitude_) {
//	if (this->amplitude_ != amplitude_) {
//		this->amplitude_ = amplitude_;
//		UpdateSlope();
//	}
//}
//
//void PWMLed::setDelayTime(uint16_t delay_time_) {
//	if (this->delay_time_ != delay_time_) {
//		this->delay_time_ = delay_time_;
//		UpdateSlope();
//	}
//}
//
//void PWMLed::setRampupTime(uint16_t rampup_time_) {
//	if (this->rampup_time_ != rampup_time_) {
//		this->rampup_time_ = rampup_time_;
//		UpdateSlope();
//	}
//}

void PWMLed::SetConfiguration(const PWMLEDParams_s& params) {
	if ((this->amplitude_ != params.amplitude)
			|| (this->delay_time_ != params.delayTime)
			|| (this->rampup_time_ != params.rampupTime)) {
		this->amplitude_ = params.amplitude;
		this->delay_time_ = params.delayTime;
		this->rampup_time_ = params.rampupTime;
      UpdateSlope();
	}
}

void PWMLed::Update() {
//	fixedpt new_level = 0;
  uint8_t new_level = 0u;

  current_state_ = (current_state_ + 1) % (delay_time_ + rampup_time_ + rampup_time_);

	if (0 == slope_) {
//		new_level = fixedpt_fromint(amplitude_);
      new_level = amplitude_;
	} else {
		if (current_state_ < delay_time_) {
			pwm_.write(channel_, 0);
		} else if ((current_state_ >= delay_time_)
				&& (current_state_ < delay_time_ + rampup_time_)) {
//			new_level = fixedpt_mul(slope_,
//					fixedpt_fromint(current_state_ - delay_time_));
          new_level = slope_ * (current_state_ - delay_time_);
		} else {
//			new_level = fixedpt_fromint(amplitude_);
//			new_level =
//					fixedpt_add(new_level,
//							fixedpt_mul(-slope_, fixedpt_fromint(current_state_ - delay_time_ - rampup_time_)));
          new_level = amplitude_ + (-slope_ * (current_state_ - delay_time_ - rampup_time_));
		}
	}
//	if (new_level < 0) {
//		new_level = 0;
//	} else if (new_level > fixedpt_fromint(255)) {
//		new_level = fixedpt_fromint(255);
//	}
//	pwm_.write(channel_, (uint8_t) fixedpt_toint(new_level));
  pwm_.write(channel_, new_level);

}

void PWMLed::UpdateSlope() {
	if (rampup_time_ > 0) {
//		slope_ = fixedpt_div(fixedpt_fromint(amplitude_),
//				fixedpt_fromint(rampup_time_));
      slope_ = amplitude_ / rampup_time_;
	} else {
      slope_ = 0;
	}
  current_state_ = 0;
}

} /* namespace hal */
