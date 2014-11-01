/*
 * gpio.h
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#ifndef ATTINY85GPIO_H_
#define ATTINY85GPIO_H_

#include <cstdint.h>
#include <cppinterrupt.h>
#include <mcal.h>
#include <stddef.h>

#include <digitalio.h>

namespace mcal {

class ATTiny85GPIO: public DigitalIO {

public:

	virtual void open(uint8_t gpio);
	virtual DIOLevel_e read(uint8_t gpio);
	virtual void write(uint8_t gpio, DIOLevel_e level);
	virtual void toggle(uint8_t gpio);
	virtual void control(uint8_t gpio, GPIOCmd_e cmd, void* params = nullptr);

	static ATTiny85GPIO& getInstance() {
		static ATTiny85GPIO instance = ATTiny85GPIO();
		return instance;
	}

	~ATTiny85GPIO() {
	}

private:

	ATTiny85GPIO();

	static std::uint8_t isOpen;

	typedef void (*PCHandler)(void);
	static PCHandler pinchange_handler;

	class PinChangeInterrupt: public Interrupt {
		ATTiny85GPIO *ownerGPIO;
		void serviceRoutine();

	public:
		PinChangeInterrupt(int interruptNumber, ATTiny85GPIO *ownerGPIO);
	} nestedPinChangeInterrupt;

	friend class ATTiny85GPIO::PinChangeInterrupt;

};

} /* namespace mcal */

#endif /* ATTINY85GPIO_H_ */
