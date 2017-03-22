#ifndef __EVENT__
#define __EVENT__

/* 2byte 8bit 无符号位整型 0-255 */
#ifndef uchar
#define uchar unsigned char
#endif

/*
 **************************************************
 *                  接受事件                       *
 **************************************************
 */

/* image into buffer*/
#define EVENT_GET_IMAGE_FOR_CHECK  1
#define EVENT_GET_IMAGE_FOR_INPUT1 2
#define EVENT_GET_IMAGE_FOR_INPUT2 3

/* imageBuffer into code */
#define EVENT_BUILD_CB1_FOR_CHECK 4
#define EVENT_BUILD_CB1_FOR_INPUT 5
#define EVENT_BUILD_CB2_FOR_INPUT 6

/* mearge cb1 and cb2 code */
#define EVENT_MEARGE_CODE 7

/* save the mearge code into address X */
#define EVENT_SAVE_ADDRESS 8

/* search the cb1 code in db */
#define EVETN_SEARCH 9

/* address list */
#define EVENT_GET_FINGURE_ADDRESS_LIST0 10
#define EVENT_GET_FINGURE_ADDRESS_LIST1 11
#define EVENT_GET_FINGURE_ADDRESS_LIST2 12
#define EVENT_GET_FINGURE_ADDRESS_LIST3 13


/*
 **************************************************
 *                  发送事件                       *
 **************************************************
 */

/* image into buffer*/
#define ACTION_GET_IMAGE_FOR_CHECK  101
#define ACTION_GET_IMAGE_FOR_INPUT1 102
#define ACTION_GET_IMAGE_FOR_INPUT2 103

/* imageBuffer into code */
#define ACTION_BUILD_CB1_FOR_CHECK 104
#define ACTION_BUILD_CB1_FOR_INPUT 105
#define ACTION_BUILD_CB2_FOR_INPUT 106

/* mearge cb1 and cb2 code */
#define ACTION_MEARGE_CODE 107

/* save the mearge code into address X */
#define ACTION_SAVE_ADDRESS 108

/* search the cb1 code in fingure db */
#define ACTION_SEARCH 109

/* address list */
#define ACTION_GET_FINGURE_ADDRESS_LIST0 110
#define ACTION_GET_FINGURE_ADDRESS_LIST1 111
#define ACTION_GET_FINGURE_ADDRESS_LIST2 112
#define ACTION_GET_FINGURE_ADDRESS_LIST3 113

#endif