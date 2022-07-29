// the setup function runs once when you press reset or power the board

//Gloabal variable
int led1 = 12;
int led2 = 11;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(led1, HIGH);   // turn the LED1 on (HIGH is the voltage level)
  delay(200);                       // wait for a second

  digitalWrite(led2, LOW);   // turn the LED2 on (HIGH is the voltage level)
  delay(200);  
  
  digitalWrite(led1, LOW);   // turn the LED1 on (LOW is the voltage level)
  delay(200); // wait for a second

  digitalWrite(led2, HIGH);   // turn the LED2 on (HIGH is the voltage level)
  delay(200);                 // wait for some time
}

// BY ZARYAB AHMED KHAN 
