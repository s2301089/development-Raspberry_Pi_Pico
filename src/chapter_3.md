# 変数値などの表示

### ArduinoIDEでprintfみたいなことをする  
変数の値などを表示させたいときなどにシリアルモニタに値を出力する。`Raspberry Pi Pico`と`PC`でシリアル通信を用いてデータをやり取りしている。  
`printf01.ino`  
```c
int x = 0;

void setup(){
    Serial.begin(38400);
}

void loop(){
    if(x > 100){
        x = 0;
    }
    Serial.println(x);
    x ++;
    delay(100);
}
```  
これは`0~100`までの値を`0.1s`ごとに`1`ずつ値を増やし表示する。  

`Serial.print`,`Serial.println`は一つの変数または、一つの文字列しかその関数では表示できない。`printf`関数みたいに表示形式を指定するためには`sprintf`関数を使用する。  
`printf02.ino`  
```c
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
```  
これはASCIIコードの33番(`!`)~126番(`~`)までを`0.1s`ごとに表示するプログラム。表示形式は(xを整数3桁 0x(xを大文字の16進数2桁空白0埋め) xの値に対応する文字)で出力される。  