#ifndef __PORT_H__
#define __PORT_H__

#include "Main.h"

/* LDRs' pins */
#define LDR_0_PORT_DR   (GPIO_PORT3_DATA)
#define LDR_0_PORT_CR   (GPIO_PORT3_DIRECTION)
#define LDR_0_PIN       (GPIO_PIN_0)

#define LDR_1_PORT_DR   (GPIO_PORT3_DATA)
#define LDR_1_PORT_CR   (GPIO_PORT3_DIRECTION)
#define LDR_1_PIN       (GPIO_PIN_2)

#define LDR_2_PORT_DR   (GPIO_PORT3_DATA)
#define LDR_2_PORT_CR   (GPIO_PORT3_DIRECTION)
#define LDR_2_PIN       (GPIO_PIN_3)

/* ######## MOTOR ######## */

#define MOTOR_INPUT_1_PORT_DR   (GPIO_PORT2_DATA)
#define MOTOR_INPUT_1_PORT_CR   (GPIO_PORT2_DIRECTION)
#define MOTOR_INPUT_1_PIN       (GPIO_PIN_0)

#define MOTOR_INPUT_2_PORT_DR   (GPIO_PORT2_DATA)
#define MOTOR_INPUT_2_PORT_CR   (GPIO_PORT2_DIRECTION)
#define MOTOR_INPUT_2_PIN       (GPIO_PIN_1)

#define MOTOR_INPUT_3_PORT_DR   (GPIO_PORT2_DATA)
#define MOTOR_INPUT_3_PORT_CR   (GPIO_PORT2_DIRECTION)
#define MOTOR_INPUT_3_PIN       (GPIO_PIN_2)

#define MOTOR_INPUT_4_PORT_DR   (GPIO_PORT2_DATA)
#define MOTOR_INPUT_4_PORT_CR   (GPIO_PORT2_DIRECTION)
#define MOTOR_INPUT_4_PIN       (GPIO_PIN_3)

/* push Buttons in the floors */

#define BUTTON_0_DR   (GPIO_PORT0_DATA)    /*ground*/
#define BUTTON_0_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_0_PIN  (GPIO_PIN_7)

#define BUTTON_1_DR   (GPIO_PORT0_DATA) /* 1 up*/
#define BUTTON_1_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_1_PIN  (GPIO_PIN_6)

#define BUTTON_2_DR   (GPIO_PORT0_DATA)  /* 1 down*/
#define BUTTON_2_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_2_PIN  (GPIO_PIN_5)

#define BUTTON_3_DR   (GPIO_PORT0_DATA) /* 2 up*/
#define BUTTON_3_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_3_PIN  (GPIO_PIN_4)

#define BUTTON_4_DR   (GPIO_PORT0_DATA)   /* 2 down*/
#define BUTTON_4_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_4_PIN  (GPIO_PIN_3)

#define BUTTON_5_DR   (GPIO_PORT0_DATA)  /* 3 up*/
#define BUTTON_5_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_5_PIN  (GPIO_PIN_2)

#define BUTTON_6_DR   (GPIO_PORT0_DATA)  /* 3 down*/
#define BUTTON_6_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_6_PIN  (GPIO_PIN_1)

#define BUTTON_7_DR   (GPIO_PORT0_DATA)  /*last*/
#define BUTTON_7_CR   (GPIO_PORT0_DIRECTION)
#define BUTTON_7_PIN  (GPIO_PIN_0)

/* push Buttons in the elevator */

#define BUTTON_8_DR   (GPIO_PORT3_DATA)   /*ground*/
#define BUTTON_8_CR   (GPIO_PORT3_DIRECTION)
#define BUTTON_8_PIN  (GPIO_PIN_7)
 
#define BUTTON_9_DR   (GPIO_PORT3_DATA)   /*first*/
#define BUTTON_9_CR   (GPIO_PORT3_DIRECTION)
#define BUTTON_9_PIN  (GPIO_PIN_6)

#define BUTTON_10_DR   (GPIO_PORT3_DATA)   /*second*/
#define BUTTON_10_CR   (GPIO_PORT3_DIRECTION)
#define BUTTON_10_PIN  (GPIO_PIN_5)

#define BUTTON_11_DR   (GPIO_PORT3_DATA)  /*third*/
#define BUTTON_11_CR   (GPIO_PORT3_DIRECTION)
#define BUTTON_11_PIN  (GPIO_PIN_4)

#define BUTTON_12_DR   (GPIO_PORT3_DATA)  /*last*/
#define BUTTON_12_CR   (GPIO_PORT3_DIRECTION)
#define BUTTON_12_PIN  (GPIO_PIN_1)


// #define BUTTON_13_DR   (GPIO_PORT1_DATA)  /*interrupt open button*/
// #define BUTTON_13_CR   (GPIO_PORT1_DIRECTION)
// #define BUTTON_13_PIN  (GPIO_PIN_5)

#define LED_0_DR     (GPIO_PORT2_DATA)  /*Alert LED*/
#define LED_0_CR     (GPIO_PORT2_DIRECTION)
#define LED_0_PIN    (GPIO_PIN_4)

#define LED_1_DR     (GPIO_PORT2_DATA)  /*Alert LED*/
#define LED_1_CR     (GPIO_PORT2_DIRECTION)
#define LED_1_PIN    (GPIO_PIN_5)

/* seven segments */

#define SEGMENT_DATA        (GPIO_PORT1_DATA)  
#define SEGMENT_CONTROL  (GPIO_PORT1_DIRECTION)


/* End of code filling */
#endif // __PORT_H__
