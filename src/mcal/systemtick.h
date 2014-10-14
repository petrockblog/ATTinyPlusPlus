/*
 * timer.h
 *
 *  Created on: 08.10.2014
 *      Author: florian
 */

#ifndef SYSTEMTICK_H_
#define SYSTEMTICK_H_

#include <cstdint.h>
#include <avr/interrupt.h>
#include <cppinterrupt.h>
#include <timer.h>
#include <mcal.h>

namespace mcal {

class Systemtick {

private:
	volatile uint32_t tickcount;

	class TimerInterrupt: public Interrupt {
		Systemtick *ownerTimer;
		void serviceRoutine();

	public:
		TimerInterrupt(int interruptNumber, Systemtick *ownerTimer);
	} nestedTimerInterrupt;

	friend class Systemtick::TimerInterrupt;

	Systemtick();

public:

	static Systemtick& getInstance() {
		static Systemtick systick;
		return systick;
	}

	uint32_t getTick() {
		return tickcount;
	}

};

} /* namespace mcal */

#endif /* TIMER_H_ */
