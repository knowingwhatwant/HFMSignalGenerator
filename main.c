#include <msp430.h> 
#include "SRC/systemclock/sysclk.h"
#include "SRC/TIMER/TA_PWM_TIME.h"
//#include "SRC/SPI/SPI_UCA0_.h"
#include "SRC/LCD/lcd.h"
#include "SRC/LCD/lcd_init.h"

void proj_init();




/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	proj_init();
	LCD_Fill(0,0,LCD_W,LCD_H,BLUE);
	float t=1.1;
	//LCD_ShowChar(1,1,'g',BLUE,WHITE,0);
		LCD_ShowString(24,30,"LCD_W:",RED,WHITE,16,0);
		LCD_ShowIntNum(72,30,LCD_W,3,RED,WHITE,16);
		LCD_ShowString(24,50,"LCD_H:",RED,WHITE,16,0);
		LCD_ShowIntNum(72,50,LCD_H,3,RED,WHITE,16);
		LCD_ShowFloatNum1(20,80,t,4,RED,WHITE,16);
	while(1);
}











void proj_init()
{
    sysclk_init();
    aclk_ext_enable();
	//sysclk_out(); //Êä³öSMCLK
	TA_Init_PWM();
    //SPI_UCA0_Init();
	LCD_GPIO_Init();
	LCD_Init();
}
