
int x,y,o,p;
int q1,q2,q3,d1,d2,d3;

void disp7474(int o,int d1,int d2,int d3){
  
  
   digitalWrite(7,d3);
   digitalWrite(8,d2);
   digitalWrite(9,d1);
}

void setup(){
    Serial.begin(9600);
    pinMode(3,INPUT); //q3
    pinMode(4,INPUT); //q2
    pinMode(5,INPUT); //q1
    pinMode(7,OUTPUT);  //d3
    pinMode(8,OUTPUT);  //d2 
    pinMode(9,OUTPUT);  //d1
    pinMode(10,INPUT);// input
    pinMode(11,OUTPUT);//for output y
    pinMode(13,OUTPUT); // FOR OVERALL CLOCK
}

void loop(){
   digitalWrite(13,LOW);
   x = digitalRead(10); //declaring x as input
   digitalWrite(13,HIGH);
   delay(1000);
   q3= digitalRead(3);
   q2= digitalRead(4);      																										
   q1= digitalRead(5);
   d3= q2&&q1&&x;
   d2= (q3&&!x)||(!q2&&q1&&x)|| (q2&&!q1&&!x);
   d1= (!x);
   y = (q3&&!q2&&q1&&x);                           
   disp7474(o,d3,d2,d1);
 //  Serial.print(o);
   //delay(1);
  // Serial.print(d1);
  // delay(1);
  // Serial.print(d2);
  // delay(1);
  // Serial.print(d3);
  // delay(1);

if  (y==1){
      digitalWrite(11,LOW);
  }
if (y==0){
      digitalWrite(11,HIGH);
  }
 }

