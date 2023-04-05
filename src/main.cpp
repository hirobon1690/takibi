#include <tusb.h>
#include "Adafruit_NeoPixel.hpp"
#include "math.h"
#include "pico/stdio.h"
#include "pico/time.h"

Adafruit_NeoPixel led(2, 16, NEO_GRB + NEO_KHZ800);

int main() {
    stdio_init_all();
    led.begin();
    while (1) {
        for (int i = 0; i < 2; i++) {
            led.setPixelColor(i, led.ColorHSV(rand() % 2000 + 800, 255, rand() % 40 + 35));
            sleep_ms(rand() % 100 + 80);
            led.show();
        }
    }
};