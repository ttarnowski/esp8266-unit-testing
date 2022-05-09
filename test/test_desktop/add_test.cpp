#include <add.hpp>
#include <gtest/gtest.h>

TEST(add, test_it_returns_sum_of_two_given_ints) {
  int expected = 2 + 3;
  int actual = add(2, 3);

  ASSERT_EQ(expected, actual);
}