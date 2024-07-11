void setup() {
  pinMode(3,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT); 
  pinMode(0,INPUT);
  pinMode(5, OUTPUT); 
}

void loop() {
  int a;
  a=digitalRead(3);
  Serial.print("震動感測器 ：");
  Serial.println(digitalRead(3));
  int photocellValue = analogRead(0);
  Serial.print("光敏電阻 ：");
  Serial.println(analogRead(0));

  if(a==1)
  {
    tone(12,262,500);
    digitalWrite(9,HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(500);
  }

  if(analogRead(0)<=100)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }

}
