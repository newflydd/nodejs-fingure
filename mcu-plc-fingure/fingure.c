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

/**
 * 删除特定位置的指纹，将此位置bit置0
 * @param  address [指定地址]
 * @return         []
 */
void  deleteFingureAddress(uint address){
    ucharTemp = fingureAddressIndex[address/8];
    ut1 = 0xFF7F >> (address % 8);
    ucharTemp = ucharTemp & ut1;
    fingureAddressIndex[address/8] = ucharTemp;
}

/**
 * 清空内存中的指纹库
 */
void cleanFingureAddress(){
    for(ucharTemp = 0; ucharTemp < 128; ucharTemp++){
        fingureAddressIndex[ucharTemp] = 0x00;
    }
}