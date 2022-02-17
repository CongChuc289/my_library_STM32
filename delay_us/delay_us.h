#ifndef delay_us_H
#define delay_us_H
#include "stm32f1xx_hal.h"
void Delay_us(TIM_HandleTypeDef *htim, uint16_t time);
#endif