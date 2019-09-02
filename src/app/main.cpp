#include <util/delay.h>

#include "mcal/mcal.h"
#include "mcal/digitalio_attiny85.h"
#include "hal/logicLED.h"
#include "mcal/systemtick_attiny85.h"
#include "hal/MomentaryButton.h"
#include "mcal/pwm_attiny85.h"
#include "app/Powerswitch.h"

namespace {
const mcal::Systemtick::systick_t LOOPDELAY_MS = 1;  // was 15
}

int main() {

  // initialize system tick (with 1 ms period)
  mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
  systick.start();

  mcal::DigitalIO &gpio = mcal::ATTiny85DigitalIO::getInstance();

  hal::MomentaryButton fromRPi = hal::MomentaryButton(3u, gpio,
                                                      hal::MomentaryButton::ACTIVELEVEL_HIGH);
  hal::MomentaryButton powerButton = hal::MomentaryButton(0u, gpio,
                                                          hal::MomentaryButton::ACTIVELEVEL_LOW);
  hal::LogicLED mosfetswitch = hal::LogicLED(4u, gpio);
  hal::LogicLED toRPi = hal::LogicLED(2u, gpio);

  mcal::PWM &pwm = mcal::ATTiny85PWM::getInstance();
  // PWM channel_ 2 uses PB4
  hal::PWMLed pwmLed = hal::PWMLed(1u, pwm, 0u, 0u, 0u);

  app::Powerswitch powerswitch = app::Powerswitch(powerButton,
                                                  fromRPi,
                                                  mosfetswitch,
                                                  pwmLed,
                                                  toRPi);

  while (true) {
    mcal::Systemtick::systick_t start = systick.getTick();

    // update input button states every 1 ms.
    powerButton.updateState();
    fromRPi.updateState();

    // update application component
    powerswitch.update();

    if ((start % 15u) == 0) {
      // update PWM output every 15 ms
      pwmLed.update();
    }

    // delay to keep a constant loop rate
    while (systick.getTick() - start < LOOPDELAY_MS) {
    }
  }

  return 0;  // never reached
}

