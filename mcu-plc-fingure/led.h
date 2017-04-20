#ifndef __LEDSHOW__
#define __LEDSHOW__

#include <reg52.h>

/* 2byte 8bit 无符号位整型 0-255 */
#ifndef uchar
#define uchar unsigned char
#endif

/* 4byte 16bit 无符号位整型 0-65535 */
#ifndef uint
#define uint unsigned int
#endif

/* 交互反馈的LED灯 */
sbit LED_WARNING = P1 ^ 4;
sbit LED_CHECK   = P1 ^ 5;
sbit LED_INPUT1  = P1 ^ 6;
sbit LED_INPUT2  = P1 ^ 7;

extern uchar ucharTemp;

void showWarning();
void showSuccess();
void showCheck();
void showInput1();
void showInput2();

extern void delay(uint);

#endif