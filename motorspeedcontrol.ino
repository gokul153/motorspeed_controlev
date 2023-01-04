void setup() {
  // put your setup code here, to run once:
pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=150;i<=255;i+=1){
  //int i=255;
digitalWrite(D0,HIGH);
digitalWrite(D1,LOW);
analogWrite(D2,i);
Serial.println("Moving Forward");}
delay(4000);

//i=150;
for(int i=255;i>100;i-=1){
digitalWrite(D0,LOW);
digitalWrite(D1,HIGH);
analogWrite(D2,i);
Serial.println("Moving Backward");}
delay(4000);
}
