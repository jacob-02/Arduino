#define lightPin A0
void setup() 
{
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
  Serial.println("Light Sensor Test Run");  
}

void loop() 
{
  unsigned int ambience =  analogRead(lightPin);
  Serial.print("Ambience : ");
  Serial.print(ambience);
  Serial.println(" Candella");
  if(ambience==27)
  digitalWrite(LED_BUILTIN,HIGH);
  else
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
}
