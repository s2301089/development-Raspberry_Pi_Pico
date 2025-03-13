#define LED 2
#define SW 3
int x = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(SW);
  Serial.println(x);
  digitalWrite(LED,!x);
}
