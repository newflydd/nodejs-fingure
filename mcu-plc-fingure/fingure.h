#ifndef __FINGURE__
#define __FINGURE__

#include <reg52.h>

/* 2byte 8bit 无符号位整型 0-255 */
#ifndef uchar
#define uchar unsigned char
#endif

/* 4byte 16bit 无符号位整型 0-65535 */
#ifndef uint
#define uint unsigned int
#endif

//@TODO:临时信号量
#define GPIO_INPUT P0

//录入指纹时如果没有手指放上去，最大重复次数
#define NO_FINGURE_WHEN_INPUT_MAX_TIME 30

extern uchar code sendPackageHeader[7];
extern uchar code display_code[17];

extern uchar bdata bitChar;					//用来保存各类状态的虚拟uchar
extern bit  receiveCmdNotify;	//串口接受了一个符合校验的完整的指令，需要立即处理
extern bit  waitForReceive;	//等待接受标志，此位为1时不可以向下位机发送请求，只能等待
extern bit  booleanTemp;	//临时boolean变量

extern uchar datByte;
extern uchar sendBufferLength;
extern uchar sendBuffer[16];   
extern uchar sendCmdAndParams[6];
extern uchar receiveBufferLength;
extern uchar idata receiveBuffer[44];
extern uchar receiveByte;
extern uint  receivePackageLength;
extern uint  receiveCheckSum;
extern uchar cfmCode;
extern uchar idata receiveParams[32];
extern uchar cmdAndParams[5];

extern uchar receiveEventStatus;
extern uchar sendCmdStatus;
extern uchar inputSignal;
extern uchar waitTimes;
extern uchar noFingureTimesWhenInput;

extern uchar xdata fingureAddressIndex[128];
extern uchar fingureAddressPageNum;
extern uint  newFingureAddressIndex;

extern uchar ucharTemp,ut1;
extern uint  uintTemp;

extern uchar ucit;
extern uint  uiit;

extern void delay(uint);
extern void initMain();
extern void showWarning();

/* 给sendBuffer变量构建发送指令，命令和参数来自于全局变量sendCmdAndParams */
void buildSendCmd(uchar capLength);
/* 计算校验和 */
uint getCheckSum(uchar packageLength, uchar* cmdAndParams, uchar capLength);

/* 等待下位机反馈的延时计数函数 */
void waitForReceiveFunction();
/* 对指纹模块的复位函数 */
void resetFingureFunction();

extern void sendCmdFunction();

/* 获取指纹模块的有效指纹列表 */
uchar getAddressListFunction();
/* 根据内存中的指纹库，和传入的权限，构造一个新的未使用的指纹索引 */
uint  getNewAddressIndexByPower(uchar); 
/* 更新指纹库，将指定位置的bit置为1 */
void  updateFingureAddress(uint);
/* 清空内存中的指纹库 */
void  cleanFingureAddress();
/* 删除特定位置的指纹，将此位置bit置0 */
void  deleteFingureAddress(uint);

#endif

