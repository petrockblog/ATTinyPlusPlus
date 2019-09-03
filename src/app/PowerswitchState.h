/*
 * PowerswitchState.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef POWERSWITCHSTATE_H_
#define POWERSWITCHSTATE_H_

#include "hal/button.h"
#include "hal/PWMLed.h"
#include "app/Powerswitch.h"
#include "mcal/systemtick_attiny85.h"

namespace app {

constexpr hal::PWMLed::PWMLEDParams_s patternOff = {0, 0, 0};
constexpr hal::PWMLed::PWMLEDParams_s patternBoot = {120, 20, 60};
constexpr hal::PWMLed::PWMLEDParams_s patternOn = {120, 0, 0};
constexpr hal::PWMLed::PWMLEDParams_s patternShutdown = {120, 10, 30};

class Powerswitch;

/**
 * The following state machine is implemented here. Note that the syntax is
 * PlantUML:
 *
 * @startuml
 *
 * skinparam monochrome true
 * skinparam componentStyle uml2
 *
 * [*] --> Off
 *
 * Off --> Boot : else
 * Off -> Off : Btn:false, Pwr:false
 *
 * Boot --> On : else
 * Boot -> Boot : Pwr:false
 *
 * On --> Shutdown : else
 * On -> On : Btn:true, Pwr:true
 *
 * Shutdown --> Shutdown : Pwr:true
 * Shutdown -> Off : else
 *
 * @enduml
 */
class PowerswitchState {
 public:
  virtual ~PowerswitchState() = default;
  virtual void step(Powerswitch &powerSwitch,
                    hal::Button::ButtonState_e btnState,
                    hal::Button::ButtonState_e rpiPowerState) = 0;
  virtual void onEnter(Powerswitch &powerSwitch) = 0;
 protected:
  PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern);
  const hal::PWMLed::PWMLEDParams_s ledPattern;
};

class PowerswitchStateOff : public PowerswitchState {
 public:
  PowerswitchStateOff() :
      PowerswitchState(patternOff),
      onEnterTick(0u) {
  }
  virtual void onEnter(Powerswitch &powerSwitch) override;
  virtual void step(Powerswitch &powerSwitch,
                    hal::Button::ButtonState_e btnState,
                    hal::Button::ButtonState_e rpiPowerState);
  virtual ~PowerswitchStateOff() = default;

 private:
  mcal::Systemtick::systick_t onEnterTick;
  static const mcal::Systemtick::systick_t OFFSTATEDELAY = 1000u;
};

class PowerswitchStateBoot : public PowerswitchState {
 public:
  PowerswitchStateBoot() :
      PowerswitchState(patternBoot) {
  }
  virtual void step(Powerswitch &powerSwitch,
                    hal::Button::ButtonState_e btnState,
                    hal::Button::ButtonState_e rpiPowerState);
  virtual ~PowerswitchStateBoot() = default;
  virtual void onEnter(Powerswitch &powerSwitch) override;
};

class PowerswitchStateOn : public PowerswitchState {
 public:
  PowerswitchStateOn() :
      PowerswitchState(patternOn) {
  }
  virtual void step(Powerswitch &powerSwitch,
                    hal::Button::ButtonState_e btnState,
                    hal::Button::ButtonState_e rpiPowerState);
  virtual ~PowerswitchStateOn() = default;
  virtual void onEnter(Powerswitch &powerSwitch) override;
};

class PowerswitchStateShutdown : public PowerswitchState {
 public:
  PowerswitchStateShutdown() :
      PowerswitchState(patternShutdown) {
  }
  virtual void step(Powerswitch &powerSwitch,
                    hal::Button::ButtonState_e btnState,
                    hal::Button::ButtonState_e rpiPowerState);
  virtual ~PowerswitchStateShutdown() = default;
  virtual void onEnter(Powerswitch &powerSwitch) override;
};

} /* namespace app */

#endif /* POWERSWITCHSTATE_H_ */
