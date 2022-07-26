#include<Arduino.h>
int z=0,y=1,x=0,w=1;
int d,c,b,a;

void disp_7447(int d,int c,int b,int a){
     digitalWrite(2,a);
     digitalWrite(3,b);
     digitalWrite(4,c);
     digitalWrite(5,d);
}

void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
}

void loop(){
  a=0;
  b=(w&&!x&&!y&&!z) || (!w&&x&&!y&&!z) || (w&&!x&&y&&!z) || (!w&&x&&y&&!z);
  c=(w&&x&&!y&&!z) || (!w&&!x&&y&&!z) || (w&&!x&&y&&!z) || (!w&&x&&y&&!z);
  d = (w&&x&&y&&!z)||(!w&&!x&&!y&&z);
  disp_7447(d,c,b,a);
}

