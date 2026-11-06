#include <Arduino.h>
#include "motor.h"

void setup() {
  Serial.begin(115200);

  //init
  motorInit();
  delay(1000);
}

void loop() {
  for (int speed = 0; speed <= 255; speed += 5) {
    driveMotors(speed);
    delay(50);
  }

  for (int speed = 255; speed >= 0; speed -= 5) {
    driveMotors(speed);
    delay(50);
  }
}