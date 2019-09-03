/*
 * Powerswitch.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_APP_POWERSWITCH_H_
#define ATTINYPLUSPLUS_SRC_APP_POWERSWITCH_H_

#include "hal/button.h"
#include "hal/Led.h"
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

  enum Shutdown {
    SHUTDOWN_TRUE, SHUTDOWN_FALSE
  };

  Powerswitch(hal::Button &btn, hal::Button &from_r_pi, hal::Led &power_switch,
              hal::PWMLed &led, hal::Led &to_r_pi);
  virtual ~Powerswitch();

  void Update();

 private:

  PowerswitchState *current_state_;

  PowerswitchStateOff *state_off_;
  PowerswitchStateBoot *state_boot_;
  PowerswitchStateOn *state_on_;
  PowerswitchStateShutdown *state_shutdown_;

  hal::Button &button_;
  hal::Button &from_r_pi_;
  hal::Led &power_switch_;
  hal::Led &to_r_pi_;
  hal::PWMLed &pwm_led_;

  void SetSwitch(hal::Led::LedLevel level);
  void SetShutdownSignal(Shutdown do_shutdown);
  void SetState(PowerswitchState *new_state);
  void SetLedPattern(const hal::PWMLed::PWMLEDParams_s &pattern) {
    pwm_led_.SetConfiguration(pattern);
  }

  inline PowerswitchStateOff *GetStateOff() {
    return state_off_;
  }

  inline PowerswitchStateBoot *GetStateBoot() {
    return state_boot_;
  }

  inline PowerswitchStateOn *GetStateOn() {
    return state_on_;
  }

  inline PowerswitchStateShutdown *GetStateShutdown() {
    return state_shutdown_;
  }

};

} /* namespace app */

#endif /*ATTINYPLUSPLUS_SRC_APP_POWERSWITCH_H_*/
