int ledPin = 7;
int btnPin = 12;
int btnRead;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnRead = digitalRead(btnPin);
  Serial.println(btnRead);
  delay(dt);
}
