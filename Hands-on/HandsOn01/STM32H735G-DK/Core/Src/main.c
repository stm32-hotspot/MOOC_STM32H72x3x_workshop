/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define	H7DEMO_OFF	0
#define	H7DEMO_ON	1

#define H7DEMO_CYCLE_MIN	310
#define H7DEMO_CACHE_FUNCNB_MAX	3500
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

typedef struct {
	// Commands
	uint8_t Cmd_Cache;
	uint8_t Cmd_Audio;
	uint8_t Cmd_LCD;

	// Status
	uint8_t Status_Cache;
	uint8_t Status_Audio;
	uint8_t Status_LCD;

	// H7Demo values
	uint16_t PerfValue;
	uint16_t NbFuncCalls;
}H7Demo_t;


__attribute__((section(".H7Demo")))
volatile H7Demo_t H7Demo;

uint16_t basicCounter = 0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	uint8_t CacheOverflow = H7DEMO_OFF;
	uint8_t	PerfPercent = 50;

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  // Red LED off
  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin, GPIO_PIN_SET);

  H7Demo.Cmd_Cache = H7DEMO_OFF;
  H7Demo.Status_Cache = H7DEMO_OFF;

  H7Demo.Cmd_Audio = H7DEMO_OFF;
  H7Demo.Cmd_LCD = H7DEMO_OFF;

  H7Demo.Status_Audio = H7DEMO_OFF;
  H7Demo.Status_LCD = H7DEMO_OFF;

  H7Demo.NbFuncCalls = 2000;


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(GPIOC, USER_LED1_Pin);
	  basicCounter += 1;

	  /* If the number of function calls makes the cache overflow */
	  if (H7DEMO_CACHE_FUNCNB_MAX < H7Demo.NbFuncCalls){

		  /* If there was no overflow and the cache command is ON */
		  if ((H7DEMO_OFF == CacheOverflow) && (H7DEMO_ON == H7Demo.Cmd_Cache)){

			  /* Display cache OFF instead of ON */
			  PerfPercent -= 50;
			  H7Demo.Status_Cache = H7DEMO_OFF;
			  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin, GPIO_PIN_SET);
		  }

		  /* Cache overflow */
		  CacheOverflow = H7DEMO_ON;
	  }
	  else {
		  /* If there was an overflow and the cache command is ON */
		  if ((H7DEMO_ON == CacheOverflow) && (H7DEMO_ON == H7Demo.Cmd_Cache)){

			  /* Display cache ON instead of OFF */
			  PerfPercent += 50;
			  H7Demo.Status_Cache = H7DEMO_ON;
			  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin, GPIO_PIN_RESET);
		  }

		  /* No more cache overflow */
		  CacheOverflow = H7DEMO_OFF;
	  }

	  /* If there is no cache overflow */
	  if (H7DEMO_OFF == CacheOverflow) {

		  /* If the cache command is ON */
		  if (H7DEMO_ON == H7Demo.Cmd_Cache) {

			  /* Display cache ON */
			  if (H7DEMO_OFF == H7Demo.Status_Cache){
				  PerfPercent += 50;
				  H7Demo.Status_Cache = H7DEMO_ON;

				  // Red LED on
				  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin, GPIO_PIN_RESET);
			  }
		  }
		  else {
			  /* Display cache OFF */
			  if (H7DEMO_ON == H7Demo.Status_Cache){
				  PerfPercent -= 50;
				  H7Demo.Status_Cache = H7DEMO_OFF;

				  // Red LED off
				  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin, GPIO_PIN_SET);
			  }
	  	  }
	  }

	  if (H7DEMO_ON == H7Demo.Cmd_Audio){
		  if (H7DEMO_OFF == H7Demo.Status_Audio){
			  PerfPercent -= 5;
			  H7Demo.Status_Audio = H7DEMO_ON;
		  }
	  }
	  else {
		  if (H7DEMO_ON == H7Demo.Status_Audio){
			  PerfPercent += 5;
			  H7Demo.Status_Audio = H7DEMO_OFF;
		  }
	  }

	  if (H7DEMO_ON == H7Demo.Cmd_LCD){
		  if (H7DEMO_OFF == H7Demo.Status_LCD){
			  PerfPercent -= 20;
			  H7Demo.Status_LCD = H7DEMO_ON;
		  }
	  }
	  else {
		  if (H7DEMO_ON == H7Demo.Status_LCD) {
			  PerfPercent += 20;
			  H7Demo.Status_LCD = H7DEMO_OFF;
		  }
	  }

	  H7Demo.PerfValue = H7DEMO_CYCLE_MIN*100/PerfPercent;

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Supply configuration update enable
  */
  HAL_PWREx_ConfigSupply(PWR_DIRECT_SMPS_SUPPLY);
  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 5;
  RCC_OscInitStruct.PLL.PLLN = 110;
  RCC_OscInitStruct.PLL.PLLP = 1;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_2;
  RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
  RCC_OscInitStruct.PLL.PLLFRACN = 0;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                              |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
  RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, USER_LED2_Pin|USER_LED1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Blue_button_B2_used_for_wakeup_Pin */
  GPIO_InitStruct.Pin = Blue_button_B2_used_for_wakeup_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(Blue_button_B2_used_for_wakeup_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : USER_LED2_Pin USER_LED1_Pin */
  GPIO_InitStruct.Pin = USER_LED2_Pin|USER_LED1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
