 const int ledPin = 13;
 const int ldrPin = A0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
 pinMode(ldrPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrStatus = analogRead(ldrPin);

  if(ldrStatus <= 300){
    digitalWrite(ledPin, HIGH);
    Serial.print("It's DARK, Turn on the LED");
    Serial.println(ldrStatus);
    }else{
      digitalWrite(ledPin, LOW);
      Serial.print("It's BRIGHT, turn off the led");
      Serial.println(ldrStatus);
      }
}
