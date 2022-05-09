#include <gtest/gtest.h>
#include <setBuiltInDiode.hpp>

TEST(setBuiltInDiode,
     test_it_sets_builtin_diode_to_high_voltage_when_the_given_value_is_HIGH) {
  int expected = HIGH;
  setBuiltInDiode(expected);
  ASSERT_EQ(expected, digitalRead(LED_BUILTIN));
}

TEST(setBuiltInDiode,
     test_it_sets_builtin_diode_to_low_voltage_when_the_given_value_is_LOW) {
  int expected = LOW;
  setBuiltInDiode(expected);
  ASSERT_EQ(expected, digitalRead(LED_BUILTIN));
}