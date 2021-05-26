#include <Arduino.h>

#define LED_LAMP 2  // GPIO 2

void setup()
{
  Serial.begin(9600);
  // initialize LED digital pin as an output.
  pinMode(LED_LAMP, OUTPUT);
}

void loop()
{
  Serial.println("turn the LED on");
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_LAMP, HIGH);
  // wait for 2 second
  delay(2000);

  Serial.println("turn the LED off");
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_LAMP, LOW);
   // wait for 1 second
  delay(1000);
}