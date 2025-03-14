// int x = 0;

// void setup(){
//     Serial.begin(38400);
// }

// void loop(){
//     if(x > 100){
//         x = 0;
//     }
//     Serial.println(x);
//     x ++;
//     delay(100);
// }


int x = 33;

void setup(){
  Serial.begin(38400);
}

void loop(){
  if(x > 126){
    x = 33;
  }
  char buf[100] = {};
  sprintf(buf,"%3d 0x%02X %c \n",x,x,x);
  Serial.print(buf);
  x++;
  delay(100);
}