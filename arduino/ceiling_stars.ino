#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 6

#define DATA_PIN 9

bool shinedStars[6] = {false, false, false, false, false, false};

// Define the array of leds
CRGB leds[NUM_LEDS];

#define BRIGHTNESS 255   /* Control the brightness of your leds */
#define SATURATION 255   /* Control the saturation of your leds */

int prevStar = -1;

void setup() {
  // put your setup code here, to run once:

  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical

  Serial.begin(115200);



}

void loop() {
  /*
  int randomled = random(0, 6);

  bool foundNewStar = false;

  for (int count = 0; count < 6; count++) {
    if (shinedStars[count] == false) {
      foundNewStar = true;
    }
  }

  if (foundNewStar == false) {
    for (int count = 0; count < 6; count++) {
      shinedStars[count] = false;
    }
  }
  
  while(shinedStars[randomled] == true) {
    randomled = random(0, 6);
  }

  shinedStars[randomled] == true;
  
  int randomsleep = random(500, 1500);
  int randomstardelay = random(25, 75);
  
  for (int j = 0; j < 255; j++) {
      leds[randomled] = CHSV((j * 2), SATURATION, BRIGHTNESS);
    FastLED.show();
    delay(randomstardelay);
  }

  FastLED.clear();  // clear all pixel data
  FastLED.show();

  delay(randomsleep);
  */

  for (int j = 0; j < 255; j++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CHSV(i - (j * 2), SATURATION, BRIGHTNESS);
    }
    FastLED.show();
    delay(25);
  }
  
}
