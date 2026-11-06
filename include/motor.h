#pragma once
#include <Arduino.h>

#define MOTOR_IN1       18
#define MOTOR_IN2       19
#define MOTOR2_IN1      21
#define MOTOR2_IN2      22

#define MOTOR_PWM_FREQ  20000
#define MOTOR_PWM_RES   8 // 8 bits

void motorInit();
void driveMotors(int speed);