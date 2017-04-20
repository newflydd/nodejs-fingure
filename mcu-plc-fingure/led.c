#include "led.h"

/**
 * 本文件用来主控LED小灯
 */

/* 交互反馈警告 */
void showWarning(){
	LED_WARNING = 0;
	LED_CHECK   = 1;
	LED_INPUT1  = 1;
	LED_INPUT2  = 1;
}

/* 交互反馈成功 */
void showSuccess(){
	for(ucharTemp = 0; ucharTemp < 20; ucharTemp++){
		if(ucharTemp % 2 == 1){
			LED_WARNING = 0;
			LED_CHECK   = 0;
			LED_INPUT1  = 0;
			LED_INPUT2  = 0;		
		}else{
			LED_WARNING = 1;
			LED_CHECK   = 1;
			LED_INPUT1  = 1;
			LED_INPUT2  = 1;
		}
		delay(30000);
	}
}

void showCheck(){
	LED_WARNING = 1;
	LED_CHECK   = 0;
	LED_INPUT1  = 1;
	LED_INPUT2  = 1;
}

void showInput1(){
	LED_WARNING = 1;
	LED_CHECK   = 1;
	LED_INPUT1  = 0;
	LED_INPUT2  = 1;
}

void showInput2(){
	LED_WARNING = 1;
	LED_CHECK   = 1;
	LED_INPUT1  = 1;
	LED_INPUT2  = 0;
}