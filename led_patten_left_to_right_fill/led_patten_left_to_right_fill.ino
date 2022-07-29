// DEFINING THE LED PINS AS AN ARRAY
int myleds[]= {2, 3, 4, 5, 6, 7};
int num_of_leds;

void setup() {
  // put your setup code here, to run once:

  // CALCULATING THE NUMBER OF LEDS
  num_of_leds = sizeof(myleds)/sizeof(int);

  // PASSING THE LEDS IN AS OUTPUTS
  for(int i=0; i < num_of_leds; i++){
    pinMode(myleds[i], OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  led_on();
  delay(1000);
  led_off();
  delay(500);
  ledOn_leftToRight();
  //ledOff_rightToLeft();
}

//TURNS ALL LEDS ON
void led_on(){
  for(int i=0; i < num_of_leds; i++){
    digitalWrite(myleds[i], HIGH);
    }
  }

//TURNS ALL LEDS OFF
void led_off(){
  for(int i=0; i < num_of_leds; i++){
    digitalWrite(myleds[i], LOW);
    }
  }

//TURNS ALL LEDS ON LEFT TO RIGHT WITH FILL
void ledOn_leftToRight(){
  for(int i=0; i < num_of_leds; i++){
    digitalWrite(myleds[i], HIGH);
    delay(500);
    }
    
  for(int i = num_of_leds; i > 0; i--){
    digitalWrite(myleds[i-1], LOW);
    delay(500);
    }
  }

//TURNS ALL LEDS ON LEFT TO RIGHT WITH FILL
//void ledOff_rightToLeft(){
//  led_on();
//  for (int i = 0; i < num_of_leds; i++) {
//    digitalWrite(myleds[i], LOW);
//    delay(500);
//  }
//  for (int i = num_of_leds; i > 0; i--) {
//    digitalWrite(myleds[i - 1], HIGH);
//    delay(500);
//  }
//  led_off();
//  }
