#ifndef __LDR_H__
#define __LDR_H__
	
typedef enum
{
	LDR_0,
	LDR_1,
   LDR_2

}tLDR;


typedef enum
{
   LDR_OFF,
   LDR_ON
}tLDR_State;



void LDR_Init(tLDR LDR);
tLDR_State LDR_GetState(tLDR LDR);
unsigned char LDR_Count();

void Ext_int_Init(void);
void External0_ISR(void);


#endif