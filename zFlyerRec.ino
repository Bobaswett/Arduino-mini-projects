#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <ESP32Servo.h>
Servo motor;               

RF24 radio(16, 17); // CE, CSN

const byte address[6] = "00001";                              

void setup() {
   
  Serial.begin(115200);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  motor.attach(22);
  motor.write(0);
  
}

void loop() {
  if (radio.available()) {
    while (radio.available()){
      int val = 0;
      radio.read(&val, sizeof(val));
      motor.write(val);
      delay(100);
      //Serial.println(val, DEC);
  
  
  }
}  
}
