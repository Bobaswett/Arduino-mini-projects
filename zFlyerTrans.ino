#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Ps3Controller.h>






RF24 radio(16, 17); // CE, CSN

const byte address[6] = "00001";

void setup() {
  Serial.begin(115200);
 
  Ps3.begin("00:13:a9:df:29:14");
  
  Serial.println("Initialization ready!");
  
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
int val = 0;
void loop() {
  
  
  
  val = (Ps3.data.analog.stick.ly);
  val = map(val, -18, -134, 0, 180);
  radio.write(&val, sizeof(val));
  delay(100);
}
