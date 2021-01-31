#define LEDpin 9
#define trigPin 13
#define echoPin 12
float duration;
float distance;
float pulse;
void setup() 
{
  pinMode(LEDpin,OUTPUT);
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
  distance = distance * 0.001;
  pulse = distance * 255;
  if ( pulse <= 90.00)
  {
    analogWrite(LEDpin,pulse);
    Serial.print("Duty Cycle : ");
    Serial.println(pulse);
  }
  else
    digitalWrite(LEDpin,LOW);
}
