#include "main.h"
#define AHT25_INIT_CMD 0xE1
#define AHT25_MEASURE_CMD 0xAC
#define AHT25_ADDR 0x70
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
float temperature, humidity;
I2C_HandleTypeDef hi2c1;
void read_sensor_values(float *temperature, float *humidity)
{
    uint8_t data[6];
    uint8_t cmd = AHT25_MEASURE_CMD;
    HAL_I2C_Master_Transmit(&hi2c1, AHT25_ADDR,&cmd, 1, HAL_MAX_DELAY);
    HAL_Delay(100);
    HAL_I2C_Master_Receive(&hi2c1,0x71, data, 6, HAL_MAX_DELAY);
    *humidity = ((float)((data[1] << 12) | (data[2] << 4) | (data[3] >> 4))) / 1048576.0 * 100.0;
    *temperature = ((float)(((data[3] & 0x0F) << 16) | (data[4] << 8) | data[5])) / 1048576.0 * 200.0 - 50.0;
}
int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_I2C1_Init();
  while (1)
  {
	  read_sensor_values(&temperature, &humidity);
  }
}
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

static void MX_I2C1_Init(void)
{
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
}
static void MX_GPIO_Init(void)
{
  __HAL_RCC_GPIOB_CLK_ENABLE();
}
void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}
#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif

//
//#include"stm32f4xx.h"
//
//void usart1_init(void);
//void USART1_write(int ch);
//void delayMs(int n);
//
//void delayMs(int n)
//{
//int i;
//for (; n > 0; n--)
//for (i = 0; i < 3195; i++);
//}
//
//int main()
//{
//usart1_init();
//int i;
//char msg1[] ="CMD+RESET\r\n";
//for (i = 0; msg1[i] !='\0'; i++)
//	USART1_write(msg1[i]);
//delayMs(1000);
//char msg2[] ="CMD+WIFIMODE=1\r\n";
//for (i = 0; msg2[i] != '\0'; i++)
//	USART1_write(msg2[i]);
//delayMs(1000);
//char msg3[] ="CMD+CONTOAP=SBCS 2.4GHz,sbcs@123\r\n";
//for (i = 0; msg3[i] != '\0'; i++)
//	USART1_write(msg3[i]);
//delayMs(1000);
//return 0;
//}
//
//void usart1_init(void)
//{
//RCC->AHB1ENR |= 1;
//RCC->APB2ENR |= 0x00000010;
//GPIOA->MODER &= ~0x003C0000;
//GPIOA->MODER |= 0x00280000;
//GPIOA->AFR[1] &= ~0x0FF0;
//GPIOA->AFR[1] |= 0x0770 ; /* alt8 for UART1 */
//USART1->BRR = 0x01A1; /* 9600 baud @ 16 MHz */
//USART1->CR1 = 0x000C;/* enable Tx, Rx, 8-bit data */
//USART1->CR2 = 0x0000; /* 1 stop bit*/
//USART1->CR3 = 0x0000; /* no flow control */
//USART1->CR1 |= 0x2000; /*enable UART1 */
//}
//
//void USART1_write(int ch)
//{
//while (!(USART1->SR & 0x0080)) {} // wait until Tx buffer empty
//USART1->DR = (ch & 0xFF);
//}
//UART_HandleTypeDef huart1;
//UART_HandleTypeDef huart2;
//void MQTT_Init()
//{
//char buffer[128];
//HAL_Delay(2000);
///*********CMD+MQTTNETCFG **********/
////memset(&buffer[0],0x00,strlen(buffer));
//sprintf (&buffer[0], "CMD+MQTTNETCFG=dev.rightech.io,1883\r\n");
//HAL_UART_Transmit_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
//HAL_Delay(2000);
//HAL_UART_Receive_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
///*********CMD+MQTTCONCFG **********/
////memset(&buffer[0],0x00,strlen(buffer));
//sprintf (&buffer[0], "CMD+MQTTCONCFG=3,mqtt-arifm4348-ud8eo8,,,,,,,,,\r\
//n");
//HAL_UART_Transmit_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
//HAL_Delay(2000);
//HAL_UART_Receive_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
///*********CMD+MQTTSTART **********/
////memset(&buffer[0],0x00,strlen(buffer));
//sprintf (&buffer[0], "CMD+MQTTSTART=1\r\n");
//HAL_UART_Transmit_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
//// memset(&buffer[0],0x00,strlen(buffer));
//HAL_Delay(5000);
//HAL_UART_Receive_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
///*********CMD+MQTTSUB *********/
////memset(&buffer[0],0x00,strlen(buffer));
//
//sprintf (&buffer[0], "CMD+MQTTSUB=base/relay/led1\r\n");
//HAL_UART_Transmit_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
//HAL_Delay(2000);
//HAL_UART_Receive_IT(&huart1, (uint8_t*)buffer, strlen(buffer));
//HAL_UART_Transmit_IT(&huart2, (uint8_t*)buffer, strlen(buffer));
//}
