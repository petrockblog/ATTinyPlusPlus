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
	Timer::Timer0_SetToPowerup();
	Timer::Timer0_SetWaveformGenerationMode(Timer::Timer0_CTC_OCR);
	Timer::Timer0_ClockSelect(Timer::Timer0_Prescale_Value_64);
	Timer::Timer0_SetOutputCompareMatchA(125 - 1);
	Timer::Timer0_EnableOutputCompareInterruptA();
	sei();
}

void Systemtick::stop() {
	mcal::reg::timsk::bit_clr(mcal::bits::ocie0a);
}

} /* namespace mcal */
