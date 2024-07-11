void
setup (){
  Serial. begin(9600);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,INPUT);
  pinMode(A3,INPUT);
}



void loop()
{
  int frequency[61] = {330, 330, 330, 0, 330, 330, 330, 0,330,392,262,294,330,0,0.0,349,349, 349,349,349,330,330,330,330,294,294, 330,294,0, 392,0,330,330,330,0, 330, 330,330,0,330,392,262,294,330,0,0.0,349,349, 349,349,349,330,330,330,392,392,349,294,262};
  int duration,distance,sensorValue;
  for(int i=0;i<61;i++)
  {
    digitalWrite(6,HIGH);
    delayMicroseconds(10);
    digitalWrite(6,LOW);
    duration=pulseIn (5, HIGH);
    distance=(duration/2)*0.034;
    sensorValue=analogRead(A3) ;
    Serial.println(sensorValue);

    if (distance>0 && distance<=10)
    {
      tone (8, frequency[i]*5, 100+sensorValue/10);
      delay (100+sensorValue/2);
    }
    else if(distance>10&&distance<=20)
    {
      tone(8, frequency[i]*4,100+sensorValue/10);
      delay (100+sensorValue/2);
    }
    else if(distance>20&&distance<=30)
    {
      tone (8, frequency[i]*3,100+sensorValue/10);
      delay (100+sensorValue/2);
    }
    else if (distance>30&&distance<=40)
    {
      tone (8, frequency[i]*2, 100+sensorValue/10);
      delay(100+sensorValue/2) ;
    }
    else if (distance>40)
    {
      tone (8, frequency[i]*1,100+sensorValue/10);
      delay (100+sensorValue/2);
    }
  }

}



