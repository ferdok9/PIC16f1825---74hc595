//#include <18F2550.h>
////#device ADC=8
//#fuses HSPLL,NOWDT,NOPROTECT,NOLVP,NODEBUG,USBDIV,PLL5,CPUDIV1,VREGEN
//#use delay(clock=48000000)

#include <16F1825.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

//#fuses INTRC_IO,PLL
#fuses NOPROTECT,NODEBUG

#use delay(internal=32MHz)
//#use rs232(baud=9600, UART1, errors)
#use rs232(baud=9600, xmit=PIN_A0,rcv=PIN_A1, errors)


#byte status = 0x003
#bit c = status.0

#byte 	PORTC	= 0x00E   // PORTC
#byte 	TRISC	= 0x08E   // PORTC tris
#byte 	LATC	= 0x10E   // PORTB LAT

#include "74HC595.c"

//unsigned int8 indk[4]= {0x0,0x10,0x20,0x30};
//#INT_TIMER1                            // waking up from T1 overflow
//void timer1_isr(void)
//{
//char pre=0;
//static int8 i=1,time=0,kolon=0,h;
//	set_timer1(500);//(64000);//
//time++;
//if(time>29){
//
//		time=0;
//
//		i<<=1;
//		if(i==0x10)i=1;
//
//		pre  =0b10010000 | i;
//		HC74595_send(pre);
//		HC74595_Latch();
//
//		switch (i) {
//
//		    case 1:	pre  = indk[0] | i;
//		           break;
//
//		    case 2:	pre  = indk[1] | i;
//		           break;
//
//		    case 4:	pre  = indk[2] | i;
//		           break;
//
//		    case 8:	pre  = indk[3] | i;
//		           break;
//			}
//		HC74595_send(pre);
//		HC74595_Latch();
//
//	}
//}

///////////////////////////////////////////////////////////
void main(){

//      set_timer1(0);
//      enable_interrupts(INT_TIMER1);
//
//      setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
//     enable_interrupts(GLOBAL);

TRISC = 0x00;

printf("blaaaa\n\r");

while(TRUE){

HC74595_send(0b01100011);
HC74595_Latch();    
delay_ms(500);

HC74595_send(0b01100101);
HC74595_Latch(); 
delay_ms(500);

HC74595_send(0b01101001);
HC74595_Latch(); 
delay_ms(500);

HC74595_send(0b01110001);
HC74595_Latch(); 
delay_ms(500);
}







//    while(TRUE){
//        printf("blaaaa");
//        delay_ms(500);
//    }
}

/*
DATA_595=1;
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Clk();
HC74595_Latch();

      set_timer1(0);
      enable_interrupts(INT_TIMER1);
      enable_interrupts(GLOBAL);
      setup_timer_1(T1_INTERNAL|T1_DIV_BY_4);
 * 
    DATA_595=1;
    CLK_595=1;
    LATCH_595=1;

    delay_ms(100);

    DATA_595=0;
    CLK_595=0;
    LATCH_595=0;

    delay_ms(100);
*/
