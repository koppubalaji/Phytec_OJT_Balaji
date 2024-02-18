#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#define GPIOAEN				   (1U<<0)
#define PIN5				   (1U<<5)
#define LED				   		PIN5
#define GPIOCEN		    (1U<<2)
#define SYSCFGEN		(1U<<14)
#define LINE13          (1U<<13)
void exti_callback(void);
void EXTI15_10_IRQHandler(void);
void pc13_exti_init(void);
