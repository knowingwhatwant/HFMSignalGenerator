/*
 * TA_PWM_TIME.c
 *
 *  Created on: 2023Äê6ÔÂ10ÈÕ
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






