/*
 * PWMLed.cpp
 *
 *  Created on: 08.11.2014
 *      Author: florian
 */

#include <PWMLed.h>

namespace hal {

PWMLed::PWMLed(uint8_t channel, mcal::PWM& pwm) :
		channel(channel), pwm(pwm), amplitude(0), delayTime(0), rampupTime(0), currentState(
				0), slope(0) {
	initialize();
}

PWMLed::PWMLed(uint8_t channel, mcal::PWM& pwm, uint8_t amplitude,
		uint16_t delayTime, uint16_t rampupTime) :
		channel(channel), pwm(pwm), amplitude(amplitude), delayTime(delayTime), rampupTime(
				rampupTime), currentState(0), slope(0) {
	initialize();
}

PWMLed::~PWMLed() {
}

void PWMLed::initialize() {
	pwm.open(channel);
	updateSlope();
}

void PWMLed::setAmplitude(uint8_t amplitude) {
	this->amplitude = amplitude;
	updateSlope();
}

void PWMLed::setDelayTime(uint16_t delayTime) {
	this->delayTime = delayTime;
	updateSlope();
}

void PWMLed::setRampupTime(uint16_t rampupTime) {
	this->rampupTime = rampupTime;
	updateSlope();
}

void PWMLed::update() {
	fixedpt newLevel = 0;

	currentState = (currentState + 1) % (delayTime + rampupTime + rampupTime);

	if (currentState < delayTime) {
		pwm.write(channel, 0);
	} else if ((currentState >= delayTime)
			&& (currentState < delayTime + rampupTime)) {
		newLevel = fixedpt_mul(slope,
				fixedpt_fromint(currentState - delayTime));
	} else {
		newLevel = fixedpt_fromint(amplitude);
		newLevel = fixedpt_add(newLevel,
				fixedpt_mul(fixedpt_mul(slope,fixedpt_fromint(-1)), fixedpt_fromint(currentState - delayTime - rampupTime)));
	}
	if (newLevel < 0) {
		newLevel = 0;
	} else if (newLevel > fixedpt_fromint(255)) {
		newLevel = fixedpt_fromint(255);
	}
	pwm.write(channel, (uint8_t) fixedpt_toint(newLevel));
}

void PWMLed::updateSlope() {
	slope = fixedpt_div(fixedpt_fromint(amplitude),
			fixedpt_sub(fixedpt_fromint(rampupTime), FIXEDPT_ONE));
}

} /* namespace hal */
