/*
 * adc.h
 *
 *  Created on: 22.10.2014
 *      Author: florian
 */

#ifndef ADC_H_
#define ADC_H_

#include "mcal/mcal.h"

/*
 From the '84 and '85 datasheets... By default, the successive approximation
 circuitry requires an input clock frequency between 50 kHz and 200 kHz to
 get maximum resolution.
 */
#if F_CPU == 16000000
// 16 MHz / 128 = 125 KHz
#define ADC_PRESCALER   ADC_Prescaler_Value_128
#elif F_CPU == 8000000
// 8 MHz / 64 = 125 KHz
#define ADC_PRESCALER   ADC_Prescaler_Value_64
#elif F_CPU == 1000000
// 1 MHz / 8 = 125 KHz
#define ADC_PRESCALER   ADC_Prescaler_Value_8
#else
#error Add an entry for the selected processor speed.
#endif

namespace mcal {

class ADConverter {
public:

	typedef enum {
		ADC_Prescaler_Value_2 = 0x01,
		ADC_Prescaler_Value_4 = 0x02,
		ADC_Prescaler_Value_8 = 0x03,
		ADC_Prescaler_Value_16 = 0x04,
		ADC_Prescaler_Value_32 = 0x05,
		ADC_Prescaler_Value_64 = 0x06,
		ADC_Prescaler_Value_128 = 0x07,
		ADC_Prescaler_Index_1 = 0x01,
		ADC_Prescaler_Index_2 = 0x02,
		ADC_Prescaler_Index_3 = 0x03,
		ADC_Prescaler_Index_4 = 0x04,
		ADC_Prescaler_Index_5 = 0x05,
		ADC_Prescaler_Index_6 = 0x06,
		ADC_Prescaler_Index_7 = 0x07
	} adc_ps_t;

	typedef enum {
		ADC_Reference_VCC = 0x00,
		ADC_Reference_External = 0x01,
		ADC_Reference_Internal_1p1 = 0x02,
		ADC_Reference_Reserved_1 = 0x03,
		ADC_Reference_Internal_2p56 = 0x04,
		ADC_Reference_Internal_2p56_Bypass_Capacitor = 0x05
	} adc_vr_t;

	typedef enum {
		ADC_Input_ADC0 = 0x00,
		ADC_Input_ADC1 = 0x01,
		ADC_Input_ADC2 = 0x02,
		ADC_Input_ADC3 = 0x03,

		ADC_Input_Pos2_Neg2_1x = 0x04,  // For offset calibration, only.
		ADC_Input_Pos2_Neg2_20x = 0x05,  // For offset calibration, only.
		ADC_Input_Pos2_Neg3_1x = 0x06,
		ADC_Input_Pos2_Neg3_20x = 0x07,
		ADC_Input_Pos0_Neg0_1x = 0x08,
		ADC_Input_Pos0_Neg0_20x = 0x09,
		ADC_Input_Pos0_Neg1_1x = 0x0A,
		ADC_Input_Pos0_Neg1_20x = 0x0B,

		ADC_Input_VBG = 0x0C,
		ADC_Input_GND = 0x0D,
		ADC_Input_NA = 0x0E,
		ADC_Input_ADC4 = 0x0F  // For temperature sensor.
	} adc_ic_t;

	typedef enum {
		ADCDevice0 = 0,
		ADCDevice1,
		ADCDevice2,
		ADCDevice3
	} ADCDevice_e;

	uint16_t read(ADCDevice_e device);

	static ADConverter& getInstance() {
		static ADConverter instance;
		return instance;
	}

private:

	ADConverter();
	__attribute__((always_inline)) static inline void ADC_SetVoltageReference(
			adc_vr_t vr) {
//		ADMUX = (ADMUX & ~MASK3(REFS1, REFS0, REFS2))
//				| (((vr & B011) >> 0) << REFS0) | (((vr & B100) >> 2) << REFS2);
		reg::admux::bit_clr(REFS0);
		reg::admux::bit_clr(REFS1);
		reg::admux::bit_clr(REFS2);
		reg::admux::bit_set(((vr & 0x03) >> 0) << REFS0);
		reg::admux::bit_set(((vr & 0x04) >> 2) << REFS2);
	}

	__attribute__((always_inline)) static inline void ADC_PrescalerSelect(
			adc_ps_t ps) {
//		ADCSRA = (ADCSRA & ~MASK3(ADPS2, ADPS1, ADPS0)) | (ps << ADPS0);
		reg::adcsra::bit_clr(ADPS0);
		reg::adcsra::bit_clr(ADPS1);
		reg::adcsra::bit_clr(ADPS2);
		reg::adcsra::bit_set(ps << ADPS0);
	}

	__attribute__((always_inline)) static inline void ADC_Enable(void) {
//		ADCSRA |= MASK1(ADEN);
		reg::adcsra::bit_set(ADEN);
	}

	__attribute__((always_inline)) static inline void ADC_SetInputChannel(
			adc_ic_t ic) {
//		ADMUX = (ADMUX & ~MASK4(MUX3, MUX2, MUX1, MUX0)) | (ic << MUX0);
		reg::admux::reg_and(0xF0);                    //Clear the older channel that was read
		reg::admux::bit_set(ic);

//		ADMUX &= 0xF0;                    //Clear the older channel that was read
//		ADMUX |= device;                //Defines the new ADC channel to be read

	}

	__attribute__((always_inline)) static inline void ADC_StartConversion(
			void) {
//		ADCSRA |= MASK1(ADSC);
		reg::adcsra::bit_set(ADSC);
	}

	__attribute__((always_inline)) static inline uint8_t ADC_ConversionInProgress(
			void) {
//		return ((ADCSRA & (1 << ADSC)) != 0);
		return reg::adcsra::bit_get(ADSC);
	}

	__attribute__((always_inline)) static inline uint16_t ADC_GetDataRegister(
			void) {
//		return (ADC);
		return reg::adc::reg_get();
	}

};

}

#endif /* ADC_H_ */
