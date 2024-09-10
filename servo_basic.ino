#include <ESP32Servo.h>

Servo servo;

void setup() 
{
  servo.attach(22);
  servo.write(0);
  delay(2000);
  ender();
}

void ender()
{
  for(int i = 0; i < 180; i++)
  {
    servo.write(i);
    delay(10);
  }
  for(int i = 180; i > 0; i--)
  {
    servo.write(i);
    delay(10);
  } 
}
void loop() 
{
    
}
