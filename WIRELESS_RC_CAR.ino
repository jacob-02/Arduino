#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>
const int motorpinL = 13;
const int motorpinR = 12;
void setup() 
{
  pinMode(motorpinL, OUTPUT);
  pinMode(motorpinR, OUTPUT);
  Serial.begin(250000);
  Dabble.begin(9600);
}

void loop() 
{
  Dabble.processInput();
  if(GamePad.isUpPressed())
  {
    Serial.println("AGAY");
    digitalWrite(motorpinL, HIGH);
    digitalWrite(motorpinR, HIGH);    
  }
  else if(GamePad.isLeftPressed())
  {
    Serial.println("LEFT");
    digitalWrite(motorpinL, LOW);
    digitalWrite(motorpinR, HIGH);
  }
  else if(GamePad.isRightPressed())
  {
    Serial.println("RIGHT");
    digitalWrite(motorpinR, LOW);
    digitalWrite(motorpinL, HIGH);
  }
  else if(GamePad.isDownPressed())
  {
    Serial.println("RUKH");
    digitalWrite(motorpinR, LOW);
    digitalWrite(motorpinL, LOW);
  }
}
