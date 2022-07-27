#include<avr/io.h>
#include<util/delay.h>
#include<stdbool.h>

int main(void){
     bool F,A,B,C;
     bool w,x,y,z;
   
     DDRD = 0b00111100;
     DDRB = 0b00100000;

    while(1){
         
        F = !z || (!x&&y);
        A=0;
        B=0;
        C=0;

        PORTD = (F<<5);
        PORTD |= (A<<4);
        PORTD |= (B<<3);
        PORTD |= (C<<2);
        x = PIND & (1<<PIND6) == (1<<PIND6) ;
        y = PIND & (1<<PIND7) == (1<<PIND7) ;
        z = PINB & (1<<PINB0) == (1<<PINB0) ;
        w = PINB & (1<<PINB1) == (1<<PINB1);
        }
     return 0;
}
