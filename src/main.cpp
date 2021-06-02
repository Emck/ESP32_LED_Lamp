#include <Arduino.h>

#define LED_LAMP 2    // ESP32 GPIO 2
#define TOUTCH_PIN 4  // ESP32 GPIO 4

int touch_flag = 0;

void setup() {
    Serial.begin(9600);
    // initialize LED digital pin as an output.
    pinMode(LED_LAMP, OUTPUT);
    // initialize LED LAMP Off.
    digitalWrite(LED_LAMP, LOW);

    Serial.println("Init Finish");
}

void loop() {
    /*
    Serial.println("turn the LED On");
    digitalWrite(LED_LAMP, HIGH); // turn the LED On (HIGH is the voltage level)
    delay(2000);                  // wait for 2 second

    Serial.println("turn the LED Off");
    digitalWrite(LED_LAMP, LOW); // turn the LED Off by making the voltage LOW
    delay(2000);                 // wait for 2 second
    */

    if (touchRead(TOUTCH_PIN) > 40) {
        if (touch_flag != LOW) {
            Serial.println("turn the LED Off");
        }
        touch_flag = LOW;
    } else {
        if (touch_flag != HIGH) {
            Serial.println("turn the LED On");
        }
        touch_flag = HIGH;
    }
    digitalWrite(LED_LAMP, touch_flag);

    delay(50);
}
