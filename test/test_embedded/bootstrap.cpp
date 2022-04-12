#include <Arduino.h>
#include <setBuiltInDiode_test.hpp>
#include <unity.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  UNITY_BEGIN();
  RUN_TEST(
      test_setBuiltInDiode_sets_built_in_diode_voltage_to_HIGH_if_HIGH_value_has_been_passed);
  RUN_TEST(
      test_setBuiltInDiode_sets_built_in_diode_voltage_to_LOW_if_LOW_value_has_been_passed);
  UNITY_END();
}

void loop() {}