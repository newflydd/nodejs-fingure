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

#define GPIO_INPUT P2

/* 发送包的包头 */
uchar code sendPackageHeader[] = {0xEF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01};
/* @TODO:数码管显示，测试后需要删除 */
/*                             0     1     2     3     4     5     6     7     8    9     A     b     C     d     E     F*/
uchar code display_code[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5E, 0x79, 0x71};

uchar bdata bitChar;				//用来保存各类状态的虚拟uchar
sbit  receiveCmdNotify	= bitChar^0;	//串口接受了一个符合校验的完整的指令，需要立即处理
sbit  waitForReceive 	= bitChar^1;	//等待接受标志，此位为1时不可以向下位机发送请求，只能等待
sbit  booleanTemp		= bitChar^2;	//临时boolean变量

uchar datByte = 0x11;
uchar sendBufferLength = 16;        //发送指令实际长度，在发送存储命令时最大为16
uchar sendBuffer[16];               //发送指令寄存器
uchar sendCmdAndParams[6];			//发送指令中的命令和参数
uchar receiveBufferLength = 44;     //接受指令实际长度，在接受指纹库列表时最大为44
uchar idata receiveBuffer[44];      //接受指令寄存器
uchar receiveByte;					//接受的串口单字节
uint  receivePackageLength;			//接受指令包长度
uint  receiveCheckSum;				//接受指令校验和
uchar cfmCode;						//接受指令确认码
uchar idata receiveParams[32];		//接受指令参数，最长32个字节
uchar cmdAndParams[5];				//存放指令和参数，最多1个byte的指令+2*2byte的参数

uchar receiveEventStatus = 0;		//当前接受的事件类型，0：没有任何事件， >=1时需要接住不同的事件，详细的事件信号分配见：event.h
uchar sendCmdStatus = 0;			//当前发送的命令类型，0：没有发送任务， >=1时表示需要发送命令给下位机		
uchar inputSignal = 0;				//P2输入位的录入通知
uchar waitTimes = 0;				//等待次数，大于3次时需要复位

uchar xdata fingureAddressIndex[128];	//指纹库分页存储列表，按bit查找，1：该位置有指纹存储，0：该位置没有指纹存储
uchar fingureAddressPageNum;			//指纹库分页存储片选标记，0-3

uchar ucharTemp,ut1;				//重复利用的uchar类型临时变量
uint  uintTemp;						//重复利用的uint类型临时变量

uchar ucit;         //中断中自己使用的uchar变量，中断中禁止使用任何全局临时变量
uint  uiit;         //中断中自己使用的uint 变量，中断中禁止使用任何全局临时变量


/* 初始化函数 */
void initMain();
/* 延时函数 */
void delay();
/* 给sendBuffer变量构建发送指令，命令和参数来自于全局变量sendCmdAndParams */
void buildSendCmd(uchar capLength);
/* 计算校验和 */
uint getCheckSum(uchar packageLength, uchar* cmdAndParams, uchar capLength);
/* 检查P2是否有录入指纹的信号 */
uchar checkInputSignal();

/* 等待下位机反馈的延时计数函数 */
void waitForReceiveFunction();
/* 对指纹模块的复位函数 */
void resetFingureFunction();

/* 根据receiveEventStatus，解析串口响应 */
void receiveEventFunction();
/* 根据sendCmdStatus，构造发送命令 */
void sendCmdFunction();

/* 获取指纹模块的有效指纹列表 */
uchar getAddressListFunction();

/* 交互反馈 */
void showWarning();

#endif

