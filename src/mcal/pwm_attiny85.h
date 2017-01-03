/*
 * pwm.h
 *
 *  Created on: 21.10.2014
 *      Author: florian
 */

#ifndef ATTINY85PWMPWM_H_
#define ATTINY85PWMPWM_H_

#include "mcal/mcal.h"
#include "mcal/digitalio.h"
#include "mcal/timer.h"
#include "mcal/pwm.h"
#include "mcal/digitalio_attiny85.h"

namespace mcal {

class ATTiny85PWM: public PWM {
public:

	virtual void open(uint8_t channel);
	virtual void write(uint8_t channel, uint8_t value);

	static ATTiny85PWM& getInstance() {
		static ATTiny85PWM instance;
		return instance;
	}

private:
	ATTiny85PWM();

};
}

#endif /* PWM_H_ */
