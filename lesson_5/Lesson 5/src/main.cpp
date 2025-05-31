#include <Arduino.h>

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)

  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }
}
