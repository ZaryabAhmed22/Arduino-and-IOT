#include <Servo.h>
int servoPin = 8;
int dt  = 500;
int servoPos = 180;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(servoPos);
  Serial.println("Enter the angle for the servo: ");

  while(Serial.available() == 0){
    
    }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
}
