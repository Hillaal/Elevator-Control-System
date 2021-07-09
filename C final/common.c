#include "Main.h"
#include "Port.h"
#include "common.h"

unsigned char current_floor=0;
unsigned int time=0;

void delay(unsigned int ms)
{
	unsigned int k;
	unsigned int i;
	for (i=0;i<ms;i++)
	{
		for(k=0;k<120;k++){
		}
	}
}





void SEGMENT_Init(void)
{

	GPIO_InitPort(SEGMENT_CONTROL,GPIO_OUT);

}



void SEGMENT_Display(unsigned char n)
{

	unsigned char floor_NO[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};

	GPIO_WritePort(SEGMENT_DATA, floor_NO[n]); 

}


void MOTOR_Init(void){

	GPIO_InitPortPin(MOTOR_INPUT_1_PORT_CR, MOTOR_INPUT_1_PIN , GPIO_OUT);
	GPIO_InitPortPin(MOTOR_INPUT_2_PORT_CR, MOTOR_INPUT_2_PIN , GPIO_OUT);
	GPIO_InitPortPin(MOTOR_INPUT_3_PORT_CR, MOTOR_INPUT_3_PIN , GPIO_OUT);
	GPIO_InitPortPin(MOTOR_INPUT_4_PORT_CR, MOTOR_INPUT_4_PIN , GPIO_OUT);


}


void MOTOR (unsigned char dir){

	unsigned char floor_angle[]={0x00,0x0C,0x04,0x02,0x01};

	switch (dir)
	{
	case 1:
			
			MOTOR_INPUT_1_PORT_DR= ((MOTOR_INPUT_1_PORT_DR & 0xF0) |floor_angle[current_floor+1]);
			//MOTOR_INPUT_1_PORT_DR=0x0C;
			current_floor+=1;
			if (current_floor>4){
				current_floor=4;
			}
			SEGMENT_Display(current_floor);
			delay(500) ;	

		break;
	
	case 0:
			if(1==current_floor){
				MOTOR_INPUT_1_PORT_DR=0x09;
				
			}
			else {
				MOTOR_INPUT_1_PORT_DR= ((MOTOR_INPUT_1_PORT_DR & 0xF0) |floor_angle[current_floor-1]); 
			}

			current_floor-=1;
			if (current_floor<0){
				current_floor=0;
			}
			SEGMENT_Display(current_floor);

			delay(500);
			break;
	}

		
}




void TIMER(unsigned int t){

	time=t;

	TMOD = 0x01;       //Timer0 mode 1 
	TL0 = 0x30;        //Load the timer value
    TH0 = 0XF8;
    ET0 = 1;           //Enable TImer0 Interrupt
	CKCON |=0x08;
    TR0 = 1;           //turn ON Timer zero

}

void Timer0_ISR (void) interrupt 1
{
	time--;
	
	TL0  = 0X30;        //ReLoad the timer value
    TH0  = 0XF8;


	if (time==0){
		
		if((count_LDR<3)&&(GPIO_ReadPortPin(LDR_0_PORT_DR, LDR_0_PIN))) /*to count and detect if someone is blocking the door*/
		{
			DOOR=close;
			DOOR_LED_PORT |= 0x20;
			TR0 = 0;
		}
		else{TIMER(1000);}          
	}
	

	
}


