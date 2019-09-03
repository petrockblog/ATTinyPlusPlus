/*
 * Led.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_HAL_LED_H_
#define ATTINYPLUSPLUS_SRC_HAL_LED_H_

#include "lib/STL/cstdint.h"
#include "mcal/digitalio.h"

namespace hal {

class Led {

public:

	enum LedLevel{
		LED_LOW, LED_HIGH
	};

	explicit Led(uint8_t channel) :
        channel_(channel) {
	}

	virtual ~Led() = default;

	virtual void Set(LedLevel level) = 0;
	virtual void Toggle() = 0;

protected:
	uint8_t channel_;

};

} /* namespace hal */

#endif /*ATTINYPLUSPLUS_SRC_HAL_LED_H_*/
