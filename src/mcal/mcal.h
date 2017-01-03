/*
 * mcal.h
 *
 *  Register definitions for ATTiny85
 */

#ifndef MCAL_H_
#define MCAL_H_

#include "lib/STL/cstdint.h"
#include "mcal/register_access.h"

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
#define PINB5   5
#define PINB4   4
#define PINB3   3
#define PINB2   2
#define PINB1   1
#define PINB0   0

typedef register_access<std::uint8_t, std::uint8_t, 0x17U + sfr_offset> ddrb;
#define DDB5    5
#define DDB4    4
#define DDB3    3
#define DDB2    2
#define DDB1    1
#define DDB0    0

typedef register_access<std::uint8_t, std::uint8_t, 0x18U + sfr_offset> portb;
#define PB0 0
#define PB1 1
#define PB2 2
#define PB3 3
#define PB4 4
#define PB5 5

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
#define OCF1A   6
#define OCF1B   5
#define OCF0A   4
#define OCF0B   3
#define TOV1    2
#define TOV0    1

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
#define TSM     7
#define PWM1B   6
#define COM1B1  5
#define COM1B0  4
#define FOC1B   3
#define FOC1A   2
#define PSR1    1
#define PSR0    0

typedef register_access<std::uint8_t, std::uint8_t, 0x39U + sfr_offset> timsk;
#define OCIE1A  6
#define OCIE1B  5
#define OCIE0A  4
#define OCIE0B  3
#define TOIE1   2
#define TOIE0   1

// USI registers
typedef register_access<std::uint8_t, std::uint8_t, 0x0dU + sfr_offset> usicr;
#define USISIE  7
#define USIOIE  6
#define USIWM1  5
#define USIWM0  4
#define USICS1  3
#define USICS0  2
#define USICLK  1
#define USITC   0

typedef register_access<std::uint8_t, std::uint8_t, 0x0eU + sfr_offset> usisr;
#define USISIF  7
#define USIOIF  6
#define USIPF   5
#define USIDC   4
#define USICNT3 3
#define USICNT2 2
#define USICNT1 1
#define USICNT0 0

typedef register_access<std::uint8_t, std::uint8_t, 0x10U + sfr_offset> usibr;
typedef register_access<std::uint8_t, std::uint8_t, 0x0fU + sfr_offset> usidr;

// General interrupt and pin change interrupt registers
typedef register_access<std::uint8_t, std::uint8_t, 0x3BU + sfr_offset> gimsk;
#define INT0    6
#define PCIE    5

typedef register_access<std::uint8_t, std::uint8_t, 0x3fU + sfr_offset> sreg;
typedef register_access<std::uint8_t, std::uint8_t, 0x15U + sfr_offset> pcmsk;

}

namespace bits {

// todo add all other bits here
constexpr uint8_t ocie0a = 4;

}

namespace irq {

#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")

/* Interrupt vectors */
/* Interrupt vector 0 is the reset vector. */
/* External Interrupt 0 */
//#define INT0_vect_num	        1
const std::uint8_t int0_vect_num = 1;

/* Pin change Interrupt Request 0 */
#define PCINT0_vect_num			2

/* Timer/Counter1 Compare Match 1A */
#define TIM1_COMPA_vect_num		3
#define TIMER1_COMPA_vect_num	3

/* Timer/Counter1 Overflow */
#define TIM1_OVF_vect_num		4
#define TIMER1_OVF_vect_num		4

/* Timer/Counter0 Overflow */
#define TIM0_OVF_vect_num		5
#define TIMER0_OVF_vect_num		5

/* EEPROM Ready */
#define EE_RDY_vect_num			6

/* Analog comparator */
#define ANA_COMP_vect_num		7

/* ADC Conversion ready */
#define ADC_vect_num    		8

/* Timer/Counter1 Compare Match B */
#define TIM1_COMPB_vect_num  	9
#define TIMER1_COMPB_vect_num	9

/* Timer/Counter0 Compare Match A */
#define TIM0_COMPA_vect_num		10
#define TIMER0_COMPA_vect_num	10

/* Timer/Counter0 Compare Match B */
#define TIM0_COMPB_vect_num		11
#define TIMER0_COMPB_vect_num	11

/* Watchdog Time-out */
#define WDT_vect_num			12

/* USI START */
#define USI_START_vect_num		13

/* USI Overflow */
#define USI_OVF_vect_num		14

#define _VECTORS_SIZE 30

}

}

#endif /* MCAL_H_ */
