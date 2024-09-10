int led_go = 33;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_go, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led_go, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_go, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
