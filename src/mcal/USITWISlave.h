/*
 * USITWISlave.h
 *
 *  Created on: 03.11.2014
 *      Author: florian
 */

#ifndef USITWISLAVE_H_
#define USITWISLAVE_H_

#include "lib/STL/cstdint.h"
#include "mcal/cppinterrupt.h"
#include "mcal/systemtick.h"
#include "mcal/mcal.h"

#define I2C_SLAVE_ADDRESS 0x40 // the 7-bit address

/********************************************************************************

 driver buffer definitions

 ********************************************************************************/

// permitted RX buffer sizes: 1, 2, 4, 8, 16, 32, 64, 128 or 256
// todo change to const expressions here
#ifndef TWI_RX_BUFFER_SIZE
#define TWI_RX_BUFFER_SIZE  ( 16 )
#endif
#define TWI_RX_BUFFER_MASK  ( TWI_RX_BUFFER_SIZE - 1 )

#if ( TWI_RX_BUFFER_SIZE & TWI_RX_BUFFER_MASK )
#  error TWI RX buffer size is not a power of 2
#endif

// permitted TX buffer sizes: 1, 2, 4, 8, 16, 32, 64, 128 or 256

#ifndef TWI_TX_BUFFER_SIZE
#define TWI_TX_BUFFER_SIZE ( 16 )
#endif
#define TWI_TX_BUFFER_MASK ( TWI_TX_BUFFER_SIZE - 1 )

#if ( TWI_TX_BUFFER_SIZE & TWI_TX_BUFFER_MASK )
#  error TWI TX buffer size is not a power of 2
#endif

namespace mcal {

class USITWISlave {
public:
	virtual ~USITWISlave();

	void begin(uint8_t I2C_SLAVE_ADDR);
	void send(uint8_t data);
	uint8_t available();
	uint8_t receive();
	void onReceive(void (*)(uint8_t));
	void onRequest(void (*)(void));

	// Implement a delay loop that checks for the stop bit (basically direct copy of the stock arduino implementation from wiring.c)
	void tws_delay(Systemtick::systick_t ms, Systemtick& systick);

	static USITWISlave& getInstance() {
		static USITWISlave instance;
		return instance;
	}

private:
	USITWISlave();

	typedef enum {
		USI_SLAVE_CHECK_ADDRESS = 0x00,
		USI_SLAVE_SEND_DATA = 0x01,
		USI_SLAVE_REQUEST_REPLY_FROM_SEND_DATA = 0x02,
		USI_SLAVE_CHECK_REPLY_FROM_SEND_DATA = 0x03,
		USI_SLAVE_REQUEST_DATA = 0x04,
		USI_SLAVE_GET_DATA_AND_SEND_ACK = 0x05
	} overflowState_t;

	uint8_t slaveAddress;
	overflowState_t overflowState;

	uint8_t rxBuf[TWI_RX_BUFFER_SIZE];
	volatile uint8_t rxHead;
	volatile uint8_t rxTail;

	uint8_t txBuf[TWI_TX_BUFFER_SIZE];
	volatile uint8_t txHead;
	volatile uint8_t txTail;

	// data requested callback
	void (*_onTwiDataRequest)(void);

	void (*usi_onRequestPtr)(void);
	void (*usi_onReceiverPtr)(uint8_t);

	class USIStartInterrupt: public Interrupt {
	public:
		USIStartInterrupt(int interruptNumber, USITWISlave *owner);
	private:
		USITWISlave *owner;
		void serviceRoutine();
	} nestedUSIStartInterrupt;

	class USIOverflowInterrupt: public Interrupt {
	public:
		USIOverflowInterrupt(int interruptNumber, USITWISlave *owner);
	private:
		USITWISlave *owner;
		void serviceRoutine();
	} nestedUSIOverflowInterrupt;

	friend class USIStartInterrupt;
	friend class USIOverflowInterrupt;

	void stop_check();

	inline void flushTwiBuffers(void) {
		rxTail = 0;
		rxHead = 0;
		txTail = 0;
		txHead = 0;
	} // end flushTwiBuffers

	inline void set_usi_to_send_ack() {
		/* prepare ACK */
		reg::usidr::reg_set(0);
		/* Set SDA as output */
		reg::ddrb::reg_or(1 << PB0);
		/* clear all interrupt flags, except Start Cond */
		reg::usisr::reg_set(
				(0 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC) |
				/* Set USI counter to shift 1 bit */
				(0x0E << USICNT0));
	}

	inline void set_usi_to_read_ack() {
		/* Set SDA as input */
		reg::ddrb::reg_and(~(1 << PB0));

		/* prepare ACK */
		reg::ddrb::reg_set(0);
		/* clear all interrupt flags, except Start Cond */
		reg::usisr::reg_set(
				(0 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC) |
				/* Set USI counter to shift 1 bit */
				(0x0E << USICNT0));
	}

	inline void set_usi_to_twi_start_condition_mode() {
		reg::usicr::reg_set(/* enable Start Condition Interrupt, disable Overflow Interrupt */
		(1 << USISIE) | (0 << USIOIE) |
		/* Set USI in Two-wire mode, no USI Counter overflow hold */
		(1 << USIWM1) | (0 << USIWM0) |
		/* Shift Register Clock Source = External, positive edge */
		/* 4-Bit Counter Source = external, both edges */
		(1 << USICS1) | (0 << USICS0) | (0 << USICLK) |
		/* no Toggle clock-port pin */
		(0 << USITC));
		reg::usisr::reg_set(
				/* clear all interrupt flags, except Start Cond */
				(0 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC)
						| (0x0 << USICNT0));
	}

	inline void set_usi_to_send_data() {
		/* Set SDA as output */
		reg::ddrb::reg_or(1 << PB0);
		/* clear all interrupt flags, except Start Cond */
		reg::usisr::reg_set(
				(0 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC) |
				/* Set USI to shift out 8 bits */
				(0x0 << USICNT0));
	}

	inline void set_usi_to_read_data() {
		/* Set SDA as input */
		reg::ddrb::reg_and(~(1 << PB0));
		/* clear all interrupt flags, except Start Cond */
		reg::usisr::reg_set(
				(0 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC) |
				/* Set USI to shift out 8 bits */
				(0x0 << USICNT0));
	}

	inline void usi_receive_callback() {
		if (usi_onReceiverPtr) {
			if (usiTwiDataInReceiveBuffer()) {
				usi_onReceiverPtr(usiTwiAmountDataInReceiveBuffer());
			}
		}
	}

	inline void onstop_usi_receive_callback() {
		if (reg::usisr::reg_get() & (1 << USIPF)) {
			usi_receive_callback();
		}
	}

	inline void usi_request_callback() {
		usi_receive_callback();
		if (usi_onRequestPtr)
			usi_onRequestPtr();
	}

	inline bool usiTwiDataInReceiveBuffer(void) {
		// return 0 (false) if the receive buffer is empty
		return rxHead != rxTail;

	}

	inline bool usiTwiDataInTransmitBuffer(void) {
		// return 0 (false) if the receive buffer is empty
		return txHead != txTail;
	}

	inline uint8_t usiTwiAmountDataInReceiveBuffer(void) {
		if (rxHead == rxTail) {
			return 0;
		}
		if (rxHead < rxTail) {
			// Is there a better way ?
			return ((int8_t) rxHead - (int8_t) rxTail) + TWI_RX_BUFFER_SIZE;
		}
		return rxHead - rxTail;
	}

};

}
/* namespace app */

#endif /* USITWISLAVE_H_ */
