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

  mcal::DigitalIO &digital_io = mcal::ATTiny85DigitalIO::getInstance();

  hal::MomentaryButton from_rpi_button = hal::MomentaryButton(3u, digital_io,
                                                              hal::MomentaryButton::ACTIVELEVEL_HIGH);
  hal::MomentaryButton power_button = hal::MomentaryButton(0u, digital_io,
                                                           hal::MomentaryButton::ACTIVELEVEL_LOW);
  hal::LogicLed mosfetswitch = hal::LogicLed(4u, digital_io);
  hal::LogicLed to_rpi = hal::LogicLed(2u, digital_io);

  mcal::PWM &pwm = mcal::ATTiny85PWM::getInstance();
  hal::PwmLed pwm_led = hal::PwmLed(1u, pwm, 0u, 0u, 0u);  // PWM channel_ 2 uses PB4

  app::Powerswitch powerswitch = app::Powerswitch(power_button,
                                                  from_rpi_button,
                                                  mosfetswitch,
                                                  pwm_led,
                                                  to_rpi);

  while (true) {
    mcal::Systemtick::systick_t start = systick.getTick();

    // Update input button states every 1 ms.
    power_button.UpdateState();
    from_rpi_button.UpdateState();

    if ((start % 15u) == 0) {
      // Update PWM output every 15 ms
      pwm_led.Update();

      // Update application component
      powerswitch.Update();
    }

    // delay to keep a constant loop rate
    while (systick.getTick() - start < kLoopdelayMs) {
    }
  }
}

