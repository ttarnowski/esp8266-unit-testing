#include <gtest/gtest.h>
#include <multiply.hpp>

TEST(add, test_it_returns_product_of_multiplication_of_two_given_ints) {
  int expected = 2 * 3;
  int actual = multiply(2, 3);

  ASSERT_EQ(expected, actual);
}