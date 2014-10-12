/*
 * interrupt.cpp
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#include "cppinterrupt.h"

namespace mcal {

Interrupt *Interrupt::owner[] = { 0 };

void Interrupt::handler1() {
	if (owner[0])
		owner[0]->serviceRoutine();
}

void Interrupt::handler2() {
	if (owner[1])
		owner[1]->serviceRoutine();
}

void Interrupt::handler3() {
	if (owner[2])
		owner[2]->serviceRoutine();
}

void Interrupt::handler4() {
	if (owner[3])
		owner[3]->serviceRoutine();
}

void Interrupt::handler5() {
	if (owner[4])
		owner[4]->serviceRoutine();
}

void Interrupt::handler6() {
	if (owner[5])
		owner[5]->serviceRoutine();
}

void Interrupt::handler7() {
	if (owner[6])
		owner[6]->serviceRoutine();
}

void Interrupt::handler8() {
	if (owner[7])
		owner[7]->serviceRoutine();
}

void Interrupt::handler9() {
	if (owner[8])
		owner[8]->serviceRoutine();
}

void Interrupt::handler10() {
	if (owner[9])
		owner[9]->serviceRoutine();
}

void Interrupt::handler11() {
	if (owner[10])
		owner[10]->serviceRoutine();
}

void Interrupt::handler12() {
	if (owner[11])
		owner[11]->serviceRoutine();
}

void Interrupt::handler13() {
	if (owner[12])
		owner[12]->serviceRoutine();
}

void Interrupt::handler14() {
	if (owner[13])
		owner[13]->serviceRoutine();
}

void Interrupt::record(int interruptNumber,
		       Interrupt *i) {
	owner[interruptNumber - 1] = i;
}

} /* namespace mcal */
