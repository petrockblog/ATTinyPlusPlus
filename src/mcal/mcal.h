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

// ADC registers
typedef register_access<std::uint16_t, std::uint16_t, 0x04U + sfr_offset> adc;
typedef register_access<std::uint8_t, std::uint8_t, 0x04U + sfr_offset> adcl;
typedef register_access<std::uint8_t, std::uint8_t, 0x05U + sfr_offset> adch;

typedef register_access<std::uint8_t, std::uint8_t, 0x06U + sfr_offset> adcsra;
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADPS2   2
#define ADPS1   1
#define ADPS0   0

typedef register_access<std::uint8_t, std::uint8_t, 0x07U + sfr_offset> admux;
#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define REFS2   4
#define MUX3    3
#define MUX2    2
#define MUX1    1
#define MUX0    0

// Timer registers
typedef register_access<std::uint8_t, std::uint8_t, 0x38U + sfr_offset> tifr;
typedef register_access<std::uint8_t, std::uint8_t, 0x2AU + sfr_offset> tccr0a;
#define COM0A1  7
#define COM0A0  6
#define COM0B1  5
#define COM0B0  4
#define WGM01   1
#define WGM00   0

typedef register_access<std::uint8_t, std::uint8_t, 0x33U + sfr_offset> tccr0b;
#define FOC0A   7
#define FOC0B   6
#define WGM02   3
#define CS02    2
#define CS01    1
#define CS00    0

typedef register_access<std::uint8_t, std::uint8_t, 0x30U + sfr_offset> tccr1;
#define CTC1    7
#define PWM1A   6
#define COM1A1  5
#define COM1A0  4
#define CS13    3
#define CS12    2
#define CS11    1
#define CS10    0

typedef register_access<std::uint8_t, std::uint8_t, 0x32U + sfr_offset> tcnt0;
typedef register_access<std::uint8_t, std::uint8_t, 0x2FU + sfr_offset> tcnt1;
typedef register_access<std::uint8_t, std::uint8_t, 0x28U + sfr_offset> ocr0b;
typedef register_access<std::uint8_t, std::uint8_t, 0x29U + sfr_offset> ocr0a;
typedef register_access<std::uint8_t, std::uint8_t, 0x2EU + sfr_offset> ocr1a;
typedef register_access<std::uint8_t, std::uint8_t, 0x2BU + sfr_offset> ocr1b;
typedef register_access<std::uint8_t, std::uint8_t, 0x2DU + sfr_offset> ocr1c;
typedef register_access<std::uint8_t, std::uint8_t, 0x2CU + sfr_offset> gtccr;

typedef register_access<std::uint8_t, std::uint8_t, 0x39U + sfr_offset> timsk;

// USI registers
typedef register_access<std::uint8_t, std::uint8_t, 0x10U + sfr_offset> usibr;
typedef register_access<std::uint8_t, std::uint8_t, 0x0dU + sfr_offset> usicr;
typedef register_access<std::uint8_t, std::uint8_t, 0x0fU + sfr_offset> usidr;

// General interrupt and pin change interrupt registers
typedef register_access<std::uint8_t, std::uint8_t, 0x3BU + sfr_offset> gimsk;
typedef register_access<std::uint8_t, std::uint8_t, 0x3fU + sfr_offset> sreg;
typedef register_access<std::uint8_t, std::uint8_t, 0x15U + sfr_offset> pcmsk;

}
}

#endif /* MCAL_H_ */
