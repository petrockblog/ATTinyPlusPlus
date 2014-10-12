/*
 * Systemtick.h
 *
 *  Created on: 08.10.2014
 *      Author: florian
 */

#ifndef SYSTEMTICK_H_
#define SYSTEMTICK_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stddef.h>
#include <cstdint.h>

#include "timer.h"

namespace mcal {

class Systemtick {
private:
	Systemtick();
	Systemtick(Systemtick const& copy);
	Systemtick& operator=(Systemtick const& copy);

	virtual ~Systemtick();

public:
	static volatile uint16_t systemtick;

	static Systemtick& getInstance() {
		static Systemtick instance;

		// configure timer such that the systemtick is increased each millisecond
		mcal::Timer::Timer0_SetToPowerup();
		mcal::Timer::Timer0_SetOutputCompareMatchA(125-1);
		mcal::Timer::Timer0_SetWaveformGenerationMode(mcal::Timer::Timer0_CTC_OCR);
		mcal::Timer::Timer0_EnableOutputCompareInterruptA();
		mcal::Timer::Timer0_ClockSelect(mcal::Timer::Timer0_Prescale_Value_8);

		return instance;
	}

};

ISR(TIMER0_COMPA_vect) {
	mcal::Systemtick::systemtick++;
}

void


} /* namespace mcal */

#endif /* SYSTEMTICK_H_ */
