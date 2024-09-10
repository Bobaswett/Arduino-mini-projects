  #include <ESP32Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;
Servo servo11;
Servo servo12;


void setup()
{
  servo1.attach(22);
  servo1.write(90);
  delay(1000);
  
  servo2.attach(23);
  servo2.write(90);
  delay(1000);
  
  servo3.attach(21);
  servo3.write(90);
  delay(1000);
  
  servo4.attach(19);
  servo4.write(90);
  delay(1000);

  servo5.attach(18);
  servo5.write(90);
  delay(1000);

  servo6.attach(4);
  servo6.write(90);
  delay(1000);

  servo7.attach(2);
  servo7.write(90);
  delay(1000);
 
  servo8.attach(5);
  servo8.write(90);
  delay(1000);

  servo9.attach(17);
  servo9.write(180);
  delay(1000);
  
  servo10.attach(32);
  servo10.write(0);
  delay(1000);

  servo11.attach(33);
  servo11.write(180);
  delay(1000);
  
  servo12.attach(16);
  servo12.write(0);
  delay(1000);


}
void loop()
{
  


}
