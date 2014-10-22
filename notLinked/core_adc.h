/*==============================================================================

 core_adc.h - Veneer for the analog-to-digital converter.

 Copyright 2010 Rowdy Dog Software.

 This file is part of Arduino-Tiny.

 Arduino-Tiny is free software: you can redistribute it and/or modify it
 under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation, either version 3 of the License, or (at your
 option) any later version.

 Arduino-Tiny is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

 ==============================================================================*/

#ifndef core_adc_h
#define core_adc_h

#include <avr/io.h>
//#include <binary.h>
//
//#include "core_build_options.h"
//#include "core_macros.h"

/*=============================================================================
 Some common things
 =============================================================================*/

/*
 From the '84 and '85 datasheets... By default, the successive approximation
 circuitry requires an input clock frequency between 50 kHz and 200 kHz to
 get maximum resolution.
 */
#if F_CPU == 16000000
// 16 MHz / 128 = 125 KHz
#define ADC_ARDUINO_PRESCALER   ADC_Prescaler_Value_128
#elif F_CPU == 8000000
// 8 MHz / 64 = 125 KHz
#define ADC_ARDUINO_PRESCALER   ADC_Prescaler_Value_64
#elif F_CPU == 1000000
// 1 MHz / 8 = 125 KHz
#define ADC_ARDUINO_PRESCALER   ADC_Prescaler_Value_8
#else
#error Add an entry for the selected processor speed.
#endif

typedef enum {
	ADC_Prescaler_Value_2 = B001,
	ADC_Prescaler_Value_4 = B010,
	ADC_Prescaler_Value_8 = B011,
	ADC_Prescaler_Value_16 = B100,
	ADC_Prescaler_Value_32 = B101,
	ADC_Prescaler_Value_64 = B110,
	ADC_Prescaler_Value_128 = B111,
	ADC_Prescaler_Index_1 = B001,
	ADC_Prescaler_Index_2 = B010,
	ADC_Prescaler_Index_3 = B011,
	ADC_Prescaler_Index_4 = B100,
	ADC_Prescaler_Index_5 = B101,
	ADC_Prescaler_Index_6 = B110,
	ADC_Prescaler_Index_7 = B111
} adc_ps_t;

__attribute__((always_inline)) static inline void ADC_PrescalerSelect(
		adc_ps_t ps) {
	ADCSRA = (ADCSRA & ~MASK3(ADPS2, ADPS1, ADPS0)) | (ps << ADPS0);
}

__attribute__((always_inline)) static inline void ADC_Enable(void) {
	ADCSRA |= MASK1( ADEN);
}

/*=============================================================================
 Veneer for the ATtiny84 ADC
 =============================================================================*/

/*=============================================================================
 Veneer for the ATtiny85 ADC
 =============================================================================*/

typedef enum {
	ADC_Reference_VCC = B000,
	ADC_Reference_External = B001,
	ADC_Reference_Internal_1p1 = B010,
	ADC_Reference_Reserved_1 = B011,
	ADC_Reference_Internal_2p56 = B110,
	ADC_Reference_Internal_2p56_Bypass_Capacitor = B111
} adc_vr_t;

__attribute__((always_inline)) static inline void ADC_SetVoltageReference(
		adc_vr_t vr) {
	ADMUX = (ADMUX & ~MASK3(REFS1, REFS0, REFS2))
			| (((vr & B011) >> 0) << REFS0) | (((vr & B100) >> 2) << REFS2);
}

typedef enum {
	ADC_Input_ADC0 = B0000,
	ADC_Input_ADC1 = B0001,
	ADC_Input_ADC2 = B0010,
	ADC_Input_ADC3 = B0011,

	ADC_Input_Pos2_Neg2_1x = B0100,  // For offset calibration, only.
	ADC_Input_Pos2_Neg2_20x = B0101,  // For offset calibration, only.
	ADC_Input_Pos2_Neg3_1x = B0110,
	ADC_Input_Pos2_Neg3_20x = B0111,
	ADC_Input_Pos0_Neg0_1x = B1000,
	ADC_Input_Pos0_Neg0_20x = B1001,
	ADC_Input_Pos0_Neg1_1x = B1010,
	ADC_Input_Pos0_Neg1_20x = B1011,

	ADC_Input_VBG = B1100,
	ADC_Input_GND = B1101,
	ADC_Input_NA = B1110,
	ADC_Input_ADC4 = B1111   // For temperature sensor.
} adc_ic_t;

__attribute__((always_inline)) static inline void ADC_SetInputChannel(
		adc_ic_t ic) {
	ADMUX = (ADMUX & ~MASK4(MUX3, MUX2, MUX1, MUX0)) | (ic << MUX0);
}

__attribute__((always_inline)) static inline void ADC_StartConversion(void) {
	ADCSRA |= MASK1( ADSC);
}

__attribute__((always_inline))  static inline uint8_t ADC_ConversionInProgress(
		void) {
	return ((ADCSRA & (1 << ADSC)) != 0);
}

__attribute__((always_inline))  static inline uint16_t ADC_GetDataRegister(void) {
	return ( ADC);
}

#endif