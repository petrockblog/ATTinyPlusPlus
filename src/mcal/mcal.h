/*
 * mcal.h
 *
 *  Register definitions for ATTiny85
 */

#ifndef MCAL_H_
#define MCAL_H_

#include <avr/io.h>
#include <cstdint.h>
#include <register_access.h>

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
typedef register_access<std::uint8_t, std::uint8_t, 0x16U + sfr_offset> pinb;
typedef register_access<std::uint8_t, std::uint8_t, 0x17U + sfr_offset> ddrb;
typedef register_access<std::uint8_t, std::uint8_t, 0x18U + sfr_offset> portb;

// Timer registers
typedef register_access<std::uint8_t, std::uint8_t, 0x38U + sfr_offset> tifr0;
typedef register_access<std::uint8_t, std::uint8_t, 0x2AU + sfr_offset> tccr0a;
typedef register_access<std::uint8_t, std::uint8_t, 0x33U + sfr_offset> tccr0b;
typedef register_access<std::uint8_t, std::uint8_t, 0x30U + sfr_offset> tccr1;
typedef register_access<std::uint8_t, std::uint8_t, 0x32U + sfr_offset> tcnt0;
typedef register_access<std::uint8_t, std::uint8_t, 0x2FU + sfr_offset> tcnt1;
typedef register_access<std::uint8_t, std::uint8_t, 0x29U + sfr_offset> ocr0a;

typedef register_access<std::uint8_t, std::uint8_t, 0x39U + sfr_offset> timsk;
#define OCIE1A  6
#define OCIE1B  5
#define OCIE0A  4
#define OCIE0B  3
#define TOIE1   2
#define TOIE0   1

// USI registers
typedef register_access<std::uint8_t, std::uint8_t, 0x10U + sfr_offset> usibr;
typedef register_access<std::uint8_t, std::uint8_t, 0x0dU + sfr_offset> usicr;
typedef register_access<std::uint8_t, std::uint8_t, 0x0fU + sfr_offset> usidr;

// General interrupt and pin change interrupt registers
typedef register_access<std::uint8_t, std::uint8_t, 0x3BU + sfr_offset> gimsk;
#define INT0    6
#define PCIE    5

typedef register_access<std::uint8_t, std::uint8_t, 0x15U + sfr_offset> pcmsk;

}
}

#endif /* MCAL_H_ */
