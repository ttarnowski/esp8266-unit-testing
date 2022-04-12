#include <Arduino.h>
#include <setBuiltInDiode.hpp>
#include <unity.h>

void test_setBuiltInDiode_sets_built_in_diode_voltage_to_HIGH_if_HIGH_value_has_been_passed(
    void) {
  setBuiltInDiode(HIGH);

  TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
}

void test_setBuiltInDiode_sets_built_in_diode_voltage_to_LOW_if_LOW_value_has_been_passed(
    void) {
  setBuiltInDiode(LOW);

  TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
}