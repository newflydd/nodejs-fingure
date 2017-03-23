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
sbit LED_WARNING = P0 ^ 6;
sbit LED_CHECK   = P0 ^ 7;
sbit LED_INPUT1  = P3 ^ 7;
sbit LED_INPUT2  = P3 ^ 6;

extern uchar ucharTemp;

void showWarning();
void showSuccess();
void showCheck();
void showInput1();
void showInput2();

extern void delay(uint);

#endif