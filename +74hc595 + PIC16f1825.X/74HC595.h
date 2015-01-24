

#bit DATA_595  = PORTC.3 //PORTA PIN1 bialo
#bit CLK_595   = PORTC.4 //PORTA PIN0 cherno
#bit LATCH_595 = PORTC.5 //PORTA PIN2 cher

//trisa = 0xFF;

void HC74595_send(unsigned int bytefor595);
void HC74595_Latch(void);
void HC74595_Clk(void);