#include <reg52.h>
#include <intrins.h>

#ifndef __UCHAR__
#define uchar unsigned char
#endif

#ifndef __UINT__
#define uint unsigned int
#endif

//高4位输入，低4位输出
#define GPIO_PLCIO P2

extern uchar bdata bitChar = 0x00;				//用来保存各类状态的虚拟uchar
sbit  messageReadble	= bitChar^3;			//与PLC通讯的数据接收开关

/* @TODO:数码管显示，测试后需要删除 */
/*                             0     1     2     3     4     5     6     7     8    9     A     b     C     d     E     F    空白*/
uchar code display_code[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5E, 0x79, 0x71, 0x00};
/* 数码管的地址，16进制 */
uchar code display_cs[]   = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20};
uchar idata digital_string[6];

void delay(uint);

//读取PLCIO的高4位，映射到返回值的低4位
uchar readPLCIOH4();
//向PLCIO低4位写入一个uchar
void  writePLCIOL4(uchar);
//对输入进行响应
void processInput(uchar);
//对完整的消息进行响应
void processMessage();
//向PLC发送消息
uchar sendMessage();


//数码管显示，测试完了删了
void display();