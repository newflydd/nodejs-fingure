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
    for(ucharTemp = 0; ucharTemp < 7; ucharTemp ++){
        sendBuffer[ucharTemp] = sendPackageHeader[ucharTemp];
    }

    //将串口接受寄存器的数据长度置0
    receiveBufferLength = 0;
    
    //接受到了串口通知开关置0
    receiveCmdNotify = 0;
    //等待串口消息开关置0
    waitForReceive = 0;

    EA = 1;     //总中断开关打开
}

void main(){    
    uchar fingureReadable = 1;      //下位机指纹模块连接性，0时代表可准确连接
    delay(65535);
    delay(65535);
    delay(65535);
    delay(65535);
    delay(65535);
    delay(65535);
    delay(65535);
    delay(65535);

initPrograme:
    initUart();
    initMain();

    fingureReadable = getAddressListFunction();

    if(fingureReadable){
        //@TODO: 异常警报
        showWarning();
        goto initPrograme;
    }else{
        //P1 = 0x40;
    }

    //初始化指令为:0x11，向指纹模块发送采集指纹用来验证的命令
    sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;

    while(1){
        /* 主循环中首先判断是否有串口响应，如果有，则本次循环用来处理消息响应 */
        if(receiveCmdNotify == 1){
            receiveCmdNotify = 0;

            receiveEventFunction();     //接住消息

            continue;
        }

        /*
         * 如果没有串口响应
         * 首先判断是否在等待下位机反馈，如果在等待，就开始延时计数
         */   
        if(waitForReceive == 1){
            waitForReceive = 0;
            if(waitTimes < 3)
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
            newFingureAddressIndex = getNewAddressIndexByPower(inputSignal);    //通过权限来构造一个空位置
            noFingureTimesWhenInput = 0;                                        //将录入指纹时的重复次数归零
            sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT1;
        }

        //uartSendByte(sendCmdStatus);

        if(receiveCmdNotify == 0)
            sendCmdFunction();
        delay(2000);
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

        if(receiveBufferLength == 1 && receiveByte!=0xEF){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 2 && receiveByte!=0x01){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 3 && receiveByte!=0xFF){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 4 && receiveByte!=0xFF){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 5 && receiveByte!=0xFF){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 6 && receiveByte!=0xFF){
            receiveBufferLength = 0;
            return;
        }

        if(receiveBufferLength == 9){
            //如果指令接受到9个byte，这时候包长度信息有了
            receivePackageLength = (receiveBuffer[7] << 8) + receiveBuffer[8];
        }else if (receiveBufferLength == 9 + receivePackageLength) {
            //结束一轮消息接受，清空buffer，解析命令
            
            //获取校验和
            receiveCheckSum = (receiveBuffer[7 + receivePackageLength] << 8) + receiveBuffer[8 + receivePackageLength];
            //获取确认码
            cfmCode = receiveBuffer[9];
            //获取参数
            for (ucit = 0; ucit < receivePackageLength - 3; ucit++) {
                receiveParams[ucit] = receiveBuffer[10 + ucit];
            }

            //验证校验和
            uiit = 0;
            for (ucit = 6; ucit < receiveBufferLength - 2; ucit++) {
                uiit += receiveBuffer[ucit];
            }

            if (uiit == receiveCheckSum) {
                //校验正确，发射消息响应
                receiveCmdNotify = 1;
                receiveEventStatus = sendCmdStatus - 100;    //事件类型根据发送类型对应
                waitForReceive = 0;                          //解除等待锁
                waitTimes = 0;                               //等待响应次数复位
            }
            //清空指令buffer
            receiveBufferLength = 0;
        }            
	}
}

/**
 * 给sendBuffer变量构建发送指令
 * 命令和参数来自于全局变量sendCmdAndParams
 * @param capLength [命令+参数的长度]
 */
