#include "mcal/digitalio_attiny85.h"
#include "hal/logicLED.h"
#include "mcal/systemtick_attiny85.h"
#include "hal/MomentaryButton.h"
#include "mcal/pwm_attiny85.h"
#include "app/Powerswitch.h"

namespace {
const mcal::Systemtick::systick_t kLoopdelayMs = 1;  // was 15
}

int main() {

  // Initialize system tick (with 1 ms period)
  mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
  systick.start();

  mcal::DigitalIO &gpio = mcal::ATTiny85DigitalIO::getInstance();

  hal::MomentaryButton from_r_pi = hal::MomentaryButton(3u, gpio,
                                                        hal::MomentaryButton::ACTIVELEVEL_HIGH);
  hal::MomentaryButton power_button = hal::MomentaryButton(0u, gpio,
                                                           hal::MomentaryButton::ACTIVELEVEL_LOW);
  hal::LogicLed mosfetswitch = hal::LogicLed(4u, gpio);
  hal::LogicLed to_r_pi = hal::LogicLed(2u, gpio);

  mcal::PWM &pwm = mcal::ATTiny85PWM::getInstance();
  // PWM channel_ 2 uses PB4
  hal::PWMLed pwm_led = hal::PWMLed(1u, pwm, 0u, 0u, 0u);

  app::Powerswitch powerswitch = app::Powerswitch(power_button,
                                                  from_r_pi,
                                                  mosfetswitch,
                                                  pwm_led,
                                                  to_r_pi);

  while (true) {
    mcal::Systemtick::systick_t start = systick.getTick();

    // Update input button_ states every 1 ms.
    power_button.UpdateState();
    from_r_pi.UpdateState();

    // Update application component
    powerswitch.Update();

    if ((start % 15u) == 0) {
      // Update PWM output every 15 ms
      pwm_led.Update();
    }

    // delay to keep a constant loop rate
    while (systick.getTick() - start < kLoopdelayMs) {
    }
  }
}

