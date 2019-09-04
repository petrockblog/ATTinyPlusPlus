/*
 * Powerswitch.h
 *
 *  Created on: 02.11.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_APP_POWERSWITCH_H_
#define ATTINYPLUSPLUS_SRC_APP_POWERSWITCH_H_

#include "hal/MomentaryButton.h"
#include "hal/Led.h"
#include "hal/PwmLed.h"
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

  Powerswitch(hal::MomentaryButton &btn, hal::MomentaryButton &from_rpi, hal::Led &power_switch,
              hal::PwmLed &led, hal::Led &to_rpi);
  virtual ~Powerswitch();

  void Update();

 private:

  PowerswitchState *current_state_;

  PowerswitchStateOff *state_off_;
  PowerswitchStateBoot *state_boot_;
  PowerswitchStateOn *state_on_;
  PowerswitchStateShutdown *state_shutdown_;

  hal::MomentaryButton &button_;
  hal::MomentaryButton &from_rpi_;
  hal::Led &power_switch_;
  hal::Led &to_rpi_;
  hal::PwmLed &pwm_led_;

  bool using_momentary_power_button_;
  mcal::Systemtick::systick_t on_state_enter_tick_;

  mcal::Systemtick::systick_t GetTicksInState();

  void SetSwitch(hal::Led::LedLevel level);
  void SetShutdownSignal(Shutdown do_shutdown);
  void SetState(PowerswitchState *new_state);
  void SetLedPattern(const hal::PwmLed::PwmledParams &pattern);

  bool IsUsingMomentaryPowerButton() const {
    return using_momentary_power_button_;
  }
  void SetUsingMomentaryPowerButton(bool using_momentary_power_button) {
    using_momentary_power_button_ = using_momentary_power_button;
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
