void setup() 
{
   Serial.begin(9600);
}
void loop() 
{
  int photocellValue = analogRead(A0);
  //根據不同的亮度有不同的值
  Serial.println(photocellValue);
  delay(1000);
  if(photocellValue>=200){
    digitalWrite(11,LOW);
  }
  else{
    digitalWrite(11,HIGH);
  }

}
