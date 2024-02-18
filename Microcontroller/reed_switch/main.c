#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

#define REED_SWITCH_PIN GPIO_PIN_0
#define LED_PIN GPIO_PIN_5 // Change to PA5
#define GPIO_PORT GPIOA

int main(void) {
    HAL_Init();
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = REED_SWITCH_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLUP; // or GPIO_PULLDOWN based on wiring
    HAL_GPIO_Init(GPIO_PORT, &GPIO_InitStruct);

    // Modify the LED GPIO initialization
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIO_PORT, &GPIO_InitStruct);

    while (1) {
        // Read the state of the reed switch
        if (HAL_GPIO_ReadPin(GPIO_PORT, REED_SWITCH_PIN) == GPIO_PIN_RESET) {
            // Magnet is near (Reed switch is closed)
            HAL_GPIO_WritePin(GPIO_PORT, LED_PIN, GPIO_PIN_SET); // Turn on LED
        } else {
            // Magnet is not near (Reed switch is open)
            HAL_GPIO_WritePin(GPIO_PORT, LED_PIN, GPIO_PIN_RESET); // Turn off LED
        }
    }
}
