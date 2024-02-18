#include "ext.h"
int main(void)
{
	RCC->AHB1ENR |= GPIOAEN;
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);
	pc13_exti_init();
	while(1)
	{

	}
}
