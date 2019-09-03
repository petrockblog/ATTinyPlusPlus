/*
 * pwm.cpp
 *
 *  Created on: 22.10.2014
 *      Author: florian
 */

#include "mcal/pwm_attiny85.h"

namespace mcal {

ATTiny85PWM::ATTiny85PWM() = default;

void ATTiny85PWM::open(uint8_t channel) {
	cli();
	DigitalIO& dio = ATTiny85DigitalIO::getInstance();
	switch (channel) {
	case 0: // PB0
		dio.open(0);
		dio.control(0, DigitalIO::DIOCMD_DIR_OUT, nullptr);

		Timer::Timer0_SetToPowerup();
		Timer::Timer0_ClockSelect(Timer::Timer0_Prescale_Value_8);
		Timer::Timer0_SetWaveformGenerationMode(Timer::Timer0_CTC_OCR);
		Timer::Timer0_SetCompareOutputModeA(Timer::Timer0_Toggle);
		Timer::Timer0_SetOutputCompareMatchA(10);
		break;
	case 1: // PB1
		dio.open(1);
		dio.control(1, DigitalIO::DIOCMD_DIR_OUT, nullptr);

		//setup timer1 with PWM. Will be using both A and B compare outputs.
		// both compares will be the same but only B will have dead time applied
		Timer::Timer1_SetOutputCompareMatchA(0);
		reg::tccr1::bit_set(PWM1A);
		reg::tccr1::bit_set(COM1A0);

		//PLLCSR is not Set so the PLL will not be used (are using system clock directly - "synchonous mode")
		Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value if CTC1 in TCCR1 is Set. Otherwise "top" is normal: 0xFF
		Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
		Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
		break;
	case 4: // PB4
		dio.open(4);
		dio.control(4, DigitalIO::DIOCMD_DIR_OUT, nullptr);

		//setup timer1 with PWM. Will be using both A and B compare outputs.
		// both compares will be the same but only B will have dead time applied
		Timer::Timer1_SetOutputCompareMatchB(0);
		reg::gtccr::bit_set(PWM1B);
		reg::gtccr::bit_set(COM1B0);

		//PLLCSR is not Set so the PLL will not be used (are using system clock directly - "synchonous mode")
		Timer::Timer1_SetOutputCompareMatchC(255); // OCR1C determines the "top" counter value, if CTC1 in TCCR1 is Set. Otherwise "top" is normal: 0xFF
		Timer::Timer1_SetWaveformGenerationMode(Timer::Timer1_CTC_OCR);
		Timer::Timer1_ClockSelect(Timer::Timer1_Prescale_Value_8);
		break;
	default:
		break;
	}
	sei();
}

void ATTiny85PWM::write(uint8_t channel, uint8_t value) {
	cli();
	switch (channel) {
	case 0:
		Timer::Timer0_SetOutputCompareMatchA(value);
		break;
	case 1:
		Timer::Timer1_SetOutputCompareMatchA(value);
		break;
	case 2:
		Timer::Timer1_SetOutputCompareMatchB(value);
		break;
	default:
		break;
	}
	sei();
}

}
