#include"tim.h"
#define GPIOAEN    (1U<<0)
#define PIN5       (1U<<5)
#define LED        PIN5
int main()
{
	RCC->AHB1ENR |=GPIOAEN;
	GPIOA->MODER &= ~0x00000F00;
	GPIOA->MODER |= 0x00000400;
	  tim2_1hz_init();
	while(1)
	{
		tim_delay();
		GPIOA->ODR ^= LED;
	}
}


































//suppose there are two events E2 AND E1 will occur .
//we will provide delay between the events E1 AND E2 by timers.
//up counter
//down counter
//period
//update event
//timers are used for peripherals,interrupts,events.but systick wont for interrupts.
//update event= timer clk/(prescaler+1)(period+1)
//prescaler is a register where we will load a value to get that delay.
//period of no.of cycles per second.
//timer may be 16 or 32 bit.
