/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define d1_Pin GPIO_PIN_4
#define d1_GPIO_Port GPIOA
#define d2_Pin GPIO_PIN_5
#define d2_GPIO_Port GPIOA
#define d3_Pin GPIO_PIN_6
#define d3_GPIO_Port GPIOA
#define d4_Pin GPIO_PIN_7
#define d4_GPIO_Port GPIOA
#define d5_Pin GPIO_PIN_8
#define d5_GPIO_Port GPIOA
#define d6_Pin GPIO_PIN_9
#define d6_GPIO_Port GPIOA
#define d7_Pin GPIO_PIN_10
#define d7_GPIO_Port GPIOA
#define d8_Pin GPIO_PIN_11
#define d8_GPIO_Port GPIOA
#define d9_Pin GPIO_PIN_12
#define d9_GPIO_Port GPIOA
#define d10_Pin GPIO_PIN_13
#define d10_GPIO_Port GPIOA
#define d11_Pin GPIO_PIN_14
#define d11_GPIO_Port GPIOA
#define d12_Pin GPIO_PIN_15
#define d12_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */
void setAllClock();
void clearNumberOnClock(int num);

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
