#define LED 2
#define RESI 28
int x;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(LED,OUTPUT);
  pinMode(RESI,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(RESI);
  Serial.println(x);
  analogWrite(LED,x / 4);
}
