/*
 * Powerswitch.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef POWERSWITCH_H_
#define POWERSWITCH_H_

#include "hal/button.h"
#include "hal/LED.h"
#include "hal/PWMLed.h"
#include "app/PowerswitchState.h"

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

	enum shutdown_e {
		SHUTDOWN_TRUE, SHUTDOWN_FALSE
	};

	Powerswitch(hal::Button &btn, hal::Button &fromRPi, hal::LED& powerSwitch,
			hal::PWMLed &led, hal::LED &toRPi);
	virtual ~Powerswitch();

	void update();

private:

	PowerswitchState* currentState;

	PowerswitchStateOff *stateOff;
	PowerswitchStateBoot *stateBoot;
	PowerswitchStateOn *stateOn;
	PowerswitchStateShutdown *stateShutdown;

	hal::Button &button;
	hal::Button &fromRPi;
	hal::LED &powerSwitch;
	hal::LED &toRPi;
	hal::PWMLed &pwmLED;

	void setSwitch(hal::LED::LEDLevel_e level);
	void setShutdownSignal(shutdown_e doShutdown);
	void setState(PowerswitchState *newState);
	void setLEDPattern(const hal::PWMLed::PWMLEDParams_s& pattern) {
		pwmLED.setConfiguration(pattern);
	}

	inline PowerswitchStateOff* getStateOff() {
		return stateOff;
	}

	inline PowerswitchStateBoot* getStateBoot() {
		return stateBoot;
	}

	inline PowerswitchStateOn* getStateOn() {
		return stateOn;
	}

	inline PowerswitchStateShutdown* getStateShutdown() {
		return stateShutdown;
	}

};

} /* namespace app */

#endif /* POWERSWITCH_H_ */
