#include <avr/io.h>
#include "CBlink.h"

CBlink::CBlink(volatile uint8_t* port, uint8_t pin,
		bool initiallyLit/* =false */) :
		m_isLedLit(initiallyLit), m_port(port), m_ddr_port(port - 1), m_pin(pin) {

	//Set the DDRn.pin as output
	*m_ddr_port = _BV(pin);

	//Set initial state of the LED
	SetLitState(m_isLedLit);
}

void CBlink::SetLitState(bool state) {
	m_isLedLit = state;

	if (m_isLedLit)
		*m_port |= _BV(m_pin);
	else
		*m_port &= ~_BV(m_pin);
}

void CBlink::ToggleLitState() {
	SetLitState(!m_isLedLit);
}
