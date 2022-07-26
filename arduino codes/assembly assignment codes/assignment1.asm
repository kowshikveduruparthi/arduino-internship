;ASSIGNMENT-1(ASSEMBLY)
;Simplify the following Boolean expression, using three-variable maps:
;F(x,y,z)=x'y+y'z'+yz'
.include "/home/veeracharyulu/m328Pdef.inc"
ldi r16,0b00111100
out DDRD,r16

ldi r16,0b00000001  ;initiating x
ldi r17,0b00000001  ;initiating y
ldi r18,0b00000001  ;initiating z
ldi r19,0b00000001

mov r0,r16
eor r0,r19  ;x complement

mov r1,r17
eor r1,r19  ;y complement

mov r2,r18
eor r2,r19  ;z complement

and r0,r17
or r0,r2

mov r16,r0
lsl r16
lsl r16

out PORTD,r16
start:
rjmp start
