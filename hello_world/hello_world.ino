void setup() {
  // put your setup code here, to run once:
     pinMode(2, OUTPUT);
     pinMode(7, OUTPUT);
    pinMode(10, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);
delay(100);
    digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
delay(100);
    digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}
