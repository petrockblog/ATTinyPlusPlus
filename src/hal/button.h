/*
 * Button.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef ATTINYPLUSPLUS_SRC_HAL_BUTTON_H_
#define ATTINYPLUSPLUS_SRC_HAL_BUTTON_H_

#include "lib/STL/cstdint.h"
#include "mcal/systemtick.h"

namespace hal {

class Button {
public:

	enum ButtonState {
		BUTTON_PRESSED, BUTTON_RELEASED
	};

	struct ButtonInfos {
		ButtonState state_;
		mcal::Systemtick::systick_t event_time_;
	};

	explicit Button(uint8_t channel) :
        channel_(channel), infos_({BUTTON_RELEASED, 0 }) {
	}

	virtual ~Button() = default;

	virtual ButtonInfos GetButtonInfos() const = 0;
	virtual ButtonState GetButtonState() const = 0;
	virtual bool IsPressed() const = 0;
	virtual void UpdateState() = 0;
//	virtual mcal::Systemtick::systick_t GetLastEventTick() const = 0;

protected:
	uint8_t channel_;
	ButtonInfos infos_;

};

}

#endif /*ATTINYPLUSPLUS_SRC_HAL_BUTTON_H_*/
