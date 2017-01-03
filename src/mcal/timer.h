/*
 * timer.h
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "mcal/mcal.h"

namespace mcal {

class Timer {
public:

	typedef enum {
		Timer0_Stopped = 0x00,
		Timer0_Prescale_Value_1 = 0x01,
		Timer0_Prescale_Value_8 = 0x02,
		Timer0_Prescale_Value_64 = 0x03,
		Timer0_Prescale_Value_256 = 0x04,
		Timer0_Prescale_Value_1024 = 0x05,
		Timer0_T0_Falling = 0x06,
		Timer0_T0_Rising = 0x07,
		Timer0_Prescale_Index_1 = 0x01,
		Timer0_Prescale_Index_2 = 0x02,
		Timer0_Prescale_Index_3 = 0x03,
		Timer0_Prescale_Index_4 = 0x04,
		Timer0_Prescale_Index_5 = 0x05
	} timer0_cs_t;

	typedef enum {
		Timer0_Normal = 0x00,
		Timer0_Phase_Correct_PWM_FF = 0x01,
		Timer0_CTC_OCR = 0x02,
		Timer0_Fast_PWM_FF = 0x03,
		Timer0_Reserved_1 = 0x04,
		Timer0_Phase_Correct_PWM_OCR = 0x05,
		Timer0_Reserved_2 = 0x06,
		Timer0_Fast_PWM_OCR = 0x07
	} timer0_wgm_t;

	typedef enum {
		Timer0_Disconnected = 0x00,
		Timer0_Toggle = 0x01,
		Timer0_Clear = 0x02,
		Timer0_Set = 0x03
	} timer0_com_t;

	typedef uint8_t timer0_ocr_t;
	typedef uint8_t timer0_tcnt_t;

	typedef uint16_t timer1_prescale_value_t;

	typedef enum {
		Timer1_Stopped = 0x00,
		Timer1_Prescale_Value_1 = 0x01,
		Timer1_Prescale_Value_2 = 0x02,
		Timer1_Prescale_Value_4 = 0x03,
		Timer1_Prescale_Value_8 = 0x04,
		Timer1_Prescale_Value_16 = 0x05,
		Timer1_Prescale_Value_32 = 0x06,
		Timer1_Prescale_Value_64 = 0x07,
		Timer1_Prescale_Value_128 = 0x08,
		Timer1_Prescale_Value_256 = 0x09,
		Timer1_Prescale_Value_512 = 0x0A,
		Timer1_Prescale_Value_1024 = 0x0B,
		Timer1_Prescale_Value_2048 = 0x0C,
		Timer1_Prescale_Value_4096 = 0x0D,
		Timer1_Prescale_Value_8192 = 0x0E,
		Timer1_Prescale_Value_16384 = 0x0F,
		Timer1_Prescale_Index_1 = 0x01,
		Timer1_Prescale_Index_2 = 0x02,
		Timer1_Prescale_Index_3 = 0x03,
		Timer1_Prescale_Index_4 = 0x04,
		Timer1_Prescale_Index_5 = 0x05,
		Timer1_Prescale_Index_6 = 0x06,
		Timer1_Prescale_Index_7 = 0x07,
		Timer1_Prescale_Index_8 = 0x08,
		Timer1_Prescale_Index_9 = 0x09,
		Timer1_Prescale_Index_10 = 0x0A,
		Timer1_Prescale_Index_11 = 0x0B,
		Timer1_Prescale_Index_12 = 0x0C,
		Timer1_Prescale_Index_13 = 0x0D,
		Timer1_Prescale_Index_14 = 0x0E,
		Timer1_Prescale_Index_15 = 0x0F
	} timer1_cs_t;

	typedef enum {
		Timer1_Disconnected = 0x00,
		Timer1_Toggle = 0x01,
		Timer1_Clear = 0x02,
		Timer1_Set = 0x03
	} timer1_com_t;

	typedef enum {
		// Used internally
		_Timer1_Enable_PWM_Mask = (1 << 7),
		_Timer1_Set_OCRnC_To_FF_Mask = (1 << 6),

		Timer1_Normal = 0,
		Timer1_CTC_OCR = 1,
		Timer1_Fast_PWM_FF = Timer1_CTC_OCR | _Timer1_Enable_PWM_Mask
				| _Timer1_Set_OCRnC_To_FF_Mask
	/* todo The following requires a function to set the match+clear value (OCR1C).  A similar function needs to be provided for Timer0.  And, both need to be tested.
	 ,
	 Timer1_Fast_PWM_OCR               = Timer1_CTC_OCR | _Timer1_Enable_PWM_Mask
	 */
	} timer1_wgm_t;

	typedef uint8_t timer1_ocr_t;
	typedef uint8_t timer1_tcnt_t;

	__attribute__((always_inline)) inline static void Timer0_SetToPowerup(void) {
		// Stop the clock, set waveform generation to normal, and set output mode to normal
		reg::tccr0b::reg_set(
				(0 << FOC0A) | (0 << FOC0B) | (0 << WGM02) | (0 << CS02)
						| (0 << CS01) | (0 << CS00));
		reg::tccr0a::reg_set(
				(0 << COM0A1) | (0 << COM0A0) | (0 << COM0B1) | (0 << COM0B0)
						| (0 << WGM01) | (0 << WGM00));
		// Reset the count to zero
		reg::tcnt0::reg_set(0);
		// Set the output compare registers to zero
		reg::ocr0a::reg_set(0);
		reg::ocr0b::reg_set(0);
		// Disable all Timer0 interrupts
		Timer::Timer0_InterruptsOff();
		// Clear the Timer0 interrupt flags
		reg::tifr::bit_set (OCF0A);
		reg::tifr::bit_set (OCF0B);
		reg::tifr::bit_set(TOV0);
	}

	__attribute__((always_inline)) inline static void Timer0_InterruptsOff(void) {
		reg::timsk::bit_clr (OCIE0A);
		reg::timsk::bit_clr (OCIE0B);
		reg::timsk::bit_clr(TOIE0);
	}

	__attribute__((always_inline)) inline static void Timer0_ClockSelect(Timer::timer0_cs_t cs) {
		reg::tccr0b::bit_clr(CS00);
		reg::tccr0b::bit_clr(CS01);
		reg::tccr0b::bit_clr(CS02);
		reg::tccr0b::reg_or(cs << CS00);
	}

	__attribute__((always_inline)) inline static void Timer0_SetWaveformGenerationMode(timer0_wgm_t wgm) {
		reg::tccr0a::bit_clr(WGM00);
		reg::tccr0a::bit_clr(WGM01);
		reg::tccr0a::reg_or(((wgm & 0x03) >> 0) << WGM00);

		reg::tccr0b::bit_clr(WGM02);
		reg::tccr0b::reg_or(((wgm & 0x04) >> 2) << WGM02);
	}

	__attribute__((always_inline)) inline static void Timer0_SetCompareOutputModeA(timer0_com_t com) {
		reg::tccr0a::bit_clr(COM0A0);
		reg::tccr0a::bit_clr(COM0A1);
		reg::tccr0a::reg_or(com << COM0A0);
	}

	__attribute__((always_inline)) inline static void Timer0_SetCompareOutputModeB(timer0_com_t com) {
		reg::tccr0a::bit_clr(COM0B0);
		reg::tccr0a::bit_clr(COM0B1);
		reg::tccr0a::reg_or(com << COM0B0);
	}

	__attribute__((always_inline)) inline static void Timer0_DisconnectOutputs(void) {
		reg::tccr0a::bit_clr(COM0A1);
		reg::tccr0a::bit_clr(COM0A0);
		reg::tccr0a::bit_clr(COM0B1);
		reg::tccr0a::bit_clr(COM0B0);
	}

	__attribute__((always_inline)) inline static void Timer0_SetOutputCompareMatchAndClear(timer0_ocr_t oc) {
		reg::ocr0a::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer0_SetOutputCompareMatchA(timer0_ocr_t oc) {
		reg::ocr0a::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer0_SetOutputCompareMatchB(timer0_ocr_t oc) {
		reg::ocr0b::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer0_EnableOutputCompareInterruptA(void) {
		reg::timsk::bit_set (OCIE0A);
	}

	__attribute__((always_inline)) inline static void Timer0_EnableOverflowInterrupt(void) {
		reg::timsk::bit_set(TOIE0);
	}

	__attribute__((always_inline)) inline static Timer::timer0_tcnt_t Timer0_GetCount(void) {
		return (reg::tcnt0::reg_get());
	}

	__attribute__((always_inline)) inline static void Timer0_SetCount(timer0_tcnt_t v) {
		reg::tcnt0::reg_set(v);
	}

	__attribute__((always_inline)) inline static uint8_t Timer0_IsOverflowSet(void) {
		return (reg::tifr::bit_get(TOV0));
	}

//	static void Timer1_SetToPowerup(void);
//	static void Timer1_InterruptsOff(void);
//	static void Timer1_ClockSelect(timer1_cs_t cs);
//	static void Timer1_SetWaveformGenerationMode(timer1_wgm_t wgm);
//	static void Timer1_SetCompareOutputModeA(timer1_com_t com);
//	static void Timer1_SetCompareOutputModeB(timer1_com_t com);
//	static void Timer1_DisconnectOutputs(void);
//	static void Timer1_SetOutputCompareMatchAndClear(timer1_ocr_t oc);
//	static void Timer1_SetOutputCompareMatchA(timer1_ocr_t oc);
//	static void Timer1_SetOutputCompareMatchB(timer1_ocr_t oc);
//	static void Timer1_EnableOutputCompareInterruptA(void);
//	static void Timer1_EnableOverflowInterrupt(void);
//	static timer1_tcnt_t Timer1_GetCount(void);
//	static void Timer1_SetCount(timer1_tcnt_t v);
//	static uint8_t Timer1_IsOverflowSet(void);

	__attribute__((always_inline)) inline static void Timer1_SetToPowerup(void) {
		// Turn off Clear on Compare Match, turn off PWM A, disconnect the timer from the output pin, stop the clock
		reg::tccr1::reg_set(
				(0 << CTC1) | (0 << PWM1A) | (0 << COM1A1) | (0 << COM1A0)
						| (0 << CS13) | (0 << CS12) | (0 << CS11) | (0 << CS10));

		// Turn off PWM A, disconnect the timer from the output pin, no Force Output Compare Match, no Prescaler Reset
		reg::gtccr::bit_clr (PWM1B);
		reg::gtccr::bit_clr(COM1B1);
		reg::gtccr::bit_clr(COM1B0);
		reg::gtccr::bit_clr(FOC1B);
		reg::gtccr::bit_clr(FOC1A);
		reg::gtccr::bit_clr (PSR1);

		// Reset the count to zero
		reg::tcnt1::reg_set(0);
		// Set the output compare registers to zero
		reg::ocr1a::reg_set(0);
		reg::ocr1b::reg_set(0);
		reg::ocr1c::reg_set(0);
		// Disable all Timer1 interrupts
		Timer1_InterruptsOff();

		// Clear the Timer1 interrupt flags
		reg::tifr::bit_set(OCF1A);
		reg::tifr::bit_set(OCF1B);
		reg::tifr::bit_set(TOV1);
	}

	__attribute__((always_inline)) inline static void Timer1_InterruptsOff(void) {
		reg::timsk::bit_clr(OCIE1A);
		reg::timsk::bit_clr(OCIE1B);
		reg::timsk::bit_clr(TOIE1);
	}

	__attribute__((always_inline)) inline static void Timer1_ClockSelect(timer1_cs_t cs) {
		reg::tccr1::bit_clr(CS10);
		reg::tccr1::bit_clr(CS11);
		reg::tccr1::bit_clr(CS12);
		reg::tccr1::bit_clr(CS13);
		reg::tccr1::reg_or(cs << CS10);
	}

	__attribute__((always_inline)) inline static void Timer1_SetWaveformGenerationMode(Timer::timer1_wgm_t wgm) {
		reg::tccr1::bit_clr(CTC1);
		reg::tccr1::reg_or((wgm & 0x01) << CTC1);

		if (wgm & _Timer1_Enable_PWM_Mask) {
			reg::tccr1::bit_set(PWM1A);
			reg::gtccr::bit_set (PWM1B);
		}

		if (wgm & _Timer1_Set_OCRnC_To_FF_Mask) {
			reg::ocr1c::reg_set(0xFF);
		}
	}

	__attribute__((always_inline)) inline static void Timer1_SetCompareOutputModeA(Timer::timer1_com_t com) {
		reg::tccr1::bit_clr(COM1A0);
		reg::tccr1::bit_clr(COM1A1);
		reg::tccr1::bit_set(com << COM1A0);
	}

	__attribute__((always_inline)) inline static void Timer1_SetCompareOutputModeB(Timer::timer1_com_t com) {
		reg::gtccr::bit_clr(COM1B0);
		reg::gtccr::bit_clr(COM1B1);
		reg::gtccr::bit_set(com << COM1B0);
	}

	__attribute__((always_inline)) inline static void Timer1_DisconnectOutputs(void) {
		reg::tccr1::bit_clr(COM1A0);
		reg::tccr1::bit_clr(COM1A0);
		reg::gtccr::bit_clr(COM1B0);
		reg::gtccr::bit_clr(COM1B1);
	}

	__attribute__((always_inline)) inline static void Timer1_SetOutputCompareMatchAndClear(Timer::timer1_ocr_t oc) {
		reg::ocr1a::reg_set(oc);
		reg::ocr1b::reg_set(oc);
		reg::ocr1c::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer1_SetOutputCompareMatchA(Timer::timer1_ocr_t oc) {
		reg::ocr1a::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer1_SetOutputCompareMatchB(Timer::timer1_ocr_t oc) {
		reg::ocr1b::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer1_SetOutputCompareMatchC(Timer::timer1_ocr_t oc) {
		reg::ocr1c::reg_set(oc);
	}

	__attribute__((always_inline)) inline static void Timer1_EnableOutputCompareInterruptA(void) {
		reg::timsk::bit_set(OCIE1A);
	}

	__attribute__((always_inline)) inline static void Timer1_EnableOverflowInterrupt(void) {
		reg::timsk::bit_set(TOIE1);
	}

	__attribute__((always_inline)) inline static Timer::timer1_tcnt_t Timer1_GetCount(void) {
		return (reg::tcnt1::reg_get());
	}

	__attribute__((always_inline)) inline static void Timer1_SetCount(Timer::timer1_tcnt_t v) {
		reg::tcnt1::reg_set(v);
	}

	__attribute__((always_inline)) inline static uint8_t Timer1_IsOverflowSet(void) {
		return (reg::tifr::bit_get(TOV1));
	}

};

} /* namespace mcal */

#endif /* TIMER_H_ */
