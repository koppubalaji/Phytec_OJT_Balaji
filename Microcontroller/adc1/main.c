//#include"stm32f4xx.h"
//uint32_t sensor_value;
//
//
//
//void pa1_adc_init(void)
//{
//	RCC->AHB1ENR |= 1;
//	GPIOA->MODER |= 0x0000000C;
//	RCC->APB2ENR |= 0x00000100;
//	ADC1->SQR3 = 1;
//	ADC1->SQR1 = 0x00;
//	ADC1->CR2 |= 1;
//}
//
//
//void start_converstion(void)
//{
//	ADC1->CR2 |= 2;
//	ADC1->CR2 |= 0x40000000;
//
//}
//
//
//
//uint32_t adc_read(void)
//{
//	while(!(ADC1->SR & 0x00000020)){}
//
//	return (ADC1->DR);
//}
//int main(void)
//{
//	pa1_adc_init();
//	start_converstion();
//	while(1)
//	{
//
//		sensor_value=adc_read();
//
//	}
//
//}
#include "stm32f4xx.h"
#define GPIOAEN		    (1U<<0)
#define ADC1EN			(1U<<8)
#define ADC_CH1			(1U<<0)
#define ADC_SEQ_LEN_1	 0x00
#define CR2_ADON		(1U<<0)
#define CR2_SWSTART		(1U<<30)
#define SR_EOC			(1U<<1)
uint32_t sensor_value;
void pa1_adc_init(void)
{

	RCC->AHB1ENR |= 1;
	GPIOA->MODER |=0x0000000C;
	RCC->APB2ENR |= 1<<8;
	ADC1->SQR3 = 1;
	ADC1->SQR1 = 0x0000;
	ADC1->CR2 |= 1;
}
void start_conversion(void)
{
	//ADC1->CR2 |= 2;
	ADC1->CR2 |= 1<<30;
}
uint32_t adc_read(void)
{
	while(!(ADC1->SR & 1<<1)){}
	return (ADC1->DR);
}
int main(void)
{
	pa1_adc_init();

	while(1)
	{
		start_conversion();
		sensor_value=adc_read();
	}
}
// bpf allows certain range of frequencies.so we can know the maximum frequency(fm).
//sampling is a process of converting continuous analogous signal to discrete form on the basis of fs>=2fm.
//quantization is a process of converting continuous amplitude samples to discrete time signal


//ADC Independent mode


//1.single conversion single channel
//2. continuous conversion single channel
//3.single conversion multiple channel
//4.continuous conversion multiple channel
//5.Injected mode
//In STM32F411RE, you can use ADC channels 0 to 15 for external analog measurements,
//where each channel corresponds to a specific GPIO pin.










