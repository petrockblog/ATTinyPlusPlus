/*
 * gpio.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <cstdint.h>

namespace mcal {

class DigitalIO {

public:

	typedef enum {
		DIOLEVEL_LOW, DIOLEVEL_HIGH, DIOLEVEL_UNAVAILABLE
	} DIOLevel_e;

	typedef enum {
		DIOCMD_DIR_IN = 0,
		DIOCMD_DIR_OUT,
		DIOCMD_IRQ_PINCHANGE_ENABLE,
		DIOCMD_IRQ_PINCHANGE_DISABLE,
		DIOCMD_IRQ_PINCHANGE_HANDLER,
		DIOCMD_PULLUP_ENABLE,
		DIOCMD_PULLUP_DISABLE
	} GPIOCmd_e;

	virtual ~DigitalIO() {
	}

	virtual void open(uint8_t gpio) = 0;
	virtual DIOLevel_e read(uint8_t gpio) = 0;
	virtual void write(uint8_t gpio, DIOLevel_e level) = 0;
	virtual void toggle(uint8_t gpio) = 0;
	virtual void control(uint8_t gpio, GPIOCmd_e cmd,
			void* params = nullptr) = 0;

};

}

#endif /* GPIO_H_ */
