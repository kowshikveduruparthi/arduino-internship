;ASSIGNMENT-2(IDE)
;Simplify the following Boolean function F , together with the don’t-care conditions d , and
;then express the simplified function in sum-of-minterms form:
;F(x,y,z)=E(0,1,4,5,6)
;d(x,y,z)=E(2,3,7)

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

or r16,r0   ;x+x'

lsl r16
lsl r16

out PORTD,r16
start:
rjmp start
