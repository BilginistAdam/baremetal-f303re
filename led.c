
#include<stdint.h>
#include "led.h"

/*
@fn : LED_Init()
@brief : It initilizations register of RCC and GPIOA Peripheral

@param : void
@return: void
*/

void LED_Init(void){
    uint32_t *ptr;

    //RCC CLK Enable For GPIOA
    ptr = (uint32_t*)RCC_AHBENR_BASEADDR;
    *ptr |= (1 << RCC_AHBENR_GPIOA_MASK);

    //GPIOA CONF
    //GPIOA MODE
    ptr = (uint32_t*)GPIOA_MODER_BASEADDR;
    *ptr |= (GPIO_MODE_OUTPUT << GPIOA_MODER_MASK);

    //GPIOA Output Type
    ptr = (uint32_t*)GPIOA_OTYPER_BASEADDR;
    *ptr |= (GPIO_OTYPE_PP << GPIOA_OTYPER_MASK);

    //GPIOA Output Speed
    ptr = (uint32_t*) GPIOA_OSPEEDR_BASEADDR;
    *ptr |= (GPIO_SPEED_MEDUIM << GPIOA_OSPEEDR_MASK);

    //GPIOA Pull Up Pull Down  
    ptr = (uint32_t*)GPIOA_PUPDR_BASEADDR;
    *ptr |= (GPIO_NO_PUPD << GPIOA_PUPDR_MASK);


    //LED Off
    LED_Off();
}

void LED_Deinit(void){

}

void LED_On(void){
    //ODR Set
    uint32_t *ptr = (uint32_t*) GPIOA_ODR_BASEADDR;
    *ptr |= (1 << GPIOA_ODR_MASK);
}


void LED_Off(void){
    //ODR Reset
    uint32_t *ptr = (uint32_t*) GPIOA_ODR_BASEADDR;
    *ptr &= (0 << GPIOA_ODR_MASK);
}