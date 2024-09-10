void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial){
  ;
 }
  
}
const char TERMINATOR = '|';
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    String commandFromJetson = Serial.readStringUntil(TERMINATOR);

    
    String ackMsg = "Hi Jetson this is what I got from you" + commandFromJetson;
    Serial.print(ackMsg);
     
  }
   delay(500);
}
