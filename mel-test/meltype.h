/**********************************************************
  PROGRAM:      データタイプ定義
  NAME:         meltype.h
  DESCRIPTION:  

  Copyright (C) 1994 Mitsubishi Electric Corporation
  All Rights Reserved
**********************************************************/

#ifndef	INCmeltypeh
#define	INCmeltypeh

#ifdef	_WIN32																	/* MA0-A007 */
#include	<windows.h>															/* MA0-A007 */
#else																			/* MA0-A007 */
#include	<winhead.h>															/* MA0-A007 */
#endif																			/* MA0-A007 */
#include	"g_check.h"

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/********************************************************/
/* ----- タイプなし -----------------------------------	*/
/********************************************************/
#define	T_NOTYPE		0x0						/* データ変換で"変換なし"時に使用	*/


/********************************************************/
/* ----- 数値型データタイプ定義	-----------------------	*/
/********************************************************/
#define	T_CHAR			0x1						/* 1バイト整数型 */
#define	T_CHAR_SIZE		(sizeof(char))

#define	T_SHORT			0x2						/* 2バイト整数型 */
#define	T_SHORT_SIZE	(sizeof(short))

#define	T_LONG			0x3						/* 4バイト整数型 */
#define	T_LONG_SIZE		(sizeof(long))

#define	T_DLONG			0x4						/* 8バイト整数型 */
#define	T_DLONG_SIZE	(8)

#define	T_DOUBLE		0x5						/* 実数型 */
#define	T_DOUBLE_SIZE	(sizeof(double))

#define	T_FLOATBIN		0x6						/* ８バイト実数型 */
typedef struct {
	short	nIntDataNos;		/* 整数部桁数 */ 
	short	nDecDataNos;		/* 小数部桁数 */
	long	lOption;			/* オプション 0:指数表示なし 1:指数表示 */
	double	dData;				/* データ領域 */
} FLOATBIN;
#define	T_FLOATBIN_SIZE	(sizeof(FLOATBIN))
typedef	FLOATBIN FAR	*LPFLOATBIN;


/********************************************************/
/* ----- 文字型データタイプ定義	-----------------------	*/
/********************************************************/
#define	T_STR			0x10					/* 文字列型	*/
#define	T_DECSTR		0x11					/* 10進整数文字列型 */
#define	T_HEXSTR		0x12					/* 16進数文字列型	*/
#define	T_BINSTR		0x13					/* 2進数文字列型 */
#define	T_FLOATSTR		0x14					/* 実数文字列型 */
#define	T_WSTR			0x15					/* 文字列型(UNICODE)	*/		/* MA0-A007 */
#define	T_DECWSTR		0x16					/* 10進整数文字列型(UNICODE) */	/* MA0-A007 */
#define	T_HEXWSTR		0x17					/* 16進数文字列型(UNICODE)	*/	/* MA0-A007 */
#define	T_BINWSTR		0x18					/* 2進数文字列型(UNICODE) */	/* MA0-A007 */
#define	T_FLOATWSTR		0x19					/* 実数文字列型(UNICODE) */		/* MA0-A007 */
#define T_CHARBUFF		0x1a					/* 単純文字列型 */

typedef struct {
	long	lBuffSize;			/* データ領域のサイズ   */
	LPSTR	lpszBuff;			/* データ領域のポインタ */
} STRINGTYPE;
typedef	STRINGTYPE FAR	*LPSTRINGTYPE;

typedef struct {																/* MA0-A007 */
	long	lBuffSize;			/* データ領域のサイズ   */						/* MA0-A007 */
	LPWSTR	lpszBuff;			/* データ領域のポインタ */						/* MA0-A007 */
} WSTRINGTYPE;																	/* MA0-A007 */
typedef	WSTRINGTYPE FAR	*LPWSTRINGTYPE;											/* MA0-A007 */

typedef struct {
	short	nIntDataNos;		/* 整数部桁数 */ 
	short	nDecDataNos;		/* 小数部桁数 */
	long	lOption;			/* オプション */
	long	lBuffSize;			/* データ領域のサイズ   */
	LPSTR	lpszBuff;			/* データ領域のポインタ */
} FLOATSTR;
typedef	FLOATSTR FAR	*LPFLOATSTR;

typedef struct {																/* MA0-A007 */
	short	nIntDataNos;		/* 整数部桁数 */ 								/* MA0-A007 */
	short	nDecDataNos;		/* 小数部桁数 */								/* MA0-A007 */
	long	lOption;			/* オプション */								/* MA0-A007 */
	long	lBuffSize;			/* データ領域のサイズ   */						/* MA0-A007 */
	LPWSTR	lpszBuff;			/* データ領域のポインタ */						/* MA0-A007 */
} FLOATWSTR;																	/* MA0-A007 */
typedef	FLOATWSTR FAR	*LPFLOATWSTR;																/* MA0-A007 */

