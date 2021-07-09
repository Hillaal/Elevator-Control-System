#ifndef __BUTTONS_H__
#define __BUTTONS_H__

#define GROUND_BUTTON       (BUTTON_0)
#define FIRST_UP_BUTTON     (BUTTON_1)
#define FIRST_DOWN_BUTTON   (BUTTON_2)
#define SECOND_UP_BUTTON    (BUTTON_3)
#define SECOND_DOWN_BUTTON  (BUTTON_4)
#define THIRD_UP_BUTTON     (BUTTON_5)
#define THIRD_DOWN_BUTTON   (BUTTON_6)
#define LAST_BUTTON         (BUTTON_7)

#define GROUND_FLOOR_BUTTON          (BUTTON_8)
#define FIRST_FLOOR_BUTTON           (BUTTON_9)
#define SECOND_FLOOR_BUTTON          (BUTTON_10)
#define THIRD_FLOOR_BUTTON           (BUTTON_11)
#define FOURTH_FLOOR_BUTTON          (BUTTON_12)
//define FORCE_OPEN_BUTTON            (BUTTON_13)

typedef enum
{
	BUTTON_0,
	BUTTON_1,
    BUTTON_2,
    BUTTON_3,
    BUTTON_4,
    BUTTON_5,
    BUTTON_6,
    BUTTON_7,
    BUTTON_8,
    BUTTON_9,
    BUTTON_10,
    BUTTON_11,
    BUTTON_12,
    BUTTON_13

    
}tBUTTON;


typedef enum
{
   LOW,
   HIGH
}tBUTTON_State;



void BUTTON_Init(void);
tBUTTON_State BUTTON_GetState(tBUTTON button);



#endif