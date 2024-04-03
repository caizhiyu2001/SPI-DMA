#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_dma_mtm.h"


extern const uint32_t aSRC_Const_Buffer[BUFFER_SIZE];
extern uint32_t aDST_Buffer[BUFFER_SIZE];



void Delay(uint32_t i)
{
		for(;i!=0;i--);
}	




int main (void)
{
	
	uint8_t status = 0;
	LED_GPIO_Config();
	LED1_GPIO_Config();
				LED0(OFF);
				LED1(ON);
		Delay(0xFFFFFF);
	MtM_DMA_Config();
	
	while(DMA_GetFlagStatus(MTM_DMA_FLAG_TC) == RESET);
	
	status =  Buffercmp(aSRC_Const_Buffer,aDST_Buffer, BUFFER_SIZE );
	
	if ( status == 0)
	{
			LED0(ON);
		  LED1(OFF);		
	}
	else
	{
		  LED1(ON);
	}
	while(1)
	{
	//GPIO_SetBits(LED0_GPIO_PORT,LED0_GPIO_PIN);
	//	LED0(OFF);
		//Delay(0xFFFFF);
	
	//GPIO_ResetBits(LED0_GPIO_PORT,LED0_GPIO_PIN);
		//Delay(0xFFFFF);
	}
}
