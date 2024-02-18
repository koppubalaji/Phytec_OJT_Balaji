#include "stm32f4xx_hal.h"
#define LED_GPIO_PORT            GPIOA
#define LED_PIN                  GPIO_PIN_5
#define SWITCH_GPIO_PORT         GPIOC
#define SWITCH_PIN               GPIO_PIN_13
void GPIO_Init_LED(void)
{


    // Enable GPIOA and GPIOC clocks
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();

    GPIO_InitTypeDef    GPIO_InitStruct;
    //Configure GPIO pin as output mode for LED.
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = MODE_OUTPUT;
    HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);


    // Configure GPIO pin as input with pull-up for switch
    GPIO_InitStruct.Pin = SWITCH_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    HAL_GPIO_Init(SWITCH_GPIO_PORT, &GPIO_InitStruct);

}

int main(void) {
    // Initialize HAL (provided by the HAL library)
    HAL_Init();

    // Initialize GPIO pin for the LED and switch
    GPIO_Init_LED();

    // Variable to hold the state of the switch
    GPIO_PinState switchState;

    while (1) {
        // Read the state of the switch
        switchState = HAL_GPIO_ReadPin(SWITCH_GPIO_PORT, SWITCH_PIN);
        //In stm32f4 series the switch is configured as active low.
        // Hence,If the switch is pressed (active low) it needs to toggle the LED
        if (switchState == GPIO_PIN_RESET) {
            HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
            HAL_Delay(200);
        }
    }
}




























//HAL_Init();


//The function HAL_Init() typically performs the following tasks:
//1.System Clock Configuration
//		It configures the system clock and other related clocks (such as peripheral clocks)
//		to ensure that the microcontroller operates at the desired frequency.
//		This step is crucial for proper timing and synchronization of the entire system.
//2.Peripheral Initialization
//3.Setting up the NVIC (Nested Vectored Interrupt Controller) for managing interrupts.
//4.Initializing the SysTick timer for timekeeping or generating periodic interrupts.



//After calling HAL_Init(), the application code can use HAL functions to interact with the
//hardware peripherals and perform various tasks without worrying about the
//low-level hardware details.
