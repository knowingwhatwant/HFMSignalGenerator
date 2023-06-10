/*
 * sysclk.c
 *
 *  Created on: 2023Äê6ÔÂ10ÈÕ
 *      Author: 24811
 */
#include "sysclk.h"
void sysclk_init(){
    DCOCTL = CALDCO_16MHZ;
    BCSCTL1 = CALBC1_16MHZ;
}


void sysclk_out()
{
    P1DIR |= BIT4;
    P1SEL |= BIT4;
}

void aclk_ext_enable(){
    BCSCTL1 &= ~XT2OFF;
    BCSCTL2 |= SELS;
    BCSCTL3 |= XT2S_0+XCAP_1;
    }
