/*
 * gpio.h
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <cstdint.h>
#include <stddef.h>
#include "avr/interrupt.h"

#include <port_pin.h>

namespace mcal {

class GPIO {

public:
	typedef enum {
		GPIODevice0 = 0,
		GPIODevice1,
		GPIODevice2,
		GPIODevice3,
		GPIODevice4,
		GPIODevice5
	} GPIODevice_e;

	typedef enum {
		GPIOLEVEL_LOW, GPIOLEVEL_HIGH
	} GPIOLevel_e;

	typedef enum {
		GPIOCMD_IN = 0,
		GPIOCMD_OUT,
		GPIOCMD_IRQ_PINCHANGE_ENABLE,
		GPIOCMD_IRQ_PINCHANGE_DISABLE,
		GPIOCMD_IRQ_PINCHANGE_HANDLER
	} GPIOCmd_e;

	// TODO make pinchange_handler private
	typedef void (*PCHandler)(void);
	static PCHandler pinchange_handler;

	static MCALRes_e open(GPIODevice_e gpio);
	static MCALRes_e close(GPIODevice_e gpio);
	static MCALRes_e read(GPIODevice_e gpio, GPIOLevel_e& target);
	static MCALRes_e write(GPIODevice_e gpio, GPIOLevel_e level);
	static MCALRes_e control(GPIODevice_e gpio, GPIOCmd_e cmd, void* params);

private:
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 0> port_b0_type;
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 1> port_b1_type;
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 2> port_b2_type;
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 3> port_b3_type;
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 4> port_b4_type;
	typedef port_pin<std::uint8_t, std::uint8_t, mcal::reg::portb, 5> port_b5_type;

};

} /* namespace mcal */

#endif /* GPIO_H_ */
