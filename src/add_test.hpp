#include <add.hpp>
#include <unity.h>

void test_add_adds_two_values(void) {
  int expected = 1 + 3;
  int actual = add(1, 3);
  TEST_ASSERT_EQUAL_INT32(expected, actual);
}