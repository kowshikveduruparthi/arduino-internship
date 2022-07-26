//ASSIGNMENT-1(IDE)
//Simplify the following Boolean expression, using three-variable maps:
//F(x,y,z)=x'y+y'z'+yz'



#include<Arduino.h>
int z=1,y=0,x=0;
int f;
void seven_seg(int a,int b,int c,int d,int e,int f,int g){
    digitalWrite(2,a);
    digitalWrite(3,b);
    digitalWrite(4,c);
    digitalWrite(5,d);
    digitalWrite(6,e);
    digitalWrite(7,f);
    digitalWrite(8,g);
}
void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
}
void loop(){
  f= !z||(!x&&y);
  if (f==0){
       seven_seg(0,0,0,0,0,0,1);
  }
  else{
       seven_seg(1,0,0,1,1,1,1);
  }

}


    
