/*
 * timer.h
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <binary.h>
#include <mcal.h>

namespace mcal {

class Timer {
public:

	typedef enum {
		Timer0_Stopped = B000,
		Timer0_Prescale_Value_1 = B001,
		Timer0_Prescale_Value_8 = B010,
		Timer0_Prescale_Value_64 = B011,
		Timer0_Prescale_Value_256 = B100,
		Timer0_Prescale_Value_1024 = B101,
		Timer0_T0_Falling = B110,
		Timer0_T0_Rising = B111,
		Timer0_Prescale_Index_1 = B001,
		Timer0_Prescale_Index_2 = B010,
		Timer0_Prescale_Index_3 = B011,
		Timer0_Prescale_Index_4 = B100,
		Timer0_Prescale_Index_5 = B101
	} timer0_cs_t;

//	__attribute__((always_inline)) static inline void Timer0_ClockSelect(
//			timer0_cs_t cs) {
//		reg::tccr0b = (reg::tccr0b & ~MASK3(CS02, CS01, CS00)) | (cs << CS00);
//	}

	typedef enum {
		Timer0_Normal = B000,
		Timer0_Phase_Correct_PWM_FF = B001,
		Timer0_CTC_OCR = B010,
		Timer0_Fast_PWM_FF = B011,
		Timer0_Reserved_1 = B100,
		Timer0_Phase_Correct_PWM_OCR = B101,
		Timer0_Reserved_2 = B110,
		Timer0_Fast_PWM_OCR = B111
	} timer0_wgm_t;

//	__attribute__((always_inline)) static inline void Timer0_SetWaveformGenerationMode(
//			timer0_wgm_t wgm) {
//		TCCR0A = (TCCR0A & ~MASK2(WGM01, WGM00))
//				| (((wgm & B011) >> 0) << WGM00);
//		TCCR0B = (TCCR0B & ~MASK1(WGM02)) | (((wgm & B100) >> 2) << WGM02);
//	}

	Timer();
	virtual ~Timer();

};

} /* namespace mcal */

#endif /* TIMER_H_ */
