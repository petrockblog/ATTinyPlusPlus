/*
 * timer.cpp
 *
 *  Created on: 08.10.2014
 *      Author: florian
 */

#include <systemtick.h>

namespace mcal {

volatile uint32_t Systemtick::tickcount = 0;

Systemtick::TimerInterrupt::TimerInterrupt(int interruptNumber,
		Systemtick *ownerTimer) :
		ownerTimer(ownerTimer) {
	record(interruptNumber, this);
}

void Systemtick::TimerInterrupt::serviceRoutine() {
	ownerTimer->tickcount += 1;
}

Systemtick::Systemtick() :
		nestedTimerInterrupt(TIMER0_COMPA_vect_num, this) {
}

void Systemtick::start() {
	mcal::reg::tccr0a::reg_set(1 << WGM01);
	mcal::reg::tccr0b::reg_set((1 << CS00) | (1 << CS01)); // F_CPU / 64
	mcal::reg::ocr0a::reg_set(125 - 1);
	mcal::reg::timsk::bit_set(OCIE0A);
	sei();
}

void Systemtick::stop() {
	mcal::reg::timsk::bit_clr(OCIE0A);
}

} /* namespace mcal */
