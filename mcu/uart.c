#include "uart.h"

void initUart(){
    SCON =  0x50;       //串口模式：8位无校验，允许接受
    TMOD |= 0x20;       
    TMOD &= 0xEF;		//设置定时器1，工作在2模式，自动重装8位计数器，串口中断使用
    TH1   = 0xFD;
    TL1   = 0xFD;		//波特率9600
    TR1   = 1;			//TCON中的TR1，定时器1开始计时
    ES    = 1;          //串口中断开关打开
}

void uartSendByte(uchar dat){
    SBUF = dat;
    while(!TI);
    TI = 0;
}

void uartSendBuffer(uchar* datBuffer, uchar length){
    uchar pos;
    REN = 0;
    for(pos = 0; pos < length; pos++){
        uartSendByte(datBuffer[pos]);
        uartDelay();
    }
    REN = 1;
}

void uartDelay(){
    uchar pos = 255;
    while(pos--);
}