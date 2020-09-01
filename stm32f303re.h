#ifndef __STM32F303RE_H_
#define __STM32F303RE_H_

/* SOME Peripheral Address */

/* RCC Base Address */
#define RCC_BASEADDR            (0x40021000UL)
#define RCC_AHBENR_OFFSET       (0x14UL)
#define RCC_AHBRSTR_OFFSET      (0x28UL)
#define RCC_APB1RSTR_OFFSET     (0x10UL)
#define RCC_APB1ENR_OFFSET      (0x1CUL)

/* RCC AHB Peripheral Resisters */
#define RCC_AHBENR_BASEADDR     (RCC_BASEADDR + RCC_AHBENR_OFFSET)
#define RCC_AHBRSTR_BASEADDR    (RCC_BASEADDR + RCC_AHBRSTR_OFFSET)

/* RCC APB1 Peripheral Registers */
#define RCC_APB1ENR_BASEADDR    (RCC_BASEADDR + RCC_APB1ENR_BASEADDR)
#define RCC_APB1RSTR_BASEADDR   (RCC_BASEADDR + RCC_APB1RSTR_OFFSET)s    

/* RCC AHB GPIOA Peripheral Mask*/
#define RCC_AHBENR_GPIOA_MASK   0x11
#define RCC_AHBRSTR_GPIOA_MASK  0x11

/* RCC APB1 USART2 Peripheral Mask */
#define RCC_APB1ENR_USART2_MASK 0x11
#define RCC_APB1ENR_USART2_MASK 0x11

/* GPIOA */
#define GPIOA_BASEADDR          (0x48000000UL)
#define GPIOx_MODER_OFFSET      (0x00UL)
#define GPIOx_OTYPER_OFFSET     (0x04UL)
#define GPIOx_OSPEEDR_OFFSET    (0x08UL)
#define GPIOx_PUPDR_OFFSET      (0x0CUL)
#define GPIOx_ODR_OFFSET        (0x14UL)

/* GPIOA Mod Registers Addres */
#define GPIOA_MODER_BASEADDR    (GPIOA_BASEADDR + GPIOx_MODER_OFFSET)
#define GPIOA_OTYPER_BASEADDR   (GPIOA_BASEADDR + GPIOx_OTYPER_OFFSET)
#define GPIOA_OSPEEDR_BASEADDR  (GPIOA_BASEADDR + GPIOx_OSPEEDR_OFFSET)  
#define GPIOA_PUPDR_BASEADDR    (GPIOA_BASEADDR + GPIOx_PUPDR_OFFSET)
#define GPIOA_ODR_BASEADDR      (GPIOA_BASEADDR + GPIOx_ODR_OFFSET)

/* GPIOA 5.Pin Register Mask */
#define GPIOA_MODER_MASK        10 
#define GPIOA_OTYPER_MASK       5
#define GPIOA_OSPEEDR_MASK      10
#define GPIOA_PUPDR_MASK        10
#define GPIOA_ODR_MASK          5

/* GPIO Mode */
#define GPIO_MODE_INPUT         0
#define GPIO_MODE_OUTPUT        0b01
#define GPIO_MODE_ AF           2
#define GPIO_MODE_ANALOG        3

/* GPIO Port Output Type */
#define GPIO_OTYPE_PP           0
#define GPIO_OTYPE_OD           1

/* GPIO Port Output Speed */
#define GPIO_SPEED_LOW          0 
#define GPIO_SPEED_MEDUIM       0b01
#define GPIO_SPEED_HIGH         2

/* GPIO Pull Up Pull Down */
#define GPIO_NO_PUPD            0
#define GPIO_PU                 0b01
#define GPIO_PD                 2

/* UART2 */
#define USART2_BASEADDR         (0x40004400UL)
#define USART2_CR1_BASEADDR     ()







#endif  /* __STM32F303RE_H_ */