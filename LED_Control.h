#ifndef LED_Control_h 
#define LED_Control_h
#include<Arduino.h>
class LED_Control{
  public:
   void connect (int r, int y, int g);
   void led(bool r, bool y, bool g);
  private :
   int state[3];
   int ledPin[3];
};
#endif