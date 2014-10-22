/*
 * pwm.h
 *
 *  Created on: 21.10.2014
 *      Author: florian
 */

#ifndef PWM_H_
#define PWM_H_

#include <avr/interrupt.h>
#include <gpio.h>
#include <timer.h>

namespace mcal {

class PWM {
public:

	typedef enum {
		PWMDevice0 = 0, PWMDevice1, PWMDevice2
	} PWMDevice_e;

	static MCALRes_e open(PWMDevice_e device) {
		MCALRes_e result = MCALRES_ERROR;
		GPIO gpio = GPIO::getInstance();
		switch (device) {
		case PWMDevice0: // PB0
			gpio.open(GPIO::GPIODevice0);
			gpio.control(GPIO::GPIODevice0, GPIO::GPIOCMD_DIR_OUT, 0);

			Timer::Timer0_SetToPowerup();
			Timer::Timer0_ClockSelect(Timer::Timer0_Prescale_Value_8);
			Timer::Timer0_SetWaveformGenerationMode(Timer::Timer0_Normal);
			Timer::Timer0_SetCompareOutputModeA(Timer::Timer0_Toggle);
			Timer::Timer0_SetOutputCompareMatchA(60);
			break;
		case PWMDevice1: // PB1
			gpio.open(GPIO::GPIODevice1);
			gpio.control(GPIO::GPIODevice1, GPIO::GPIOCMD_DIR_OUT, 0);

			//setup timer1 with PWM. Will be using both A and B compare outputs.
			// both compares will be the same but only B will have dead time applied
			Timer::Timer1_SetOutputCompareMatchA(127);
			TCCR1 = (1 << PWM1A) | (1 << COM1A0); //Compare A PWM mode with complement outputs

			//PLLCSR is not set so the PLL will not be used (are using system clock directly - "synchonous mode")
			Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value if CTC1 in TCCR1 is set. Otherwise "top" is normal: 0xFF
			Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
			Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
			break;
		case PWMDevice2: // PB4
			gpio.open(GPIO::GPIODevice4);
			gpio.control(GPIO::GPIODevice4, GPIO::GPIOCMD_DIR_OUT, 0);

			//setup timer1 with PWM. Will be using both A and B compare outputs.
			// both compares will be the same but only B will have dead time applied
			Timer::Timer1_SetOutputCompareMatchB(64);
			GTCCR = (1 << PWM1B) | (1 << COM1B0); //Compare B PWM mode with complement outputs

			//PLLCSR is not set so the PLL will not be used (are using system clock directly - "synchonous mode")
			Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value, if CTC1 in TCCR1 is set. Otherwise "top" is normal: 0xFF
			Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
			Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
			break;
		default:
			break;
		}
		return result;
	}

	static MCALRes_e close(PWMDevice_e device) {
		return MCALRES_ERROR;
	}
};

}

#endif /* PWM_H_ */
