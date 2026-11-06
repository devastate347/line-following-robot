#include "motor.h"

void motorInit() {
  ledcAttach(MOTOR_IN1, MOTOR_PWM_FREQ, MOTOR_PWM_RES);
  ledcAttach(MOTOR_IN2, MOTOR_PWM_FREQ, MOTOR_PWM_RES);
  ledcAttach(MOTOR2_IN1, MOTOR_PWM_FREQ, MOTOR_PWM_RES);
  ledcAttach(MOTOR2_IN2, MOTOR_PWM_FREQ, MOTOR_PWM_RES);

  driveMotors(0);
}

void driveMotors(int speed) {
  speed = constrain(speed, 0, 255);

  // Keep the motors rotating in opposite directions; vary only their PWM duty.
  ledcWrite(MOTOR_IN1, speed);
  ledcWrite(MOTOR_IN2, 0);
  ledcWrite(MOTOR2_IN1, 0);
  ledcWrite(MOTOR2_IN2, speed);
}