/*
 * gpio_.h
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

	void open(uint8_t gpio);
	DIOLevel_e read(uint8_t gpio) override;
	void write(uint8_t gpio, DIOLevel_e level) override;
	virtual void toggle(uint8_t gpio) override;
	virtual void control(uint8_t gpio, DIOCmd_e cmd, void* params = nullptr) override;

	static ATTiny85DigitalIO& getInstance() {
		static ATTiny85DigitalIO instance = ATTiny85DigitalIO();
		return instance;
	}

	~ATTiny85DigitalIO() = default;

private:

	ATTiny85DigitalIO();

	static std::uint8_t isOpen;

	typedef void (*PCHandler)();
	static PCHandler pinchange_handler;

	class PinChangeInterrupt: public Interrupt {
		ATTiny85DigitalIO *ownerGPIO;
		void serviceRoutine() override;

	public:
		PinChangeInterrupt(int interruptNumber, ATTiny85DigitalIO *ownerGPIO);
	} nestedPinChangeInterrupt;

	friend class ATTiny85DigitalIO::PinChangeInterrupt;

};

} /* namespace mcal */

#endif /* ATTINY85GPIO_H_ */
