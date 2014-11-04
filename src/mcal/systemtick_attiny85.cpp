#include <systemtick_attiny85.h>

namespace mcal {

//volatile uint32_t Systemtick::tickcount = 0;

ATTiny85Systemtick::TimerInterrupt::TimerInterrupt(int interruptNumber,
		ATTiny85Systemtick *ownerTimer) :
		ownerTimer(ownerTimer) {
	record(interruptNumber, this);
}

void ATTiny85Systemtick::TimerInterrupt::serviceRoutine() {
	cli();
	ownerTimer->tickcount += 1;
	sei();
}

ATTiny85Systemtick::ATTiny85Systemtick() :
		tickcount(0), nestedTimerInterrupt(TIMER0_COMPA_vect_num, this) {
}

void ATTiny85Systemtick::start() {
	Timer::Timer0_SetToPowerup();
	Timer::Timer0_SetWaveformGenerationMode(Timer::Timer0_CTC_OCR);
	Timer::Timer0_ClockSelect(Timer::Timer0_Prescale_Value_64);
	Timer::Timer0_SetOutputCompareMatchA(125 - 1);
	Timer::Timer0_EnableOutputCompareInterruptA();
	sei();
}

void ATTiny85Systemtick::stop() {
	mcal::reg::timsk::bit_clr(mcal::bits::ocie0a);
}

Systemtick::systick_t ATTiny85Systemtick::getTickPeriod() {
	return 1;
}

} /* namespace mcal */
