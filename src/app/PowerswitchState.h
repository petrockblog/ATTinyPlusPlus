/*
 * PowerswitchState.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef POWERSWITCHSTATE_H_
#define POWERSWITCHSTATE_H_

#include "button.h"
#include "Powerswitch.h"

namespace app {

class Powerswitch;

class PowerswitchState {
public:
	PowerswitchState();
	virtual ~PowerswitchState();
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState) = 0;
};

class PowerswitchStateOff: public PowerswitchState {
public:
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateOff();
};

class PowerswitchStateBoot: public PowerswitchState {
public:
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateBoot();
};

class PowerswitchStateOn: public PowerswitchState {
public:
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateOn();
};

class PowerswitchStateShutdown: public PowerswitchState {
public:
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateShutdown();
};

} /* namespace app */

#endif /* POWERSWITCHSTATE_H_ */
