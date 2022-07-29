int LED = 13;
int obstaclePin = 7;
int isObstacle = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(onstaclePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  isObstacle = digitalRead(obstaclePin);

  if(isObstacle == LOW){
    Serial.println("Obstacle!");
    digitalWrite(LED, HIGH);
    }else{
      Serial.println("clear");
      digitalWrite(LED, LOW);
      }
     delay(100)
}
