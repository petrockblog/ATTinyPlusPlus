#ifndef F_CPU
#define F_CPU 8000000
#endif

//#include <avr/io.h>
#include <util/delay.h>
#include <cstdint.h>

#include "_cplusplus.h"

#include <mcal.h>
//#include "gpio.h"
#include "systemtick.h"

int main(void) {

	mcal::reg::portb::reg_set(0xFFU);
	mcal::Systemtick systick = mcal::Systemtick::getInstance();
	systick.getTick();


//	mcal::GPIO gpio = mcal::GPIO();
//
//	mcal::GPIO::GPIOLevel_e btnlevel;
//	gpio.control(mcal::GPIO::GPIODevice1, mcal::GPIO::GPIOCMD_IN, 0);

//	mcal::Systemtick timer0(mcal::reg::tccr0b,
//		     mcal::reg::tccr0b | (1 << CS00) & ~(1 << CS01) | (1 << CS02),
//		     TIMSK,
//		     TIMSK | (1 << TOIE0),
//		     TIMER0_OVF_vect_num);

	while (1) {
//		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_HIGH);
//		_delay_ms(200);
//		gpio.write(mcal::GPIO::GPIODevice0, mcal::GPIO::GPIOLEVEL_LOW);
//		_delay_ms(200);
//
//		gpio.read(mcal::GPIO::GPIODevice1, btnlevel);
	}
}

