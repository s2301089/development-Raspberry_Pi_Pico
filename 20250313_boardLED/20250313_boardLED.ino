void setup() {
  // put your setup code here, to run once:
pinMode(25,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(25,1);
delay(500);
digitalWrite(25,0);
delay(500);
}
