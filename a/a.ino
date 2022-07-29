int analogPin = A0; //analogPin = 1024
int ledPin1 = 11;
int ledPin2 = 10;
int ledPin3 = 9;
int ledPin4 = 6;
int ledPin5 = 5;
int ledPin6 = 3;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  //pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  analogWrite(ledPin1, val/4);
  analogWrite(ledPin2, val/4);
  analogWrite(ledPin3, val/4);
  analogWrite(ledPin4, val/4);
  analogWrite(ledPin5, val/4);
  analogWrite(ledPin6, val/4);
  delay(50);
}
