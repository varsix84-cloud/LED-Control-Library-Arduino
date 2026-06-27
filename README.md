# 🚦 LED_Control Library

**LED_Control** adalah library Arduino ringan dan berorientasi objek (OOP) yang dirancang untuk menyederhanakan kontrol modul LED 3 warna (Merah, Kuning, Hijau). Sangat cocok digunakan untuk project simulasi lampu lalu lintas, indikator status sistem, atau project *Embedded System* menggunakan Arduino Nano, ESP32, dan mikrokontroler kompatibel lainnya.

## ✨ Fitur Utama
* **Pendekatan OOP:** Mengelola beberapa grup LED secara independen tanpa variabel global yang berantakan.
* **Setup Mudah:** Konfigurasi `pinMode` otomatis hanya dengan satu baris kode.
* **Kontrol State Simpel:** Mengubah status nyala/mati (HIGH/LOW) LED dengan satu *method* berparameter *boolean*.

## 📦 Instalasi
1. Download repository ini sebagai file `.zip`.
2. Buka Arduino IDE.
3. Masuk ke menu **Sketch** -> **Include Library** -> **Add .ZIP Library...**
4. Pilih file `.zip` yang baru saja diunduh.

## 🛠️ Referensi API

### `connect(int r, int y, int g)`
Menginisialisasi pin yang terhubung ke LED dan secara otomatis mengatur pin tersebut sebagai `OUTPUT`.
* `r`: Nomor pin untuk LED Merah.
* `y`: Nomor pin untuk LED Kuning.
* `g`: Nomor pin untuk LED Hijau.

### `led(bool r, bool y, bool g)`
Mengatur status nyala/mati masing-masing LED. Gunakan `1` atau `true` untuk menyalakan (HIGH), dan `0` atau `false` untuk mematikan (LOW).

---

## 🚀 Contoh Penggunaan

Library ini dilengkapi dengan contoh kode yang bisa langsung kamu jalankan. 

### 1. Penggunaan Dasar (Basic Control)
[cite_start]Contoh ini menunjukkan cara dasar meng-include library [cite: 8][cite_start], mengatur pin di dalam blok `setup()` [cite: 9, 10][cite_start], dan mengontrol nyala masing-masing lampu secara spesifik, misalnya menyalakan lampu kuning saja[cite: 11].

```cpp
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
