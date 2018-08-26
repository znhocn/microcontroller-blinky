#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(4, OUTPUT);    // Pin #4 is ESP-12F GPIO4 or NodeMCU Pin D2
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
}