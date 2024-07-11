
void setup() {
pinMode(2,OUTPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);

}

void loop() {
  if(digitalRead(8)==HIGH);
    {
    tone(8,262,500);
    delay(1000);
    }
  if(digitalRead(9)==HIGH);
    {
    tone(9,294,500);
    delay(1000);
    }
  if(digitalRead(10)==HIGH);
    {
    tone(10,330,500);
    delay(1000);
    }
}

