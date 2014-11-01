/*
 * Button.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include <cstdint.h>
#include <systemtick.h>

namespace hal {

class Button {
public:

	typedef enum {
		BUTTON_PRESSED, BUTTON_RELEASED
	} ButtonState_e;

	typedef struct {
		ButtonState_e state;
		mcal::Systemtick::systick_t eventTime;
	} ButtonInfos_s;

	Button(uint8_t channel) :
			channel(channel), infos( { BUTTON_RELEASED, 0 }) {
	}

	virtual ~Button() {
	}

	virtual ButtonInfos_s getButtonInfos() const = 0;
	virtual bool isPressed() const = 0;
	virtual void updateState() = 0;
	virtual mcal::Systemtick::systick_t getLastEventTick() const = 0;

protected:
	uint8_t channel;
	ButtonInfos_s infos;

};

}

#endif /* BUTTON_H_ */
