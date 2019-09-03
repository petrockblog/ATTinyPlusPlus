/*
 * PWMLed.cpp
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#include "hal/PWMLed.h"

namespace hal {

PWMLed::PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
               uint16_t delay_time, uint16_t rampup_time) :
    channel_(channel), pwm_(pwm), amplitude_(amplitude), delay_time_(delay_time), rampup_time_(
    rampup_time), current_state_(0), slope_(0) {
  Initialize();
}

void PWMLed::Initialize() {
	pwm_.open(channel_);
  UpdateSlope();
}

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
  uint8_t new_level = 0u;

  current_state_ = (current_state_ + 1) % (delay_time_ + rampup_time_ + rampup_time_);

	if (0 == slope_) {
      new_level = amplitude_;
	} else {
		if (current_state_ < delay_time_) {
			pwm_.write(channel_, 0);
		} else if ((current_state_ >= delay_time_)
				&& (current_state_ < delay_time_ + rampup_time_)) {
          new_level = slope_ * (current_state_ - delay_time_);
		} else {
          new_level = amplitude_ + (-slope_ * (current_state_ - delay_time_ - rampup_time_));
		}
	}
  pwm_.write(channel_, new_level);

}

void PWMLed::UpdateSlope() {
	if (rampup_time_ > 0) {
      slope_ = amplitude_ / rampup_time_;
	} else {
      slope_ = 0;
	}
  current_state_ = 0;
}

} /* namespace hal */
