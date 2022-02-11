#include "rcc.h"

void RCC_Init(void)
{
    RCC->CR |= RCC_CR_HSION;
    while(!READ_BIT(RCC->CR, RCC_CR_HSIRDY));
    RCC->CFGR |= RCC_CFGR_SW_HSI;
    while(READ_BIT(RCC->CFGR, RCC_CFGR_SW_HSI));
}
