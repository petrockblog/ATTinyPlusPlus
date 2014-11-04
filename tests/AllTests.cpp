#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char** av)
{
  const char * av_override[] = { "exe", "-v" }; //turn on verbose mode

  //return CommandLineTestRunner::RunAllTests(ac, av);
  return CommandLineTestRunner::RunAllTests(2, av_override);
}
