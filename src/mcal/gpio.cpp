/*
 * gpio.cpp
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#include "gpio.h"

namespace mcal {

GPIO::PCHandler GPIO::pinchange_handler = NULL;
uint8_t GPIO::isOpen = 0;

GPIO::PinChangeInterrupt::PinChangeInterrupt(int interruptNumber,
		GPIO *ownerGPIO) :
		ownerGPIO(ownerGPIO) {
	record(interruptNumber, this);
}

void GPIO::PinChangeInterrupt::serviceRoutine() {
	(ownerGPIO->pinchange_handler)();
}

GPIO::GPIO() :
		nestedPinChangeInterrupt(2, this) {
}

MCALRes_e GPIO::open(GPIODevice_e gpio) {
	MCALRes_e result = MCALRES_ERROR;

	reg::portb::bit_clr(gpio);
	reg::ddrb::bit_set(gpio);
	isOpen |= (1 << gpio);
	result = MCALRES_SUCCESS;

	return result;
}

MCALRes_e GPIO::close(GPIODevice_e gpio) {
	isOpen &= (0 << gpio);
	return MCALRES_SUCCESS;
}

GPIO::GPIOLevel_e GPIO::read(GPIODevice_e gpio) {
	GPIOLevel_e result = GPIOLEVEL_UNAVAILABLE;

	// todo consider isOpen here?
//	if ((isOpen & (1 << gpio)) > 0) {
	if (reg::pinb::bit_get(gpio)) {
		return GPIO::GPIOLEVEL_HIGH;
	} else {
		return GPIO::GPIOLEVEL_LOW;
	}
//	}
	return result;
}

MCALRes_e GPIO::write(GPIODevice_e gpio, GPIOLevel_e level) {
	MCALRes_e result = MCALRES_ERROR;

	if ((isOpen & (1 << gpio)) > 0) {
		level == GPIOLEVEL_HIGH ?
				reg::portb::bit_set(gpio) : reg::portb::bit_clr(gpio);
		result = MCALRES_SUCCESS;
	}

	return result;
}

MCALRes_e GPIO::toggle(GPIODevice_e gpio) {
	MCALRes_e result = MCALRES_ERROR;

	if ((isOpen & (1 << gpio)) > 0) {
		reg::portb::bit_not(gpio);
		result = MCALRES_SUCCESS;
	}

	return result;
}

MCALRes_e GPIO::control(GPIODevice_e gpio, GPIOCmd_e cmd, void* params) {
	MCALRes_e result = MCALRES_ERROR;

	if ((isOpen & (1 << gpio)) > 0) {

		switch (cmd) {
		case GPIOCMD_DIR_IN:
			reg::ddrb::bit_clr(gpio);
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_DIR_OUT:
			reg::ddrb::bit_set(gpio);
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_ENABLE:
			reg::pcmsk::bit_set(gpio); // Selects pin change interrupt enabled on that pin
			reg::gimsk::bit_set(PCIE); // PCIE: Enables pin change interrupt
			sei();
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_DISABLE:
			reg::pcmsk::bit_clr(gpio); // Selects whether pin change interrupt enabled on that pin.
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_IRQ_PINCHANGE_HANDLER:
			GPIO::pinchange_handler = (PCHandler) params;
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_PULLUP_ENABLE:
			reg::portb::bit_set(gpio);
			result = MCALRES_SUCCESS;
			break;

		case GPIOCMD_PULLUP_DISABLE:
			reg::portb::bit_clr(gpio);
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

