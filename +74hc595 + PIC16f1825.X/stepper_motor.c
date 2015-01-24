
#define chak 5

void stepper_motor_inc(int RPG_val,unsigned int br);
void stepper_motor_int(void);
void HC74595_send(unsigned int bytefor595);
void pin();
unsigned char Get_LED_digit(unsigned char LED_digit);
///////////////////////////////////////////////////////////
void HC74595_send(unsigned int bytefor595){
   char caa;

for (caa=8;caa>0;caa--)
      {
         a2=0;

         if ((bytefor595&0x80)==0)a1=0;
         else a1=1;           

         a2=1;
         bytefor595 = bytefor595 << 1;
}

}
//a2-sclk	/jylto		/bialo oranj	/
//a1-sda	/sivo		/oranjevo		/A
//a0-pin	/kafiavo	/svetlo kaviav	/
//////////////////////////////////////////////////////////////
void stepper_motor_inc(int RPG_val,unsigned int br){
static unsigned int pa_temp=1;

for (;br>0;br--){
	if(RPG_val==1){
		pa_temp>>=1;
		if(c==1)pa_temp=0b00001000;
	}
	else{
		pa_temp<<=1;
		if(pa_temp==0b00010000)pa_temp=1;
	}
    HC74595_send(0b11111100);
    HC74595_send(pa_temp);

	pin();
    delay_ms(8);
    delay_us(585);
}
}
/////////////////////////////////////////////////////////////
void pin(){
	a0=1;
	a0=0;
}
///////////////////////////////////////////////////////////
/*void HC74595_send(void){
   char caa,bytefornokia=0b11111111;
   for (caa=8;caa>0;caa--)
      {
         a2=0;		//output_bit( PIN_B5, 0);//
         //delay_us(2);
         if ((bytefornokia&0x80)==0)
            nok_sda=0;		//output_bit( PIN_B6, 0);//
         else
            nok_sda=1;		//output_bit( PIN_B6, 1);//
         nok_sclk=1;		//output_bit( PIN_B5, 1);//
         //delay_us(2);
         bytefornokia = bytefornokia << 1;
      }
	a0=1;
	a0=0;
}/*
///////////////////////////////////////////////////////////
void stepper_motor_inc(int RPG_val,unsigned int br){
static unsigned int pa_temp;

pa_temp=pa;
for (;br>0;br--){
	if(RPG_val==1){
		pa_temp>>=1;
		if(c==1)pa_temp=0b00001000;
	}
	else{
		pa_temp<<=1;
		if(pa_temp==0b00010000)pa_temp=1;
	}
//delay_ms(200);
pa=pa_temp;
nokia_gotoxy(0,2);
nokia_print_Byte(pa_temp);
}
}
///////////////////////////////////////////////////////////


/*
/////////////////////////////////////////
pa=0x00;
asd:
a0=1;
	delay_ms(chak);
a1=1;
a0=0;


	delay_ms(chak);
a2=1;
a1=0;


	delay_ms(chak);
a3=1;
a2=0;


	delay_ms(chak);
a3=0;
goto asd;

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
pa_temp=pa;
pa_temp<<=1;
if(pa_temp==8)pa_temp=1;
pa=pa_temp;


\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
pa_temp+=RPG_val;
if(pa_temp==4)pa_temp = 0;
if(pa_temp==255)pa_temp = 3;
pa=0x00;
switch (pa_temp) {
   case 0:  a0=1;break;
   case 1:  a1=1; break;
   case 2:  a2=1; break;
   case 3:  a3=1; break;}
///////////////////////////////////////////
*/

