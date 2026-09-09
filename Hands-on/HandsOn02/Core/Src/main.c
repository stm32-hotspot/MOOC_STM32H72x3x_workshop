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
#include "dma2d.h"
#include "octospi.h"
#include "sai.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <string.h>
#include "benchmark.h"
#include "stm32h735g_discovery_ospi.h"
#include "stm32h735g_discovery_lcd.h"
#include "audio.h"
#include "test_image.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define	H7DEMO_OFF	0
#define	H7DEMO_ON	1
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

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MPU_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void mainloop_measure(void){
	volatile uint32_t var = 1;
	uint32_t func_calls = H7Demo.NbFuncCalls;
	uint32_t start,end;
	uint32_t temp_results = 0;

	if(func_calls > FUNC_NUM) func_calls = FUNC_NUM;

	SCB_InvalidateICache();

	__disable_irq();
	for(int m = 0; m < 11; ++m){
		start = DWT->CYCCNT;
		for(int i = func_calls-1; i >= 0;--i){
			var = func_array[i](var);
		}
		end = DWT->CYCCNT;
		if(m != 0){ /* Skip first result */
			temp_results += (end - start);
		}
	}
	temp_results /= (func_calls);

	__enable_irq();

	H7Demo.PerfValue = temp_results;
}

/*
 * Following is a workaround for well known issue in CMSIS
 * https://github.com/ARM-software/CMSIS_5/issues/620
 * Unfortunately there is no plan to fix this issue, so we will
 * use simple workaround by using global variables (DCacheWorkaround)
 * which are placed to non-cacheable region
 */

typedef struct  {
	uint32_t ccsidr;
	uint32_t sets;
	uint32_t ways;
}DCacheWorkaround_t;

__attribute__((section(".data_NC")))
DCacheWorkaround_t DCacheWorkaround;

__STATIC_INLINE void SCB_DisableDCache_fixed (void)
{
  #if defined (__DCACHE_PRESENT) && (__DCACHE_PRESENT == 1U)


    SCB->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    __DSB();

    SCB->CCR &= ~(uint32_t)SCB_CCR_DC_Msk;  /* disable D-Cache */
    __DSB();

    DCacheWorkaround.ccsidr = SCB->CCSIDR;

                                            /* clean & invalidate D-Cache */
    DCacheWorkaround.sets = (uint32_t)(CCSIDR_SETS(DCacheWorkaround.ccsidr));
    do {
      DCacheWorkaround.ways = (uint32_t)(CCSIDR_WAYS(DCacheWorkaround.ccsidr));
      do {
        SCB->DCCISW = (((DCacheWorkaround.sets << SCB_DCCISW_SET_Pos) & SCB_DCCISW_SET_Msk) |
                       ((DCacheWorkaround.ways << SCB_DCCISW_WAY_Pos) & SCB_DCCISW_WAY_Msk)  );
        #if defined ( __CC_ARM )
          __schedule_barrier();
        #endif
      } while (DCacheWorkaround.ways-- != 0U);
    } while(DCacheWorkaround.sets-- != 0U);

    __DSB();
    __ISB();
  #endif
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
  memset((void*)&H7Demo, 0, sizeof(H7Demo_t));
  H7Demo.NbFuncCalls = 512;

  BSP_LCD_LayerConfig_t BSP_Layer_Init;
  /* USER CODE END 1 */

  /* MPU Configuration--------------------------------------------------------*/
  MPU_Config();

  /* Enable I-Cache---------------------------------------------------------*/
  SCB_EnableICache();

  /* Enable D-Cache---------------------------------------------------------*/
  SCB_EnableDCache();

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
  MX_DMA2D_Init();
  /* USER CODE BEGIN 2 */
  SCB_DisableICache();
  BSP_Layer_Init.Address = (uint32_t)&gimp_image.pixel_data;
  BSP_Layer_Init.PixelFormat = LTDC_PIXEL_FORMAT_RGB888;
  BSP_Layer_Init.X0 = 0;
  BSP_Layer_Init.Y0 = 0;
  BSP_Layer_Init.X1 = LCD_DEFAULT_WIDTH;
  BSP_Layer_Init.Y1 = LCD_DEFAULT_HEIGHT;
  BSP_LCD_Init(0, LCD_ORIENTATION_LANDSCAPE);
  BSP_LCD_ConfigLayer(0, 0, &BSP_Layer_Init);

  BSP_LCD_SetLayerVisible(0, 0, DISABLE);
  BSP_LCD_Relaod(0, BSP_LCD_RELOAD_IMMEDIATE);

  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
  DWT->CYCCNT = 0;
  DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;

  Audio_Init();
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  mainloop_measure();

	  if(H7Demo.Status_Cache != H7Demo.Cmd_Cache){
		  if (H7DEMO_ON == H7Demo.Cmd_Cache){
			  SCB_EnableICache();
			  H7Demo.Status_Cache = H7DEMO_ON;
			  HAL_GPIO_WritePin(USER_LED1_GPIO_Port, USER_LED1_Pin, GPIO_PIN_SET);
		  }
		  else {
			  SCB_DisableICache();
			  H7Demo.Status_Cache = H7DEMO_OFF;
			  HAL_GPIO_WritePin(USER_LED1_GPIO_Port, USER_LED1_Pin, GPIO_PIN_RESET);
		  }
	  }

	  if(H7Demo.Status_Audio != H7Demo.Cmd_Audio){
		  if(H7DEMO_ON == H7Demo.Cmd_Audio){
			  Audio_Play();
			  H7Demo.Status_Audio = H7DEMO_ON;
		  }
		  else {
			  Audio_Stop();
			  H7Demo.Status_Audio = H7DEMO_OFF;
		  }
	  }

	  if(H7Demo.Status_LCD != H7Demo.Cmd_LCD){
		  if(H7DEMO_ON == H7Demo.Cmd_LCD){
			  BSP_LCD_SetLayerVisible(0, 0, ENABLE);
			  H7Demo.Status_LCD = H7DEMO_ON;
		  }
		  else {
			  BSP_LCD_SetLayerVisible(0, 0, DISABLE);
			  H7Demo.Status_LCD = H7DEMO_OFF;
		  }
		  BSP_LCD_Relaod(0, BSP_LCD_RELOAD_IMMEDIATE);
	  }
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
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

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
  RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
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
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_SAI1|RCC_PERIPHCLK_OSPI;
  PeriphClkInitStruct.OspiClockSelection = RCC_OSPICLKSOURCE_D1HCLK;
  PeriphClkInitStruct.Sai1ClockSelection = RCC_SAI1CLKSOURCE_PLL;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* MPU Configuration */

void MPU_Config(void)
{
  MPU_Region_InitTypeDef MPU_InitStruct = {0};

  /* Disables the MPU */
  HAL_MPU_Disable();
  /** Initializes and configures the Region and the memory to be protected
  */
  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
  MPU_InitStruct.Number = MPU_REGION_NUMBER0;
  MPU_InitStruct.BaseAddress = 0x24000000;
  MPU_InitStruct.Size = MPU_REGION_SIZE_32KB;
  MPU_InitStruct.SubRegionDisable = 0x0;
  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL1;
  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;
  MPU_InitStruct.IsShareable = MPU_ACCESS_NOT_SHAREABLE;
  MPU_InitStruct.IsCacheable = MPU_ACCESS_NOT_CACHEABLE;
  MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;

  HAL_MPU_ConfigRegion(&MPU_InitStruct);
  /* Enables the MPU */
  HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);

}

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
