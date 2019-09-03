/*
 * PowerswitchState.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_
#define ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_

#include "hal/button.h"
#include "hal/PWMLed.h"
#include "app/Powerswitch.h"
#include "mcal/systemtick_attiny85.h"

namespace app {

constexpr hal::PWMLed::PWMLEDParams_s kPatternOff = {0, 0, 0};
constexpr hal::PWMLed::PWMLEDParams_s kPatternBoot = {120, 20, 60};
constexpr hal::PWMLed::PWMLEDParams_s kPatternOn = {120, 0, 0};
constexpr hal::PWMLed::PWMLEDParams_s kPatternShutdown = {120, 10, 30};

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
                    hal::Button::ButtonState btn_state,
                    hal::Button::ButtonState rpi_power_state) = 0;
  virtual void OnEnter(Powerswitch &power_switch) = 0;
 protected:
  explicit PowerswitchState(hal::PWMLed::PWMLEDParams_s pattern);
  const hal::PWMLed::PWMLEDParams_s led_pattern_;
};

class PowerswitchStateOff : public PowerswitchState {
 public:
  PowerswitchStateOff() :
      PowerswitchState(kPatternOff),
      on_enter_tick_(0u) {
  }
  void OnEnter(Powerswitch &power_switch) override;
  void Step(Powerswitch &power_switch,
            hal::Button::ButtonState btn_state,
            hal::Button::ButtonState rpi_power_state) override;
  ~PowerswitchStateOff() override = default;

 private:
  mcal::Systemtick::systick_t on_enter_tick_;
};

class PowerswitchStateBoot : public PowerswitchState {
 public:
  PowerswitchStateBoot() :
      PowerswitchState(kPatternBoot),
      on_enter_tick_(0u) {
  }
  void Step(Powerswitch &power_switch,
            hal::Button::ButtonState btn_state,
            hal::Button::ButtonState rpi_power_state) override;
  ~PowerswitchStateBoot() override = default;
  void OnEnter(Powerswitch &power_switch) override;
   private:
   mcal::Systemtick::systick_t on_enter_tick_;
};

class PowerswitchStateOn : public PowerswitchState {
 public:
  PowerswitchStateOn() :
      PowerswitchState(kPatternOn) {
  }
  void Step(Powerswitch &power_switch,
            hal::Button::ButtonState btn_state,
            hal::Button::ButtonState rpi_power_state) override;
  ~PowerswitchStateOn() override = default;
  void OnEnter(Powerswitch &power_switch) override;
};

class PowerswitchStateShutdown : public PowerswitchState {
 public:
  PowerswitchStateShutdown() :
      PowerswitchState(kPatternShutdown), on_enter_tick_(0u) {
  }
  void Step(Powerswitch &power_switch,
            hal::Button::ButtonState btn_state,
            hal::Button::ButtonState rpi_power_state) override;
  ~PowerswitchStateShutdown() override = default;
  void OnEnter(Powerswitch &power_switch) override;
   private:
   mcal::Systemtick::systick_t on_enter_tick_;
};

} /* namespace app */

#endif /*ATTINYPLUSPLUS_SRC_APP_POWERSWITCHSTATE_H_*/