/* オプション定義 */
#define FSTR_FILL_ZERO	0x1		/* 小数部ゼロ詰めを行なう */
#define FSTR_ADD_PLUS	0x2		/* 正の数の場合＋符合を付ける */


/********************************************************/
/* ----- Unsigned 数値型データタイプ定義	-----------	*/
/********************************************************/
#define	T_UCHAR			0x21					/* 1バイトunsigned 整数型	*//* P1X-A006M */
#define	T_USHORT		0x22					/* 2バイトunsigned 整数型	*//* P1X-A006M */
#define	T_ULONG			0x23					/* 4バイトunsigned 整数型	*//* P1X-A006M */


/********************************************************/
/* ----- 特殊型データタイプ定義	-----------------------	*/
/********************************************************/

#define	T_CLCTDATA		0x100					/* 一括データ読み出し用 */
typedef struct {
	long	lId;					/* 読み取ったID */
	char	szReadData[32];			/* 読み取ったデータ	*/
} CLCTDATA;

#define	T_CLCTDATA_SIZE	(sizeof(CLCTDATA))

typedef	CLCTDATA FAR	*LPCLCTDATA;


#define	T_GETPRGPOINT	0x101					/* プログラム実行位置取得用	*/

typedef struct {
	char	szPrgName[10];			/* プログラム名 */
	long	lPoint;					/* 実行中のポインタ	*/
} PRGPOINT;
typedef	PRGPOINT FAR	*LPPRGPOINT;

typedef struct{
	long	lPrgpointNos;			/* 確保したPRGPINT数	*/
	LPPRGPOINT lpPrgpoint;			/* PRGPINTのポインタ */
}GETPRGPOINT;
    
typedef	GETPRGPOINT FAR	*LPGETPRGPOINT;


#define	T_GETPRGBLOCK	0x102		/* 実行中プログラム取得用 */

typedef struct {
	long	lCurrentBlockNum;		/* 実行中のブロック				 */
	                                /* (取得したデータ中のブロック)  */
	                                /*    0:運転中でない			   */
	                                /*    1:1ブロック目				*/
	                                /*    2:2ブロック目				*/
	long	lPrgDataSize;			/* lpszPrgDataのバッファサイズ	 */
	LPSTR	lpszPrgData;			/* プログラムを格納するバッファ  */
} GETPRGBLOCK;
typedef	GETPRGBLOCK FAR	*LPGETPRGBLOCK;

#define T_BUFF          0x103                   /* 汎用バッファ型  */

typedef struct{
    long    lBuffSize;                          /* lpBuffのバッファサイズ   */
    LPVOID  lpBuff;                             /* バッファのポインタ  */
}BUFFTYPE;

typedef BUFFTYPE    FAR *LPBUFFTYPE;


typedef struct {
	long	lAddress;
	long	lSectionNum;
	long	lSubSectionNum;
	long	lAxisFlag;
	long	lDataType;					/* データタイプ						 *//* P0Y-A013A */
	long	lPriority;
} REGLUMPMODAL;																	/* MA0-A006 */
typedef	REGLUMPMODAL FAR	*LPREGLUMPMODAL;									/* MA0-A006 */

typedef struct {																/* MA0-A006 */
	long	lAddress;															/* MA0-A006 */
	long	lSectionNum;														/* MA0-A006 */
	long	lSubSectionNum;														/* MA0-A006 */
	long	lPriority;															/* MA0-A006 */
} EXREGISTMODAL;																/* MA0-A006 */
typedef	EXREGISTMODAL FAR	*LPEXREGISTMODAL;									/* MA0-A006 */


/*--------------*/
/* T_LUMPタイプ */
/*--------------*/
#define	T_LUMP		0x104				/* 複数データ取得・設定用 */
typedef struct {
	long	lDataType;					/* データタイプ			*/
	long	lDataNos;					/* データ個数			*/
	LPVOID	lpBuff;						/* データバッファのポインタ	*/
} LUMPTYPE;
typedef	LUMPTYPE FAR	*LPLUMPTYPE;


/*-----------------------------*/
/*実行中プログラム取得タイプ２ */
/*-----------------------------*/
#define	T_GETPRGBLOCK2	0x105			/* 実行中プログラム取得用 		*/

typedef struct {
	long	lStartCurrentBlock;			/* 実行中のブロックの先頭		*/
	                            	    /* (取得したデータ中のブロック) */
	                            	    /*    0:運転中でない		 	*/
	                            	    /*    1:1ブロック目				*/
	                            	    /*    2:2ブロック目				*/
	long	lEndCurrentBlock;			/* 実行中のブロックの終り		*/
	                            	    /* (取得したデータ中のブロック) */
	                            	    /*    0:運転中でない		 	*/
	                            	    /*    1:1ブロック目				*/
	                            	    /*    2:2ブロック目				*/
	long	lPrgDataSize;				/* lpszPrgDataのバッファサイズ	*/
	LPSTR	lpszPrgData;				/* プログラムを格納するバッファ */
} GETPRGBLOCK2;
typedef	GETPRGBLOCK2 FAR	*LPGETPRGBLOCK2;

