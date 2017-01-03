/*
 * LED.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef LED_H_
#define LED_H_

#include "lib/STL/cstdint.h"
#include "mcal/digitalio.h"

namespace hal {

class LED {

public:

	typedef enum {
		LED_LOW, LED_HIGH
	} LEDLevel_e;

	LED(uint8_t channel) :
			channel(channel) {
	}

	virtual ~LED() {
	}

	virtual void set(LEDLevel_e level) = 0;
	virtual void toggle(void) = 0;

protected:
	uint8_t channel;

};

} /* namespace hal */

#endif /* LED_H_ */
