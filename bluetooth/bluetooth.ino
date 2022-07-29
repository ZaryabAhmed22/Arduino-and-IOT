int value;
int ledPin = 9;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT); // put your setup code here, to run once:
}
void loop() {
 // put your main code here, to run repeatedly:
if(Serial.available()>0)
 { 
 value = Serial.read(); // reading the data received from the bluetooth module
 Serial.println(value);
 Serial.print("\n");
if(value=='1' ){ 
digitalWrite(ledPin, HIGH); 
} 
if(value=='2' ){ 
digitalWrite(ledPin ,LOW); 
 }}
}
