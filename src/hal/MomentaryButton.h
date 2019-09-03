/*
 * MomentaryButton.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef MOMENTARYBUTTON_H_
#define MOMENTARYBUTTON_H_

#include <stdint.h>
#include "hal/button.h"
#include "mcal/digitalio.h"
#include "mcal/systemtick_attiny85.h"

namespace hal {

class MomentaryButton: public Button {
public:

	enum activelevel_e {
		ACTIVELEVEL_LOW, ACTIVELEVEL_HIGH
	};

	MomentaryButton(uint8_t channel, mcal::DigitalIO& gpio,
			activelevel_e pullup);

	Button::ButtonInfos_s getButtonInfos() const override;
	ButtonState_e getButtonState() const override;
	bool isPressed() const override;
	void updateState() override ;
	mcal::Systemtick::systick_t getLastEventTick() const override;

private:
  static const unsigned int BUTTONRELEASESTABLE = 0x8000;
  static const int BUTTONPRESSSTABLE = 0x7FFF;

	mcal::DigitalIO &gpio;
	mcal::DigitalIO::DIOLevel_e logicHigh_;
	mcal::DigitalIO::DIOLevel_e logicLow_;
	std::uint32_t inputHistory_;

};

} /* namespace hal */

#endif /* MOMENTARYBUTTON_H_ */
