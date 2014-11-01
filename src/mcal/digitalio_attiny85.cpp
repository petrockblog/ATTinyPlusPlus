/*
 * gpio.cpp
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#include "digitalio_attiny85.h"

namespace mcal {

ATTiny85GPIO::PCHandler ATTiny85GPIO::pinchange_handler = NULL;
uint8_t ATTiny85GPIO::isOpen = 0;

ATTiny85GPIO::PinChangeInterrupt::PinChangeInterrupt(int interruptNumber,
		ATTiny85GPIO *ownerGPIO) :
		ownerGPIO(ownerGPIO) {
	record(interruptNumber, this);
}

void ATTiny85GPIO::PinChangeInterrupt::serviceRoutine() {
	(ownerGPIO->pinchange_handler)();
}

ATTiny85GPIO::ATTiny85GPIO() :
		nestedPinChangeInterrupt(2, this) {
}

void ATTiny85GPIO::open(uint8_t gpio) {
	reg::portb::bit_clr(gpio);  // set output to low level
	reg::ddrb::bit_set(gpio);  // initialize as output
	isOpen |= (1 << gpio);
}

ATTiny85GPIO::DIOLevel_e ATTiny85GPIO::read(uint8_t gpio) {
	if (reg::pinb::bit_get(gpio)) {
		return ATTiny85GPIO::DIOLEVEL_HIGH;
	} else {
		return ATTiny85GPIO::DIOLEVEL_LOW;
	}
}

void ATTiny85GPIO::write(uint8_t gpio, DIOLevel_e level) {
	if ((isOpen & (1 << gpio)) > 0) {
		level == DIOLEVEL_HIGH ?
				reg::portb::bit_set(gpio) : reg::portb::bit_clr(gpio);
	}
}

void ATTiny85GPIO::toggle(uint8_t gpio) {
	if ((isOpen & (1 << gpio)) > 0) {
		reg::portb::bit_not(gpio);
	}
}

void ATTiny85GPIO::control(uint8_t gpio, GPIOCmd_e cmd, void* params) {
	if ((isOpen & (1 << gpio)) > 0) {

		switch (cmd) {
		case DIOCMD_DIR_IN:
			reg::ddrb::bit_clr(gpio);
			break;

		case DIOCMD_DIR_OUT:
			reg::ddrb::bit_set(gpio);
			break;

		case DIOCMD_IRQ_PINCHANGE_ENABLE:
			reg::pcmsk::bit_set(gpio); // Selects pin change interrupt enabled on that pin
			reg::gimsk::bit_set(PCIE); // PCIE: Enables pin change interrupt
			sei();
			break;

		case DIOCMD_IRQ_PINCHANGE_DISABLE:
			reg::pcmsk::bit_clr(gpio); // Selects whether pin change interrupt enabled on that pin.
			break;

		case DIOCMD_IRQ_PINCHANGE_HANDLER:
			if (params != nullptr) {
				ATTiny85GPIO::pinchange_handler = (PCHandler) params;
			}
			break;

		case DIOCMD_PULLUP_ENABLE:
			reg::portb::bit_set(gpio);
			break;

		case DIOCMD_PULLUP_DISABLE:
			reg::portb::bit_clr(gpio);
			break;

		default:
			break;
		}

	}
}

} /* namespace mcal */

