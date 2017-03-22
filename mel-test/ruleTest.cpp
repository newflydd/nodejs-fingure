#include "ruleTest.h"

using namespace std;

int timeOut = 1;
MELDEVICEDATA MelIoctlData;
uchar y220;
bool messageReadble = false;

uchar messageBuffer[4];
uchar messageBufferLength = 0;

/// @brief      程序延时  
/// @param[in]  msec : 毫秒  
/// @remark       
/// @return     void  
void delay_msec(int msec)  
{   
    clock_t now = clock();
    while(clock()-now < msec);  
} 

int main(){
	DWORD res;
	res = connectCNC("192.168.2.10",683);

	srand((unsigned)time(NULL));	//随机数

	//流程开始
	while(1){
		//读Y220
		y220 = readY220();

		processY220(y220);

		delay_msec(10);
	}
}

DWORD sendMessage(uchar* messageBuffer, uchar length){
	int times = 1000;

	//============E==================
	writeX0(0x0E);

	y220 = readY220();
	
	while(y220 != 0x0E){
		y220 = readY220();
		times--;
		if(times == 0)
			return 1;
		delay_msec(10);
	}

	//===========0===================
	writeX0(messageBuffer[0]);

	y220 = readY220();
	
	while(y220 != messageBuffer[0]){
		y220 = readY220();
		times--;
		if(times == 0)
			return 2;
		delay_msec(10);
	}

	//============E==================
	writeX0(0x0E);

	y220 = readY220();
	
	while(y220 != 0x0E){
		y220 = readY220();
		times--;
		if(times == 0)
			return 3;
		delay_msec(10);
	}

	//===========1==================
	writeX0(messageBuffer[1]);

	y220 = readY220();
	
	while(y220 != messageBuffer[1]){
		y220 = readY220();
		times--;
		if(times == 0)
			return 4;
		delay_msec(10);
	}

	//============E==================
	writeX0(0x0E);

	y220 = readY220();
	
	while(y220 != 0x0E){
		y220 = readY220();
		times--;
		if(times == 0)
			return 5;
		delay_msec(10);
	}

	//===========2==================
	writeX0(messageBuffer[2]);

	y220 = readY220();
	
	while(y220 != messageBuffer[2]){
		y220 = readY220();
		times--;
		if(times == 0)
			return 6;
		delay_msec(10);
	}

	//============E==================
	writeX0(0x0E);

	y220 = readY220();
	
	while(y220 != 0x0E){
		y220 = readY220();
		times--;
		if(times == 0)
			return 7;
		delay_msec(10);
	}

	//===========3==================
	writeX0(messageBuffer[3]);

	y220 = readY220();
	
	while(y220 != messageBuffer[3]){
		y220 = readY220();
		times--;
		if(times == 0)
			return 8;
		delay_msec(10);
	}

	//============B==================
	writeX0(0x0B);

	return 0;
}

//B -> E -> (0-9)功能 -> E -> (0-9)数据 -> E -> (0-9)数据 -> E -> (0-9)数据 -> B
void processY220(uchar y220){
	if(y220 == 0xFF)
		return;
	//printf("y220:%d, messageBuffer: %d %d %d %d\n", y220, messageBuffer[0], messageBuffer[1], messageBuffer[2], messageBuffer[3]);
	switch(y220){
		case 0x0B:
			writeX0(0x0B);					//反馈一个信号
			if(messageBufferLength != 0){
				processMessage(messageBuffer);	//处理消息寄存器
				messageBufferLength = 0;		//清空消息寄存器

				delay_msec(2000);
				messageBuffer[0] = rand() % 10;
				messageBuffer[1] = rand() % 10;
				messageBuffer[2] = rand() % 10;
				messageBuffer[3] = rand() % 10;
				printf("sending: %d %d %d %d\n", messageBuffer[0], messageBuffer[1], messageBuffer[2], messageBuffer[3]);
				DWORD result = sendMessage(messageBuffer, 4);
				printf("%d\n", result);
			}
			//printf("send:%d\n", 0x0B);
			break;
		case 0x0E:
			//printf("receive 0x0E\n");
			messageReadble = true;			//打开接受数据开关，准备接受E后面的数据
			writeX0(0x0E);
			//printf("send:%d\n", 0x0E);
			break;
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07:
		case 0x08:
		case 0x09:
			//printf("receive a digital number: %d", y220);
			if(messageReadble){
				messageBuffer[messageBufferLength] = y220;
				messageReadble = false;
				messageBufferLength++;
				writeX0(y220);
			}
			break;
	}
}

void processMessage(uchar* message){
	printf("\n receive a message:\n%d %d %d %d\n", message[0], message[1], message[2], message[3]);
}

short connectCNC(string ip,int port){
	MelIoctlData.uniDeviceInfo.Tcp.lPortNo = port;
	memset(MelIoctlData.uniDeviceInfo.Tcp.IPAddr, 0, 16);
	strcpy(MelIoctlData.uniDeviceInfo.Tcp.IPAddr, ip.data());
	MelIoctlData.dwDeviceType = DEVICETYPE_TCP;
	
	melIoctl(NULL, ADR_MACHINE(1), DEV_SET_COMMTIMEOUT, &timeOut);
	melIoctl(NULL, ADR_MACHINE(1), DEV_SET_RTIMEOUT, &timeOut);
	melIoctl(NULL, ADR_MACHINE(1), DEV_SET_EXCLUSIVETIMEOUT, &timeOut);
	melIoctl(NULL, ADR_MACHINE(1), DEV_SET_CONNECTTIMEOUT, &timeOut);
	DWORD dwStatus = melIoctl(NULL, ADR_MACHINE(1), DEV_SET_COMMADDRESS, &MelIoctlData);
	return dwStatus;
}

uchar readY220(){
	//读Y220 221 222 223，应该是1011
	long lSectionNum = M_SEC_PLC_DEV_CHAR;
	long lAddress = ADR_MACHINE(1);
	long lAxisFlag = 0;
	uchar lGetData = 0;

	long lSubSectionNum = M_SSEC_PLCHR_M_1SHOT(2000);
	DWORD dwStatus = melGetData(NULL, lAddress, lSectionNum, lSubSectionNum, lAxisFlag, &lGetData, T_CHAR);

	if(dwStatus == 0)
		return lGetData;
	else
		return 0xFF;
}

DWORD writeX0(uchar value){
	long lAddress = ADR_MACHINE(1);
	long lSectionNum = M_SEC_PLC_DEV_CHAR;
	long lSubSectionNum = M_SSEC_PLCHR_M_1SHOT(1000);
	long lAxisFlag = 0;
	long lSetData = value;

	DWORD dwStatus = melSetData(NULL, lAddress, lSectionNum, lSubSectionNum, lAxisFlag, &lSetData, T_CHAR);

	return dwStatus;
}