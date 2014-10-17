/*
 * interrupt.h
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include <avr/interrupt.h>

namespace mcal {

class Interrupt {

	static Interrupt *owner[14];

	virtual void serviceRoutine() = 0;

	static void handler1()
			__asm__("__vector_1") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler2()
			__asm__("__vector_2") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler3()
			__asm__("__vector_3") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler4()
			__asm__("__vector_4") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler5()
			__asm__("__vector_5") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler6()
			__asm__("__vector_6") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler7()
			__asm__("__vector_7") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler8()
			__asm__("__vector_8") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler9()
			__asm__("__vector_9") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler10()
			__asm__("__vector_10") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler11()
			__asm__("__vector_11") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler12()
			__asm__("__vector_12") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler13()
			__asm__("__vector_13") __attribute__((__signal__, __used__, __externally_visible__));
	static void handler14()
			__asm__("__vector_14") __attribute__((__signal__, __used__, __externally_visible__));

public:
	static void record(int interruptNumber, Interrupt *i);

};

}

#endif /* INTERRUPT_H_ */
