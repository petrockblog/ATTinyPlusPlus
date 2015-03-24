/*
 * LEDController.h
 *
 *  Created on: 27.12.2014
 *      Author: florian
 */

#ifndef LEDCONTROLLER_H_
#define LEDCONTROLLER_H_

#include "LED.h"
#include <stdint.h>
#include "systemtick.h"

namespace app {

class LEDController {
public:
	LEDController(hal::LED& led);
	virtual ~LEDController();

	void update();
	void setPattern(uint8_t index);

private:
	hal::LED& led;
	uint8_t patternIndex;
	uint8_t currentTimeslot;
	uint8_t currentDuration;
	uint8_t currentNumberOfPairs;
	uint8_t currentPair;
	uint8_t currentValue;

	static uint8_t offPattern[];
	static uint8_t bootPattern[];
	static uint8_t onPattern[];
	static uint8_t shutdownPattern[];
	static uint8_t* patterns[];

	void updateCurrentParameters();
};

} /* namespace app */

#endif /* LEDCONTROLLER_H_ */
