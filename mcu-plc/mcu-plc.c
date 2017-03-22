#include "mcu-plc.h"

uchar ucharTemp,ut1;				//重复利用的uchar类型临时变量
uint  uintTemp;						//重复利用的uint类型临时变量

uchar messageBufferLength;
uchar messageBuffer[4];

void main(){
	delay(65535);
    delay(65535);

    digital_string[0] = 16;
	digital_string[1] = 16;
	digital_string[2] = 16;
	digital_string[3] = 16;
	digital_string[4] = 16;
	digital_string[5] = 16;



    while(1){
    	//读GPIO_PLCIO高4位
    	ucharTemp = readPLCIOH4();

    	processInput(ucharTemp);

    	display();
    }
}

void processInput(uchar ucharTemp){
	switch(ucharTemp){
		case 0x0B:
			writePLCIOL4(0x0B);					//反馈一个信号
			if(messageBufferLength != 0){
				processMessage();	//处理消息寄存器
				messageBufferLength = 0;		//清空消息寄存器
			}
			break;
		case 0x0E:
			messageReadble = 1;			//打开接受数据开关，准备接受E后面的数据
			writePLCIOL4(0x0E);
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
			if(messageReadble){
				messageReadble = 0;
				messageBuffer[messageBufferLength] = ucharTemp;
				messageBufferLength++;
				writePLCIOL4(ucharTemp);
			}
			break;
	}
}

uchar sendMessage(){
	uint times = 1000;

	//============E==================
	writePLCIOL4(0x0E);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != 0x0E){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 1;
		delay(50);
	}

	//===========0===================
	writePLCIOL4(messageBuffer[3]);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != messageBuffer[3]){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 2;
		delay(50);
	}

	//============E==================
	writePLCIOL4(0x0E);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != 0x0E){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 3;
		delay(50);
	}

	//===========1==================
	writePLCIOL4(messageBuffer[2]);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != messageBuffer[2]){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 4;
		delay(50);
	}

	//============E==================
	writePLCIOL4(0x0E);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != 0x0E){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 5;
		delay(50);
	}

	//===========2==================
	writePLCIOL4(messageBuffer[1]);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != messageBuffer[1]){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 6;
		delay(50);
	}

	//============E==================
	writePLCIOL4(0x0E);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != 0x0E){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 7;
		delay(50);
	}

	//===========3==================
	writePLCIOL4(messageBuffer[0]);

	ucharTemp = readPLCIOH4();
	
	while(ucharTemp != messageBuffer[0]){
		ucharTemp = readPLCIOH4();
		times--;
		if(times == 0)
			return 8;
		delay(50);
	}

	//============B==================
	writePLCIOL4(0x0B);

	return 0;
}

void processMessage(){
	digital_string[2] = messageBuffer[0];
	digital_string[3] = messageBuffer[1];
	digital_string[4] = messageBuffer[2];
	digital_string[5] = messageBuffer[3];

	delay(65535);
	delay(65535);
	delay(65535);
	delay(65535);

	sendMessage();
}

uchar readPLCIOH4(){
	return GPIO_PLCIO>>4;
}

void  writePLCIOL4(uchar dat){
	ucharTemp = GPIO_PLCIO & 0xF0;
	GPIO_PLCIO = ucharTemp | dat;
}

void delay(uint num){
    while(num--);
}

/**
 * 测试完了删了
 * [display 在面板上显示digital_string]
 */
void display() {
    uchar data i, j;
    for(i = 0; i < 6; i++) {
        j = digital_string[i];
        P1 = display_code[j];
        P0 = P0 | display_cs[i];
        delay(200);
        P0 = P0 & 0xc0;
    }
}