void buildSendCmd(uchar capLength){
    uint checkSum;
    uchar packageLength = capLength + 2;    //包长度 = 指令集长度 + 校验和长度
    sendBufferLength = 11 + capLength;      // 7 + 2 + capLength + 2

    sendBuffer[7] = 0;                      //包长度高位为0x00
    sendBuffer[8] = packageLength;          //包长度低位为实际包长度
    
    //构建发送指令串口消息中的指令和参数
    for(ucharTemp = 0; ucharTemp < capLength; ucharTemp++){
        sendBuffer[9+ucharTemp] = sendCmdAndParams[ucharTemp];
    }

    checkSum = getCheckSum(packageLength, sendCmdAndParams, capLength);
    sendBuffer[9 + capLength]  = checkSum>>8;
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
 * @TODO:临时模拟信号
 * 检查输入端口有没有录入信号（P2高4位）,录入信号需要阶段时间内维持稳定信号
 * @return 如果没有，返回0，如果有，返回P2高4位的低三位作为权限数据
 */
uchar checkInputSignal(){
    uchar inputValue = GPIO_INPUT;
    uintTemp = 500;

    while(uintTemp--){
        ucharTemp = (inputValue<<1);
        if((ucharTemp & 0x80) == 0x80)
            return 0x00;
    }

    return 0x05;
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
        case EVENT_BUILD_CB1_FOR_CHECK:
            if(cfmCode == 0){
                //生成特征码成功
                sendCmdStatus = ACTION_SEARCH;
                delay(3000);
            }else{
                //生成特征码失败
                showWarning();
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);
            }
            break;
        case EVETN_SEARCH:
            if(cfmCode == 0){
                //@TODO:搜索到匹配指纹
                uartSendByte(receiveParams[0]);
                uartSendByte(receiveParams[1]);
                uintTemp = receiveParams[0];
                uintTemp = uintTemp<<8;
                uintTemp += receiveParams[1];
                uintTemp = uintTemp / 100;
                P1 = display_code[uintTemp + 1];
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(65535);
            }else{
                //搜索失败
                showWarning();
                P1 = 0x3F;
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);    
            }
            break;
        case EVENT_GET_IMAGE_FOR_INPUT1:
            if(cfmCode == 0){
                //传感器采集到指纹
                sendCmdStatus = ACTION_BUILD_CB1_FOR_INPUT;
                noFingureTimesWhenInput = 0;        //录入时没有指纹的次数归零
            }else if(cfmCode == 2){ 
                //传感器上没有手指，延时后继续发送采集命令，计数30次后重置为验证指纹
                noFingureTimesWhenInput++;
                if(noFingureTimesWhenInput > NO_FINGURE_WHEN_INPUT_MAX_TIME)
                    sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                else    
                    sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT1;
                delay(3000);
            }
            break;
        case EVENT_BUILD_CB1_FOR_INPUT:
            if(cfmCode == 0){
                //生成特征码成功
                sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT2;
                delay(3000);
            }else{
                //生成特征码失败
                showWarning();
                sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT1;
                delay(3000);
            }
            break;
        case EVENT_GET_IMAGE_FOR_INPUT2:
            if(cfmCode == 0){
                //传感器采集到指纹
                sendCmdStatus = ACTION_BUILD_CB2_FOR_INPUT;
                noFingureTimesWhenInput = 0;
            }else if(cfmCode == 2){ 
                //传感器上没有手指，延时后继续发送采集命令，计数30次后重置为验证指纹
                noFingureTimesWhenInput++;
                if(noFingureTimesWhenInput > NO_FINGURE_WHEN_INPUT_MAX_TIME)
                    sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                else    
                    sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT2;
                delay(3000);
            }
            break;
        case EVENT_BUILD_CB2_FOR_INPUT:
            if(cfmCode == 0){
                //生成特征码成功
                sendCmdStatus = ACTION_MEARGE_CODE;
                delay(3000);
            }else{
                //生成特征码失败
                showWarning();
                sendCmdStatus = ACTION_GET_IMAGE_FOR_INPUT2;
                delay(3000);
            }
            break;
        case EVENT_MEARGE_CODE:
            if(cfmCode == 0){
                //特征码合并成功
                sendCmdStatus = ACTION_SAVE_ADDRESS;
                delay(3000);
            }else{
                //特征码合并失败
                showWarning();
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);
            }
            break;
        case EVENT_SAVE_ADDRESS:
            if(cfmCode == 0){
                //指纹特征保存成功
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);
                updateFingureAddress(newFingureAddressIndex);
            }else{
                //特征码合并失败
                showWarning();
                sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
                delay(3000);
            }
            break;
    }
}

