void setup()
{
  analogWrite(3,100);
}
void loop()
{
  analogWrite(3,0);
  delay(100);
  analogWrite(3,100);
  delay(100);
  analogWrite(3,180);
  delay(100);
  analogWrite(3,250);
  delay(100);
  analogWrite(3,180);
  delay(100);
  analogWrite(3,100);
  delay(100);
  analogWrite(3,50);
  delay(100);
}
