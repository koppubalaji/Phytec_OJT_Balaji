#include "ext.h"
#include "stm32f4xx.h"
void pc13_exti_init(void)
{
	__disable_irq(); //to disable all the other interrupts
	RCC->AHB1ENR |=4;
	GPIOC->MODER &=~(1U<<26);
	GPIOC->MODER &=~(1U<<27);
	RCC->APB2ENR |=SYSCFGEN;//The SYSCFG allows mapping external interrupt sources (like EXTI line sources) to specific GPIO pins.
	SYSCFG->EXTICR[3] |=(1U<<5);//since we need a interrupt in 13th pin
	//EXTICR[3]=EXTICR4;
	EXTI->IMR |=(1U<<13);
	EXTI->RTSR |=(1U<<13);
	NVIC_EnableIRQ(EXTI15_10_IRQn);//EXTI15_10_IRQn=40;(112 line in stm32f411xe.h)
	//The NVIC_EnableIRQ() function is part of the Nested Vectored Interrupt Controller (NVIC) and is used to enable interrupts for specific IRQ numbers. In this case, IRQ number 40 is enabled, which corresponds to EXTI line 13 interrupt
	__enable_irq();//to enable all the other interrupts
}
void exti_callback(void)
{
	GPIOA->ODR ^=LED;
}
void EXTI15_10_IRQHandler(void) {
	if((EXTI->PR & LINE13)!=0)
	{
		EXTI->PR = 1<<13;//This bit is cleared by programming it to ‘1’.
		exti_callback();
	}
}
