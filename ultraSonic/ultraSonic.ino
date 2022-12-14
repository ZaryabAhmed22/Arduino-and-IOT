int triggerPin = 8;
int echoPin = 9;
long pingTravelTime,distance;
int speedOfSound = 343; //in m/s


void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  delay(25);
 // Serial.println(pingTravelTime);

  distance = round((speedOfSound*pingTravelTime*.001)/50);
  Serial.println(distance);
}
