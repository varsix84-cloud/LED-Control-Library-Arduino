
#include "LED_Control.h"

void LED_Control::connect (int r, int y, int g){
  this->ledPin[0]=r;
  this->ledPin[1]=y;
  this->ledPin[2]=g;
  for(int i=0; i<3; i++){
    pinMode (this->ledPin[i], OUTPUT);
  }
}

void LED_Control::led(bool r, bool y, bool g){
  this->state[0]=r;
  this->state[1]=y;
  this->state[2]=g;
  for(int i=0; i<3; i++){
    digitalWrite (this->ledPin[i], this->state[i]);
  } 
}