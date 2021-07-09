#include "Main.h"
#include "Port.h"
#include "buttons.h"

void BUTTON_Init(void){

  
            GPIO_InitPortPin(BUTTON_0_CR, BUTTON_0_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_1_CR, BUTTON_1_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_2_CR, BUTTON_2_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_3_CR, BUTTON_3_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_4_CR, BUTTON_4_PIN, GPIO_IN);
            
            GPIO_InitPortPin(BUTTON_5_CR, BUTTON_5_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_6_CR, BUTTON_6_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_7_CR, BUTTON_7_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_8_CR, BUTTON_8_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_9_CR, BUTTON_9_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_10_CR, BUTTON_10_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_11_CR, BUTTON_11_PIN, GPIO_IN);

            GPIO_InitPortPin(BUTTON_12_CR, BUTTON_12_PIN, GPIO_IN);

            //GPIO_InitPortPin(BUTTON_13_CR, BUTTON_13_PIN, GPIO_IN);

       
    }




tBUTTON_State BUTTON_GetState(tBUTTON button)
{
    tBUTTON_State ret = LOW;
    switch (button)
    {
   
        case BUTTON_0:
            ret = GPIO_ReadPortPin(BUTTON_0_DR, BUTTON_0_PIN);
            break;
        
        case BUTTON_1:
            ret = GPIO_ReadPortPin(BUTTON_1_DR, BUTTON_1_PIN);
            break;

        case BUTTON_2:
            ret = GPIO_ReadPortPin(BUTTON_2_DR, BUTTON_2_PIN);
            break;

        case BUTTON_3:
            ret = GPIO_ReadPortPin(BUTTON_3_DR, BUTTON_3_PIN);
            break;

        case BUTTON_4:
            ret = GPIO_ReadPortPin(BUTTON_4_DR, BUTTON_4_PIN);
            break;

        case BUTTON_5:
            ret = GPIO_ReadPortPin(BUTTON_5_DR, BUTTON_5_PIN);
            break;

        case BUTTON_6:
            ret = GPIO_ReadPortPin(BUTTON_6_DR, BUTTON_6_PIN);
            break;

        case BUTTON_7:
            ret = GPIO_ReadPortPin(BUTTON_7_DR, BUTTON_7_PIN);
            break;

        case BUTTON_8:
            ret = GPIO_ReadPortPin(BUTTON_8_DR, BUTTON_8_PIN);
            break;

        case BUTTON_9:
            ret = GPIO_ReadPortPin(BUTTON_9_DR, BUTTON_9_PIN);
            break;

        case BUTTON_10:
            ret = GPIO_ReadPortPin(BUTTON_10_DR, BUTTON_10_PIN);
            break;

        case BUTTON_11:
            ret = GPIO_ReadPortPin(BUTTON_11_DR, BUTTON_11_PIN);
            break;

        case BUTTON_12:
            ret = GPIO_ReadPortPin(BUTTON_12_DR, BUTTON_12_PIN);
            break;

        case BUTTON_13:
            ret = GPIO_ReadPortPin(BUTTON_12_DR, BUTTON_12_PIN);
            break;

               
  
    }
    return ret;
}



