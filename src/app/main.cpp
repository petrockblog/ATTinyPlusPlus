#include <avr/io.h>
#include <mcal.h>
#include <gpio.h>
#include <systemtick.h>
#include <SoftwareSerial.h>
#include <pwm.h>

#include "_cplusplus.h"

int main() {

	uint32_t lastChange;
	uint32_t ledInterval = 500;

	mcal::Systemtick systick = mcal::Systemtick::getInstance();
	systick.start();
	lastChange = systick.getTick();

//	mcal::ATSerial serial = mcal::ATSerial();
//	serial.begin(19200);

	mcal::PWM::open(mcal::PWM::PWMDevice0);
	mcal::PWM::open(mcal::PWM::PWMDevice1);
	mcal::PWM::open(mcal::PWM::PWMDevice2);

	mcal::GPIO gpio = mcal::GPIO::getInstance();
	gpio.open(mcal::GPIO::GPIODevice3);
	gpio.control(mcal::GPIO::GPIODevice3, mcal::GPIO::GPIOCMD_DIR_OUT, NULL);
	gpio.open(mcal::GPIO::GPIODevice0);
	gpio.control(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOCMD_DIR_OUT, NULL);

	while (1) {

		// toggle LED with interval LEDINTERVAL
		if (systick.getTick() - lastChange > ledInterval) {
//			gpio.toggle(mcal::GPIO::GPIODevice3);
//			lastChange = systick.getTick();

//			if (gpio.read(mcal::GPIO::GPIODevice4)==mcal::GPIO::GPIOLEVEL_HIGH) {
//				serial.write("Hello World!\r");
//			}
		}

//		if (serial.bytesAvailable()) {
//			serial.write(serial.read());
//		}
	}
}

