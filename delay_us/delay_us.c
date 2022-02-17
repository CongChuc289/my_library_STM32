#include "delay_us.h"
void Delay_us(TIM_HandleTypeDef *htim, uint16_t time){
	__HAL_TIM_SET_COUNTER(htim,0);
  HAL_TIM_Base_Start(htim);
	while(__HAL_TIM_GET_COUNTER(htim) < time);
	HAL_TIM_Base_Stop(htim);
}