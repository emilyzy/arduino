void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
}
void loop()
{
  if(digitalRead(2)==HIGH)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
  digitalWrite(4,LOW);
  }
//Serial.println(vol,DEC);
}
