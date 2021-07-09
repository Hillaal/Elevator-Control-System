#ifndef __COMMON_H__
#define __COMMON_H__


#define up (1)
#define down (0)
#define request (2)
#define move (1)
#define stop (0)
#define ALERT (LED_0_DR)
#define DOOR_LED_PORT (LED_1_DR)

#define open (0)
#define close (1)

void delay(unsigned int ms);
void SEGMENT_Init(void);
void SEGMENT_Display(unsigned char n);
void MOTOR (unsigned char dir);
void MOTOR_Init(void);
void TIMER(unsigned int t);
extern unsigned char DOOR;
extern unsigned char count_LDR;

void Timer0_ISR (void);

#endif