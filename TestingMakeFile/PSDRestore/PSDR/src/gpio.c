/**
  ******************************************************************************
  * File Name          : gpio.c
  * Description        : This file provides code for the configuration
  *                      of all used GPIO pins.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */
const Gpio_Pin LCD_DC =
  { GPIOB, GPIO_PIN_7 }; //2.5
const Gpio_Pin LCD_RESET =
  { GPIOB, GPIO_PIN_6 }; //2.5
const Gpio_Pin LCD_NSS =
  { GPIOA, GPIO_PIN_15 }; //2.5 //When this was set wrong, the display still worked. No need?
const Gpio_Pin LCD_LED =
  { GPIOC, GPIO_PIN_13 }; //2.5
const Gpio_Pin LCD_MOSI =
  { GPIOB, GPIO_PIN_5 }; //2.5
const Gpio_Pin LCD_MISO =
  { GPIOB, GPIO_PIN_4 }; //2.5
const Gpio_Pin LCD_SCK =
  { GPIOB, GPIO_PIN_3 }; //2.5
const Gpio_Pin encoderBee =
  { GPIOE, GPIO_PIN_0 }; //2.5
const Gpio_Pin encoderB =
  { GPIOE, GPIO_PIN_1 }; //2.5 (really ENC_A)
const Gpio_Pin encoderP =
  { GPIOB, GPIO_PIN_9 }; //2.5
const Gpio_Pin RX_Q =
  { GPIOA, GPIO_PIN_2 }; //2.5
const Gpio_Pin RX_I =
  { GPIOA, GPIO_PIN_3 }; //2.5
const Gpio_Pin dac1 =
  { GPIOA, GPIO_PIN_4 }; //2.5
const Gpio_Pin dac2 =
  { GPIOA, GPIO_PIN_5 }; //2.5
const Gpio_Pin AMP_SWITCH_A =
  { GPIOA, GPIO_PIN_0 }; //2.5
const Gpio_Pin AMP_SWITCH_B =
  { GPIOE, GPIO_PIN_6 }; //2.5
const Gpio_Pin IMP_BRIDGE_SWITCH_A =
  { GPIOC, GPIO_PIN_1 }; //2.5
const Gpio_Pin IMP_BRIDGE_SWITCH_B =
  { GPIOA, GPIO_PIN_6 }; //2.5
const Gpio_Pin TX_RF_SWITCH_A =
  { GPIOB, GPIO_PIN_2 }; //2.5
const Gpio_Pin TX_RF_SWITCH_B =
  { GPIOA, GPIO_PIN_7 }; //2.5
const Gpio_Pin AMP_POWER =
  { GPIOE, GPIO_PIN_3 }; //2.5
const Gpio_Pin FILTER_GAIN_POT_SCLK =
  { GPIOB, GPIO_PIN_13 }; //2.5
const Gpio_Pin FILTER_GAIN_POT_MOSI =
  { GPIOB, GPIO_PIN_15 }; //2.5
const Gpio_Pin GAIN_POT_NSS =
  { GPIOE, GPIO_PIN_5 }; //2.5
const Gpio_Pin DAC_MUX =
  { GPIOE, GPIO_PIN_4 }; //2.5
const Gpio_Pin AUDIO_AMP_NSHTDWN =
  { GPIOE, GPIO_PIN_14 }; //2.5
const Gpio_Pin EARPHONE_NOT_INSERTED =
  { GPIOD, GPIO_PIN_11 }; //2.5
const Gpio_Pin SIDETONE =
  { GPIOD, GPIO_PIN_12 }; //2.5 //Should be a timer pin.
const Gpio_Pin MIC_IN =
  { GPIOB, GPIO_PIN_1 }; //2.5
const Gpio_Pin MIC_SWITCH =
  { GPIOD, GPIO_PIN_10 }; //2.5
const Gpio_Pin PREAMP_POWER =
  { GPIOD, GPIO_PIN_14 }; //2.5
const Gpio_Pin PADDLE_THUMB_NO =
  { GPIOD, GPIO_PIN_3 }; //2.5
const Gpio_Pin PADDLE_INDEX_NO =
  { GPIOD, GPIO_PIN_7 }; //2.5
const Gpio_Pin PADDLE_THUMB_NC =
  { GPIOD, GPIO_PIN_5 }; //2.5
const Gpio_Pin PADDLE_INDEX_NC =
  { GPIOD, GPIO_PIN_6 }; //2.5
const Gpio_Pin GPS_RESET =
  { GPIOE, GPIO_PIN_15 }; //2.5
const Gpio_Pin GPS_PPS =
  { GPIOE, GPIO_PIN_7 }; //2.5
const Gpio_Pin GPS_POWER =
  { GPIOA, GPIO_PIN_8 }; //2.5
const Gpio_Pin RX_TO_GPS =
  { GPIOC, GPIO_PIN_6 }; //2.5
const Gpio_Pin TX_FROM_GPS =
  { GPIOC, GPIO_PIN_7 }; //2.5
const Gpio_Pin IN_AMP_ENABLE =
  { GPIOC, GPIO_PIN_2 }; //2.5
const Gpio_Pin FILTER_S0 =
    { GPIOE, GPIO_PIN_10 }; //2.5
const Gpio_Pin FILTER_S1 =
    { GPIOD, GPIO_PIN_8  }; //2.5
const Gpio_Pin TRX_SWITCH =
    { GPIOC, GPIO_PIN_3  }; //2.5
const Gpio_Pin I2C_SCL =
    { GPIOB, GPIO_PIN_10 };
const Gpio_Pin I2C_SDA =
    { GPIOB, GPIO_PIN_11 };
const Gpio_Pin FLIP_FLOP_ENABLE =
    { GPIOE, GPIO_PIN_8  };
const Gpio_Pin RED_LED =
    { GPIOE, GPIO_PIN_13 };
const Gpio_Pin FIVE_VOLT_REGULATOR_ENABLE =
    { GPIOE, GPIO_PIN_2 };
const Gpio_Pin CHARGE_POWER_SOURCE =
    { GPIOB, GPIO_PIN_8 };

/* USER CODE END 1 */

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
     PA9   ------> USB_OTG_FS_VBUS
     PA10   ------> USB_OTG_FS_ID
     PA11   ------> USB_OTG_FS_DM
     PA12   ------> USB_OTG_FS_DP
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_6|GPIO_PIN_8|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8 
                          |GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8|GPIO_PIN_10|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pins : PE2 PE3 PE4 PE5 
                           PE6 PE8 PE10 PE11 
                           PE12 PE13 PE14 PE15 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_6|GPIO_PIN_8|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PC13 PC1 PC2 PC3 */
  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PA0 PA6 PA7 PA8 
                           PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8 
                          |GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : PA1 */
  GPIO_InitStruct.Pin = GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB2 PB6 PB7 PB8 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PD8 PD10 PD14 PD15 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_10|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PD9 PD11 PD13 PD0 
                           PD1 PD3 PD4 PD5 
                           PD6 PD7 */
  GPIO_InitStruct.Pin = GPIO_PIN_9|GPIO_PIN_11|GPIO_PIN_13|GPIO_PIN_0 
                          |GPIO_PIN_1|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : PA9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PA10 PA11 PA12 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF10_OTG_FS;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PE0 PE1 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
