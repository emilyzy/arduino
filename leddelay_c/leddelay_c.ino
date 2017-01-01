void setup()
{
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
}
void loop()
{
  if(digitalRead(4)==HIGH)
    digitalWrite(2,HIGH);
    else
    {
      digitalWrite(2,HIGH);
      delay(1000);//  haomiao
      //delayMicroseconds();weimiaoji
      digitalWrite(2,LOW);
      delay(500);    
    }
  
  
}
