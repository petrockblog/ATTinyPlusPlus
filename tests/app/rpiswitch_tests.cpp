#include "CppUTest/TestHarness.h"

TEST_GROUP(FirstTestGroup)
{
  void setup() {}
  void teardown() {}
};

TEST(FirstTestGroup, FirstTest)
{
  FAIL("Fail me!");
}

TEST(FirstTestGroup, SecondTest)
{
  STRCMP_EQUAL("hello", "hello");
}
