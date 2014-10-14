/*
 * gpio.h
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>
#include <stddef.h>
#include <cstdint.h>
#include <mcal.h>
#include <cppinterrupt.h>

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

	MCALRes_e open(GPIODevice_e gpio);
	MCALRes_e close(GPIODevice_e gpio);
	MCALRes_e read(GPIODevice_e gpio, GPIOLevel_e& target);
	MCALRes_e write(GPIODevice_e gpio, GPIOLevel_e level);
	MCALRes_e control(GPIODevice_e gpio, GPIOCmd_e cmd, void* params);

	static GPIO& getInstance() {
		static GPIO instance;
		return instance;
	}

private:

	std::uint8_t isOpen;

	typedef void (*PCHandler)(void);
	static PCHandler pinchange_handler;

	GPIO();

	class PinChangeInterrupt: public Interrupt {
		GPIO *ownerGPIO;
		void serviceRoutine();

	public:
		PinChangeInterrupt(int interruptNumber, GPIO *ownerGPIO);
	} nestedPinChangeInterrupt;

	friend class GPIO::PinChangeInterrupt;

};

} /* namespace mcal */

#endif /* GPIO_H_ */
