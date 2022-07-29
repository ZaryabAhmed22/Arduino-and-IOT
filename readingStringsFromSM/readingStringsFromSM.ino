int blueLed = 5;
int whiteLed = 3;
int redLed = 7;
int delayTime = 500;
String msg = "Enter any color, Red, Blue, White or All";
String ledColor;
int ledNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blueLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){
    
    }
  ledColor = Serial.readString();
  //ledNum = Serial.parseInt();
  Serial.println(ledColor);
  
  if (ledColor=="red"){
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, LOW);
    digitalWrite(whiteLed, LOW);
    Serial.println("Red");
    }
    else if (ledColor == "blue"){
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, HIGH);
    digitalWrite(whiteLed, LOW);
      }
     else if (ledColor == "white"){
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    digitalWrite(whiteLed, HIGH);
      }else if(ledColor == "all"){
     digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, HIGH);
    digitalWrite(whiteLed, HIGH);
      }
    else {
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    digitalWrite(whiteLed, LOW);
        }
    delay(5000); 
}
