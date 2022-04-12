#pragma once

#include <Arduino.h>

void setBuiltInDiode(int state) {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, state);
}