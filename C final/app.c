#include "Main.h"
#include "Port.h"
#include "ldr.h"
#include "common.h"
#include "buttons.h"

unsigned char REQUEST[5]={0,0,0,0,0};
unsigned char REQUEST_DOWN[5]={0,0,0,0,0};
unsigned char REQUEST_IN_ELEVATOR[5]={0,0,0,0,0};
unsigned char temp=0;
unsigned char i =0;
unsigned char k =0;
unsigned char current=0;
unsigned char state=up;
unsigned char movement =move;
unsigned char DOOR=close;

void flags()
	{
	if (!BUTTON_GetState(GROUND_BUTTON)){ REQUEST[0]=1;}
	if ((!BUTTON_GetState(FIRST_UP_BUTTON)) || (!BUTTON_GetState(FIRST_DOWN_BUTTON))){REQUEST[1]=1;}
	if ((!BUTTON_GetState(SECOND_UP_BUTTON))|| (!BUTTON_GetState(SECOND_DOWN_BUTTON)) ){ REQUEST[2]=1;}
	if ((!BUTTON_GetState(THIRD_UP_BUTTON)) || (!BUTTON_GetState(THIRD_DOWN_BUTTON))){ REQUEST[3]=1;}
	if (!BUTTON_GetState(LAST_BUTTON)){ REQUEST[4]=1;}
	}  

void main()
{
     //variable definitios
	unsigned char current_floor =0;
    unsigned char i=0;
	
   

	WDTCN = 0xDE; // Disable watchdog timer
	WDTCN = 0xAD;

	EA = 1; // Enable global interrupts

    OSCICN = 0x014; // 2MH clock

    // config cross bar
    XBR0 = 0x00;
    XBR1 = 0x00;
    XBR2 = 0x40; // Cross bar enabled , weak Pull-up enabled
    
    LDR_Init(LDR_0);
    LDR_Init(LDR_1);
    LDR_Init(LDR_2);
    BUTTON_Init();
    MOTOR_Init();
    SEGMENT_Init();
    SEGMENT_Display(0);

	GPIO_InitPortPin(LED_0_CR, LED_0_PIN , GPIO_OUT);
	GPIO_InitPortPin(LED_1_CR, LED_1_PIN , GPIO_OUT);

    ALERT &=(~0x10);
    DOOR_LED_PORT &= ~(0x20);
    Ext_int_Init();


    while (1)
  {
      flags(); 

	 for (i=0;i<5;i++)
        {
            if(REQUEST[i] && (i > current) &&(movement=move) &&(DOOR==close)&&((state==request) || (state==up)))
            {
                state=up;
                DOOR_LED_PORT |= 0x20;
                MOTOR(up);
                current++;

                if (current== i)
                {
                    movement=stop;
                    DOOR=open;
                    DOOR_LED_PORT &= ~(0x20);
                    TIMER(2000);                                           
                    REQUEST[i]=0;
                    state=request;
                    movement=move;                    

                }
            }
        }


    for (k=0;k<5;k++)
        {
            if (REQUEST[k] && (k < current)&& (movement=move)&&(DOOR==close)&&((state==request) || (state==down)))
            {
                state=down;
                DOOR_LED_PORT |= 0x20;
                MOTOR(down);
                current --;


                if (current == k)
                {
                    movement=stop;
                    DOOR=open;
                    DOOR_LED_PORT &= ~(0x20);
                    TIMER(2000);                        

                    REQUEST[k]=0;
                    state=request;
                    movement=move;                    

                }
            }
        }


       
         
        
	
	}		
      

}
	
