void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int vol_1;
  float vol=0;
  vol_1=analogRead(A0);
  vol=5.0*(((float)vol_1)/1024.0);
  Serial.println(vol,DEC);
  delay(500);
}
