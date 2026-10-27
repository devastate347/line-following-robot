#include "motor.h"

void motorInit() {
  ledcAttach(MOTOR_IN1, MOTOR_PWM_FREQ, MOTOR_PWM_RES);
  ledcAttach(MOTOR_IN2, MOTOR_PWM_FREQ, MOTOR_PWM_RES);

  driveMotor(0);
}

void driveMotor(int speed) {
  speed = constrain(speed, -255, 255);

  if (speed > 0) {
    ledcWrite(MOTOR_IN1, speed);
    ledcWrite(MOTOR_IN2, 0);
  } else if (speed < 0) {
    ledcWrite(MOTOR_IN1, 0);
    ledcWrite(MOTOR_IN2, speed);
  } else {
    ledcWrite(MOTOR_IN1, 0);
    ledcWrite(MOTOR_IN2, 0);
  }
}