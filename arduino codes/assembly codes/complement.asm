

 
.include "/home/veeracharyulu/m328Pdef.inc"

ldi r16, 0b00111100 
out DDRD,r16		;declaring pins as output

ldi r16,0b00000001	

rcall comp	;
ldi r20, 0b00000010	

rcall loopw		
out PORTD,r16


Start:
rjmp Start


loopw:	lsl r16			
	dec r20			
	brne	loopw	
	ret

;comp routine begins
comp:
	mov r0,r16			
	ldi r16,0b00000001	
	
	eor r16,r0			;A'=A XOR 1
	ret 				


