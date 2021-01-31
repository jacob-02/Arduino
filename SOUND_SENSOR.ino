#define soundPin A0
#define buzzPin 2
void setup() 
{
  pinMode(soundPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
  Serial.println("Sound Sensor Test");
}

void loop() 
{
  long sound = analogRead(soundPin);
  Serial.println(sound);
  delay(1000);
}
