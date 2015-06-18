/*
 * PowerswitchState.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef POWERSWITCHSTATE_H_
#define POWERSWITCHSTATE_H_

#include "button.h"
#include "PWMLed.h"
#include "Powerswitch.h"
#include "systemtick_attiny85.h"

namespace app {

constexpr hal::PWMLed::PWMLEDParams_s patternOff = { 0, 0, 0 };
constexpr hal::PWMLed::PWMLEDParams_s patternBoot = { 128, 40, 120 };
constexpr hal::PWMLed::PWMLEDParams_s patternOn = { 128, 0, 0 };
constexpr hal::PWMLed::PWMLEDParams_s patternShutdown = { 128, 20, 60 };

class Powerswitch;

class PowerswitchState {
public:
	virtual ~PowerswitchState();
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState) = 0;
	virtual void onEnter() { };
protected:
	PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern);
	const hal::PWMLed::PWMLEDParams_s ledPattern;
};

class PowerswitchStateOff: public PowerswitchState {
public:
	PowerswitchStateOff() :
		PowerswitchState(patternOff),
		onEnterTick(0u) {
	}
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateOff();
	virtual void onEnter();
private:
	mcal::Systemtick::systick_t onEnterTick;
	static const mcal::Systemtick::systick_t OFFSTATEDELAY = 1000u;
};

class PowerswitchStateBoot: public PowerswitchState {
public:
	PowerswitchStateBoot() :
		PowerswitchState(patternBoot) {
	}
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateBoot();
};

class PowerswitchStateOn: public PowerswitchState {
public:
	PowerswitchStateOn() :
		PowerswitchState(patternOn) {
	}
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateOn();
};

class PowerswitchStateShutdown: public PowerswitchState {
public:
	PowerswitchStateShutdown() :
		PowerswitchState(patternShutdown) {
	}
	virtual void step(Powerswitch& powerSwitch,
			hal::Button::ButtonState_e btnState,
			hal::Button::ButtonState_e rpiPowerState);
	virtual ~PowerswitchStateShutdown();
};

} /* namespace app */

#endif /* POWERSWITCHSTATE_H_ */
