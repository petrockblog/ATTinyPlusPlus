/*
 * USITWISlave.cpp
 *
 *  Created on: 03.11.2014
 *      Author: florian
 */

#include <USITWISlave.h>
#include "mcal.h"

namespace mcal {

USITWISlave::USIStartInterrupt::USIStartInterrupt(int interruptNumber,
		USITWISlave *owner) :
		owner(owner) {
	record(interruptNumber, this);
}

void USITWISlave::USIStartInterrupt::serviceRoutine() {
	/*
	 // This triggers on second write, but claims to the callback there is only *one* byte in buffer
	 ONSTOP_USI_RECEIVE_CALLBACK();
	 */
	/*
	 // This triggers on second write, but claims to the callback there is only *one* byte in buffer
	 USI_RECEIVE_CALLBACK();
	 */

	// set default starting conditions for new TWI package
	owner->overflowState = USI_SLAVE_CHECK_ADDRESS;

	// set SDA as input
	reg::ddrb::reg_and(~(1 << PB0));

	// wait for SCL to go low to ensure the Start Condition has completed (the
	// start detector will hold SCL low ) - if a Stop Condition arises then leave
	// the interrupt to prevent waiting forever - don't use USISR to test for Stop
	// Condition as in Application Note AVR312 because the Stop Condition Flag is
	// going to be set from the last TWI sequence
	while (
	// SCL his high
	(reg::pinb::reg_get() & (1 << PINB2)) &&
	// and SDA is low
			!((reg::pinb::reg_get() & (1 << PINB0)))) {
	}

	if (!(reg::pinb::reg_get() & (1 << PINB0))) {

		// a Stop Condition did not occur
		reg::usicr::reg_set(// keep Start Condition Interrupt enabled to detect RESTART
				(1 << USISIE) |
				// enable Overflow Interrupt
						(1 << USIOIE) |
						// set USI in Two-wire mode, hold SCL low on USI Counter overflow
						(1 << USIWM1) | (1 << USIWM0) |
						// Shift Register Clock Source = External, positive edge
						// 4-Bit Counter Source = external, both edges
						(1 << USICS1) | (0 << USICS0) | (0 << USICLK) |
						// no toggle clock-port pin
						(0 << USITC));

	} else {
		// a Stop Condition did occur

		reg::usicr::reg_set(				// enable Start Condition Interrupt
				(1 << USISIE) |
				// disable Overflow Interrupt
						(0 << USIOIE) |
						// set USI in Two-wire mode, no USI Counter overflow hold
						(1 << USIWM1) | (0 << USIWM0) |
						// Shift Register Clock Source = external, positive edge
						// 4-Bit Counter Source = external, both edges
						(1 << USICS1) | (0 << USICS0) | (0 << USICLK) |
						// no toggle clock-port pin
						(0 << USITC));

	} // end if

	reg::usisr::reg_set( // clear interrupt flags - resetting the Start Condition Flag will
			// release SCL
			(1 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC) |
			// set USI to sample 8 bits (count 16 external SCL pin toggles)
					(0x0 << USICNT0));
}

USITWISlave::USIOverflowInterrupt::USIOverflowInterrupt(int interruptNumber,
		USITWISlave *owner) :
		owner(owner) {
	record(interruptNumber, this);
}

void USITWISlave::USIOverflowInterrupt::serviceRoutine() {
	switch (owner->overflowState) {

	// Address mode: check address and send ACK (and next USI_SLAVE_SEND_DATA) if OK,
	// else reset USI
	case USI_SLAVE_CHECK_ADDRESS:
		if ((reg::usidr::reg_get() == 0)
				|| ((reg::usidr::reg_get() >> 1) == owner->slaveAddress)) {
			// callback
			if (owner->_onTwiDataRequest)
				owner->_onTwiDataRequest();
			if (reg::usidr::reg_get() & 0x01) {
				owner->overflowState = USI_SLAVE_SEND_DATA;
			} else {
				owner->overflowState = USI_SLAVE_REQUEST_DATA;
			} // end if
			owner->set_usi_to_send_ack();
		} else {
			owner->set_usi_to_twi_start_condition_mode();
		}
		break;

		// Master write data mode: check reply and goto USI_SLAVE_SEND_DATA if OK,
		// else reset USI
	case USI_SLAVE_CHECK_REPLY_FROM_SEND_DATA:
		if (reg::usidr::reg_get()) {
			// if NACK, the master does not want more data
//			SET_USI_TO_TWI_START_CONDITION_MODE();
			owner->set_usi_to_twi_start_condition_mode();
			return;
		}
		/* no break */
		// from here we just drop straight into USI_SLAVE_SEND_DATA if the
		// master sent an ACK
		// copy data from buffer to USIDR and set USI to shift byte
		// next USI_SLAVE_REQUEST_REPLY_FROM_SEND_DATA
	case USI_SLAVE_SEND_DATA:
		owner->usi_request_callback();
		// Get data from Buffer
		if (owner->txHead != owner->txTail) {
			owner->txTail = (owner->txTail + 1) & TWI_TX_BUFFER_MASK;
			reg::usidr::reg_set(owner->txBuf[owner->txTail]);
		} else {
			// the buffer is empty
			owner->set_usi_to_read_ack(); // This might be neccessary sometimes see http://www.avrfreaks.net/index.php?name=PNphpBB2&file=viewtopic&p=805227#805227
			owner->set_usi_to_twi_start_condition_mode();
			return;
		} // end if
		owner->overflowState = USI_SLAVE_REQUEST_REPLY_FROM_SEND_DATA;
		owner->set_usi_to_send_data();
		break;

		// set USI to sample reply from master
		// next USI_SLAVE_CHECK_REPLY_FROM_SEND_DATA
	case USI_SLAVE_REQUEST_REPLY_FROM_SEND_DATA:
		owner->overflowState = USI_SLAVE_CHECK_REPLY_FROM_SEND_DATA;
		owner->set_usi_to_read_ack();
		break;

		// Master read data mode: set USI to sample data from master, next
		// USI_SLAVE_GET_DATA_AND_SEND_ACK
	case USI_SLAVE_REQUEST_DATA:
		owner->overflowState = USI_SLAVE_GET_DATA_AND_SEND_ACK;
		owner->set_usi_to_read_data();
		break;

		// copy data from USIDR and send ACK
		// next USI_SLAVE_REQUEST_DATA
	case USI_SLAVE_GET_DATA_AND_SEND_ACK:
		// put data into buffer
		// Not necessary, but prevents warnings
		owner->rxHead = (owner->rxHead + 1) & TWI_RX_BUFFER_MASK;
		// check buffer size
		if (owner->rxHead == owner->rxTail) {
			// overrun
			owner->rxHead = (owner->rxHead + TWI_RX_BUFFER_SIZE - 1)
					& TWI_RX_BUFFER_MASK;
		} else {
			owner->rxBuf[owner->rxHead] = reg::usidr::reg_get();
		}
		// next USI_SLAVE_REQUEST_DATA
		owner->overflowState = USI_SLAVE_REQUEST_DATA;
		owner->set_usi_to_send_ack();
		break;

	} // end switch
}

USITWISlave::USITWISlave() :
		slaveAddress(0), overflowState(USI_SLAVE_CHECK_ADDRESS), _onTwiDataRequest(
				nullptr), usi_onRequestPtr(nullptr), usi_onReceiverPtr(nullptr), nestedUSIStartInterrupt(
		USI_START_vect_num, this), nestedUSIOverflowInterrupt(
		USI_OVF_vect_num, this) {
}

USITWISlave::~USITWISlave() {
}

void USITWISlave::begin(uint8_t ownAddress) { // initialize I2C lib

	flushTwiBuffers();

	slaveAddress = ownAddress;

	// In Two Wire mode (USIWM1, USIWM0 = 1X), the slave USI will pull SCL
	// low when a start condition is detected or a counter overflow (only
	// for USIWM1, USIWM0 = 11).  This inserts a wait state.  SCL is released
	// by the ISRs (USI_START_vect and USI_OVERFLOW_vect).

	// Set SCL and SDA as output
	reg::ddrb::reg_or((1 << PB2) | (1 << PB0));

	// set SCL high
	reg::portb::reg_or(1 << PB2);

	// set SDA high
	reg::portb::reg_or(1 << PB0);

	// Set SDA as input
	reg::ddrb::reg_and(~(1 << PB0));

	reg::usicr::reg_set(
	// enable Start Condition Interrupt
			(1 << USISIE) |
			// disable Overflow Interrupt
					(0 << USIOIE) |
					// set USI in Two-wire mode, no USI Counter overflow hold
					(1 << USIWM1) | (0 << USIWM0) |
					// Shift Register Clock Source = external, positive edge
					// 4-Bit Counter Source = external, both edges
					(1 << USICS1) | (0 << USICS0) | (0 << USICLK) |
					// no toggle clock-port pin
					(0 << USITC));

	// clear all interrupt flags and reset overflow counter
	reg::usisr::reg_set(
			(1 << USISIF) | (1 << USIOIF) | (1 << USIPF) | (1 << USIDC));

}

void USITWISlave::send(uint8_t data) {
	uint8_t tmphead;

	// calculate buffer index
	tmphead = (txHead + 1) & TWI_TX_BUFFER_MASK;

	// wait for free space in buffer
	while (tmphead == txTail) {
	}

	// store data in buffer
	txBuf[tmphead] = data;

	// store new index
	txHead = tmphead;
}

uint8_t USITWISlave::available() {
	if (rxHead == rxTail) {
		return 0;
	}
	if (rxHead < rxTail) {
		// Is there a better way ?
		return ((int8_t) rxHead - (int8_t) rxTail) + TWI_RX_BUFFER_SIZE;
	}
	return rxHead - rxTail;
}

uint8_t USITWISlave::receive() {
	// wait for Rx data
	while (rxHead == rxTail) {
	}

	// calculate buffer index
	rxTail = (rxTail + 1) & TWI_RX_BUFFER_MASK;

	// return data from the buffer.
	return rxBuf[rxTail];
}

// sets function called on slave write
void USITWISlave::onReceive(void (*function)(uint8_t)) {
	usi_onReceiverPtr = function;
}

// sets function called on slave read
void USITWISlave::onRequest(void (*function)(void)) {
	usi_onRequestPtr = function;
}

void USITWISlave::TinyWireS_stop_check() {
	if (!usi_onReceiverPtr) {
		// no onReceive callback, nothing to do...
		return;
	}
//    if (!(USISR & ( 1 << USIPF )))
	if (!(reg::usisr::reg_get() & (1 << USIPF))) {
		// Stop not detected
		return;
	}
	uint8_t amount = usiTwiAmountDataInReceiveBuffer();
	if (amount == 0) {
		// no data in buffer
		return;
	}
	usi_onReceiverPtr(amount);
}

// Implement a delay loop that checks for the stop bit (basically direct copy of the stock arduino implementation from wiring.c)
void USITWISlave::tws_delay(unsigned long ms) {
	uint16_t start = (uint16_t) micros();
	while (ms > 0) {
		TinyWireS_stop_check();
		if (((uint16_t) micros() - start) >= 1000) {
			ms--;
			start += 1000;
		}
	}
}

} /* namespace app */
