/*
 * gpio.h
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#ifndef ATTINY85GPIO_H_
#define ATTINY85GPIO_H_

#include <stddef.h>

#include "lib/STL/cstdint.h"
#include "mcal/cppinterrupt.h"
#include "mcal/mcal.h"
#include "mcal/digitalio.h"

namespace mcal {

class ATTiny85DigitalIO: public DigitalIO {

public:

	virtual void open(uint8_t gpio);
	virtual DIOLevel_e read(uint8_t gpio);
	virtual void write(uint8_t gpio, DIOLevel_e level);
	virtual void toggle(uint8_t gpio);
	virtual void control(uint8_t gpio, DIOCmd_e cmd, void* params = nullptr);

	static ATTiny85DigitalIO& getInstance() {
		static ATTiny85DigitalIO instance = ATTiny85DigitalIO();
		return instance;
	}

	~ATTiny85DigitalIO() {
	}

private:

	ATTiny85DigitalIO();

	static std::uint8_t isOpen;

	typedef void (*PCHandler)(void);
	static PCHandler pinchange_handler;

	class PinChangeInterrupt: public Interrupt {
		ATTiny85DigitalIO *ownerGPIO;
		void serviceRoutine();

	public:
		PinChangeInterrupt(int interruptNumber, ATTiny85DigitalIO *ownerGPIO);
	} nestedPinChangeInterrupt;

	friend class ATTiny85DigitalIO::PinChangeInterrupt;

};

} /* namespace mcal */

#endif /* ATTINY85GPIO_H_ */
