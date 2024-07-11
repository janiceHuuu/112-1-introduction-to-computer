void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  
}
  int a = 0;
  int b = 0;
  int c = 0;

void loop() {
  int value_VR = analogRead(0);
  Serial.print("電阻值:");
  Serial.println(value_VR,DEC);
  delay(500);
  int value_sound = analogRead(1);
  Serial.print("音量:");
  Serial.println(value_sound);
  delay(500);

  if(value_sound<550){
    if(value_VR>=300&&value_VR<400){
     a = 1;
     digitalWrite(10,HIGH);
     delay(1000);
     }
    if(value_VR>=400&&value_VR<500&&a==1){
     digitalWrite(11,HIGH);
     b = 1;
     delay(1000);
     }
    if(value_VR>=500&&value_VR<700&&b==1){
     digitalWrite(12,HIGH);
     delay(1000);
    } 
  }
  else if(value_sound>=550) {
    value_VR=0;
    a = 0;
    b = 0;
    c = 0;
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    delay(2000);
    value_VR = analogRead(0);
    digitalWrite(9,LOW);
    }
}
