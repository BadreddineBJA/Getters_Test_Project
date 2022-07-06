/**
  ******************************************************************************
  * @file           : stm32_crc.c
  * @brief          : Peripheral initialization
  *                   File per peripheral instance that is handling the peripheral
  *                   initialization and the IRQ handlers. Init parameters provided
  *                   as a set of defines configurable/generated for a given target
  *                   through the  hal_usart_settings.json and the config tool.
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
/* Includes ------------------------------------------------------------------*/
#include "stm32_crc.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions prototype------------------------------------------------*/
/* Exported variables by reference--------------------------------------------*/
static CRC_HandleTypeDef gh_crc;

void *crc_cfg1_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_16B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg2_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 2147483647;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg3_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFFFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_32B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_BYTE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg4_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 0;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_NONE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg5_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg6_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;
gh_crc.Init.GeneratingPolynomial = 0x7F;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_7B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_BYTE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg7_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_8B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InitValue = 2147483647;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_NONE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg8_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0x7F;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_7B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InitValue = 2147483647;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg9_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFFFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_32B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InitValue = 0;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_NONE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg10_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_16B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InitValue = 0;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg11_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_16B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 2147483647;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_BYTE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg12_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_8B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 0;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_BYTE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg13_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_16B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_NONE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg14_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;
gh_crc.Init.GeneratingPolynomial = 0x7F;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_7B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_NONE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg15_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFFFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_32B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InitValue = 2147483647;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg16_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;
gh_crc.Init.GeneratingPolynomial = 0xFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_8B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg17_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0x7F;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_7B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg18_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_HALFWORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_BYTE;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg19_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_8B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg20_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFFFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_32B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg21_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0x7F;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_7B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InitValue = 0;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg22_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_ENABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_WORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg23_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_ENABLE;
gh_crc.Init.GeneratingPolynomial = 0xFFFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_16B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_BYTES;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_DISABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}
void *crc_cfg24_init(void)
{
  gh_crc.Instance = CRC;

  gh_crc.Init.DefaultPolynomialUse = DEFAULT_POLYNOMIAL_DISABLE;

  gh_crc.Init.DefaultInitValueUse = DEFAULT_INIT_VALUE_DISABLE;
gh_crc.Init.GeneratingPolynomial = 0xFF;
  gh_crc.Init.CRCLength = CRC_POLYLENGTH_8B;

  gh_crc.Init.InputDataFormat = CRC_INPUTDATA_FORMAT_WORDS;

  gh_crc.Init.InitValue = 4294967295;

  gh_crc.Init.InputDataInversionMode = CRC_INPUTDATA_INVERSION_HALFWORD;

  gh_crc.Init.OutputDataInversionMode = CRC_OUTPUTDATA_INVERSION_ENABLE;
  if (HAL_CRC_Init(&gh_crc) != HAL_OK)
  {
    return NULL;
  }

  return (void *)&gh_crc;
}

void crc_deinit(void)
{
  (void)HAL_CRC_DeInit(&gh_crc);
}

void *crc_getobject(void)
{
  return (void *)&gh_crc;
}
/**
  * @brief CRC MSP Initialization
  * This function configures the hardware resources used in this example
  * @param hcrc CRC handle pointer
  * @retval None
  */
void HAL_CRC_MspInit(CRC_HandleTypeDef *hcrc)
{
  if (hcrc->Instance == CRC)
  {
    /* Peripheral clock enable */
    __HAL_RCC_CRC_CLK_ENABLE();
  }
}

/**
  * @brief CRC MSP De-Initialization
  * This function freeze the hardware resources used in this example
  * @param hcrc CRC handle pointer
  * @retval None
  */
void HAL_CRC_MspDeInit(CRC_HandleTypeDef *hcrc)
{
  if (hcrc->Instance == CRC)
  {
    /* Peripheral clock disable */
    __HAL_RCC_CRC_CLK_DISABLE();
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
