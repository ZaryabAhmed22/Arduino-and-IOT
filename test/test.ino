int blueLed = 5;
int whiteLed = 3;
int redLed = 7;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blueLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(whiteLed, HIGH);
  delay(delayTime);
}
