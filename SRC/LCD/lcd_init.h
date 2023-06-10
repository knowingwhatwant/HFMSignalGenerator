#ifndef __LCD_INIT_H
#define __LCD_INIT_H

//#include "REG51.h"
#include <msp430.h>
#define USE_HORIZONTAL 1  //设置横屏或者竖屏显示 0或1为竖屏 2或3为横屏


#if USE_HORIZONTAL==0||USE_HORIZONTAL==1
#define LCD_W 128
#define LCD_H 160

#else
#define LCD_W 160
#define LCD_H 128
#endif

#define u8  unsigned char
#define u16 unsigned int
/*
sbit LCD_SCL=P1^0;//SCLK
sbit LCD_SDA=P1^1;//MOSI
sbit LCD_RES=P1^2;//RES
sbit LCD_DC =P1^3;//DC
sbit LCD_CS =P1^4; //CS
sbit LCD_BLK=P1^5; //BLK
*/


//-----------------LCD端口定义----------------

#define LCD_SCLK_Clr() P1OUT &= ~BIT1//SCL=SCLK
#define LCD_SCLK_Set() P1OUT |=  BIT1

#define LCD_MOSI_Clr() P1OUT &= ~BIT2//SDA=MOSI
#define LCD_MOSI_Set() P1OUT |=  BIT2

#define LCD_RES_Clr() P1OUT &=  BIT3//RES
#define LCD_RES_Set() P1OUT |= ~BIT3

#define LCD_DC_Clr() P1OUT &= ~BIT4//DC
#define LCD_DC_Set() P1OUT |=  BIT4

#define LCD_CS_Clr()  P1OUT &= ~BIT5//CS
#define LCD_CS_Set()  P1OUT |=  BIT5

//#define LCD_BLK_Clr()  LCD_BLK=0//BLK
//#define LCD_BLK_Set()  LCD_BLK=1



void delay_ms(unsigned int ms);//不准确延时函数
void LCD_GPIO_Init(void);//初始化GPIO
void LCD_Writ_Bus(u8 dat);//模拟SPI时序
void LCD_WR_DATA8(u8 dat);//写入一个字节
void LCD_WR_DATA(u16 dat);//写入两个字节
void LCD_WR_REG(u8 dat);//写入一个指令
void LCD_Address_Set(u16 x1,u16 y1,u16 x2,u16 y2);//设置坐标函数
void LCD_Init(void);//LCD初始化
#endif




