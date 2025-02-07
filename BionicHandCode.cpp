// Sehan Munir
// Robotics Club Bionic Hand Event

#include <Servo.h> // Servo Import

// Servos
Servo servoA; 
Servo servoB;
Servo servoC;
Servo servoD;

void setup() // Setup
{
  // Setup Servo Position
  servoA.attach(8);
  servoB.attach(9);
  servoC.attach(10);
  servoD.attach(11);
}

void loop() // Constant Checker
{
  // Check potentiometer value, convert to angle, send info to servo
  // Servo & Pontentiometer A
  int potValue = analogRead(A0);
  int angle = map(potValue, 0, 1023, 0, 180);
  servoA.write(angle);
  // Servo & Pontentiometer B
  potValue = analogRead(A1);
  angle = map(potValue, 0, 1023, 0, 180);
  servoB.write(angle);
  // Servo & Pontentiometer C
  potValue = analogRead(A2);
  angle = map(potValue, 0, 1023, 0, 180);
  servoC.write(angle);
  // Servo & Pontentiometer D
  potValue = analogRead(A3);
  angle = map(potValue, 0, 1023, 0, 180);
  servoD.write(angle);
}