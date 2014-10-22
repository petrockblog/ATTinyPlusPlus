/*
 * adconverter.cpp
 *
 *  Created on: 22.10.2014
 *      Author: florian
 */

#include <adconverter.h>

namespace mcal {

ADConverter::ADConverter() {
	ADC_PrescalerSelect(ADC_PRESCALER);
	ADC_SetVoltageReference(ADC_Reference_External);
	ADC_Enable();
	ADC_StartConversion();
}

uint16_t ADConverter::read(ADCDevice_e device) {
	// todo check SetInputChannel method
//	ADC_SetInputChannel(ADC_Input_ADC1);
	ADMUX &= 0xF0;                    //Clear the older channel that was read
	ADMUX |= device;                //Defines the new ADC channel to be read
	ADC_StartConversion();
	while (ADC_ConversionInProgress()) {
	}
	return ADC_GetDataRegister();
}

}

