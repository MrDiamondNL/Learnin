#include <Arduino.h>

int buzzerPin = 12;

void setup()
{
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int sound_duration = 500;

  for (int i = 0; i < 20; i++)
  {
    if (i < 5)
    {
      sound_duration = 500;
    }
    else if (i < 10)
    {
      sound_duration = 300;
    }
    else if (i < 20)
    {
      sound_duration = 100;
    }
    digitalWrite(buzzerPin, HIGH);
    delay(sound_duration);
    digitalWrite(buzzerPin, LOW);
    delay(sound_duration);
  }
  digitalWrite(buzzerPin, HIGH);
  delay(5000);
}
