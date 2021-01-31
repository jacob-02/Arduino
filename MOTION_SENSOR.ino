#define motionPin 9
#define buzzPin 2
void setup() 
{
  pinMode(buzzPin,OUTPUT);
  pinMode(motionPin,INPUT);
  Serial.begin(9600);
  Serial.println("Alarm Test");
}

void loop() 
{
  long movement = digitalRead(motionPin);
  Serial.println(movement);
  if(movement==0)
  digitalWrite(buzzPin,LOW);
  else
  digitalWrite(buzzPin,HIGH);
  delay(100);
}
