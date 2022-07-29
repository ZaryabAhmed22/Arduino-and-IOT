int lightPin = A0;
int redLed = 7;
int lightVal;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  if(lightVal >= 650){
    digitalWrite(redLed, HIGH);
  } else{
    digitalWrite(redLed, LOW);
    }
  delay(dt);
}
