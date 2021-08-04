#include <FastLED.h>

#define LED_PIN     10
#define NUM_LEDS    60

CRGB leds[NUM_LEDS];
CRGB leds_rainbow[NUM_LEDS];

int x;
int sum = 0;
int level=0;
int display_level=0;
uint8_t hue = 0;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(1);   
  FastLED.setBrightness(255);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  
  if(Serial.available() > 0)
  { 
    level = Serial.readStringUntil('\n').toInt()+0;
  }

  if (level >= 60){level=60;} // level cap 


    Serial.print (level);
    Serial.print("   /   ");
    Serial.println (display_level);

    for (int i = 0; i < NUM_LEDS; ++i) {
    leds_rainbow[i] = CHSV(hue + (i * 2), 255, 255); // set base color
    }

    EVERY_N_MILLISECONDS(100){
    hue-=1;
    }

    if(level>display_level+20){hue+=20;}

    if(level >= display_level){display_level = level;}
    if(level < display_level){display_level -= 1;}
    
    for (int i = 0; i <= NUM_LEDS; i++) {
        leds[i] = CHSV(0,0,0);
        
        
        if(i < display_level){
          leds[i] = leds_rainbow[i];
        }
      }
    delay(0);
    sum = 0; // Reset the sum of the measurement values
    level = 0;
    FastLED.show();
}
