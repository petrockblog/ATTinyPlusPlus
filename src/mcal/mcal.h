/*
 * mcal.h
 *
 *  Register definitions for ATTiny85
 */

#ifndef MCAL_H_
#define MCAL_H_

#include <cstdint.h>

namespace mcal {

typedef enum {
	MCALRES_SUCCESS, MCALRES_ERROR, MCALRES_INVPARAM
} MCALRes_e;

namespace reg {
constexpr std::uint8_t sfr_offset = 0x20U;

// Bit-position values
constexpr std::uint8_t bval0 = 1U;
constexpr std::uint8_t bval1 = 1U << 1U;
constexpr std::uint8_t bval2 = 1U << 2U;
constexpr std::uint8_t bval3 = 1U << 3U;
constexpr std::uint8_t bval4 = 1U << 4U;
constexpr std::uint8_t bval5 = 1U << 5U;
constexpr std::uint8_t bval6 = 1U << 6U;
constexpr std::uint8_t bval7 = 1U << 7U;

// Port registers
constexpr std::uint8_t ddrb = 0x17U + sfr_offset;
constexpr std::uint8_t portb = 0x18U + sfr_offset;

// Timer registers
constexpr std::uint8_t tifr0 = 0x38U + sfr_offset;
constexpr std::uint8_t tccr0a = 0x2AU + sfr_offset;
constexpr std::uint8_t tccr0b = 0x33U + sfr_offset;
constexpr std::uint8_t tcnt0 = 0x32U + sfr_offset;
constexpr std::uint8_t ocr0a = 0x29U + sfr_offset;
constexpr std::uint8_t timsk = 0x39U + sfr_offset;

// USI registers
constexpr std::uint8_t usibr = 0x10U + sfr_offset;
constexpr std::uint8_t usicr = 0x0dU + sfr_offset;
constexpr std::uint8_t usidr = 0x0fU + sfr_offset;

// General interrupt and pin change interrupt registers
constexpr std::uint8_t gimsk = 0x3BU + sfr_offset;
constexpr std::uint8_t pcmsk = 0x15U + sfr_offset;

template<typename register_address_type, typename register_value_type,
		const register_address_type address, const register_value_type value =
				static_cast<register_value_type>(0)>
struct register_access {
	static void reg_set() {
		*reinterpret_cast<volatile register_value_type*>(address) = value;
	}
	static void reg_and() {
		*reinterpret_cast<volatile register_value_type*>(address) &= value;
	}
	static void reg_or() {
		*reinterpret_cast<volatile register_value_type*>(address) |= value;
	}
	static void reg_not() {
		*reinterpret_cast<volatile register_value_type*>(address) &=
				register_value_type(~value);
	}
	static register_value_type reg_get() {
		return *reinterpret_cast<volatile register_value_type*>(address);
	}

	template<const register_value_type mask_value>
	static void reg_msk() {
		*reinterpret_cast<volatile register_value_type*>(address) =
				register_value_type(
						register_value_type(
								reg_get() & register_value_type(~mask_value))
								| register_value_type(value & mask_value));
	}

	static void bit_set() {
		*reinterpret_cast<volatile register_value_type*>(address) |=
				static_cast<register_value_type>(1UL << value);
	}
	static void bit_clr() {
		*reinterpret_cast<volatile register_value_type*>(address) &=
				static_cast<register_value_type>(~static_cast<register_value_type>(1UL
						<< value));
	}
	static void bit_not() {
		*reinterpret_cast<volatile register_value_type*>(address) ^=
				static_cast<register_value_type>(1UL << value);
	}
	static bool bit_get() {
		return (static_cast<volatile register_value_type>(reg_get()
				& static_cast<register_value_type>(1UL << value))
				!= static_cast<register_value_type>(0U));
	}
};
}
}

#endif /* MCAL_H_ */
