#include"stm32f4xx.h"
void usart1_init(void);
void uart2_init(void);
void USART1_write(int ch);
void uart2_write(int ch);
void delayMs(int n);
void delayMs(int n)
{
int i;
for (; n > 0; n--)
for (i = 0; i < 3195; i++);
}

int main()
{
uart2_init();
int i;
char msg1[] ="CMD+RESET\r\n";
for (i = 0; msg1[i] !='\0'; i++)
{
	uart2_write(msg1[i]);
}
	delayMs(1000);
char msg2[] ="CMD+WIFIMODE=1\r\n";
for (i = 0; msg2[i] != '\0'; i++)
{
	uart2_write(msg2[i]);
}
delayMs(1000);
char msg3[] ="CMD+CONTOAP=POCO X3,123456789\r\n";
for (i = 0; msg3[i] != '\0'; i++)
{
	uart2_write(msg3[i]);
}
delayMs(1000);
char msg4[] ="CMD+MQTTNETCFG=dev.rightech.io,1883\r\n";
for (i = 0; msg4[i] != '\0'; i++)
{
	uart2_write(msg4[i]);
}
char msg5[]="CMD+MQTTCONCFG=3,mqtt-koppubalaji-wduyjg,,,,,,,,,\r\n";
for (i = 0; msg5[i] != '\0'; i++)
{
	uart2_write(msg5[i]);
}
return 0;
}
void led_blink(){
RCC->AHB1ENR |= 1; /* enable GPIOA clock */
GPIOA->MODER &= ~0x00000C00; /* clear pin mode */ GPIOA->MODER |=0x00000400; /* set pin to output mode */
GPIOA->BSRR |= 0x00000020; /* turn on LED */ delayMs(500);
GPIOA->BSRR |= 0x00200000; /* turn off LED */ delayMs(500);
}
void usart1_init(void)
{
RCC->AHB1ENR |= 1;
RCC->APB2ENR |= 0x00000010;
GPIOA->MODER &= ~0x003C0000;
GPIOA->MODER |= 0x00280000;
GPIOA->AFR[1] &= ~0x0FF0;
GPIOA->AFR[1] |= 0x0770 ; /* alt8 for UART1 */
USART1->BRR = 0x01A1; /* 9600 baud @ 16 MHz */
USART1->CR1 = 0x000C;/* enable Tx, Rx, 8-bit data */
USART1->CR2 = 0x0000; /* 1 stop bit*/
USART1->CR3 = 0x0000; /* no flow control */
USART1->CR1 |= 0x2000; /*enable UART1 */
}
void uart2_init(void)
{
	RCC->AHB1ENR |= 1;
	RCC->APB1ENR |= 0x00020000;
	GPIOA->MODER &= ~0x000000F0;
	GPIOA->MODER |= 0x000000A0;

	GPIOA->AFR[0] &= ~0x0000FF00;
	GPIOA->AFR[0] |= 0x00007700 ; /* alt8 for UART4 */
	USART2->BRR = 0x0683; /* 9600 baud @ 16 MHz */
	USART2->CR1 = 0x000C;/* enable Tx, Rx, 8-bit data */
	USART2->CR2 = 0x0000; /* 1 stop bit*/
	USART2->CR3 = 0x0000; /* no flow control */
	USART2->CR1 |= 0x2000; /*enable UART4 */

}
void USART1_write(int ch)
{
while (!(USART1->SR & 0x0080)) {} // wait until Tx buffer empty
USART1->DR = (ch & 0xFF);
}
void uart2_write(int ch) {
while (!(USART2->SR & 0x0080)) {} // wait until Tx buffer empty
USART2->DR = (ch & 0xFF);
}
