#include "LED_Control.h"

LED_Control utara;
LED_Control timur;
LED_Control selatan;
LED_Control barat;
void setup() {
  utara.connect(3, 2, 1);
  timur.connect(6, 5, 4);
  selatan.connect(9, 8, 7);
  barat.connect(12, 11, 10);

  utara.led(1, 0, 0);
  timur.led(1, 0, 0);
  selatan.led(1, 0, 0);
  barat.led(1, 0, 0);

}

void loop() {
  //jalur utara
  utara.led(0, 1, 0);
  delay(3000);
  utara.led(0, 0, 1);
  delay(10000);
  utara.led(0, 1, 0);
  delay(3000);
  utara.led(1, 0, 0);

  //jalur timur
  timur.led(0, 1, 0);
  delay(3000);
  timur.led(0, 0, 1);
  delay(10000);
  timur.led(0, 1, 0);
  delay(3000);
  timur.led(1, 0, 0);

  //jalur selatan 
  selatan.led(0, 1, 0);
  delay(3000);
  selatan.led(0, 0, 1);
  delay(10000);
  selatan.led(0, 1, 0);
  delay(3000);
  selatan.led(1, 0, 0);

  //jalur barat
  barat.led(0, 1, 0);
  delay(3000);
  barat.led(0, 0, 1);
  delay(10000);
  barat.led(0, 1, 0);
  delay(3000);
  barat.led(1, 0, 0);
  }
