void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(12,OUTPUT);
}

void loop() 
{
  float duration,distance;
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  duration = pulseIn(10,HIGH); 
  //量測從echo腳位回來脈波的時間
  distance = (duration/2)*0.034;
  //距離 = (時間/2)*音速
  //音速 = 340m/s = 0.034cm/us
  float a,b;
  a=250/distance;
  b=25*distance;
  
  tone(12,260+10*a,1000);
  delay(20+b);
  
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}
