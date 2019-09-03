/*
 * timer.h
 *
 *  Created on: 08.10.2014
 *      Author: florian
 */

#ifndef SYSTEMTICK_ATTINY85_H_
#define SYSTEMTICK_ATTINY85_H_

#include "mcal/systemtick.h"
#include "mcal/timer.h"
#include "mcal/cppinterrupt.h"

namespace mcal {

class ATTiny85Systemtick: public Systemtick {

public:

	static ATTiny85Systemtick& getInstance() {
		static ATTiny85Systemtick systick;
		return systick;
	}

	void start() override;
	void stop() override;

	inline systick_t getTick() const override {
		return tickcount;
	}

	systick_t getTickPeriod() const override;

private:

	volatile systick_t tickcount;

	ATTiny85Systemtick();

	class TimerInterrupt: public Interrupt {
		ATTiny85Systemtick *ownerTimer;
		void serviceRoutine() override;

	public:
		TimerInterrupt(int interruptNumber, ATTiny85Systemtick *ownerTimer);
	} nestedTimerInterrupt;

	friend class TimerInterrupt;

};

} /* namespace mcal */

#endif /* SYSTEMTICK_ATTINY85_H_ */
