/*
 * pwm.h
 *
 *  Created on: 21.10.2014
 *      Author: florian
 */

#ifndef ATTINY85PWMPWM_H_
#define ATTINY85PWMPWM_H_

#include <mcal.h>
#include <digitalio.h>
#include <timer.h>
#include <pwm.h>
#include <digitalio_attiny85.h>

namespace mcal {

class ATTiny85PWM: public PWM {
public:

	virtual void open(uint8_t device);
	virtual void write(uint8_t device, uint8_t value);

	static ATTiny85PWM& getInstance() {
		static ATTiny85PWM instance;
		return instance;
	}

private:
	ATTiny85PWM();

};
}

#endif /* PWM_H_ */
