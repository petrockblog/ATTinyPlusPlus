///*
// * gpio.cpp
// *
// *  Created on: 04.10.2014
// *      Author: florian
// */
//
//#include <gpio.h>
//
//namespace mcal {
//
//GPIO::PCHandler GPIO::pinchange_handler = NULL;
//
//MCALRes_e GPIO::open(GPIODevice_e gpio) {
//	MCALRes_e result = mcal::MCALRES_ERROR;
//	switch (gpio) {
//	case GPIODevice0:
//		port_b0_type::set_pin_low();
//		port_b0_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice1:
//		port_b1_type::set_pin_low();
//		port_b1_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice2:
//		port_b2_type::set_pin_low();
//		port_b2_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice3:
//		port_b3_type::set_pin_low();
//		port_b3_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice4:
//		port_b4_type::set_pin_low();
//		port_b4_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice5:
//		port_b5_type::set_pin_low();
//		port_b5_type::set_direction_output();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	default:
//		result = mcal::MCALRES_INVPARAM;
//		break;
//	}
//	return result;
//}
//
//MCALRes_e GPIO::close(GPIODevice_e gpio) {
//	return MCALRES_SUCCESS;
//}
//
//MCALRes_e GPIO::read(GPIODevice_e gpio, GPIOLevel_e& target) {
//	MCALRes_e result = mcal::MCALRES_ERROR;
//	switch (gpio) {
//	case GPIODevice0:
//		port_b0_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice1:
//		port_b1_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice2:
//		port_b2_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice3:
//		port_b3_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice4:
//		port_b4_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice5:
//		port_b5_type::read_input_value() ? target = GPIOLEVEL_HIGH : target =
//													GPIOLEVEL_LOW;
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	default:
//		result = mcal::MCALRES_INVPARAM;
//		break;
//	}
//	return result;
//}
//
//MCALRes_e GPIO::write(GPIODevice_e gpio, GPIOLevel_e level) {
//	MCALRes_e result = mcal::MCALRES_ERROR;
//	switch (gpio) {
//	case GPIODevice0:
//		(level == GPIOLEVEL_LOW) ?
//				port_b0_type::set_pin_low() : port_b0_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice1:
//		(level == GPIOLEVEL_LOW) ?
//				port_b1_type::set_pin_low() : port_b1_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice2:
//		(level == GPIOLEVEL_LOW) ?
//				port_b2_type::set_pin_low() : port_b2_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice3:
//		(level == GPIOLEVEL_LOW) ?
//				port_b3_type::set_pin_low() : port_b3_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice4:
//		(level == GPIOLEVEL_LOW) ?
//				port_b4_type::set_pin_low() : port_b4_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	case GPIODevice5:
//		(level == GPIOLEVEL_LOW) ?
//				port_b5_type::set_pin_low() : port_b5_type::set_pin_high();
//		result = mcal::MCALRES_SUCCESS;
//		break;
//	default:
//		result = mcal::MCALRES_INVPARAM;
//		break;
//	}
//
//	return result;
//}
//
//MCALRes_e GPIO::control(GPIODevice_e gpio, GPIOCmd_e cmd, void* params) {
//	MCALRes_e result = MCALRES_ERROR;
//
//	// TODO return result for each command
//	switch (cmd) {
//	case GPIOCMD_IN:
//		switch (gpio) {
//		case GPIODevice0:
//			port_b0_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice1:
//			port_b1_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice2:
//			port_b2_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice3:
//			port_b3_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice4:
//			port_b4_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice5:
//			port_b5_type::set_direction_input();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		default:
//			result = mcal::MCALRES_INVPARAM;
//			break;
//		}
//		break;
//
//	case GPIOCMD_OUT:
//		switch (gpio) {
//		case GPIODevice0:
//			port_b0_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice1:
//			port_b1_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice2:
//			port_b2_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice3:
//			port_b3_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice4:
//			port_b4_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		case GPIODevice5:
//			port_b5_type::set_direction_output();
//			result = mcal::MCALRES_SUCCESS;
//			break;
//		default:
//			result = mcal::MCALRES_INVPARAM;
//			break;
//		}
//		break;
//
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
//
//	default:
//		result = MCALRES_INVPARAM;
//		break;
//	}
//
//	// enable interrupts
//	sei();
//
//	return result;
//}
//
////ISR(SIG_PIN_CHANGE) {
////	(GPIO::pinchange_handler)();
////}
//
//} /* namespace mcal */
