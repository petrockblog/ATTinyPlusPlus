/*
 * pwm.cpp
 *
 *  Created on: 22.10.2014
 *      Author: florian
 */

#include <pwm.h>

namespace mcal {

PWM::PWM() {
}

MCALRes_e PWM::open(PWMDevice_e device) {
	MCALRes_e result = MCALRES_ERROR;
	GPIO gpio = GPIO::getInstance();
	switch (device) {
	case PWMDevice0: // PB0
		gpio.open(GPIO::GPIODevice0);
		gpio.control(GPIO::GPIODevice0, GPIO::GPIOCMD_DIR_OUT, 0);

		Timer::Timer0_SetToPowerup();
		Timer::Timer0_ClockSelect(Timer::Timer0_Prescale_Value_8);
		Timer::Timer0_SetWaveformGenerationMode(Timer::Timer0_CTC_OCR);
		Timer::Timer0_SetCompareOutputModeA(Timer::Timer0_Toggle);
		Timer::Timer0_SetOutputCompareMatchA(10);
		result = MCALRES_SUCCESS;
		break;
	case PWMDevice1: // PB1
		gpio.open(GPIO::GPIODevice1);
		gpio.control(GPIO::GPIODevice1, GPIO::GPIOCMD_DIR_OUT, 0);

		//setup timer1 with PWM. Will be using both A and B compare outputs.
		// both compares will be the same but only B will have dead time applied
		Timer::Timer1_SetOutputCompareMatchA(0);
//		TCCR1 = (1 << PWM1A) | (1 << COM1A0); //Compare A PWM mode with complement outputs
		reg::tccr1::bit_set(PWM1A);
		reg::tccr1::bit_set(COM1A0);

		//PLLCSR is not set so the PLL will not be used (are using system clock directly - "synchonous mode")
		Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value if CTC1 in TCCR1 is set. Otherwise "top" is normal: 0xFF
		Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
		Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
		result = MCALRES_SUCCESS;
		break;
	case PWMDevice2: // PB4
		gpio.open(GPIO::GPIODevice4);
		gpio.control(GPIO::GPIODevice4, GPIO::GPIOCMD_DIR_OUT, 0);

		//setup timer1 with PWM. Will be using both A and B compare outputs.
		// both compares will be the same but only B will have dead time applied
		Timer::Timer1_SetOutputCompareMatchB(0);
//		GTCCR = (1 << PWM1B) | (1 << COM1B0); //Compare B PWM mode with complement outputs
		reg::gtccr::bit_set(PWM1B);
		reg::gtccr::bit_set(COM1B0);

		//PLLCSR is not set so the PLL will not be used (are using system clock directly - "synchonous mode")
		Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value, if CTC1 in TCCR1 is set. Otherwise "top" is normal: 0xFF
		Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
		Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
		result = MCALRES_SUCCESS;
		break;
	default:
		break;
	}
	return result;
}

MCALRes_e PWM::write(PWMDevice_e device, uint8_t value) {
	MCALRes_e result = MCALRES_ERROR;
	switch (device) {
	case PWMDevice0:
		Timer::Timer0_SetOutputCompareMatchA(value);
		result = MCALRES_SUCCESS;
		break;
	case PWMDevice1:
		Timer::Timer1_SetOutputCompareMatchA(value);
		result = MCALRES_SUCCESS;
		break;
	case PWMDevice2:
		Timer::Timer1_SetOutputCompareMatchB(value);
		result = MCALRES_SUCCESS;
		break;
	default:
		result = MCALRES_INVPARAM;
		break;
	}
	return result;
}

}
