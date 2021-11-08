#include <Arduino.h>
#include "gpio.h"

Gpio Led(2);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Led.toggle();
  delay(200);

}