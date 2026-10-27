#include <Arduino.h>
#include "motor.h"

void setup() {
  Serial.begin(115200);

  //init
  motorInit();
  delay(1000);
}

void loop() {
  //forward
  driveMotor(150);
  delay(2000);

  //brake
  driveMotor(0);
  delay(20);

  //reverse
  driveMotor(-150);
  delay(2000);

  //brake
  driveMotor(0);
  delay(20);
}