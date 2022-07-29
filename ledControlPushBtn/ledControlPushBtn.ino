const int btnPin = 2;
const int ledPin = 13;

int btnState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(btnPin);

  if(btnState == HIGH){
    digitalWrite(ledPin, HIGH);
    }
  else{
     digitalWrite(ledPin, LOW);
    }
}
