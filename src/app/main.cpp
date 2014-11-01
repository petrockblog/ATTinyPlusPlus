#include <util/delay.h>
#include <mcal.h>
#include <digitalio_attiny85.h>
#include <logicLED.h>
#include <systemtick_attiny85.h>
#include <MomentaryButton.h>
#include <SoftwareSerial.h>
//#include <pwm.h>
//#include <adconverter.h>

//#include <avr/eeprom.h>

void testGPIO() {

	static bool isInitialized = false;
	mcal::DigitalIO &gpio = mcal::ATTiny85GPIO::getInstance();

	if (~isInitialized) {
		gpio.open(0);
		isInitialized = true;
	}
	gpio.write(0, mcal::DigitalIO::DIOLEVEL_HIGH);
	_delay_ms(500);
	gpio.write(0, mcal::DigitalIO::DIOLEVEL_LOW);
	_delay_ms(500);
	gpio.toggle(0);
	_delay_ms(500);
	gpio.toggle(0);
	_delay_ms(500);
}

void testLED() {
	mcal::DigitalIO &gpio = mcal::ATTiny85GPIO::getInstance();
	hal::LogicLED led1(0, gpio);
	hal::LogicLED led2(1, gpio);

	led1.set(hal::LogicLED::LED_HIGH);
	led2.set(hal::LogicLED::LED_LOW);
	_delay_ms(500);
	led1.set(hal::LogicLED::LED_LOW);
	led2.set(hal::LogicLED::LED_HIGH);
	_delay_ms(500);
	led1.toggle();
	led2.toggle();
	_delay_ms(500);
	led1.toggle();
	led2.toggle();
	_delay_ms(500);

}

int main() {

	mcal::Systemtick &systick = mcal::ATTiny85Systemtick::getInstance();
	systick.start();

	mcal::DigitalIO &gpio = mcal::ATTiny85GPIO::getInstance();
	hal::LogicLED led0(0, gpio);
	hal::LogicLED led3(3, gpio);
	hal::MomentaryButton mombtn(4, gpio);
	hal::Button &btn = mombtn;

	mcal::ATSerial serial = mcal::ATSerial();
	serial.begin(19200);


	//	uint32_t lastChange;
//	uint16_t adcValue;
//	char charBuffer[50];
//	const uint8_t sineValues[255] = { 131, 134, 137, 140, 143, 146, 149, 152,
//			156, 159, 162, 165, 168, 171, 174, 176, 179, 182, 185, 188, 191,
//			193, 196, 199, 201, 204, 206, 209, 211, 213, 216, 218, 220, 222,
//			224, 226, 228, 230, 232, 234, 235, 237, 239, 240, 242, 243, 244,
//			246, 247, 248, 249, 250, 251, 251, 252, 253, 253, 254, 254, 254,
//			255, 255, 255, 255, 255, 255, 255, 254, 254, 253, 253, 252, 252,
//			251, 250, 249, 248, 247, 246, 245, 244, 242, 241, 239, 238, 236,
//			235, 233, 231, 229, 227, 225, 223, 221, 219, 217, 215, 212, 210,
//			207, 205, 202, 200, 197, 195, 192, 189, 186, 184, 181, 178, 175,
//			172, 169, 166, 163, 160, 157, 154, 151, 148, 145, 142, 138, 135,
//			132, 129, 126, 123, 120, 117, 113, 110, 107, 104, 101, 98, 95, 92,
//			89, 86, 83, 80, 77, 74, 71, 69, 66, 63, 60, 58, 55, 53, 50, 48, 45,
//			43, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 19, 17, 16, 14, 13,
//			11, 10, 9, 8, 7, 6, 5, 4, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1,
//			1, 1, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9, 11, 12, 13, 15, 16, 18, 20, 21,
//			23, 25, 27, 29, 31, 33, 35, 37, 39, 42, 44, 46, 49, 51, 54, 56, 59,
//			62, 64, 67, 70, 73, 76, 79, 81, 84, 87, 90, 93, 96, 99, 103, 106,
//			109, 112, 115, 118, 121, 124, 128 };
//	uint16_t index = 0;
//	uint32_t ledInterval = 500;

//	mcal::PWM::open(mcal::PWM::PWMDevice0);
//	mcal::PWM::open(mcal::PWM::PWMDevice1);
//	mcal::PWM::getInstance().open(mcal::PWM::PWMDevice1);

//	mcal::GPIO gpio = mcal::GPIO::getInstance();
//	gpio.open(mcal::GPIO::GPIODevice3);
//	gpio.control(mcal::GPIO::GPIODevice3, mcal::GPIO::GPIOCMD_DIR_IN, NULL);
//	gpio.open(mcal::GPIO::GPIODevice4);
//	gpio.control(mcal::GPIO::GPIODevice4, mcal::GPIO::GPIOCMD_DIR_IN, NULL);
//	gpio.open(mcal::GPIO::GPIODevice5);
//	gpio.control(mcal::GPIO::GPIODevice5, mcal::GPIO::GPIOCMD_DIR_IN, NULL);

	while (1) {

//		testGPIO();

//		testLED();

//		if (systick.getTick() - lastChange > 500) {
//			led.toggle();
//			lastChange = systick.getTick();
//		}


//		if (btn.isPressed()) {
		btn.updateState();
		if (btn.isPressed()) {
			led3.set(hal::LogicLED::LED_HIGH);
		} else {
			led3.set(hal::LogicLED::LED_LOW);
		}

//		mcal::PWM::getInstance().write(mcal::PWM::PWMDevice1,
//				sineValues[index]);
//		index = (index + 1) % 255;

//		_delay_ms(3);

// toggle LED with interval LEDINTERVAL
//		if (systick.getTick() - lastChange > ledInterval) {
//			gpio.toggle(mcal::GPIO::GPIODevice3);
//			lastChange = systick.getTick();

//			if (gpio.read(mcal::GPIO::GPIODevice4)==mcal::GPIO::GPIOLEVEL_HIGH) {
//				serial.write("Hello World!\r");
//			}
//		}

//		adcValue = mcal::ADConverter::getInstance().read(mcal::ADConverter::ADCDevice1);

//		sprintf(charBuffer,"%d, ",adcValue);
		if (serial.bytesAvailable()) {
			serial.write(serial.read());
		}

	}

	return 0;
}

