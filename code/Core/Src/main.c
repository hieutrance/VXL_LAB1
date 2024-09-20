/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

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
	void setNumberOnClock(int num){
		switch(num){
		case 1:
			HAL_GPIO_WritePin(d1_GPIO_Port , d1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(d2_GPIO_Port , d2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(d3_GPIO_Port , d3_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(d4_GPIO_Port , d4_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(d5_GPIO_Port , d5_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(d6_GPIO_Port , d6_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(d7_GPIO_Port , d7_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(d8_GPIO_Port , d8_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(d9_GPIO_Port , d9_Pin, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(d10_GPIO_Port , d10_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(d11_GPIO_Port , d11_Pin, SET);
			break;
		case 0:
			HAL_GPIO_WritePin(d12_GPIO_Port , d12_Pin, SET);
			break;
		default:
			break;
		}
	}

	void clearNumberOnClock(int num){
			switch(num){
			case 1:
				HAL_GPIO_WritePin(d1_GPIO_Port , d1_Pin, RESET);
				break;
			case 2:
				HAL_GPIO_WritePin(d2_GPIO_Port , d2_Pin, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(d3_GPIO_Port , d3_Pin, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(d4_GPIO_Port , d4_Pin, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(d5_GPIO_Port , d5_Pin, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(d6_GPIO_Port , d6_Pin, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(d7_GPIO_Port , d7_Pin, RESET);
				break;
			case 8:
				HAL_GPIO_WritePin(d8_GPIO_Port , d8_Pin, RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(d9_GPIO_Port , d9_Pin, RESET);
				break;
			case 10:
				HAL_GPIO_WritePin(d10_GPIO_Port , d10_Pin, RESET);
				break;
			case 11:
				HAL_GPIO_WritePin(d11_GPIO_Port , d11_Pin, RESET);
				break;
			case 0:
				HAL_GPIO_WritePin(d12_GPIO_Port , d12_Pin, RESET);
				break;
			default:
				break;
			}
		}

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

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int  hour=0, minute=0, second=0;

  while (1)
  {
    /* USER CODE END WHILE */
	  if(second >= 60){
		  second=0;
		  clearNumberOnClock(second/5);
		  ++minute;
	  }
	  setNumberOnClock(second/5);

	  if(minute >=60){
		  minute=0;
		  clearNumberOnClock(hour/5);
		  ++hour;
	  }
	  setNumberOnClock(minute/5);
	  if(hour>=12) hour=0;

	  setNumberOnClock(hour);
	  HAL_Delay(1000);
	  clearNumberOnClock(second/5);
	  ++second;


    /* USER CODE BEGIN 3 */
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

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
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
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, d1_Pin|d2_Pin|d3_Pin|d4_Pin
                          |d5_Pin|d6_Pin|d7_Pin|d8_Pin
                          |d9_Pin|d10_Pin|d11_Pin|d12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : d1_Pin d2_Pin d3_Pin d4_Pin
                           d5_Pin d6_Pin d7_Pin d8_Pin
                           d9_Pin d10_Pin d11_Pin d12_Pin */
  GPIO_InitStruct.Pin = d1_Pin|d2_Pin|d3_Pin|d4_Pin
                          |d5_Pin|d6_Pin|d7_Pin|d8_Pin
                          |d9_Pin|d10_Pin|d11_Pin|d12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
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
  __disable_irq();
  while (1)
  {
  }
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
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
