//incremental decoder

#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>




int main (void)

{

 bool A,B,C,D;

 bool a=0,b=0,c=0,d=0;

        DDRD = 0b00111100;

 DDRB = 0b00100000;

 PORTD = 0b11000000;

 PORTB = 0b00000011;

        while(1){




  PORTB = ((1 <<  PB5));

  _delay_ms (200L);

   A=0;
  B=(a&&!b&&!c&&!d) || (!a&&b&&!c&&!d) || (a&&!b&c&&!d) || (!a&&b&&c&&!d);
  C=(a&&b&&!c&&!d) || (!a&&!b&&c&&!d) || (a&&!b&&c&&!d) || (!a&&b&&c&&!d);
  D = (a&&b&&c&&!d)||(!a&&!b&&!c&&d);

                PORTD = (D << 2);

                PORTD |= (C << 3);

                PORTD |= (B << 4);

                PORTD |= (A << 5);

                d = (PIND & (1 << PIND6)) == (1 << PIND6);

                c = (PIND & (1 << PIND7)) == (1 << PIND7);

                b = (PINB & (1 << PINB0)) == (1 << PINB0);

                a = (PINB & (1 << PINB1)) == (1 << PINB1);

  PORTB = ((0 <<  PB5));

   _delay_ms (200L);

 }

        return 0;

}
