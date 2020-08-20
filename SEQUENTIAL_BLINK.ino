


void setup() {
  
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);
pinMode(5,OUTPUT);
digitalWrite(5,HIGH);
pinMode(6,OUTPUT);
digitalWrite(6,HIGH);

}

void loop() 
{
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);

}
