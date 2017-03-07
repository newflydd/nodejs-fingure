#ifndef __EVENT__
#define __EVENT__

/* 2byte 8bit 无符号位整型 0-255 */
#ifndef uchar
#define uchar unsigned char
#endif

/* address list */
#define EVENT_GET_FINGURE_ADDRESS_LIST 10

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


/* image into buffer*/
#define ACTION_GET_IMAGE_FOR_CHECK  11
#define ACTION_GET_IMAGE_FOR_INPUT1 12
#define ACTION_GET_IMAGE_FOR_INPUT2 13

/* imageBuffer into code */
#define ACTION_BUILD_CB1_FOR_CHECK 14
#define ACTION_BUILD_CB1_FOR_INPUT 15
#define ACTION_BUILD_CB2_FOR_INPUT 16

/* mearge cb1 and cb2 code */
#define ACTION_MEARGE_CODE 17

/* save the mearge code into address X */
#define ACTION_SAVE_ADDRESS 18

/* address list */
#define ACTION_GET_FINGURE_ADDRESS_LIST	20

#endif