/********************************************************/
/* ----- NCファイルシステムデータタイプ定義	-----------	*/
/********************************************************/
#define	T_STAT		0x106				/* NCファイルシステム情報取得用	*/
#define	T_DIR		0x107				/* NCファイルシステム			*/
										/*		ディレクトリ情報取得用	*/

/********************************************************/
/* ----- アラームメッセージ取得用定義	-------------	*/
/********************************************************/
typedef struct {
	long	lSystem;					/* 取得アラームの系統			*/
	long	lAlarmType;					/* 取得アラームの詳細種別		*/
	long	lBuffSize;					/* lpszBuffのバッファサイズ		*/
	LPSTR	lpszBuff;					/* メッセージを格納する			*/
										/* バッファへのポインタ			*/
} ALARMMSG;
typedef	ALARMMSG FAR	*LPALARMMSG;

#define	T_ALARMMSG		0x108			/* アラームメッセージ			*/
#define	T_ALARMMSG2		0x10e			/* アラームメッセージ2			*//* MA0-A045 */

/********************************************************/
/* ----- チェック描画データ取得用定義	-------------	*/
/********************************************************/
#define T_CHECKDRAW		0x109											  /* P0Y-A038 */
typedef	CheckDraw FAR	*LPCHECKDRAW;


/********************************************************/
/* ----- UNICODE用プログラム取得用定義	-------------	*/
/********************************************************/
#define	T_WGETPRGBLOCK	0x10a		/* 実行中プログラム取得用(UNICODE) */		/* MA0-A007 */

typedef struct {																/* MA0-A007 */
	long	lCurrentBlockNum;		/* 実行中のブロック				 */			/* MA0-A007 */
	                                /* (取得したデータ中のブロック)  */			/* MA0-A007 */
	                                /*    0:運転中でない			   */		/* MA0-A007 */
	                                /*    1:1ブロック目				*/			/* MA0-A007 */
	                                /*    2:2ブロック目				*/			/* MA0-A007 */
	long	lPrgDataSize;			/* lpszPrgDataのバッファサイズ	 */			/* MA0-A007 */
	LPWSTR	lpszPrgData;			/* プログラムを格納するバッファ  */			/* MA0-A007 */
} WGETPRGBLOCK;																	/* MA0-A007 */
typedef	WGETPRGBLOCK FAR	*LPWGETPRGBLOCK;									/* MA0-A007 */

/********************************************************/
/* ----- UNICODE用プログラム取得用定義2	-------------	*/
/********************************************************/
#define	T_WGETPRGBLOCK2	0x10b			/* 実行中プログラム取得用(UNICODE) */	/* MA0-A007 */

typedef struct {																/* MA0-A007 */
	long	lStartCurrentBlock;			/* 実行中のブロックの先頭		*/		/* MA0-A007 */
	                            	    /* (取得したデータ中のブロック) */		/* MA0-A007 */
	                            	    /*    0:運転中でない		 	*/		/* MA0-A007 */
	                            	    /*    1:1ブロック目				*/		/* MA0-A007 */
	                            	    /*    2:2ブロック目				*/		/* MA0-A007 */
	long	lEndCurrentBlock;			/* 実行中のブロックの終り		*/		/* MA0-A007 */
	                            	    /* (取得したデータ中のブロック) */		/* MA0-A007 */
	                            	    /*    0:運転中でない		 	*/		/* MA0-A007 */
	                            	    /*    1:1ブロック目				*/		/* MA0-A007 */
	                            	    /*    2:2ブロック目				*/		/* MA0-A007 */
	long	lPrgDataSize;				/* lpszPrgDataのバッファサイズ	*/		/* MA0-A007 */
	LPWSTR	lpszPrgData;				/* プログラムを格納するバッファ */		/* MA0-A007 */
} WGETPRGBLOCK2;																/* MA0-A007 */
typedef	WGETPRGBLOCK2 FAR	*LPWGETPRGBLOCK2;									/* MA0-A007 */

/****************************************************************/
/* ----- UNICODE用アラームメッセージ取得用定義	-------------	*/
/****************************************************************/
#define	T_WALARMMSG		0x10c			/* アラームメッセージ(UNICODE)	*/		/* MA0-A007 */
#define	T_WALARMMSG2	0x10f			/* アラームメッセージ2(UNICODE)	*/		/* MA0-A045 */

