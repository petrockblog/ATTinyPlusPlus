#ifndef F_CPU
#define F_CPU 8000000
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <cstdint.h>

#include "_cplusplus.h"
#include "gpio.h"
#include "systemtick.h"


int main(void) {
	mcal::GPIO gpio = mcal::GPIO();

	mcal::GPIO::GPIOLevel_e btnlevel;
	gpio.control(mcal::GPIO::GPIODevice1, mcal::GPIO::GPIOCMD_IN, 0);

	// global interrupt enable
	sei();

	while (1) {
		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_HIGH);
		_delay_ms(200);
		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_LOW);
		_delay_ms(200);

		gpio.read(mcal::GPIO::GPIODevice1, btnlevel);
	}
}

