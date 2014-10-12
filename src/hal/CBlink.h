#ifndef BLINK_H_
#define BLINK_H_

class CBlink {
public:
	//Constructor with the last parameter set to false as default.
	CBlink(volatile uint8_t* port, uint8_t pin, bool initiallyLit = false);

	bool IsLedLit() {
		return m_isLedLit;
	}
	void SetLitState(bool state);
	void ToggleLitState();

private:
	bool m_isLedLit;

	volatile uint8_t* m_port;
	volatile uint8_t* m_ddr_port;
	uint8_t m_pin;
};

#endif /* BLINK_H_ */
