#include "CppUTest/TestHarness.h"

#include "../../src/hal/PWMLed.h"

TEST_GROUP(PWMLed_Tests)
{
  void setup() {}
  void teardown() {}
};

TEST(PWMLed_Tests, FirstTest) {
	class TestPWM : public mcal::PWM {
	public:
		TestPWM() {

		}
		
		void open(uint8_t channel) {
			this->channel = channel;
		}
		void write(uint8_t channel, uint8_t value) {
		}
		uint8_t getChannel() { return channel; }

	private:
		uint8_t channel;
	};

	TestPWM pwmtest;
	hal::PWMLed pwm = hal::PWMLed(2,pwmtest,200,60,60);
	CHECK_EQUAL(2, pwmtest.getChannel());
}

TEST(PWMLed_Tests, SecondTest)
{
  STRCMP_EQUAL("hello", "hello");
}
