int blueLed = 5;
int whiteLed = 3;
int redLed = 7;
int delayTime = 500;
int potValue;
int potPin = A2;
int start;
String msg="Please Enter 1 or 0: ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blueLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(msg);
  while(Serial.available() == 0){
    
    }
  start = Serial.parseInt();
  
  if(start == 1){
  digitalWrite(redLed, HIGH);
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(delayTime);

  while(potValue <= 512){
    analogWrite(blueLed, potValue);
    analogWrite(whiteLed, 0);
    potValue = analogRead(potPin);
    Serial.println(potValue);
    delay(500);
  }
  analogWrite(blueLed, 0);
  analogWrite(whiteLed, potValue);
  } else if(start == 0){
    digitalWrite(redLed, LOW);
    }
    }
 
