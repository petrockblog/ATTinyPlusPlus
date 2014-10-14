#ifndef F_CPU
#define F_CPU 8000000
#endif

#include <util/delay.h>
#include "cstdint.h"

#include "_cplusplus.h"

#include <mcal.h>
#include <gpio.h>
#include <systemtick.h>

int main(void) {

	mcal::reg::portb::reg_set(0xFFU);
	mcal::Systemtick systick = mcal::Systemtick::getInstance();
	systick.getTick();

	mcal::GPIO gpio = mcal::GPIO::getInstance();

	mcal::GPIO::GPIOLevel_e btnlevel;
	gpio.control(mcal::GPIO::GPIODevice1, mcal::GPIO::GPIOCMD_IN, 0);

	while (1) {
		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_HIGH);
		_delay_ms(200);
		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_LOW);
		_delay_ms(200);

		gpio.read(mcal::GPIO::GPIODevice1, btnlevel);
	}
}

