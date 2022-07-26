//ASSIGNMENGT-3
//DESIGN AND IMPLEMENT A COUNTER USING T-FLIP-FLOP


#include<Arduino.h>
int p,q,r,i;
int D,C,B,A;

void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(2, A); 
  digitalWrite(3, B); 
  digitalWrite(4, C); 
  digitalWrite(5, D); 

}
void setup() {
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop() {
	
    for(i=0;i<16;i++){
      p=(i/4)%2;
      q=(i/2)%2;
      r=(i)%2;
      
      
        A=0;
        B=p&&q;
        C=p;
        D =1;
  
      disp_7447(A,B ,C,D);  
      delay(1000);
      
    }
}
  

