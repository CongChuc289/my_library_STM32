#include "Sr04.h"
void Sr04_init(uint8_t index){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0 << index, GPIO_PIN_SET);
}