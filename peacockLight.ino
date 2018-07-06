#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    300
#define BRIGHTNESS  25
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 25

int counter = 0; //needed for moving lights

void setup() {
  delay( 3000 ); // power-up safety delay
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(  BRIGHTNESS );
}

void loop() {
  // put your main code here, to run repeatedly:
  //setColor(CRGB::Yellow, 0,300);

  setColor(CRGB::Gold, 0, 10); //crown of big peacock

  setColor(CRGB:: Blue, 10, 2); // front beak  of big peacock      
  
  setColor(CRGB:: Red, 12, 6); //beak of big peacock      

  setColor(CRGB:: Blue, 18, 1); // front beak  of big peacock    

  setColor(CRGB:: Red, 19, 1); //beak of big peacock      
  
  setColor(CRGB::Blue, 20, 4); //partial(4lights) chin of big peacock

  setColor(CRGB::White, 24, 4); //eye of big peacock

  setColor(CRGB::Blue, 28, 11); //complete chin(3lights) and complete forehead(8lights) of big peacock
  
  setColor(CRGB::Blue, 39, 9); //part neck(4lights) and part throat(5lights) of big peacock

  setColor(CRGB::Blue, 48, 25); //complete throat/frontside of big peacock

  setColor(CRGB::Blue, 73, 9); //complete underside of big peacock

  setColor(CRGB::Blue, 82, 10); //complete underside of big peacock

  setColor(CRGB::Green, 92, 8); // start neck of small peacock
  
  setColor(CRGB::Yellow, 100, 4); //bottom of small peacock crown

  setColor(CRGB::Red, 104, 7); //tops of small peacock crown

  setColor(CRGB::Yellow, 111, 1); //bottom of small peacock crown

  setColor(CRGB::Red, 112, 7); //tops of small peacock crown  
  
  setColor(CRGB::Yellow, 119, 1); //bottom of small peacock crown

  setColor(CRGB::Red, 120, 8); //tops of small peacock crown  

  setColor(CRGB::Yellow, 128, 1); //bottom of small peacock crown

  setColor(CRGB::Green, 129, 3); //tops of small peacock head

  setColor(CRGB::White, 132, 4); //eye of small peacock

  setColor(CRGB::Green, 136, 1); //tops of small peacock head

  setColor(CRGB::Red, 137, 7); //small peacock beak

  setColor(CRGB::Green, 144, 12); //small peacock frontbody

  setColor(CRGB::Purple, 156, 1); //outer design of small peacock

  setColor(CRGB::Green, 157, 1); //small peacock frontbody

  setColor(CRGB::Purple, 158, 1); //outer design of small peacock

  setColor(CRGB::Green, 159, 1); //small peacock frontbody

  setColor(CRGB::Purple, 160, 1); //outer design of small peacock

  setColor(CRGB::Green, 161, 1); //small peacock frontbody

  setColor(CRGB::Purple, 162, 1); //outer design of small peacock

  setColor(CRGB::Green, 163, 1); //small peacock frontbody

  setColor(CRGB::Purple, 164, 1); //outer design of small peacock

  setColor(CRGB::Green, 165, 8); //small peacock frontbody

  setColor(CRGB::Blue, 173, 1); //complete underside of big peacock

  setColor(CRGB::Purple, 174, 5); //outer design of small peacock

  setColor(CRGB::Yellow, 179, 5); //bottom of big peacock design(circle)

  setColor(CRGB::Yellow, 184, 3); //bottom of big peacock design

  setColor(CRGB::Green, 187, 3); //bottom of big peacock design

  //setColor(CRGB::Red, 187, 13); //bottom of big peacock design

  setColor(CRGB::Red, 190, 3); //bottom of big peacock design

  setColor(CRGB::Green, 193, 1); //bottom of big peacock design

  setColor(CRGB::Yellow, 194, 6); //bottom of big peacock design
 
  setColor(CRGB::Yellow, 200, 3); //bottom of big peacock design

  setColor(CRGB::Yellow, 203, 4); //bottom of big peacock design

  setColor(CRGB::Green, 207, 2); //bottom of big peacock design
  
  setColor(CRGB::Red, 209, 3); //bottom of big peacock design

  setColor(CRGB::Purple, 212, 21); //outer design of small peacock

  setColor(CRGB::Yellow, 233, 67); //bottom of big peacock design


  createMovingEffect();
  FastLED.show();
  delay(1000/UPDATES_PER_SECOND);
}

void createMovingEffect()
{
  if (counter >= NUM_LEDS)
  {
    counter = 0;
  }
  
  for(int dot = 0; dot < NUM_LEDS; dot++) 
  {
    if( ((dot + counter) % 5) == 0)
    {
      //leds[dot] &= 160;
      leds[dot].fadeLightBy( 192 );
    }
    else
    {
      //leds[dot] |= 16;
      leds[dot].fadeLightBy( 64 );
    }
  }
  
  counter++;
  
}


void setColor(CRGB color, int startIdx, int length)
{
    if ((startIdx + length) > NUM_LEDS)
    {
      return;
    }
    for (int i = startIdx; i < startIdx+length; i++)
    {
       leds[i]     = color;
    }
}

    


