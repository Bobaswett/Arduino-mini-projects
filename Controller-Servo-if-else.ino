#include <PS4Controller.h>
#include <ESP32Servo.h>
Servo servo;


void setup()
{
  Serial.begin(115200);
 
  PS4.begin("asdfadgsdasg");
  Serial.println("Initialization ready!");


  servo.attach(22);
  servo.write(0);
  delay(2000);
  
  if(PS4.isConnected()) 
  {
    Serial.println("Controller connected");
  }
  {
  delay(5000);
  }
}


[[[[
void loop()
{
  if (PS4.data.analog.stick.ly >= 30)
    {
    servo.write(180);
    delay(10);
    }
  else if (PS4.data.analog.stick.ly <= -30)
  {
    servo.write(0);
    delay(10);
  }
}
