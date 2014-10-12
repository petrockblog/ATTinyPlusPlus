/*
 * timer.cpp
 *
 *  Created on: 08.10.2014
 *      Author: florian
 */

#include <systemtick.h>

namespace mcal {

Systemtick::TimerInterrupt::TimerInterrupt(int interruptNumber,
		Systemtick *ownerTimer) :
		ownerTimer(ownerTimer) {
	record(interruptNumber, this);
}

void Systemtick::TimerInterrupt::serviceRoutine() {
	++ownerTimer->tickcount;
}

Systemtick::Systemtick() :
		tickcount(0), nestedTimerInterrupt(TIMER0_OVF_vect_num, this) {

	mcal::reg::tccr0a::reg_set(Timer::timer0_wgm_t::Timer0_CTC_OCR);
	mcal::reg::tccr0b::reg_set(Timer::timer0_cs_t::Timer0_Prescale_Value_8);
	mcal::reg::ocr0a::reg_set(125 - 1);
	mcal::reg::timsk::reg_set((1 << OCIE0A));
	sei();
}

} /* namespace mcal */