typedef struct {																/* MA0-A007 */
	long	lSystem;					/* 取得アラームの系統			*/		/* MA0-A007 */
	long	lAlarmType;					/* 取得アラームの詳細種別		*/		/* MA0-A007 */
	long	lBuffSize;					/* lpszBuffのバッファサイズ		*/		/* MA0-A007 */
	LPWSTR	lpszBuff;					/* メッセージを格納する			*/		/* MA0-A007 */
										/* バッファへのポインタ			*/		/* MA0-A007 */
} WALARMMSG;																	/* MA0-A007 */
typedef	WALARMMSG FAR	*LPWALARMMSG;											/* MA0-A007 */

/****************************************************************************/
/*	ＮＣシリアルポート環境設定用構造体										*/
/****************************************************************************/
#define	T_SERIAL_SETUP	0x10d		/* ＮＣシリアルポート環境設定			*/	/* MA0-A041 */

typedef struct {																/* MA0-A041 */
	long	lBaudRate;				/* ボーレート設定						*/	/* MA0-A041 */
									/*	110, 300, 600, 1200, 2400, 4800,	*/	/* MA0-A041 */
									/*	9600, 19200							*/	/* MA0-A041 */
	char	cByteSize;				/* データビット長設定	7, 8			*/	/* MA0-A041 */
	char	cParityBit;				/* パリティビット設定					*/	/* MA0-A041 */
									/*	0:無効（チェック無し）				*/	/* MA0-A041 */
									/*	1:有効（チェック有り）				*/	/* MA0-A041 */
	char	cEvenOdd;				/* 奇数/偶数パリティ設定				*/	/* MA0-A041 */
									/*	1:奇数チェック, 2:偶数チェック		*/	/* MA0-A041 */
	char	cStopBit;				/* ストップビット設定					*/	/* MA0-A041 */
									/*	0:1bit, 1:1.5bit, 2:2bit			*/	/* MA0-A041 */
	char	cHandShake;				/* ハンドシェィク設定					*/	/* MA0-A041 */
									/*	0:RTS/CTS方式						*/	/* MA0-A041 */
									/*	1:ハンドシェイク無し				*/	/* MA0-A041 */
									/*	2:DCコード方式						*/	/* MA0-A041 */
	char	cDCcodeParity;			/* DCコードパリティ設定					*/	/* MA0-A041 */
									/*	0:Xon-offパリティ オフ				*/	/* MA0-A041 */
									/*	1:Xon-offパリティ オン				*/	/* MA0-A041 */
	char	cDRoff;					/* DRチェック無効 0:チェック有効 1:無効	*/	/* MA0-A041 */
	char	cOutBufSize;			/* 出力バッファサイズ					*/	/* MA0-A041A */
									/*	0:250バイト							*/	/* MA0-A041A */
									/*	1:1バイト							*/	/* MA0-A041A */
									/*	2:4バイト							*/	/* MA0-A041A */
									/*	3:8バイト							*/	/* MA0-A041A */
									/*	4:16バイト							*/	/* MA0-A041A */
									/*	5:64バイト							*/	/* MA0-A041A */
									/*  その他:250バイト					*/	/* MA0-A041A */
	long	lTimeout;				/* タイムアウト時間	(x100ms)			*/	/* MA0-A041 */
	char	cTermType;				/* ターミネータタイプ設定	1:EOB, 3:EOR*/	/* MA0-A041 */
	char	cDC2DC4;				/* DC2/DC4出力設定						*/	/* MA0-A041 */
									/*	bit0: DC2コード出力					*/	/* MA0-A041 */
									/*	bit1: DC4コード出力					*/	/* MA0-A041 */
	char	cCRout;					/* CR出力設定	0:未出力, 1:出力		*/	/* MA0-A041 */
	char	cEIAout;				/* EIA出力設定	0:ISO出力, 1:EIA出力	*/	/* MA0-A041 */
	short	nFeedChar;				/* フィード数設定	0-250				*/	/* MA0-A041 */
	char	cParityV;				/* パリティVチェック設定				*/	/* MA0-A041 */
									/*	0:チェック無し, 1:チェック有り		*/	/* MA0-A041 */
	char	cAscii;					/* データASCII設定						*/	/* MA0-A041 */
									/*	0:ISO or EIA, 1:ASCII				*/	/* MA0-A041 */
	char	cEIAcode1;				/*'[' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode2;				/*']' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode3;				/*'#' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode4;				/*'*' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode5;				/*'=' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode6;				/*':' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode7;				/*'$' -> EIA代替コード設定				*/	/* MA0-A041 */
	char	cEIAcode8;				/*'!' -> EIA代替コード設定				*/	/* MA0-A041 */
} SERIAL_SETUP;																	/* MA0-A041 */
typedef	SERIAL_SETUP FAR	*LPSERIAL_SETUP;									/* MA0-A041 */


#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCmeltypeh*/