/* 根据sendCmdStatus，构造发送命令 */
void sendCmdFunction(){
    /* 串口接受的相关状态复位 */
    receiveEventStatus = 0;
    waitForReceive = 1;
    receiveBufferLength = 0;

    switch(sendCmdStatus){
        case ACTION_GET_IMAGE_FOR_CHECK:
            P1 = display_code[10];
            sendCmdAndParams[0] = 0x01;
            buildSendCmd(1);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_BUILD_CB1_FOR_CHECK:
            sendCmdAndParams[0] = 0x02;
            sendCmdAndParams[1] = 0x01;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_SEARCH:
            sendCmdAndParams[0] = 0x04;
            sendCmdAndParams[1] = 0x01;
            sendCmdAndParams[2] = 0x00;
            sendCmdAndParams[3] = 0x00;
            sendCmdAndParams[4] = 0x03;
            sendCmdAndParams[5] = 0xE7;
            buildSendCmd(6);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_GET_FINGURE_ADDRESS_LIST0:
            sendCmdAndParams[0] = 0x1F;
            sendCmdAndParams[1] = 0x00;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            break;
        case ACTION_GET_FINGURE_ADDRESS_LIST1:
            sendCmdAndParams[0] = 0x1F;
            sendCmdAndParams[1] = 0x01;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            break;
        case ACTION_GET_FINGURE_ADDRESS_LIST2:
            sendCmdAndParams[0] = 0x1F;
            sendCmdAndParams[1] = 0x02;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            break;
        case ACTION_GET_FINGURE_ADDRESS_LIST3:
            sendCmdAndParams[0] = 0x1F;
            sendCmdAndParams[1] = 0x03;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            break;
        case ACTION_GET_IMAGE_FOR_INPUT1:
            P1 = display_code[11];
            sendCmdAndParams[0] = 0x01;
            buildSendCmd(1);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_GET_IMAGE_FOR_INPUT2:
            sendCmdAndParams[0] = 0x01;
            buildSendCmd(1);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_BUILD_CB1_FOR_INPUT:
            sendCmdAndParams[0] = 0x02;
            sendCmdAndParams[1] = 0x01;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_BUILD_CB2_FOR_INPUT:
            sendCmdAndParams[0] = 0x02;
            sendCmdAndParams[1] = 0x02;
            buildSendCmd(2);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_MEARGE_CODE:
            sendCmdAndParams[0] = 0x05;
            buildSendCmd(1);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
        case ACTION_SAVE_ADDRESS:
            sendCmdAndParams[0] = 0x06;
            sendCmdAndParams[1] = 0x01;
            sendCmdAndParams[2] = (uchar)(newFingureAddressIndex>>8);
            sendCmdAndParams[3] = (uchar)newFingureAddressIndex;
            buildSendCmd(4);
            uartSendBuffer(sendBuffer, sendBufferLength);
            delay(65535);
            break;
    }
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
    delay(65535);
    delay(65535);
    delay(65535);

    initMain();
    sendCmdStatus = ACTION_GET_IMAGE_FOR_CHECK;
}

/**
 * 获取指纹模块的有效指纹列表
 * @return [0:成功,1:超时失败,2:反馈错误]
 */
uchar getAddressListFunction(){
    sendCmdStatus = ACTION_GET_FINGURE_ADDRESS_LIST0;

    for(ut1 = 0; ut1 < 4; ut1++){
        sendCmdFunction();
        
        if(waitForReceive)
            delay(65535);
        if(waitForReceive)
            delay(65535);
        if(waitForReceive)
            delay(65535);
        if(waitForReceive)
            delay(65535);
        //等待4 * 65535个机器步骤，如果依然没有反馈则失败

        if(waitForReceive)
            return 1;
        if(cfmCode || receivePackageLength != 35)
            return 2;

        //从串口反馈参数中提取列表索引数据
        for(uintTemp = 0; uintTemp < 33; uintTemp++){
            fingureAddressIndex[ ut1 * 32 + uintTemp] = receiveParams[uintTemp];
        }
        sendCmdStatus++;    //将指令移到下一页
    }

    return 0;
}

/**
 * 根据内存中的指纹库，和传入的权限，构造一个新的未使用的指纹索引
 * @param  uchar [权限，1-10]
 * @return       [未使用的指纹库索引]
 */
uint  getNewAddressIndexByPower(uchar power){
    uintTemp = (power - 1) * 100;
    ucharTemp = fingureAddressIndex[uintTemp / 8]<<(uintTemp % 8);
    while((ucharTemp & 0x80) == 0x80){
        uintTemp++;
        ucharTemp = fingureAddressIndex[uintTemp / 8]<<(uintTemp % 8);
    }
    return uintTemp;
}

/**
 * 更新指纹库，将指定位置的bit置为1
 * @param  address [指定地址]
 * @return         []
 */
void  updateFingureAddress(uint address){
    ucharTemp = fingureAddressIndex[address/8];
    ut1 = 0x80 >> (address % 8);
    ucharTemp = ucharTemp | ut1;
    fingureAddressIndex[address/8] = ucharTemp;
}

/* @TODO:交互反馈 */
void showWarning(){

}