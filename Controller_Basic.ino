#include <PS4Controller.h>
#include <ESP32Servo.h>
Servo servo1;


void setup()
{
  Serial.begin(115200);
 
  PS4.begin("a8:47:4a:82:4c:e8");
  Serial.println("Initialization ready!");


  servo1.attach(35);
  servo1.write(0);
  delay(2000);
  
  if(PS4.isConnected()) 
  {
    Serial.println("Controller connected");
  }
  {
  delay(5000);
  }
}



void loop()
{
  if (PS4.event.analog_move.stick.ry ) {
    Serial.print("Right Stick y at ");
    Serial.println(PS4.data.analog.stick.ry, DEC);  
  
  }
  
  
  if (PS4.data.analog.stick.ly >= 30)
    {
    servo1.write(180);
    delay(10);
    }
  else if (PS4.data.analog.stick.ly <= -30)
  {
    servo1.write(0);
    delay(10);
  }
}
