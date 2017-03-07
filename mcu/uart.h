#ifndef __UART__
#define __UART__

#include <reg52.h>

/* 2byte 8bit 无符号位整型 0-255 */
#ifndef uchar
#define uchar unsigned char
#endif

/* 4byte 16bit 无符号位整型 0-65535 */
#ifndef uint
#define uint unsigned int
#endif

/* 初始化串口模块 */
void initUart();
/* 向串口发送一个字节 */
void uartSendByte(uchar dat);
/* 向串口发送一串字节 */
void uartSendBuffer(uchar* datBuffer, uchar length);
/* 串口模块自己的延时函数 */
void uartDelay();



#endif