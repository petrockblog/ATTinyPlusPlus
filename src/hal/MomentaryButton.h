/*
 * MomentaryButton.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_HAL_MOMENTARYBUTTON_H_
#define ATTINYPLUSPLUS_SRC_HAL_MOMENTARYBUTTON_H_

#include <stdint.h>
#include "mcal/digitalio.h"
#include "mcal/systemtick_attiny85.h"

namespace hal {

class MomentaryButton {
 public:

  enum ButtonState {
    BUTTON_PRESSED, BUTTON_RELEASED
  };

  struct ButtonInfos {
    ButtonState state_;
    uint32_t ticks_in_current_state_;
  };

  enum Activelevel {
    ACTIVELEVEL_LOW, ACTIVELEVEL_HIGH
  };

  MomentaryButton(uint8_t channel, mcal::DigitalIO &gpio,
                  Activelevel pullup);

  void UpdateState();
  const ButtonInfos& GetButtonInfos() const;

 private:
  static const uint32_t kButtonReleaseStable = 0x80000000;
  static const uint32_t kButtonPressStable = 0x7FFFFFFF;

  uint8_t channel_;
  ButtonInfos infos_;

  mcal::DigitalIO &gpio_;
  mcal::DigitalIO::DIOLevel_e logic_high_;
  mcal::DigitalIO::DIOLevel_e logic_low_;
  uint32_t input_history_;

};

} /* namespace hal */

#endif /*ATTINYPLUSPLUS_SRC_HAL_MOMENTARYBUTTON_H_*/
