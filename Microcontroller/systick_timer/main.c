#include "stm32f4xx.h"
#define GPIOAEN				   (1U<<0)
#define PIN5				   (1U<<5)
#define LED				   		PIN5
#define SYSTICK_LOAD_VAL			16000
#define	CTRL_ENABLE					(1U<<0)
#define CTRL_CLKSRC					(1U<<2)
#define CTRL_COUNTFLAG				(1U<<16)
void systickDelayMs(int delay)
{
	SysTick->LOAD	= SYSTICK_LOAD_VAL;
	SysTick->VAL = 0;
	SysTick->CTRL = CTRL_ENABLE | CTRL_CLKSRC;  //249 in cortex4 guide
	for(int i=0; i<delay ; i++){
	 	while((SysTick->CTRL &  CTRL_COUNTFLAG) == 0){}
	}
	SysTick->CTRL = 0;
}
int main(void)
{
	RCC->AHB1ENR |= GPIOAEN;
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);
	while(1)
	{
		GPIOA->ODR ^=LED;
		systickDelayMs(1000);
	}
}






















//It is inbuilt by ARM
//
//sysclk=N/delay;
//we need to load N value such that it will provide the delay of that we required.
// since sysclk=16MHz to provide a delay of 1ms we need to reload value of N=16k.
//it uses 3 registers syscvr(current value register)
//sysrvr(reload value register)
//syscsr(control status register)-this checks whether the count flag is 0 or not.if it is 0 then it reloads again to N value if its not it simply checks.
//uses down counter
//systick timer is upto 24bits.
