float thermPin = A3;
float temperature;
void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  float temp = analogRead(thermPin);
  temperature = (thermPin / 2.048)  ;
  temperature = 32.0 + ((temperature) * 9.0 / 5.0);
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.println(" Farheneit"); 
  delay(1000);
}
