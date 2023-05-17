#include <Arduino.h>

int button = 2;
int state = 0;
int speed = 0;

void setup()
{
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  int button_state = digitalRead(button);

  if (button_state == 1)
  {
    analogWrite(9, speed);
    state = state + 1;
    delay(500);

    if (state == 1)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 2)
    {
      speed = speed + 63;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 3)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 4)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 5)
    {
      speed = speed - 255;
      analogWrite(9, speed);
      delay(1500);
    }
  }
  else
  {
    analogWrite(9, speed);
    delay(200);
  }
}