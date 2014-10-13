/*
 * gpio.cpp
 *
 *  Created on: 04.10.2014
 *      Author: florian
 */

#include <gpio.h>

namespace mcal {

//GPIO::PCHandler GPIO::pinchange_handler = NULL;

GPIO::GPIO() :
		isOpen(0) {
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

		default:
			result = MCALRES_INVPARAM;
			break;
		}

	}

//	case GPIOCMD_IRQ_PINCHANGE_ENABLE:
//		// turns on pin change interrupts
//		mcal::reg::reg_access<std::uint8_t, std::uint8_t, mcal::reg::gimsk,
//				5U>::bit_set();
//
//		// turn on pin change interrupt on specified pin
//		switch (gpio) {
//		case GPIODevice0:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 0U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice1:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 1U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice2:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 2U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice3:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 3U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice4:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 4U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice5:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 5U>::bit_set();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		default:
//			result = mcal::MCALRES_INVPARAM;
//			break;
//		}
//		break;
//
//	case GPIOCMD_IRQ_PINCHANGE_DISABLE:
//
//		// turn on pin change interrupt on specified pin
//		switch (gpio) {
//		case GPIODevice0:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 0U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice1:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 1U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice2:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 2U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice3:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 3U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice4:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 4U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice5:
//			mcal::reg::reg_access<std::uint8_t, std::uint8_t,
//					mcal::reg::pcmsk, 5U>::bit_clr();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		default:
//			result = mcal::MCALRES_INVPARAM;
//			break;
//		}
//		break;
//
//	case GPIOCMD_IRQ_PINCHANGE_HANDLER:
//		GPIO::pinchange_handler = (PCHandler) params;
//		result = mcal::MCALRES_SUCCESS;
//		break;

	return result;
}

//ISR(SIG_PIN_CHANGE) {
//	(GPIO::pinchange_handler)();
//}

} /* namespace mcal */
