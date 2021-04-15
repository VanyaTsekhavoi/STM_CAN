#include "module.h"
#include "can.h"
#include "tim.h"
#include "adc.h"
#include "CO_OD.h"

//Global variables
extern DMA_HandleTypeDef hdma_adc1;

//Transmission
volatile int16_t adc1[4] = {
    0,
};
volatile uint16_t bufferData = 0;
int8_t halfTransferState = 0;
int8_t transferState = 0;

void module_init(void)
{
  //TIMx/GPIO Init and start

  /*
  CAN_FilterTypeDef sFilterConfig;
  sFilterConfig.FilterIdHigh = 0x0000;
  sFilterConfig.FilterIdLow = 0x0000;
  sFilterConfig.FilterMaskIdHigh = 0x0000;
  sFilterConfig.FilterMaskIdLow = 0x0000;
  sFilterConfig.FilterFIFOAssignment = 0;
  sFilterConfig.FilterBank = 0;
  sFilterConfig.FilterMode = CAN_FILTERMODE_IDMASK;
  sFilterConfig.FilterScale = CAN_FILTERSCALE_32BIT;
  sFilterConfig.FilterActivation = ENABLE;
  sFilterConfig.SlaveStartFilterBank = 14;

  if (HAL_CAN_ConfigFilter(&hcan1, &sFilterConfig) != HAL_OK)
  {
    //Filter configuration Error
    Error_Handler();
  }

  */

  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);

  HAL_ADC_Start_DMA(&hadc1, (uint32_t *)&adc1, 4);

  HAL_CAN_Start(&hcan1);
}

extern struct sCO_OD_RAM CO_OD_RAM;

void module_poll(void)
{
  //Check for the variables for PWM and I/O

  //ADC conversion
  transferState = READ_BIT(DMA2->LISR, DMA_LISR_TCIF0) == (DMA_LISR_TCIF0);
  halfTransferState = READ_BIT(DMA2->LISR, DMA_LISR_HTIF0) == (DMA_LISR_HTIF0);

  bufferData = 0;

  //Copy Data from registers
  if (halfTransferState)
  {
    DMA2->LIFCR = DMA_FLAG_HTIF0_4 << hdma_adc1.StreamIndex;

    for (int i = 0; i < 2; i++)
    {
      bufferData += adc1[i]; // Analogue Input
    }
  }

  if (transferState)
  {
    DMA2->LIFCR = DMA_FLAG_TCIF0_4 << hdma_adc1.StreamIndex;

    for (int i = 0; i < 2; i++)
    {
      bufferData += adc1[i]; // Analogue Input
    }
  }

  bufferData /= 2; // Analogue Input
  //-----------------------------------------------------------------------------------------------------------------

  //A phase
  //TIM1->CCR1 = CO_OD_RAM.writeAnalogueOutput16Bit[0];
  //B phase
  //TIM1->CCR2 = CO_OD_RAM.writeAnalogueOutput16Bit[1];
  //C phase
  //TIM1->CCR3 = CO_OD_RAM.writeAnalogueOutput16Bit[2];
  //D phase
  //TIM1->CCR4 = CO_OD_RAM.writeOutput16Bit[3];
}