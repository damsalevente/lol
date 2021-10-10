/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

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
#define DIST_XSHUT_L_Pin GPIO_PIN_13
#define DIST_XSHUT_L_GPIO_Port GPIOC
#define DIST_XSHUT_L_2_Pin GPIO_PIN_14
#define DIST_XSHUT_L_2_GPIO_Port GPIOC
#define DIST_XSHUT_L_3_Pin GPIO_PIN_15
#define DIST_XSHUT_L_3_GPIO_Port GPIOC
#define US_SENSOR_ECHO_Pin GPIO_PIN_0
#define US_SENSOR_ECHO_GPIO_Port GPIOC
#define DIST_INT_3_Pin GPIO_PIN_3
#define DIST_INT_3_GPIO_Port GPIOC
#define Motor_PWM_1_Pin GPIO_PIN_2
#define Motor_PWM_1_GPIO_Port GPIOA
#define Motor_PWM_2_Pin GPIO_PIN_3
#define Motor_PWM_2_GPIO_Port GPIOA
#define Ubat_in_Pin GPIO_PIN_4
#define Ubat_in_GPIO_Port GPIOA
#define Ibat_in_Pin GPIO_PIN_5
#define Ibat_in_GPIO_Port GPIOA
#define LINE_CS_Pin GPIO_PIN_4
#define LINE_CS_GPIO_Port GPIOC
#define IMU_CS_Pin GPIO_PIN_2
#define IMU_CS_GPIO_Port GPIOB
#define Motor_en_fb_Pin GPIO_PIN_12
#define Motor_en_fb_GPIO_Port GPIOB
#define Motor_en_Pin GPIO_PIN_14
#define Motor_en_GPIO_Port GPIOB
#define US_TRIG_Pin GPIO_PIN_15
#define US_TRIG_GPIO_Port GPIOB
#define Maverick_Throt_Pin GPIO_PIN_6
#define Maverick_Throt_GPIO_Port GPIOC
#define IMPELLER_PWM1_Pin GPIO_PIN_7
#define IMPELLER_PWM1_GPIO_Port GPIOC
#define IMPELLER_PWM2_Pin GPIO_PIN_8
#define IMPELLER_PWM2_GPIO_Port GPIOC
#define Maverick_Steer_Pin GPIO_PIN_9
#define Maverick_Steer_GPIO_Port GPIOC
#define Servo_dist_Pin GPIO_PIN_11
#define Servo_dist_GPIO_Port GPIOA
#define Button_1_Pin GPIO_PIN_12
#define Button_1_GPIO_Port GPIOA
#define Button_2_Pin GPIO_PIN_15
#define Button_2_GPIO_Port GPIOA
#define DIST_INT_1_Pin GPIO_PIN_11
#define DIST_INT_1_GPIO_Port GPIOC
#define DIST_INT_2_Pin GPIO_PIN_2
#define DIST_INT_2_GPIO_Port GPIOD
#define ENC_CH1_Pin GPIO_PIN_4
#define ENC_CH1_GPIO_Port GPIOB
#define ENC_CH2_Pin GPIO_PIN_5
#define ENC_CH2_GPIO_Port GPIOB
#define Servo_front_Pin GPIO_PIN_6
#define Servo_front_GPIO_Port GPIOB
#define Servo_back_Pin GPIO_PIN_7
#define Servo_back_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
