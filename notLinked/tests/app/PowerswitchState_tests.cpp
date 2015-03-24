#include "CppUTest/TestHarness.h"

#include "../../src/app/PowerswitchState.h"

TEST_GROUP(PowerswitchState_Tests)
{
  void setup() {}
  void teardown() {}
};

TEST(PowerswitchState_Tests, FirstTest) {
	app::PowerswitchStateOff state = app::PowerswitchStateOff();
  // FAIL("Fail me!");
}

TEST(PowerswitchState_Tests, SecondTest)
{
  STRCMP_EQUAL("hello", "hello");
}
