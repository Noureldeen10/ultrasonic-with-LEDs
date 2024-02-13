int t=0;
int d=0;
void setup()
{
  for (int i=10;i<=13;i++){
  pinMode(i,OUTPUT);}
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(4,LOW);
  delayMicroseconds(2);
  digitalWrite(4,HIGH);
  delayMicroseconds(10);
  digitalWrite(4,LOW);
  t=pulseIn(3,HIGH);
  d=0.0343*t/2;
  Serial.println(d);
  if (d>10 && d<100){digitalWrite(10,HIGH);
                     digitalWrite(11,LOW);
                     digitalWrite(12,LOW);
                     digitalWrite(13,LOW);}
  else if (d>=80 && d<150){digitalWrite(10,HIGH);
                           digitalWrite(11,HIGH);
                           digitalWrite(12,LOW);
                           digitalWrite(13,LOW);}
  else if (d>=150 && d<220){digitalWrite(10,HIGH);
                            digitalWrite(11,HIGH);
                            digitalWrite(12,HIGH);
                            digitalWrite(13,LOW);}
  else if (d>=220 && d<250){digitalWrite(10,HIGH);
                            digitalWrite(11,HIGH);
                            digitalWrite(12,HIGH);
                            digitalWrite(13,HIGH);}
   
}
