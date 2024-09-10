
const int trigPin = 5;
const int echoPin = 18;
const int green = 33;
const int red = 32;
#define SOUND_SPEED 0.034

long duration;
float distanceCm;




void setup() 
{
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  
  
  distanceCm = duration * SOUND_SPEED/2;
  
    if(distanceCm < 15)
    {
      digitalWrite(red, HIGH);   
      digitalWrite(green,LOW);
      delay(5);                       
                         
    }
    else if(distanceCm > 15)
    {
      digitalWrite(green, HIGH);   
      digitalWrite(red, LOW);
      delay(5);                       
                         
    }
}
