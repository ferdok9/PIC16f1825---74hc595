
#include <74HC595.h>



void HC74595_send(unsigned int bytefor595){
   char caa;

for (caa=8;caa>0;caa--)
     {
         if ((bytefor595&0x80)==0)DATA_595=0;
         else DATA_595=1;           

         bytefor595 = bytefor595 << 1;
		 HC74595_Clk();
	}
}
/////////////////////////////////////////////////
void HC74595_Latch(void){

LATCH_595=1;
LATCH_595=0;
LATCH_595=1;
}
/////////////////////////////////////////////////
void HC74595_Clk(void){
CLK_595=0;
CLK_595=1;
CLK_595=0;
}