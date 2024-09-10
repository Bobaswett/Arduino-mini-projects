#include <Ps3Controller.h>
#include <ESP32Servo.h>
Servo motor;


void setup()
{
  Serial.begin(115200);
 
  Ps3.begin("00:13:a9:df:29:14");
  
  Serial.println("Initialization ready!");


  motor.attach(23);
  motor.write(0);
  
  
  delay(250);
}

int val = 0;

void loop()
{



  //if( abs(Ps3.event.analog_changed.stick.ly)){
       //Serial.print("Moved the left stick:");
       //Serial.print(" y="); Serial.print(Ps3.data.analog.stick.ly, DEC);
       //Serial.println();
    //}


    
  val = (Ps3.data.analog.stick.ly);
  val = map(val, -18, -134, 0, 180);
  
  if (Ps3.event.analog_changed.stick.ly){
    motor.write(val);
    delay(500);
  }


}
