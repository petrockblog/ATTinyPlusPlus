/*
 * MomentaryButton.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef MOMENTARYBUTTON_H_
#define MOMENTARYBUTTON_H_

#include <button.h>
#include <digitalio.h>
#include <systemtick_attiny85.h>

namespace hal {

class MomentaryButton: public Button {
public:

	typedef enum {
		ACTIVELEVEL_LOW, ACTIVELEVEL_HIGH
	} activelevel_e;

	static const uint8_t DEBOUNCETIMEINMS = 100;

	MomentaryButton(uint8_t channel, mcal::DigitalIO& gpio,
			activelevel_e pullup);

	virtual Button::ButtonInfos_s getButtonInfos() const;
	virtual ButtonState_e getButtonState() const;
	virtual bool isPressed() const;
	virtual void updateState();
	virtual mcal::Systemtick::systick_t getLastEventTick() const;

private:
	mcal::DigitalIO &gpio;
	mcal::DigitalIO::DIOLevel_e logicHigh;
	mcal::DigitalIO::DIOLevel_e logicLow;

};

} /* namespace hal */

#endif /* MOMENTARYBUTTON_H_ */
