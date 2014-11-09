#include "CppUTest/TestHarness.h"

#include "../../src/hal/PWMLed.h"

class TestPWM: public mcal::PWM {
public:
	TestPWM() :
			channel(0), value(0) {
	}

	void open(uint8_t channel) {
		this->channel = channel;
	}
	void write(uint8_t channel, uint8_t value) {
		this->channel = value;
		this->value = value;
	}

	uint8_t getChannel() const {
		return channel;
	}

	uint8_t getValue() const {
		return value;
	}

private:
	uint8_t channel;
	uint8_t value;
};

TEST_GROUP(PWMLed_Tests) {
	void setup() {}
	void teardown() {
	}
};

TEST(PWMLed_Tests, OpenPWMChannel) {

	TestPWM pwmtest;
	for (uint8_t i = 0; i < 2; ++i) {
		hal::PWMLed pwm = hal::PWMLed(i,pwmtest,200,60,60);
		CHECK_EQUAL(i, pwmtest.getChannel());
	}
}

TEST(PWMLed_Tests, updatePeriod) {
	TestPWM pwmtest;
	hal::PWMLed pwm = hal::PWMLed(2,pwmtest,100,10,10);
	for (uint8_t i = 0; i < 10; i++) {
		pwm.update();
		CHECK_EQUAL(0, pwmtest.getValue());
	}

	uint8_t sum = 0;
	for (uint8_t i = 0; i < 10; i++) {
		sum += 10;
		pwm.update();
		CHECK_EQUAL(sum, pwmtest.getValue());
	}

	sum = 100;
	for (uint8_t i = 0; i < 10; i++) {
		sum -= 10;
		pwm.update();
		CHECK_EQUAL(sum, pwmtest.getValue());
	}
}

TEST(PWMLed_Tests, constantValue) {
	TestPWM pwmtest;
	hal::PWMLed pwm = hal::PWMLed(2,pwmtest,100,10,0);
	for (uint8_t i = 0; i < 10; i++) {
		pwm.update();
		CHECK_EQUAL(100, pwmtest.getValue());
		// printf("\nupdate %2d: %2d", i, pwmtest.getValue());
	}
	for (uint8_t i = 0; i < 10; i++) {
		pwm.update();
		CHECK_EQUAL(100, pwmtest.getValue());
		// printf("\nupdate %2d: %2d", i, pwmtest.getValue());
	}
}
