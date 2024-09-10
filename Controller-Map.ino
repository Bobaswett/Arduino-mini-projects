#include <PS4Controller.h>
#include <ESP32Servo.h>
Servo servo;


void setup()
{
  Serial.begin(115200);
 
  PS4.begin("sdgfadggdasdg");
  Serial.println("Initialization ready!");


  servo.attach(23);
  servo.write(90);
  
  
  if(PS4.isConnected()) 
  {
    Serial.println("Controller connected");
  }  
  delay(250);
}

int val = 0;

void loop()
{
  
  val = PS4.data.analog.stick.ly;
  val = map(val, -128, 170, 0, 180);
  
  if (PS4.event.analog_move.stick.ly)
  {
    servo.write(val);
    delay(100);
  }


}
