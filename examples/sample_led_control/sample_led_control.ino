#include "LED_Control.h"

// Membuat objek bernama 'lampu' dari kelas LED_Control
LED_Control lampu; 

void setup() {
  // Menghubungkan pin 2 (merah), 3 (kuning), 4 (hijau)
  lampu.connect(2, 3, 4); 
}

void loop() {
  // Menyalakan Merah saja (Merah ON, Kuning OFF, Hijau OFF)
  lampu.led(true, false, false); 
  delay(1000);

  // Menyalakan Kuning saja
  lampu.led(false, true, false); 
  delay(1000);
}