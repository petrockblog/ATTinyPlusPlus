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

	ButtonState GetButtonState() const override;
	bool IsPressed() const override;
	void UpdateState() override ;

private:
  static const uint32_t kButtonReleaseStable = 0x80000000;
  static const uint32_t kButtonPressStable =   0x7FFFFFFF;

	mcal::DigitalIO &gpio;
	mcal::DigitalIO::DIOLevel_e logic_high_;
	mcal::DigitalIO::DIOLevel_e logic_low_;
	std::uint32_t input_history_;

};

} /* namespace hal */

#endif /* MOMENTARYBUTTON_H_ */
