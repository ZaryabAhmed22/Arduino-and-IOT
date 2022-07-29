int inByte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.println("Type 1: LED ON, 0: LED OFF");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    
    inByte = Serial.read();

    if(inByte == '1'){
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      Serial.println("LED - ON");
      }
    else if(inByte == '0'){
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      Serial.println("LED - OFF");
      }
    else if(inByte == '2'){
      blink_led();
    }
    }
    
}

void blink_led(){
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
}
