/*
 * PowerswitchState.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_
#define ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_

#include "hal/PwmLed.h"
#include "app/Powerswitch.h"
#include "mcal/systemtick_attiny85.h"

namespace app {

constexpr hal::PwmLed::PwmledParams kPatternOff = {0, 0, 0};
constexpr hal::PwmLed::PwmledParams kPatternBoot = {120, 20, 60};
constexpr hal::PwmLed::PwmledParams kPatternOn = {120, 0, 0};
constexpr hal::PwmLed::PwmledParams kPatternShutdown = {120, 10, 30};

using ConstButtonRef = const hal::MomentaryButton::ButtonInfos&;

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
  virtual void Step(Powerswitch &power_switch,
                    ConstButtonRef btn_infos,
                    ConstButtonRef rpi_power_state) = 0;
  virtual void OnEnter(Powerswitch &power_switch) = 0;
 protected:
  explicit PowerswitchState(hal::PwmLed::PwmledParams pattern);
  const hal::PwmLed::PwmledParams led_pattern_;
};

class PowerswitchStateOff : public PowerswitchState {
 public:
  PowerswitchStateOff() :
      PowerswitchState(kPatternOff) {
  }
  void OnEnter(Powerswitch &power_switch) override;
  void Step(Powerswitch &power_switch,
            ConstButtonRef btn_infos,
            ConstButtonRef rpi_power_infos) override;
  ~PowerswitchStateOff() override = default;
};

class PowerswitchStateBoot : public PowerswitchState {
 public:
  PowerswitchStateBoot() :
      PowerswitchState(kPatternBoot) {
  }
  void Step(Powerswitch &power_switch,
            ConstButtonRef btn_infos,
            ConstButtonRef rpi_power_infos) override;
  ~PowerswitchStateBoot() override = default;
  void OnEnter(Powerswitch &power_switch) override;
};

class PowerswitchStateOn : public PowerswitchState {
 public:
  PowerswitchStateOn() :
      PowerswitchState(kPatternOn) {
  }
  void Step(Powerswitch &power_switch,
            ConstButtonRef btn_infos,
            ConstButtonRef rpi_power_infos) override;
  ~PowerswitchStateOn() override = default;
  void OnEnter(Powerswitch &power_switch) override;
};

class PowerswitchStateShutdown : public PowerswitchState {
 public:
  PowerswitchStateShutdown() :
      PowerswitchState(kPatternShutdown) {
  }
  void Step(Powerswitch &power_switch,
            ConstButtonRef btn_infos,
            ConstButtonRef rpi_power_infos) override;
  ~PowerswitchStateShutdown() override = default;
  void OnEnter(Powerswitch &power_switch) override;
};

} /* namespace app */

#endif /*ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_*/
