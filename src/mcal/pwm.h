/*
 * pwm.h
 *
 *  Created on: 21.10.2014
 *      Author: florian
 */

#ifndef PWM_H_
#define PWM_H_

#include <mcal.h>
#include <gpio.h>
#include <timer.h>

namespace mcal {

class PWM {
public:

	static const uint8_t NUMBERPWMDEVICES = 3;

	typedef enum {
		PWMDevice0 = 0, PWMDevice1, PWMDevice2
	} PWMDevice_e;

	MCALRes_e open(PWMDevice_e device);
	MCALRes_e write(PWMDevice_e device, uint8_t value);

	static MCALRes_e close(PWMDevice_e device) {
		return MCALRES_ERROR;
	}

	static PWM& getInstance() {
		static PWM instance;
		return instance;
	}

private:
	PWM();

};
}

#endif /* PWM_H_ */
