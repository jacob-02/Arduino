#define motorPin 3
#define motorPin1 2
#define trigPin 13
#define echoPin 12
float duration, distance, pulse;
void setup() 
{
  pinMode(motorPin,OUTPUT);
  pinMode(motorPin1,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigPin,LOW);
  delay(100);
  digitalWrite(trigPin,HIGH);
  delay(100);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034 * 0.5;
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println("  cm");
  digitalWrite(motorPin,HIGH);
  digitalWrite(motorPin1,HIGH);
  if(distance<=18)
  {
    distance = distance * 0.07;
    pulse = distance * 255;
    analogWrite(motorPin,pulse);
    Serial.print("Duty Cycle : ");
    Serial.println(pulse);
  }
}
