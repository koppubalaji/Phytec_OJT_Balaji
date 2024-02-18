#include "stm32f4xx_hal.h"
#include<stdio.h>


#define IR_SENSOR_PIN GPIO_PIN_5
#define IR_SENSOR_PORT GPIOA

#define IR_SENSOR_INPUT_PIN GPIO_PIN_13
#define IR_SENSOR_INPUT_PORT GPIOC

void GPIOA_Init(void) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitStruct.Pin = IR_SENSOR_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(IR_SENSOR_PORT, &GPIO_InitStruct);
}
void GPIOC_Init(void) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitStruct.Pin = IR_SENSOR_INPUT_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(IR_SENSOR_INPUT_PORT, &GPIO_InitStruct);
}
void IR_Emission_On(void) {
    HAL_GPIO_WritePin(IR_SENSOR_PORT, IR_SENSOR_PIN, GPIO_PIN_SET);
}
void IR_Emission_Off(void) {
    HAL_GPIO_WritePin(IR_SENSOR_PORT, IR_SENSOR_PIN, GPIO_PIN_RESET);
}


int main(void) {
    HAL_Init();
    GPIOA_Init();
    GPIOC_Init();
    while (1) {
    	int sensorState = HAL_GPIO_ReadPin(IR_SENSOR_INPUT_PORT, IR_SENSOR_INPUT_PIN);
    	if(sensorState==GPIO_PIN_SET)
    	{
    		IR_Emission_On();
    		HAL_Delay(1000);  // Emit IR for 1 second
    	}
    	else
    	{
    		IR_Emission_Off();

    		// Add a delay before emitting IR again or do other tasks
    		HAL_Delay(1000);  // Wait for 5 seconds before emitting IR again
    	}
    }
}


