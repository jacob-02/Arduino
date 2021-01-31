#define echoPin 12
#define trigPin 13
long duration;
int distance;
void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  Serial.println("UltraSonic Sensor Test");
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");
}
