
//#use fast_io(B)

#define NOP #asm nop #endasm
#define BTG() #asm btg #endasm

	#byte status = 0xFD8
	#bit c = status.0


	#byte 	PORTA	= 0xF80   // PORTA
	#byte 	TRISA	= 0xF92   // PORTA tris
	#byte 	LATA	= 0xF89   // PORTB LAT

	#byte 	PORTB	= 0xF81   // PORTB
	#byte 	TRISB	= 0xF93   // PORTB tris
	#byte 	LATB	= 0xF8A   // PORTB LAT

	#byte 	PORTC	= 0xF82   // PORTC
	#byte 	TRISC	= 0xF94   // PORTC tris
	#byte 	LATC	= 0xF8B   // PORTB LAT

	#byte 	PORTD	= 0xF83   // PORTD
	#byte 	TRISD	= 0xF95   // PORTD tris
	#byte 	LATD	= 0xF8C   // PORTD LAT

	#byte 	PORTE	= 0xF84   // PORTC
	#byte 	TRISE	= 0xF96   // PORTC tris
	#byte 	LATE	= 0xF8E   // PORTB LAT

	#byte 	TMR1	= 0xFCD   // T1CON
	#byte 	TMR3	= 0xFB1   // T3CON


	#bit a0 = PORTA.0
	#bit a1 = PORTA.1
	#bit a2 = PORTA.2
	#bit a3 = PORTA.3
	#bit a4 = PORTA.4
	#bit a5 = PORTA.5
	#bit a6 = PORTA.6


	#bit c0 = PORTC.0			
	#bit c1 = PORTC.1
	#bit c2 = PORTC.2
	#bit c3 = PORTC.3
	#bit c4 = PORTC.4
	#bit c5 = PORTC.5
	#bit c6 = PORTC.6
	#bit c7 = PORTC.7


