/*
 * Button.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "lib/STL/cstdint.h"
#include "mcal/systemtick.h"

namespace hal {

class Button {
public:

	enum ButtonState_e {
		BUTTON_PRESSED, BUTTON_RELEASED
	};

	struct ButtonInfos_s {
		ButtonState_e state;
		mcal::Systemtick::systick_t eventTime;
	};

	Button(uint8_t channel) :
        channel_(channel), infos_({BUTTON_RELEASED, 0 }) {
	}

	virtual ~Button() {
	}

	virtual ButtonInfos_s getButtonInfos() const = 0;
	virtual ButtonState_e getButtonState() const = 0;
	virtual bool isPressed() const = 0;
	virtual void updateState() = 0;
	virtual mcal::Systemtick::systick_t getLastEventTick() const = 0;

protected:
	uint8_t channel_;
	ButtonInfos_s infos_;

};

}

#endif /* BUTTON_H_ */
