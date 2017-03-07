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

uchar bdata bitChar;				//用来保存各类状态的虚拟uchar
sbit  receiveCmdNotify = bitChar^0;	//串口接受了一个符合校验的完整的指令，需要立即处理
sbit  waitForReceive   = bitChar^1; //等待接受标志，此位为1时不可以向下位机发送请求，只能等待

uchar datByte = 0x11;
uchar sendBufferLength = 16;        //发送指令实际长度，在发送存储命令时最大为16
uchar sendBuffer[16];               //发送指令寄存器
uchar sendCmd;						//发送指令中的命令
uchar receiveBufferLength = 44;     //接受指令实际长度，在接受指纹库列表时最大为44
uchar idata receiveBuffer[44];      //接受指令寄存器
uchar receiveByte;					//存放接受的串口单字节
uint  receivePackageLength;			//指令接受包长度
uint  receiveCheckSum;				//指令接受校验和
uchar cfmCode;						//指令接受确认码
uchar idata receiveParams[32];		//指令接受参数，最长32个字节
uchar cmdAndParams[5];				//存放指令和参数，最多1个byte的指令+2*2byte的参数

uchar receiveEventStatus = 0;		//当前接受的事件类型，0：没有任何事件， >=1时需要接住不同的事件，详细的事件信号分配见：event.h
uchar sendCmdStatus = 0;			//当前发送的命令类型，0：没有发送任务， >=1时表示需要发送命令给下位机		
uchar inputSignal = 0;				//P2输入位的录入通知
uchar waitTimes = 0;				//等待次数，大于3次时需要复位

uchar xdata fingureAddressPage[128];//指纹库分页存储列表，按bit查找，1：该位置有指纹存储，0：该位置没有指纹存储

uchar ucharTemp;					//重复利用的uchar类型临时变量
uint  uintTemp;						//重复利用的uint类型临时变量


/* 初始化函数 */
void initMain();
/* 延时函数 */
void delay();
/* 给sendBuffer变量构建发送指令 */
void buildSendCmd(uchar* cmdAndParams, uchar capLength);
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

/* 事件响应：接受从指纹模块响应回来的有效库地址，需要用 receiveBuffer 更新 fingureAddressPage */
uchar onReceivedAddressListEvent();

#endif

