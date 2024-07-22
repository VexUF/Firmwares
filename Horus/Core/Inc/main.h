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
#define Tamper_Pin GPIO_PIN_13
#define Tamper_GPIO_Port GPIOC
#define LseIn_Pin GPIO_PIN_14
#define LseIn_GPIO_Port GPIOC
#define LseOut_Pin GPIO_PIN_15
#define LseOut_GPIO_Port GPIOC
#define HseIn_Pin GPIO_PIN_0
#define HseIn_GPIO_Port GPIOH
#define HseOut_Pin GPIO_PIN_1
#define HseOut_GPIO_Port GPIOH
#define ErrorLD_Pin GPIO_PIN_0
#define ErrorLD_GPIO_Port GPIOC
#define WarnLD_Pin GPIO_PIN_1
#define WarnLD_GPIO_Port GPIOC
#define InfoLD_Pin GPIO_PIN_2
#define InfoLD_GPIO_Port GPIOC
#define SDCardLD_Pin GPIO_PIN_3
#define SDCardLD_GPIO_Port GPIOC
#define AV3LD_Pin GPIO_PIN_0
#define AV3LD_GPIO_Port GPIOA
#define AV2LD_Pin GPIO_PIN_1
#define AV2LD_GPIO_Port GPIOA
#define AV1LD_Pin GPIO_PIN_2
#define AV1LD_GPIO_Port GPIOA
#define MemCS_Pin GPIO_PIN_3
#define MemCS_GPIO_Port GPIOA
#define SpiCS_Pin GPIO_PIN_4
#define SpiCS_GPIO_Port GPIOA
#define SpiCk_Pin GPIO_PIN_5
#define SpiCk_GPIO_Port GPIOA
#define SpiMISO_Pin GPIO_PIN_6
#define SpiMISO_GPIO_Port GPIOA
#define SpiMosi_Pin GPIO_PIN_7
#define SpiMosi_GPIO_Port GPIOA
#define MemOrg_Pin GPIO_PIN_4
#define MemOrg_GPIO_Port GPIOC
#define Av1_Pin GPIO_PIN_5
#define Av1_GPIO_Port GPIOC
#define Av2_Pin GPIO_PIN_0
#define Av2_GPIO_Port GPIOB
#define Av3_Pin GPIO_PIN_1
#define Av3_GPIO_Port GPIOB
#define Boot1_Pin GPIO_PIN_2
#define Boot1_GPIO_Port GPIOB
#define ActDa_Pin GPIO_PIN_12
#define ActDa_GPIO_Port GPIOB
#define ActLa_Pin GPIO_PIN_13
#define ActLa_GPIO_Port GPIOB
#define ActCk_Pin GPIO_PIN_14
#define ActCk_GPIO_Port GPIOB
#define ActLd_Pin GPIO_PIN_15
#define ActLd_GPIO_Port GPIOB
#define D0_Pin GPIO_PIN_8
#define D0_GPIO_Port GPIOC
#define D1_Pin GPIO_PIN_9
#define D1_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_8
#define MCO_GPIO_Port GPIOA
#define UsbM_Pin GPIO_PIN_11
#define UsbM_GPIO_Port GPIOA
#define UsbP_Pin GPIO_PIN_12
#define UsbP_GPIO_Port GPIOA
#define SWDio_Pin GPIO_PIN_13
#define SWDio_GPIO_Port GPIOA
#define SWSck_Pin GPIO_PIN_14
#define SWSck_GPIO_Port GPIOA
#define SdioDet_Pin GPIO_PIN_15
#define SdioDet_GPIO_Port GPIOA
#define D2_Pin GPIO_PIN_10
#define D2_GPIO_Port GPIOC
#define D3_Pin GPIO_PIN_11
#define D3_GPIO_Port GPIOC
#define SdioCk_Pin GPIO_PIN_12
#define SdioCk_GPIO_Port GPIOC
#define SdioCmd_Pin GPIO_PIN_2
#define SdioCmd_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Evt_Pin GPIO_PIN_5
#define Evt_GPIO_Port GPIOB
#define I2cCk_Pin GPIO_PIN_6
#define I2cCk_GPIO_Port GPIOB
#define I2cDa_Pin GPIO_PIN_7
#define I2cDa_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
