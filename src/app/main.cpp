
#include <avr/io.h>
#include <avr/delay.h>
#include "SoftwareSerial.h"

// Timer timing for baud rates
//
#define OCR4800          52     // div 64
#define OCR9600          26     // div 64
#define OCR19200        104     // div 8
#define OCR38400         52     // div 8
#define OCR115200       138     // div 1

// incoming buffer
volatile char *inbuf[32];
// outgoing buffer
volatile char *outbuf[32];

int main()
{
        softSerialBegin(19200);
        DDRB |= (1<<PB5);
        while (1) {
                if (softSerialAvailable()) {
                        softSerialWrite( softSerialRead()+1 );
//                        _delay_ms(10);
                }
//        	tunedDelay(50);
        	_delay_us(50);
        }
}


//#ifndef F_CPU
//#define F_CPU 8000000
//#endif
//
//#include <util/delay.h>
//#include <avr/io.h>
//#include <avr/interrupt.h>
//#include "cstdint.h"
//
//#include "_cplusplus.h"
//
//#include <mcal.h>
//#include <USI_UART.h>
////#include <gpio.h>
////#include <systemtick.h>
////#include <SoftwareSerial.h>
//
//namespace {
//
//volatile uint32_t ledInterval = 500;
//
//}
//
//using namespace mcal;
//
//void test() {
//	reg::portb::bit_not(3);
//}

//int main(void) {
//
//	uint32_t lastChange;
//
//	mcal::Systemtick systick = mcal::Systemtick::getInstance();
//	systick.start();
//	lastChange = systick.getTick();
//
//	GPIO gpio = mcal::GPIO::getInstance();
////	gpio.open(GPIO::GPIODevice0);
////	gpio.control(GPIO::GPIODevice0, GPIO::GPIOCMD_DIR_OUT, 0);
////
////	gpio.open(GPIO::GPIODevice4);
////	gpio.control(GPIO::GPIODevice4, GPIO::GPIOCMD_DIR_IN, 0);
////	gpio.control(GPIO::GPIODevice4, GPIO::GPIOCMD_IRQ_PINCHANGE_HANDLER,
////			(void*) &test);
////	gpio.control(GPIO::GPIODevice4, GPIO::GPIOCMD_IRQ_PINCHANGE_ENABLE, NULL);
//
//	gpio.open(GPIO::GPIODevice3);
//	gpio.control(GPIO::GPIODevice3, GPIO::GPIOCMD_DIR_OUT, 0);
//
////	hal::SoftwareSerial swserial = hal::SoftwareSerial::getInstance();
//	hal::SoftwareSerial swserial;
//	swserial.begin(9600);
//
//	while (1) {
//		// toggle LED with interval LEDINTERVAL
//		if (systick.getTick() - lastChange > ledInterval) {
////			gpio.toggle(GPIO::GPIODevice0);
////			lastChange = systick.getTick();
//			swserial.write(0x01);
//		}
//
//		// echo received data
////		for (int counter = 0; counter < swserial.getBytesAvailable(); ++counter) {
////			char buffer;
////			buffer = (char)swserial.read();
////			gpio.toggle(GPIO::GPIODevice3);
////		}
//	}
//}

