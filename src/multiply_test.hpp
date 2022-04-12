#include <multiply.hpp>
#include <unity.h>

void test_multiply_multiplies_two_values(void) {
  int expected = 5 * 2;
  int actual = multiply(5, 2);
  TEST_ASSERT_EQUAL_INT32(expected, actual);
}