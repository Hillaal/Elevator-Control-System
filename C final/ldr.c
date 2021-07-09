#include "Main.h"
#include "Port.h"
#include "ldr.h"
#include"common.h"

unsigned char count_LDR=0;
unsigned char sen1F=0;
unsigned char sen2F=0;

void LDR_Init(tLDR LDR){

    switch (LDR)
    {
        case LDR_0:
            GPIO_InitPortPin(LDR_0_PORT_CR, LDR_0_PIN, GPIO_IN);
            break;
        case LDR_1:
            GPIO_InitPortPin(LDR_1_PORT_CR, LDR_1_PIN, GPIO_IN);
            break;
        case LDR_2:
           GPIO_InitPortPin(LDR_2_PORT_CR, LDR_2_PIN, GPIO_IN);
            break;
    }

}


// tLDR_State LDR_GetState(tLDR LDR)
// {
//     tLDR_State ret = LDR_OFF;
//     switch (LDR)
//     {
//         case LDR_0:
//             ret = GPIO_ReadPortPin(LDR_0_PORT_DR, LDR_0_PIN);
//             break;
//         case LDR_1:
//             ret = GPIO_ReadPortPin(LDR_1_PORT_DR, LDR_1_PIN);
//             break;
//         case LDR_2:
//             ret = GPIO_ReadPortPin(LDR_2_PORT_DR, LDR_2_PIN);
//             break;
  
//     }
//     return ret;
// }


// unsigned char LDR_Count(void){

//     static unsigned char count=0;
//     static unsigned char sen1F=0;
// 	static unsigned char sen2F=0;

//      if(!(LDR_GetState(LDR_1))){
//         if(1==sen2F){
//             count --;
//             sen2F=0;
//         }

//         else {
//         sen1F=1;
//         }
//     while(!(LDR_GetState(LDR_1))){}

// 	}

// 	if(!(LDR_GetState(LDR_2))){
// 			if(1==sen1F){
// 				count ++;
// 				sen1F=0;
// 			}

// 			else {
// 			sen2F=1;
// 			}
//     while(!(LDR_GetState(LDR_2))){}

// 	}
    
//     return count;

// }




void Ext_int_Init(void)				
{
	EX0 = 1;      	/* Enable Ext. interrupt0 */
	IT0 = 1;      	/* Select Ext. interrupt0 on falling edge */
    EX1=1;
    IT1=1;
}



void External0_ISR(void) interrupt 0
{  


    if(1==sen2F)
    {
            count_LDR --;
            sen2F=0;
    }

    else 
    {
        sen1F=1;
        
    } 

    if(count_LDR>2){ALERT|= 0x10;}
    else if(count_LDR<3){ALERT&= ~0x10;}

}    

void External1_ISR() interrupt 2
{  

	if(1==sen1F)
    {
        count_LDR ++;
        sen1F=0;
	}

    else 
    {
        sen2F=1;
    }

    if(count_LDR>2){ALERT|= 0x10;}
    else if(count_LDR<3){ALERT&= ~0x10;}
}    