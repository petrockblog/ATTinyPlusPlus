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
#include "PWMLed.h"
//#include "LEDController.h"
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

	typedef enum {
		SHUTDOWN_TRUE, SHUTDOWN_FALSE
	} shutdown_e;

//	Powerswitch(hal::Button &btn, hal::Button &fromRPi, hal::LED& powerSwitch,
//			hal::LED &led, hal::LED &toRPi);
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
//	hal::LED &signalLED;
	hal::PWMLed &pwmLED;
//	LEDController ledcontroller;

	void setSwitch(hal::LED::LEDLevel_e level);
	void setShutdownSignal(shutdown_e doShutdown);
	void setState(PowerswitchState *newState);
//	void setLEDPattern(uint8_t index);
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
