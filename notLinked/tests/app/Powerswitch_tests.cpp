#include "CppUTest/TestHarness.h"

TEST_GROUP(Powerswitch_Tests)
{
  void setup() {}
  void teardown() {}
};

TEST(Powerswitch_Tests, FirstTest)
{
  FAIL("Fail me!");
}

TEST(Powerswitch_Tests, SecondTest)
{
  STRCMP_EQUAL("hello", "hello");
}
