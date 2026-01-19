const int trigPin = 10;
const int echoPin = 11;
long duration;
int distanceCm, distanceInch;
void setup()
{

Serial.begin(9600); 
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(7,OUTPUT);
digitalWrite(7,HIGH);
}
void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;
Serial.println("Distance: ");
Serial.println(distanceCm);
delay(500);

if(distanceCm <20)
{
  digitalWrite(7,LOW);
 
}

if(distanceCm >20)
{
  digitalWrite(7,HIGH);
 
}

}