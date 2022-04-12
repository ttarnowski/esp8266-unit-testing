#include <add_test.hpp>
#include <multiply_test.hpp>
#include <unity.h>

int main(int argc, char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_add_adds_two_values);
  RUN_TEST(test_multiply_multiplies_two_values);
  UNITY_END();

  return 0;
}