/*
 * timer.cpp
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#include <timer.h>

#define TIMER0_MAXIMUM_OCR        (255)
#define TIMER0_PRESCALE_SET       (1)

#define TIMER1_MAXIMUM_OCR        (255)
#define TIMER1_PRESCALE_SET       (2)

namespace mcal {

//void Timer::Timer0_SetToPowerup(void) {
//	// Stop the clock, set waveform generation to normal, and set output mode to normal
//	reg::tccr0b::reg_set(
//			(0 << FOC0A) | (0 << FOC0B) | (0 << WGM02) | (0 << CS02)
//					| (0 << CS01) | (0 << CS00));
//	reg::tccr0a::reg_set(
//			(0 << COM0A1) | (0 << COM0A0) | (0 << COM0B1) | (0 << COM0B0)
//					| (0 << WGM01) | (0 << WGM00));
//	// Reset the count to zero
//	reg::tcnt0::reg_set(0);
//	// Set the output compare registers to zero
//	reg::ocr0a::reg_set(0);
//	reg::ocr0b::reg_set(0);
//	// Disable all Timer0 interrupts
//	Timer::Timer0_InterruptsOff();
//	// Clear the Timer0 interrupt flags
//	reg::tifr::bit_set (OCF0A);
//	reg::tifr::bit_set (OCF0B);
//	reg::tifr::bit_set(TOV0);
//}
//
//void Timer::Timer0_InterruptsOff(void) {
//	reg::timsk::bit_clr (OCIE0A);
//	reg::timsk::bit_clr (OCIE0B);
//	reg::timsk::bit_clr(TOIE0);
//}
//
//void Timer::Timer0_ClockSelect(Timer::timer0_cs_t cs) {
//	reg::tccr0b::bit_clr(CS00);
//	reg::tccr0b::bit_clr(CS01);
//	reg::tccr0b::bit_clr(CS02);
//	reg::tccr0b::reg_or(cs << CS00);
//}
//
//void Timer::Timer0_SetWaveformGenerationMode(timer0_wgm_t wgm) {
//	reg::tccr0a::bit_clr(WGM00);
//	reg::tccr0a::bit_clr(WGM01);
//	reg::tccr0a::reg_or(((wgm & 0x03) >> 0) << WGM00);
//
//	reg::tccr0b::bit_clr(WGM02);
//	reg::tccr0b::reg_or(((wgm & 0x04) >> 2) << WGM02);
//}
//
//void Timer::Timer0_SetCompareOutputModeA(timer0_com_t com) {
//	reg::tccr0a::bit_clr(COM0A0);
//	reg::tccr0a::bit_clr(COM0A1);
//	reg::tccr0a::reg_or(com << COM0A0);
//}
//
//void Timer::Timer0_SetCompareOutputModeB(timer0_com_t com) {
//	reg::tccr0a::bit_clr(COM0B0);
//	reg::tccr0a::bit_clr(COM0B1);
//	reg::tccr0a::reg_or(com << COM0B0);
//}
//
//void Timer::Timer0_DisconnectOutputs(void) {
//	reg::tccr0a::bit_clr(COM0A1);
//	reg::tccr0a::bit_clr(COM0A0);
//	reg::tccr0a::bit_clr(COM0B1);
//	reg::tccr0a::bit_clr(COM0B0);
//}
//
//void Timer::Timer0_SetOutputCompareMatchAndClear(timer0_ocr_t oc) {
//	reg::ocr0a::reg_set(oc);
//}

//void Timer::Timer0_SetOutputCompareMatchA(timer0_ocr_t oc) {
//	reg::ocr0a::reg_set(oc);
//}
//
//void Timer::Timer0_SetOutputCompareMatchB(timer0_ocr_t oc) {
//	reg::ocr0b::reg_set(oc);
//}
//
//void Timer::Timer0_EnableOutputCompareInterruptA(void) {
//	reg::timsk::bit_set (OCIE0A);
//}
//
//void Timer::Timer0_EnableOverflowInterrupt(void) {
//	reg::timsk::bit_set(TOIE0);
//}
//
//Timer::timer0_tcnt_t Timer::Timer0_GetCount(void) {
//	return (reg::tcnt0::reg_get());
//}
//
//void Timer::Timer0_SetCount(timer0_tcnt_t v) {
//	reg::tcnt0::reg_set(v);
//}
//
//uint8_t Timer::Timer0_IsOverflowSet(void) {
//	return (reg::tifr::bit_get(TOV0));
//}

//void Timer::Timer1_SetToPowerup(void) {
//	// Turn off Clear on Compare Match, turn off PWM A, disconnect the timer from the output pin, stop the clock
//	reg::tccr1::reg_set(
//			(0 << CTC1) | (0 << PWM1A) | (0 << COM1A1) | (0 << COM1A0)
//					| (0 << CS13) | (0 << CS12) | (0 << CS11) | (0 << CS10));
//
//	// Turn off PWM A, disconnect the timer from the output pin, no Force Output Compare Match, no Prescaler Reset
//	reg::gtccr::bit_clr (PWM1B);
//	reg::gtccr::bit_clr(COM1B1);
//	reg::gtccr::bit_clr(COM1B0);
//	reg::gtccr::bit_clr(FOC1B);
//	reg::gtccr::bit_clr(FOC1A);
//	reg::gtccr::bit_clr (PSR1);
//
//	// Reset the count to zero
//	reg::tcnt1::reg_set(0);
//	// Set the output compare registers to zero
//	reg::ocr1a::reg_set(0);
//	reg::ocr1b::reg_set(0);
//	reg::ocr1c::reg_set(0);
//	// Disable all Timer1 interrupts
//	Timer1_InterruptsOff();
//
//	// Clear the Timer1 interrupt flags
//	reg::tifr::bit_set(OCF1A);
//	reg::tifr::bit_set(OCF1B);
//	reg::tifr::bit_set(TOV1);
//}
//
//void Timer::Timer1_InterruptsOff(void) {
//	reg::timsk::bit_clr(OCIE1A);
//	reg::timsk::bit_clr(OCIE1A);
//	reg::timsk::bit_clr(TOIE1);
//}
//
//void Timer::Timer1_ClockSelect(timer1_cs_t cs) {
//	reg::tccr1::bit_clr(CS10);
//	reg::tccr1::bit_clr(CS11);
//	reg::tccr1::bit_clr(CS12);
//	reg::tccr1::bit_clr(CS13);
//	reg::tccr1::reg_or(cs << CS10);
//}
//
//void Timer::Timer1_SetWaveformGenerationMode(Timer::timer1_wgm_t wgm) {
//	reg::tccr1::bit_clr(CTC1);
//	reg::tccr1::reg_or((wgm & 0x1) << CTC1);
//
//	if (wgm & _Timer1_Enable_PWM_Mask) {
//		reg::tccr1::bit_set(PWM1A);
//		reg::gtccr::bit_set (PWM1B);
//	}
//
//	if (wgm & _Timer1_Set_OCRnC_To_FF_Mask) {
//		reg::ocr1c::reg_set(0xFF);
//	}
//}
//
//void Timer::Timer1_SetCompareOutputModeA(timer1_com_t com) {
//	reg::tccr1::bit_clr(COM1A0);
//	reg::tccr1::bit_clr(COM1A1);
//	reg::tccr1::bit_set(com << COM1A0);
//}
//
//void Timer::Timer1_SetCompareOutputModeB(timer1_com_t com) {
//	reg::gtccr::bit_clr(COM1B0);
//	reg::gtccr::bit_clr(COM1B1);
//	reg::gtccr::bit_set(com << COM1B0);
//}
//
//void Timer::Timer1_DisconnectOutputs(void) {
//	reg::tccr1::bit_clr(COM1A0);
//	reg::tccr1::bit_clr(COM1A0);
//	reg::gtccr::bit_clr(COM1B0);
//	reg::gtccr::bit_clr(COM1B1);
//}
//
//void Timer::Timer1_SetOutputCompareMatchAndClear(timer1_ocr_t oc) {
//	reg::ocr1a::reg_set(oc);
//	reg::ocr1b::reg_set(oc);
//	reg::ocr1c::reg_set(oc);
//}
//
//void Timer::Timer1_SetOutputCompareMatchA(timer1_ocr_t oc) {
//	reg::ocr1a::reg_set(oc);
//}
//
//void Timer::Timer1_SetOutputCompareMatchB(timer1_ocr_t oc) {
//	reg::ocr1b::reg_set(oc);
//}
//
//void Timer::Timer1_EnableOutputCompareInterruptA(void) {
//	reg::timsk::bit_set(OCIE1A);
//}
//
//void Timer::Timer1_EnableOverflowInterrupt(void) {
//	reg::timsk::bit_set(TOIE1);
//}
//
//Timer::timer1_tcnt_t Timer::Timer1_GetCount(void) {
//	return (reg::tcnt1::reg_get());
//}
//
//void Timer::Timer1_SetCount(Timer::timer1_tcnt_t v) {
//	reg::tcnt1::reg_set(v);
//}
//
//uint8_t Timer::Timer1_IsOverflowSet(void) {
//	return (reg::tifr::bit_get(TOV1));
//}

} /* namespace mcal */
