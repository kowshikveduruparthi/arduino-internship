//ASSIGNMENT-2(IDE)
//Simplify the following Boolean function F , together with the don’t-care conditions d , and
//then express the simplified function in sum-of-minterms form:
//F(x,y,z)=E(0,1,4,5,6)
//d(x,y,z)=E(2,3,7)

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
  seven seg(1,0,0,1,1,1,1);

}


    
