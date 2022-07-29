int myVoltPin = A2;
int readValue;
float V2;
int delayT = 250;
int ledPin = 3;
int ledPin2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(myVoltPin);
  if(readValue <= 512){
    analogWrite(ledPin, readValue/4);
    analogWrite(ledPin2, 0);
    } else if(readValue > 512){
      analogWrite(ledPin2, readValue/4);
      analogWrite(ledPin, 0);
      }
  V2 = (5./1023.)*readValue;
  Serial.println(V2);
  delay(delayT);
}
