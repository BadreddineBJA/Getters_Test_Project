/**
  ******************************************************************************
  * @file           : stm32_crc.h
  * @brief          : Header for stm32_crc.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c)  STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  *
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32_CRC_H
#define STM32_CRC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32_hal.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/**
  * @brief crc_CFG1 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg1_init(void);

/**
  * @brief crc_CFG2 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg2_init(void);

/**
  * @brief crc_CFG3 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg3_init(void);

/**
  * @brief crc_CFG4 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg4_init(void);

/**
  * @brief crc_CFG5 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg5_init(void);

/**
  * @brief crc_CFG6 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg6_init(void);

/**
  * @brief crc_CFG7 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg7_init(void);

/**
  * @brief crc_CFG8 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg8_init(void);

/**
  * @brief crc_CFG9 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg9_init(void);

/**
  * @brief crc_CFG10 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg10_init(void);

/**
  * @brief crc_CFG11 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg11_init(void);

/**
  * @brief crc_CFG12 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg12_init(void);

/**
  * @brief crc_CFG13 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg13_init(void);

/**
  * @brief crc_CFG14 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg14_init(void);

/**
  * @brief crc_CFG15 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg15_init(void);

/**
  * @brief crc_CFG16 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg16_init(void);

/**
  * @brief crc_CFG17 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg17_init(void);

/**
  * @brief crc_CFG18 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg18_init(void);

/**
  * @brief crc_CFG19 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg19_init(void);

/**
  * @brief crc_CFG20 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg20_init(void);

/**
  * @brief crc_CFG21 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg21_init(void);

/**
  * @brief crc_CFG22 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg22_init(void);

/**
  * @brief crc_CFG23 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg23_init(void);

/**
  * @brief crc_CFG24 init function
  * This function configures the hardware resources used in this example
  * @retval pointer to handle or NULL in case of failure
  */
void *crc_cfg24_init(void);

/**
  * @brief  De-initialize crc instance and return it.
  * @retval None
  */
void crc_deinit(void);

/**
  * @brief  Get the CRC object.
  * @retval Pointer on the CRC Handle
  */
void *crc_getobject(void);


#ifdef __cplusplus
}
#endif

#endif /* STM32_CRC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
