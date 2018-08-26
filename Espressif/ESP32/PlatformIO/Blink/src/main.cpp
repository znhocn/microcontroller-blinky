#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(4, OUTPUT);    // Pin #4 is NodeMCU-32S GPIO4 D4
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    delay(100);                       // wait for a second
}