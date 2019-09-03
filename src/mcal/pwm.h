/*
 * pwm.h
 *
 *  Created on: 04.11.2014
 *      Author: florian
 */

#ifndef PWM_H_
#define PWM_H_

namespace mcal {

class PWM {
public:
	virtual ~PWM() = default;

	virtual void open(uint8_t channel) = 0;
	virtual void write(uint8_t channel, uint8_t value) = 0;
};

} /* namespace app */

#endif /* PWM_H_ */
