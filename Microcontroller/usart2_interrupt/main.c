#include "stm32f4xx.h"
void USART2_init(void);
void LED_blink(int value);
void delayMs(int);
int main (void) {
	__disable_irq();
	RCC->AHB1ENR |= 1;
	GPIOA->MODER &=~0x00000C00;
	GPIOA->MODER |= 0x00000400;
	USART2_init();
	USART2->CR1 |= 0x0020;
	NVIC_EnableIRQ(USART2_IRQn);
	__enable_irq();
	while(1) {}
}
void USART2_init (void) {
RCC->AHB1ENR |= 1;
RCC->APB1ENR |= 0x20000;
GPIOA->MODER &=~0x00C0;
GPIOA->MODER |= 0x0080;
GPIOA->AFR[0] &= ~0xF000;
GPIOA->AFR[0] |= 0x7000;

USART2->BRR = 0x0683;//0x008B;
USART2->CR1 =0x0004;
USART2->CR2 = 0x0000;
USART2->CR3 = 0x0000;
USART2->CR1 |=0x2000;
}
void USART2_IRQHandler(void) {
	char c;
	if (USART2->SR & 0x0020) {
		c = USART2->DR;
		LED_blink(c);
	}
}
void LED_blink(int value) {
value %= 16;
for (; value > 0; value--) {
GPIOA->BSRR = 0x00000020;
delayMs(200);
GPIOA->BSRR = 0x00200000;
delayMs(200);
}
delayMs(800);
}
void delayMs(int n) {
int i;
for (; n > 0; n--)
for (i = 0; i < 2000; i++) ; }
/*#include "stm32f4xx.h"
#include "stm32f4xx.h"
//#include "adc.h"

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

	RCC->AHB1ENR |= GPIOAEN;
	GPIOA->MODER |= (1U<<2);
	GPIOA->MODER |= (1U<<3);

	RCC->APB2ENR |= ADC1EN;
	ADC1->SQR3 = ADC_CH1;
	ADC1->SQR1 = 0x00;
	ADC1->CR2 |= CR2_ADON;
}


void start_converstion(void)
{
	ADC1->CR2 |= 2;
	ADC1->CR2 |= CR2_SWSTART;
}
uint32_t adc_read(void)
{
	while(!(ADC1->SR & SR_EOC)){}
	return (ADC1->DR);
}
int main(void)
{
	pa1_adc_init();
	start_converstion();
	while(1)
	{
		sensor_value=adc_read();
	}
}

void USART2_init(void);
void LED_blink(int value);
void delayMs(int);

int main(void) {
    __disable_irq();
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;   // Enable GPIOA clock
    GPIOA->MODER &= ~GPIO_MODER_MODER5;    // Clear mode bits for PA5
    GPIOA->MODER |= GPIO_MODER_MODER5_0;   // Set PA5 as output mode

    USART2_init();
    USART2->CR1 |= USART_CR1_RXNEIE;       // Enable USART2 RX interrupt
    NVIC_EnableIRQ(USART2_IRQn);           // Enable USART2 interrupt in NVIC

    __enable_irq();
    while (1) {}
}

void USART2_init(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;   // Enable GPIOA clock
    RCC->APB1ENR |= RCC_APB1ENR_USART2EN;  // Enable USART2 clock

    GPIOA->MODER |= GPIO_MODER_MODER2_1;   // Set PA2 as AF mode
    GPIOA->MODER |= GPIO_MODER_MODER3_1;   // Set PA3 as AF mode

    GPIOA->AFR[0] |= (7 << GPIO_AFRL_AFRL2_Pos); // Set PA2 to AF7 (USART2_TX)
    GPIOA->AFR[0] |= (7 << GPIO_AFRL_AFRL3_Pos); // Set PA3 to AF7 (USART2_RX)

    USART2->BRR = 0x0683;   // Assuming 9600 baud rate @ 16MHz APB1 clock
    USART2->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE; // Enable UART, TX, RX
}

void USART2_IRQHandler(void) {
    char c;
    if (USART2->SR & USART_SR_RXNE) {  // Check if data is received
        c = USART2->DR;               // Read received data (this also clears the RXNE flag)
        LED_blink(c);                 // Process received data
    }
}

void LED_blink(int value) {
    value %= 16;
    for (; value > 0; value--) {
        GPIOA->BSRR = GPIO_BSRR_BS_5;   // Turn on LED (PA5)
        delayMs(200);
        GPIOA->BSRR = GPIO_BSRR_BR_5;   // Turn off LED (PA5)
        delayMs(200);
    }
    delayMs(800);
}

void delayMs(int n) {
    int i;
    for (; n > 0; n--)
        for (i = 0; i < 2000; i++) ;    // Adjust this loop according to your clock frequency
}
 *
 */
