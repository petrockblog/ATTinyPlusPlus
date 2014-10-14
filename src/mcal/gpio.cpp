/*
 * gpio.cpp
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#include "gpio.h"

namespace mcal {

GPIO::PCHandler GPIO::pinchange_handler = NULL;

GPIO::PinChangeInterrupt::PinChangeInterrupt(int interruptNumber,
		GPIO *ownerGPIO) :
		ownerGPIO(ownerGPIO) {
	record(interruptNumber, this);
}

void GPIO::PinChangeInterrupt::serviceRoutine() {
	(pinchange_handler)();
}

GPIO::GPIO() :
		isOpen(0), nestedPinChangeInterrupt(PCINT0_vect_num, this) {
}

MCALRes_e GPIO::open(GPIODevice_e gpio) {
	MCALRes_e result = MCALRES_ERROR;

	if ((gpio < GPIODevice0) | (gpio > GPIODevice5)) {
		result = MCALRES_INVPARAM;
	} else {
		reg::portb::bit_clr(gpio);
		reg::ddrb::bit_set(gpio);
		isOpen |= (1 << gpio);
		result = MCALRES_SUCCESS;
	}

	return result;
}

MCALRes_e GPIO::close(GPIODevice_e gpio) {
	isOpen &= (0 << gpio);
	return MCALRES_SUCCESS;
}

MCALRes_e GPIO::read(GPIODevice_e gpio, GPIOLevel_e& target) {
	MCALRes_e result = MCALRES_ERROR;

	if ((gpio < GPIODevice0) | (gpio > GPIODevice5)) {
		result = MCALRES_INVPARAM;
	} else if (~(isOpen & (1 << gpio))) {
		result = MCALRES_ERROR;
	} else {
		reg::pinb::bit_get(gpio) ? target = GPIOLEVEL_HIGH : target =
											GPIOLEVEL_LOW;
		result = MCALRES_SUCCESS;
	}

	return result;
}

MCALRes_e GPIO::write(GPIODevice_e gpio, GPIOLevel_e level) {
	MCALRes_e result = MCALRES_ERROR;

	if ((gpio < GPIODevice0) | (gpio > GPIODevice5)) {
		result = MCALRES_INVPARAM;
	} else if (~(isOpen & (1 << gpio))) {
		result = MCALRES_ERROR;
	} else {
		reg::portb::bit_set(gpio);
		result = MCALRES_SUCCESS;
	}

	return result;
}

MCALRes_e GPIO::control(GPIODevice_e gpio, GPIOCmd_e cmd, void* params) {
	MCALRes_e result = MCALRES_ERROR;

	if ((gpio < GPIODevice0) | (gpio > GPIODevice5)) {
		result = MCALRES_INVPARAM;
	} else if (~(isOpen & (1 << gpio))) {
		result = MCALRES_ERROR;
	} else {

		switch (cmd) {
		case GPIOCMD_IN:
			reg::ddrb::bit_clr(gpio);
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_OUT:
			reg::ddrb::bit_set(gpio);
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_ENABLE:
			reg::gimsk::bit_set(INT0); // INT0: Enables interrupt on INT0
			reg::gimsk::bit_set(PCIE); // PCIE: Enables pin change interrupt
			reg::pcmsk::bit_set(gpio); // Selects whether pin change interrupt enabled on that pin.
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_DISABLE:
			reg::pcmsk::bit_clr(gpio); // Selects whether pin change interrupt enabled on that pin.
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_HANDLER:
			GPIO::pinchange_handler = (PCHandler) params;
			result = mcal::MCALRES_SUCCESS;
			break;

		default:
			result = MCALRES_INVPARAM;
			break;
		}

	}

	return result;
}

} /* namespace mcal */

