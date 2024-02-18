#include "stm32f4xx.h"
void USART2_Init(void) {
    RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
    USART2->BRR = 0x0683;

    GPIOA->MODER |= GPIO_MODER_MODER2_1;
    GPIOA->AFR[0] |= (7 << (2 * 4));
    GPIOA->MODER |= GPIO_MODER_MODER3_1;
    GPIOA->AFR[0] |= (7 << (3 * 4));

    USART2->CR1 = USART_CR1_TE | USART_CR1_RE;
    USART2->CR1 |= USART_CR1_RXNEIE;
    USART2->CR1 |= USART_CR1_UE;

    NVIC_EnableIRQ(USART2_IRQn);
}

void USART6_Init(void) {
    RCC->APB2ENR |= RCC_APB2ENR_USART6EN;
    USART6->BRR = 0x0683;

    GPIOC->MODER |= GPIO_MODER_MODER6_1;
    GPIOC->AFR[0] |= (8 << (6 * 4));
    GPIOC->MODER |= GPIO_MODER_MODER7_1;
    GPIOC->AFR[0] |= (8 << (7 * 4));

    USART6->CR1 = USART_CR1_TE | USART_CR1_RE;
    USART6->CR1 |= USART_CR1_RXNEIE;
    USART6->CR1 |= USART_CR1_UE;

    NVIC_EnableIRQ(USART6_IRQn);
}

void USART2_SendChar(uint8_t data) {
    while (!(USART2->SR & USART_SR_TXE));
    USART2->DR = data;
}

uint8_t USART2_ReceiveChar(void) {
    return USART2->DR;
}

void USART6_SendChar(uint8_t data) {
    while (!(USART6->SR & USART_SR_TXE));
    USART6->DR = data;
}

uint8_t USART6_ReceiveChar(void) {
    return USART6->DR;
}

void USART2_IRQHandler(void) {
    if (USART2->SR & USART_SR_RXNE) {
        uint8_t data = USART2_ReceiveChar();

        USART6_SendChar(data);
    }
}

void USART6_IRQHandler(void) {
    if (USART6->SR & USART_SR_RXNE) {
        uint8_t data = USART6_ReceiveChar();

        USART2_SendChar(data);
    }
}

int main(void) {
    USART2_Init();
    USART6_Init();

    while (1) {
    }
}
