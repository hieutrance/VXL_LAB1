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
#define LED_RED_13_Pin GPIO_PIN_5
#define LED_RED_13_GPIO_Port GPIOA
#define LED_YELLOW_13_Pin GPIO_PIN_6
#define LED_YELLOW_13_GPIO_Port GPIOA
#define LED_GREEN_13_Pin GPIO_PIN_7
#define LED_GREEN_13_GPIO_Port GPIOA
#define seg1_a_Pin GPIO_PIN_0
#define seg1_a_GPIO_Port GPIOB
#define seg1_b_Pin GPIO_PIN_1
#define seg1_b_GPIO_Port GPIOB
#define seg1_c_Pin GPIO_PIN_2
#define seg1_c_GPIO_Port GPIOB
#define seg2_d_Pin GPIO_PIN_10
#define seg2_d_GPIO_Port GPIOB
#define seg2_e_Pin GPIO_PIN_11
#define seg2_e_GPIO_Port GPIOB
#define seg2_f_Pin GPIO_PIN_12
#define seg2_f_GPIO_Port GPIOB
#define seg2_g_Pin GPIO_PIN_13
#define seg2_g_GPIO_Port GPIOB
#define LED_RED_24_Pin GPIO_PIN_8
#define LED_RED_24_GPIO_Port GPIOA
#define LED_YELLOW_24_Pin GPIO_PIN_9
#define LED_YELLOW_24_GPIO_Port GPIOA
#define LED_GREEN_24_Pin GPIO_PIN_10
#define LED_GREEN_24_GPIO_Port GPIOA
#define seg1_d_Pin GPIO_PIN_3
#define seg1_d_GPIO_Port GPIOB
#define seg1_e_Pin GPIO_PIN_4
#define seg1_e_GPIO_Port GPIOB
#define seg1_f_Pin GPIO_PIN_5
#define seg1_f_GPIO_Port GPIOB
#define seg1_g_Pin GPIO_PIN_6
#define seg1_g_GPIO_Port GPIOB
#define seg2_a_Pin GPIO_PIN_7
#define seg2_a_GPIO_Port GPIOB
#define seg2_b_Pin GPIO_PIN_8
#define seg2_b_GPIO_Port GPIOB
#define seg2_c_Pin GPIO_PIN_9
#define seg2_c_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
typedef enum {RED , YELLOW , GREEN} led_color_status;

void set_lane_13(led_color_status status);
void set_lane_24(led_color_status status);




/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
