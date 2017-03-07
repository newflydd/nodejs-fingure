/*
 * @CreateTime: Mar 3, 2017 4:25 PM 
 * @Author: Smith Ding 
 * @Contact: newflydd@gmail.com 
 * @Last Modified By: Smith Ding
 * @Last Modified Time: Mar 3, 2017 4:46 PM
 * @Description: 本软件用来将面板与指纹模块进行通信
 * @Company: JIANGSU SAIYANG MECHANICAL & ELECTRICAL TECHNOLOGY CO.,LTD
 */

#include <reg52.h>
#include <intrins.h>
#include "uart.h"
#include "fingure.h"
#include "event.h"

void delay(uint num){
    while(num--);
}

//启动初始化
void initMain(){
    //初始化发送指令前7个byte
    int pos;
    for(pos = 0; pos < 7; pos ++){
        sendBuffer[pos] = sendPackageHeader[pos];
    }

    //将串口接受寄存器的数据长度置0
    receiveBufferLength = 0;

    EA = 1;     //总中断开关打开
}

void main(){
    initUart();
    initMain();

    //初始化指令为:0x11，向指纹模块发送采集指纹用来验证的命令
    sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;

    while(1){
        /* 主循环中首先判断是否有串口响应，如果有，则本次循环用来处理消息响应 */
        if(receiveCmdNotify == 1){
            receiveCmdNotify = 0;

            receiveEventFunction();     //接住消息

            //都处理完了打开REN接受串口信号，继续主循环
            if(!REN)
                REN = 1;
            continue;
        }

        /*
         * 如果没有串口响应
         * 首先判断是否在等待下位机反馈，如果在等待，就开始延时计数
         */   
        if(waitForReceive == 1){
            if(waitTimes <3)
                waitForReceiveFunction();
            else
                resetFingureFunction();
            continue;
        }

        /* 
         * 继续判断P2口有没有录入通知
         * 如果有录入通知，并且当前状态为验证状态，则发送录入命令
         * 如果没有录入通知，则发送验证命令
         */
        inputSignal = checkInputSignal();
        if((sendCmdStatus ==  ACTION_GET_IMAGE_FOR_CHECK) && inputSignal){
            sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT1;
        }

        sendCmdFunction();
        delay(65535);
    }
}

/**
 * 串口中断函数，用来接收下位机数据
 */
void serialInterruptCallback() interrupt 4 {
	if(RI){				//本次中断是接受中断
		RI = 0;			//接受完了清零

        //将接受到的字节追加到指令接受缓冲区
		receiveByte = SBUF;
		receiveBuffer[receiveBufferLength] = receiveByte;
        receiveBufferLength++;

        if(receiveBufferLength == 9){
            //如果指令接受到9个byte，这时候包长度信息有了 
            //@TODO:接受到9个字节后，可以再判断一下包头信息是否符合要求
            receivePackageLength = (receiveBuffer[7] << 8) + receiveBuffer[8];
        }else if (receiveBufferLength == 9 + receivePackageLength) {
            //结束一轮消息接受，清空buffer，解析命令
            
            //获取校验和
            receiveCheckSum = (receiveBuffer[7 + receivePackageLength] << 8) + receiveBuffer[8 + receivePackageLength];
            //获取确认码
            cfmCode = receiveBuffer[9];
            //获取参数
            for (ucharTemp = 0; ucharTemp < receivePackageLength - 3; ucharTemp++) {
                receiveParams[ucharTemp] = receiveBuffer[10 + ucharTemp];
            }

            //验证校验和
            uintTemp = 0;
            for (ucharTemp = 6; ucharTemp < receiveBufferLength - 2; ucharTemp++) {
                uintTemp += receiveBuffer[ucharTemp];
            }
            if (uintTemp == receiveCheckSum) {
                //校验正确，发射消息响应
                receiveCmdNotify = 1;

                receiveEventStatus = sendCmdStatus - 10;    //事件类型根据发送类型对应
                waitForReceive = 0;                         //解除等待锁
                waitTimes = 0;                              //等待响应次数复位

                REN = 0;    //必须消息响应后才能继续接受，接受响应后需要人工将REN复位为1
            }
            //清空指令buffer
            receiveBufferLength = 0;
        }            
	}
}

/* 给sendBuffer变量构建发送指令 */
void buildSendCmd(uchar* cmdAndParams, uchar capLength){
    uint checkSum;
    uchar packageLength = capLength + 2;    //包长度 = 指令集长度 + 校验和长度
    sendBufferLength = 11 + capLength;      // 7 + 2 + capLength + 2

    sendCmd = cmdAndParams[0];              //命令为第一个字节

    sendBuffer[7] = 0;                      //包长度高位为0x00
    sendBuffer[8] = packageLength;          //包长度低位为实际包长度
    
    //构建发送指令串口消息中的指令和参数
    for(ucharTemp = 0; ucharTemp < capLength; ucharTemp++){
        sendBuffer[9+ucharTemp] = cmdAndParams[ucharTemp];
    }

    checkSum = getCheckSum(packageLength, cmdAndParams, capLength);
    sendBuffer[9 + capLength] = checkSum>>8;
    sendBuffer[10 + capLength] = checkSum;
}

/**
 * [计算校验和]
 * @param  packageLength [包长度]
 * @param  cmdAndParams  [命令和参数数组]
 * @param  capLength     [命令和参数长度]
 * @return               [2byte 校验和]
 */
uint getCheckSum(uchar packageLength, uchar* cmdAndParams, uchar capLength){
    uintTemp = packageLength;
    for(ucharTemp = 0; ucharTemp < capLength; ucharTemp++){
        uintTemp += cmdAndParams[ucharTemp];
    }
    return uintTemp + 1;
}

/**
 * 检查输入端口有没有录入信号（P2高4位）,录入信号需要阶段时间内维持稳定信号
 * @return 如果没有，返回0，如果有，返回P2高4位的低三位作为权限数据
 */
uchar checkInputSignal(){
    uchar inputValue = GPIO_INPUT;
    uintTemp = 500;

    while(uintTemp--){
        ucharTemp = (inputValue>>4);
        if(!ucharTemp)
            return 0x00;
    }

    return ucharTemp;
}

/* 根据receiveEventStatus，解析串口响应 */
void receiveEventFunction(){
    switch(receiveEventStatus){
        case EVENT_GET_IMAGE_FOR_CHECK:
            if(cfmCode == 0){
                //传感器采集到指纹
                sendCmdStatus = ACTION_BUILD_CB1_FOR_CHECK;
            }else if(cfmCode == 2){ 
                //传感器上没有手指，延时后继续发送采集命令
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);
            }
            break;
        case 2:
            break;
    }
}

/* 根据sendCmdStatus，构造发送命令 */
void sendCmdFunction(){
    uchar test[] = {0x01};
    switch(sendCmdStatus){
        case ACTION_GET_IMAGE_FOR_CHECK:
            buildSendCmd(test, 1);
            uartSendBuffer(sendBuffer, sendBufferLength);
            break;
        case 2:
            break;
    }

    /* 发送完成后，立刻将接受等待标志置1，等待接受 */
    receiveEventStatus = 0;
    waitForReceive = 1;
    REN = 1;
}

/* 等待下位机反馈的延时计数函数 */
void waitForReceiveFunction(){
    waitTimes++;
    delay(500);
}

/* 对指纹模块的复位函数 */
void resetFingureFunction(){
    waitTimes = 0;

    //@TODO:控制引脚让指纹下位机复位

    delay(65535);
}