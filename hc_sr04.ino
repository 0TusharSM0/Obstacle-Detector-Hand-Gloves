int trig=2;
int echo=3;
int buz=13;

void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buz,OUTPUT);
}

void loop()
{
  digitalWrite(trig,LOW);
  digitalWrite(trig,HIGH);
  delay(60);
  digitalWrite(trig,LOW);
  long distance, duration;
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)*0.034;

  if(distance<=30)
  {
    digitalWrite(buz,HIGH);
  }

  else
  {
    digitalWrite(buz,LOW);
  }
}
