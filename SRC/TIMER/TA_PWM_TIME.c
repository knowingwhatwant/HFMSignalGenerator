/*
 * TA_PWM_TIME.c
 *
 *  Created on: 2023��6��10��
 *      Author: 24811
 */
#include "TA_PWM_TIME.h"



void TA_Init_PWM()
{
    TA1CTL |= TASSEL_2 + MC_1;
    TA1CCTL1 = OUTMOD_7;
    TA1CCR0 = 200;
    TA1CCR1 = 175;
    P2DIR|=BIT1;
    P2SEL|=BIT1;
}






