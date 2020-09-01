/*
 * led.h
 *
 *  Created on: 28-Dec-2019
 *      Author: nieki
 */

#ifndef LED_H_
#define LED_H_

#include <stdint.h>
#include "stm32f303re.h"

/* 
    FUNCTION Prototypes
*/
void LED_Init(void);
void LED_Deinit(void);
void LED_On(void);
void LED_Off(void);

#endif /* LED_H_ */
