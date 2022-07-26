.include "/home/veeracharyulu/m328Pdef.inc"

	ldi r17, 0b11000011 
	out DDRB,r17		; declaring pins as input
	ldi r17, 0b11111111 
	out PORTB,r17		
	in r17,PINB
	
	ldi r16, 0b00111100 
	out DDRD,r16		
	out PORTD,r17		
	
Start:
	rjmp Start
	
