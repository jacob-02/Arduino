const int motorpinL = 13;
const int motorpinR = 12;
void setup() 
{
  pinMode (motorpinL, OUTPUT);
  pinMode (motorpinR, OUTPUT);
  Serial.begin (9600);
}

void loop() 
{
  if(Serial.available()>0)
  {
    char motorpinState = Serial.read();
    if(motorpinState == '0')
    {             
      digitalWrite (motorpinL, HIGH);
      digitalWrite (motorpinR, LOW);
    }
    if(motorpinState == '1')
    {             
      digitalWrite(motorpinL, LOW);
      digitalWrite(motorpinR, HIGH);
    }
    if(motorpinState == '2')
    {
      digitalWrite(motorpinL, HIGH);
      digitalWrite(motorpinR, HIGH);
    }
    if(motorpinState == '3')
    {
      digitalWrite(motorpinL, LOW);
      digitalWrite(motorpinR, LOW);
    }
  }
}
