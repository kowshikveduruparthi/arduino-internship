
.include "/home/veeracharyulu/m328Pdef.inc"

ldi r16, 0b00111100 
out DDRD,r16		;declaring pins as output



ldi r16,0b00000000	;initializing W
ldi r17,0b00000001	;initializing X

eor r16,r17			

ldi r20, 0b00001000	

rcall loopw		

out PORTD,r16		


Start:
rjmp Start
loopw:	lsl r16			
	dec r20		
	brne	loopw	
	ret
