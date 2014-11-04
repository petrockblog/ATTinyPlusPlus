/*
 * Powerswitch.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef POWERSWITCH_H_
#define POWERSWITCH_H_

#include "button.h"
#include "LED.h"
#include "PowerswitchState.h"

namespace app {

class PowerswitchState;
class PowerswitchStateOff;
class PowerswitchStateBoot;
class PowerswitchStateOn;
class PowerswitchStateShutdown;

class Powerswitch {
public:
	friend class PowerswitchStateOff;
	friend class PowerswitchStateBoot;
	friend class PowerswitchStateOn;
	friend class PowerswitchStateShutdown;

	Powerswitch(hal::Button &btn, hal::Button &rpiPower, hal::LED& powerSwitch);
	virtual ~Powerswitch();

	void update();

private:

	PowerswitchStateOff *stateOff;
	PowerswitchStateBoot *stateBoot;
	PowerswitchStateOn *stateOn;
	PowerswitchStateShutdown *stateShutdown;

	PowerswitchState* currentState;

	hal::Button &button;
	hal::Button &rpiPower;
	hal::LED &powerSwitch;

	void setSwitch(hal::LED::LEDLevel_e level);
	void setState(PowerswitchState *newState);

	inline PowerswitchState* getStateOff() {
		return (PowerswitchState *) stateOff;
	}

	inline PowerswitchState* getStateBoot() {
		return (PowerswitchState *) stateBoot;
	}

	inline PowerswitchState* getStateOn() {
		return (PowerswitchState *) stateOn;
	}

	inline PowerswitchState* getStateShutdown() {
		return (PowerswitchState *) stateShutdown;
	}

};

} /* namespace app */

#endif /* POWERSWITCH_H_ */
