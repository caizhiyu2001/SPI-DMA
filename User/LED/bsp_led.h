#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED0_GPIO_PIN             GPIO_Pin_5
#define LED0_GPIO_PORT            GPIOB
#define LED0_GPIO_CLK             RCC_APB2Periph_GPIOB
#define LED1_GPIO_PIN             GPIO_Pin_5
#define LED1_GPIO_PORT            GPIOE
#define LED1_GPIO_CLK             RCC_APB2Periph_GPIOE



#define            ON              1
#define            OFF             0



#define LED0(a)   if(a)  \
												GPIO_ResetBits(LED0_GPIO_PORT,LED0_GPIO_PIN);\
									else  GPIO_SetBits(LED0_GPIO_PORT,LED0_GPIO_PIN);

#define LED1(a)   if(a)  \
												GPIO_ResetBits(LED1_GPIO_PORT,LED1_GPIO_PIN);\
									else  GPIO_SetBits(LED1_GPIO_PORT,LED1_GPIO_PIN);



void LED_GPIO_Config(void);
void LED1_GPIO_Config(void);


#endif  /* __BSP_LED_H */
