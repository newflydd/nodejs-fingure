/**********************************************************
  PROGRAM:      コマンド定義
  NAME:         melncapi.h
  DESCRIPTION:  

  Copyright (C) 1994 Mitsubishi Electric Corporation
  All Rights Reserved
**********************************************************/

#ifndef	INCmelncapih
#define	INCmelncapih

#ifdef	_WIN32																	//MA0-A040
#include	<windows.h>															//MA0-A040
#else																			//MA0-A040
#include 	"vxWorks.h"															//MA0-A050
#include	"winhead.h"															//MA0-A040
#endif																			//MA0-A040

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/* ----- NC APIで使用するマクロ　-------------------	*/
/* -- アドレス関連 --			*/
#define ADDR_TYPE	(long)
/* コントローラ共通 */
#define ADR_AXIS(n)			((ADDR_TYPE(n) << 0) & 0x000000ff)		/* 軸の指定						  */
#define ADR_SYSTEM(n)		((ADDR_TYPE(n) << 8) & 0x0000ff00)		/* 系統（グループ番号）の指定	  */
#define ADR_MACHINE(n)		((ADDR_TYPE(n) << 24) & 0xff000000)		/* コントローラの指定			  */
#define	ADR_BASIS(n)		((ADDR_TYPE(n) << 16) & 0x00010000)		/* 基本系統の指定				  *//* MA0-A029 */
#define	ADR_GRFCHECK(n)		((ADDR_TYPE(n) << 17) & 0x00020000)		/* グラフィックチェックの指定	  *//* MA0-A029 */
#define	ADR_FORCE_WRITE		((ADDR_TYPE(1) << 18) & 0x00040000)		/* 強制書き込みモードの指定	  	  *//* MA0-A051 *//* MA0-A051A */

#define ADR_GET_AXIS(n)		((ADDR_TYPE(n) >> 0) & 0x000000ff)		/* 軸指定の取得					  */
#define ADR_GET_SYSTEM(n)	((ADDR_TYPE(n) >> 8) & 0x000000ff)		/* 系統（グループ番号）指定の取得 */
#define ADR_GET_MACHINE(n)	((ADDR_TYPE(n) >> 24) & 0x000000ff)		/* コントローラ指定の取得		  */
#define ADR_GET_BASIS(n)	((ADDR_TYPE(n) >> 16) & 0x00000001)		/* 基本系統の取得				  *//* MA0-A008C *//* MA0-A025 *//* MA0-A029 */
#define	ADR_GET_GRFCHECK(n)	((ADDR_TYPE(n) >> 17) & 0x00000001)		/* グラフィックチェックの指定取得 *//* MA0-A029 */
#define	ADR_GET_FORCE_WRITE	((ADDR_TYPE(1) >> 18) & 0x00000001)		/* 強制書き込みモードの指定	  	  *//* MA0-A051 *//* MA0-A051A */

/* NC-Xj,NC-Xk専用 */
#define ADR_BASE_SYSTEM		((ADDR_TYPE(0) << 16) & 0x00ff0000)		/* 基本系統の指定 */
#define ADR_CROSS_CURRENT	((ADDR_TYPE(1) << 16) & 0x00ff0000)		/* クロスカレント系統の指定	*/
#define ADR_GET_CROSS_CURRENT	((ADDR_TYPE(1) >> 16) & 0x000000ff)	/* クロスカレント系統指定の取得 */

/* マシンコントローラモデルW専用 */
#define ADR_OPE_DRIVE(n)	((ADDR_TYPE(n) << 16) & 0x00ff0000)		/* 運転番号の指定 */
#define ADR_GET_OPE_DRIVE(n)	((ADDR_TYPE(n) >> 16) & 0x000000ff)	/* 運転番号指定の取得 */

/* グランド指定 */
#define ADR_GROUND(n)		((ADDR_TYPE(n) << 20) & 0x00f00000)		/* グランド(FORE/BACK)の指定	 *//* MA0-A008C *//* MA0-A025 */
#define ADR_GET_GROUND(n)	((ADDR_TYPE(n) >> 20) & 0x0000000f)		/* グランド(FORE/BACK)指定の取得 *//* MA0-A008C *//* MA0-A025 */

/* ----- 各コマンドで使用するマクロ　-------------------	*/
/* -- System関連 --			*/
/* melIoctl */
#define	DEV_SET_RTIMEOUT		0x001		/* リードタイムアウトの設定					*/
#define	DEV_SET_WTIMEOUT		0x002		/* ライトタイムアウトの設定					*/
#define	DEV_CANCEL_RWAIT		0x003		/* リード待ち状態解除						*/
#define	DEV_CANCEL_WWAIT		0x004		/* ライト待ち状態解除						*/
#define	DEV_CHECK_EXIST			0x005		/* 実装状態の確認							*/
#define	DEV_SET_COMMTIMEOUT		0x005		/* 通信タイムアウト値設定					*/	/* MA0-A008 */
#define	DEV_GET_COMMTIMEOUT		0x006		/* 通信タイムアウト値取得					*/	/* MA0-A008 */
#define	DEV_SWITCH_KEYDATA		0x007		/* キー操作履歴の送信先切り替え				*/	/* MA0-A009 */
#define	DEV_GET_COMMADDRESS		0xFEF		/* melcfg.iniのIPアドレス取得アドレス取得	*/	/* MA0-A040 */
#define	DEV_SET_COMMADDRESS		0xFFF		/* アドレス設定								*/	/* MA0-A008 */
#define DEV_SET_EXCLUSIVETIMEOUT	0x00F	/* 排他制御タイムアウト時間設定				*/	/* MA0-A057 */
#define DEV_GET_EXCLUSIVETIMEOUT	0x010	/* 排他制御タイムアウト時間取得				*/	/* MA0-A057 */
#define	DEV_SET_CONTROLLER		0x101		/* NCシステム種別の設定						*/	/* MA0-A057 */
#define DEV_SET_REMOTEMODE		0x103		/* 遠隔操作モードの設定						*/	/* MA0-A057 */
#define DEV_GET_REMOTEMODE		0x104		/* 遠隔操作モードの取得						*/	/* MA0-A057 */
#define	DEV_SET_CONNECTTIMEOUT	0x105		/* 接続タイムアウト値の設定					*/	/* MA0-A057 */
#define	DEV_GET_CONNECTTIMEOUT	0x106		/* 接続タイムアウト値の取得					*/	/* MA0-A057 */
#define	DEV_SET_CACHEMAX		0x107		/* データリードキャッシュデータ最大個数設定	*/	/* MA0-A057 */
#define	DEV_GET_CACHEMAX		0x108		/* データリードキャッシュデータ最大個数取得	*/	/* MA0-A057 */
#define	DEV_SET_PD_ENABLE		0x10B		/* PCダイレクト運転機能使用有無の設定		*/	/* MA0-A057 */
#define	DEV_SET_LOGTYPE			0x111		/* 異常通知方法の設定						*/	/* MA0-A057 */
#define	DEV_GET_LOGTYPE			0x112		/* 異常通知方法の取得						*/	/* MA0-A057 */
#define	DEV_SET_LOGDIR			0x113		/* 異常通知ログファイル出力先の設定			*/	/* MA0-A057 */
#define	DEV_GET_LOGDIR			0x114		/* 異常通知ログファイル出力先の取得			*/	/* MA0-A057 */
#define	SIO_SET_BAUDRATE		0x201		/* ボーレイト設定							*/
#define	SIO_SET_CHARSIZE		0x202		/* キャラクタ長設定							*/
#define	SIO_SET_PARITY			0x203		/* パリティビット設定						*/
#define	SIO_SET_STOPBITS		0x204		/* ストップビット設定						*/
#define	SIO_ENABLE_XONXOFF		0x205		/* 入出力時のXON/XOFFの有効/無効切替		*/
#define	SIO_SEND_CHARACTER		0x206		/* 1キャラクタデータ送信					*/
#define SIO_GET_PARA			0x207		/* コントロール側シリアルポート設定値取得	*/
#define CMD_ENABLE_BACKGROUND	0x1001		/* バックグラウンドチェック機能				*/	/* MA0-A026 */

/* DEV_SET_COMMADDRESS、DEV_GET_COMMADDRESS用 */
typedef	union																			  /* MA0-A008C */
{																						  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Isa;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Pci;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Com;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		char	IPAddr[16];																  /* MA0-A008C *//* MA0-A040 */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[12];																  /* MA0-A008C *//* MA0-A040 */
	} Tcp;																				  /* MA0-A008C */
	struct																				  /* MA0-A008C */
	{																					  /* MA0-A008C */
		long	lPortNo;																  /* MA0-A008C *//* MA0-A040 */
		char	dummy[28];																  /* MA0-A008C *//* MA0-A040 */
	} Mac;																				  /* MA0-A008C */
	struct																				  /* MA0-A039 */
	{																					  /* MA0-A039 */
		DWORD	dwChannel;																  /* MA0-A039 */
		DWORD	dwNetworkNo;															  /* MA0-A039 */
		DWORD	dwPcNo;																	  /* MA0-A039 */
		DWORD	dwMultiCpuNo;															  /* MA0-A039 */
		char	dummy[16];																  /* MA0-A039 *//* MA0-A040 */
	} Got;																				  /* MA0-A039 */
}																						  /* MA0-A008C */
APIDEVICE, *LPAPIDEVICE;																  /* MA0-A008C */

typedef struct {																		  /* MA0-A008C */
	DWORD			dwDeviceType;			/* デバイス種別								*//* MA0-A008C */
	APIDEVICE		uniDeviceInfo;			/* デバイス情報								*//* MA0-A008C */
} MELDEVICEDATA;																		  /* MA0-A008C */
typedef	MELDEVICEDATA FAR	*LPMELDEVICEDATA;											  /* MA0-A008C */

#define		DEVICETYPE_PC	0				/* PC										*//* MA0-A008C */
#define		DEVICETYPE_ISA	1				/* ISAバス経由								*//* MA0-A008C */
#define		DEVICETYPE_PCI	2				/* PCIバス経由								*//* MA0-A008C */
#define		DEVICETYPE_COM	3				/* COMポート経由							*//* MA0-A008C */
#define		DEVICETYPE_TCP	4				/* TCPソケット経由							*//* MA0-A008C */
#define		DEVICETYPE_MAC	5				/* MACケーブル経由							*//* MA0-A008C */

#define		DEVICETYPE_GOT	10				/* GOT経由									*//* MA0-A039 */

/* DEV_SET_CACHEMAX, DEV_GET_CACHEMAX用	*/
typedef struct {																		  /* MA0-A057 */
	DWORD	dwCacheCount;					/* リードキャッシュ最大登録数				*//* MA0-A057 */
	DWORD	dwCacheCancelUnit;				/* リードキャッシュ解除個数					*//* MA0-A057 */
} MELCACHEMAXDATA;																		  /* MA0-A057 */
typedef	MELCACHEMAXDATA FAR	*LPMELCACHEMAXDATA;											  /* MA0-A057 */

/* -- ファイルアクセス関連 --		*/

/* -- データアクセス --			*/

/* -- 運転操作 --			*/
/* melReset */																		  
#define	M_OPE_NC_RESET			0x01		/* NCリセット&リワインド			*/
#define	M_OPE_NC_RESET1			0x02		/* NCリセット1						*/
#define	M_OPE_NC_RESET2			0x03		/* NCリセット2						*/

#define	M_OPE_MC_PROG_RESET		0x10		/* モーションプログラム運転リセット	*/
#define	M_OPE_MC_MANUAL_RESET	0x11		/* 手動運転リセット					*/

/* melSetBlockStopMode */
#define	M_OPE_BLKSTOP_OFF		0x00		/* シングルブロック停止しない		*/
#define	M_OPE_BLKSTOP_ON		0x01		/* シングルブロック停止する			*/

/* melSetOperationMode */
#define	M_OPE_OPEMODE_MEM		0x01		/* メモリ運転モード					*/
#define	M_OPE_OPEMODE_MDI		0x02		/* MDI運転モード					*/
#define	M_OPE_OPEMODE_JOG		0x03		/* JOGモード						*/
#define	M_OPE_OPEMODE_REF		0x04		/* 原点復帰モード					*/
#define	M_OPE_OPEMODE_HNDL		0x05		/* ハンドルモード					*/
#define	M_OPE_OPEMODE_STEP		0x06		/* ステップ送りモード				*/

/* melSetOverrideValue */

/* melSetManualFeedSpeed */

/* melSetHandleMagnification */

/* melStartAxisOperation */
#define	M_OPE_STARTAXOPE_STOP		0x00		/* 軸停止	*/
#define	M_OPE_STARTAXOPE_PLUS		0x01		/* +起動	*/
#define	M_OPE_STARTAXOPE_MINUS		0x02		/* -起動	*/

/* melTransferPLC */
#define	M_OPE_TRANSPLC_ROMWRITE		0x01		/* RAMに保存されているPLCをROMに書き込む	 */
#define	M_OPE_TRANSPLC_ROMREAD		0x02		/* ROMに書き込まれているPLCをRAMへ読み出す	*/

/* melActiveatePLC */										
#define	M_OPE_ACTPLC_TRUE		0x01		/* PLC起動	  */
#define	M_OPE_ACTPLC_FALSE		0x00		/* PLC停止	  */

/* melSampling */
#define	M_OPE_SAMPLING_START	0x01		/* サンプリング開始	 */
#define	M_OPE_SAMPLING_STOP		0x00		/* サンプリング中止	 */

/* melGetCurrentPrgPointer */

/* melGetCurrentPrgBlock */

/* melGetCurrentAlarmMsg, melGetAlarmMsg */
#define	M_ALM_ALL_ALARM			0x000		/* アラーム種類の区別なし */

#define	M_ALM_NC_ALARM			0x100		/* NCアラーム				*/
#define	M_ALM_STOP_CODE			0x200		/* ストップコード			*/
#define	M_ALM_PLC_ALARM			0x300		/* PLCアラームメッセージ	*/
#define	M_ALM_OPE_MSG			0x400		/* オペレータメッセージ		*/
#define	M_ALM_ALL_NON_STOPCD	0x1000		/* NCアラーム/PLCアラーム/	*//* MA0-A031 */
											/* オペレータメッセージ		*//* MA0-A031 */
#define	M_ALM_WARNING			0x80000000	/* ワーニング（ビット）		*/

#define	M_ALM_NC_SYSTEM			0x101		/*　システムアラーム		*/
#define	M_ALM_NC_SERVO			0x102		/*　サーボアラーム			*/
#define	M_ALM_NC_MCP			0x103		/*　MCPアラーム				*/
#define	M_ALM_NC_BASICPLC		0x104		/*　ベーシックPLCアラーム	*/
#define	M_ALM_NC_USERPLC		0x105		/*　ユーザPLCアラーム		*/
#define	M_ALM_NC_PROGRAM		0x106		/*　プログラムエラー		*/
#define	M_ALM_NC_SERVO_WARNING		0x107		/*　サーボワーニング	*/
#define	M_ALM_NC_MCP_WARNING		0x108		/*　MCPワーニング		*/
#define	M_ALM_NC_SYSTEM_WARNING		0x109		/*　システムワーニング	*/
#define	M_ALM_NC_OPERATION		0x10A		/*　オペレーションエラー	*/
#define	M_ALM_OPE_ALARM			0x10B		/*　オペコンエラー			*/
#define	M_ALM_NC_AUX			0x10C		/*  補助軸NCアラーム		*//* MA0-A045 */

/* melStartOperation */

/* melSelectExecPrg */
#define CHECK_OPTION_PCDIRECT	"CheckOptionPC-Direct"

/* melSelectRestartPrg */
/* サーチタイプ lSelectType */
#define M_OPE_RSTRPRG_TYPE_UNMODAL  0x00000000	/*アンモーダルサーチ(トップサーチ)	*/
#define M_OPE_RSTRPRG_TYPE_TYPE1    0x00000001	/*再開サーチ Type 1					*/
#define M_OPE_RSTRPRG_TYPE_TYPE2    0x00000002	/*再開サーチ Type 2					*/
#define M_OPE_RSTRPRG_TYPE_CHECK    0x00000010	/*チェックサーチ					*/

/* melSendCommand */
#define	M_OPE_RMTLOCMODE_REMOTE		0x001		/*　リモート状態へ切り替え */
#define	M_OPE_RMTLOCMODE_LOCAL		0x000		/*　ローカル状態へ切り替え */

/* -- ロケール設定 --			*/
/* melSetLocale/melGetLocale */
/*
  コード体系 :

    31                              16                               0
    ┌───────────────┬───────────────┐
    └───────────────┴───────────────┘
                     ｜                        ｜
                     ｜                        └──── ロケール値
                     └───────────────── 機能
*/

#define	LOCALE_FUNC_MASK		0xffff0000		/* ロケール設定機能マスク	*/	/* MA0-A007 */
#define	LOCALE_LOCALE_MASK		0x0000ffff		/* ロケール設定機能マスク	*/	/* MA0-A007 */
#define	LOCALE_LANG				0x40000000		/* ロケール設定 文字処理	*/	/* MA0-A007 */
#define	LOCALE_TIME				0x20000000		/* ロケール設定 時間		*/	/* MA0-A007 */
#define	LOCALE_MONETRY			0x10000000		/* ロケール設定 通貨		*/	/* MA0-A007 */

#define	LANG_JA					0x40000411		/* 日本						*/	/* MA0-A007 */
#define	LANG_EN					0x40000409		/* アメリカ					*/	/* MA0-A007 */
#define	LANG_DE					0x40000407		/* ドイツ					*/	/* MA0-A007 */
#define	LANG_IT					0x40000410		/* イタリア					*/	/* MA0-A007 */
#define	LANG_FR					0x4000040C		/* フランス					*/	/* MA0-A007 */
#define	LANG_ES					0x4000040A		/* スペイン					*/	/* MA0-A007 */
#define	LANG_TW					0x40000404		/* 台湾						*/	/* MA0-A007 */
#define	LANG_CN					0x40000804		/* 中国						*/	/* MA0-A007 */
#define	LANG_KO					0x40000412		/* 韓国						*/	/* MA0-A007 */
#define	LANG_PT					0x40000816		/* ポルトガル				*/	/* MA0-A007 */
#define	LANG_HU					0x4000040E		/* ハンガリー				*/	/* MA0-A007 */
#define	LANG_NL					0x40000413		/* オランダ					*/	/* MA0-A007 */
#define	LANG_SV					0x4000041D		/* スウェーデン				*/	/* MA0-A007 */
#define	LANG_PL					0x40000415		/* ポーランド				*/	/* MA0-A007P */
#define	LANG_TR					0x4000041F		/* トルコ					*/	/* MA0-A007P */
#define	LANG_RU					0x40000419		/* ロシア					*/	/* MA0-A007P */
#define LANG_CZ					0x40000405		/* チェコ					*/	/* MA0-A007Q */


/* melFtpIoctl */
#define	MEL_AF_INET			AF_INET			/* FTP_SOCKETのドメイン設定値	*/	/* MA0-A050 */
#define	MEL_SOCK_STREAM		SOCK_STREAM		/* FTP_SOCKETのタイプ種別		*/	/* MA0-A050 */
											/* コネクションベースソケット	*/	/* MA0-A050 */
/****************************************************************************/
/*	FTP通信socketデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_SOCKET	0x01		/* FTP通信socket						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lDomain;		/* ドメイン								*/	/* P1X-A333M */
	long			lType;			/* タイプ								*/	/* P1X-A333M */
	long			lProtocol;		/* プロトコル							*/	/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
} MEL_FTP_SOCKET;																/* P1X-A333M */
typedef	MEL_FTP_SOCKET	*LPMEL_FTP_SOCKET;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信bindデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_BIND		0x02		/* FTP通信bind							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in構造体ポインタ			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in構造体サイズ				*/	/* P1X-A333M */
} MEL_FTP_BIND;																	/* P1X-A333M */
typedef	MEL_FTP_BIND	*LPMEL_FTP_BIND;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信listenデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_LISTENT	0x03		/* FTP通信listen						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	long			lBacklog;		/* キュー最大保留数						*/	/* P1X-A333M */
} MEL_FTP_LISTEN;																/* P1X-A333M */
typedef	MEL_FTP_LISTEN	*LPMEL_FTP_LISTEN;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信acceptデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_ACCEPT	0x04		/* FTP通信accept						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in構造体ポインタ			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in構造体サイズ				*/	/* P1X-A333M */
	long			lNewFd;			/* 接続用ファイルディスクリプタ			*/	/* P1X-A333M */
} MEL_FTP_ACCEPT;																/* P1X-A333M */
typedef	MEL_FTP_ACCEPT	*LPMEL_FTP_ACCEPT;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信closeデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_CLOSE		0x05		/* FTP通信close							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
} MEL_FTP_CLOSE;																/* P1X-A333M */
typedef	MEL_FTP_CLOSE	*LPMEL_FTP_CLOSE;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信connectWithTimeoutデータ設定用構造体								*/
/****************************************************************************/
#define	FTP_CONNECT	0x06		/* FTP通信connect						*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in構造体ポインタ			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in構造体サイズ				*/	/* P1X-A333M */
	struct timeval	*timeVal;		/* タイムアウト時間設定構造体			*/	/* P1X-A333M */
} MEL_FTP_CONNECT;																/* P1X-A333M */
typedef	MEL_FTP_CONNECT	*LPMEL_FTP_CONNECT;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信sendデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_SEND		0x07		/* FTP通信send							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	char			*cBuff;			/* 送信データポインタ					*/	/* P1X-A333M */
	long			*lpBuffLen;		/* 送信データサイズ						*/	/* P1X-A333M */
	long			lFlags;			/* フラグ								*/	/* P1X-A333M */
} MEL_FTP_SNED;																	/* P1X-A333M */
typedef	MEL_FTP_SNED	*LPMEL_FTP_SNED;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信recvデータ設定用構造体											*/
/****************************************************************************/
#define	FTP_RECV		0x08		/* FTP通信recv							*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	char			*cBuff;			/* 受信データポインタ					*/	/* P1X-A333M */
	long			*lpBuffLen;		/* バッファサイズ						*/	/* P1X-A333M */
	long			lFlags;			/* フラグ								*/	/* P1X-A333M */
} MEL_FTP_RECV;																	/* P1X-A333M */
typedef	MEL_FTP_RECV	*LPMEL_FTP_RECV;										/* P1X-A333M */

/****************************************************************************/
/*	FTP通信getsocknameデータ設定用構造体									*/
/****************************************************************************/
#define	FTP_GETSNAME	0x09		/* FTP通信getsockname					*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	long			lFd;			/* ファイルディスクリプタ				*/	/* P1X-A333M */
	struct sockaddr_in	*pSockAddr;	/* sockaddr_in構造体ポインタ			*/	/* P1X-A333M *//* MA0-A050 */
	long			lAddrLen;		/* sockaddr_in構造体サイズ				*/	/* P1X-A333M */
} MEL_FTP_GETSNAME;																/* P1X-A333M */
typedef	MEL_FTP_GETSNAME	*LPMEL_FTP_GETSNAME;								/* P1X-A333M */

/****************************************************************************/
/*	FTP通信hostGetByNameデータ設定用構造体									*/
/****************************************************************************/
#define	FTP_HOSTNAME	0x0a		/* FTP通信hostGetByName					*/	/* P1X-A333M */

typedef struct {																/* P1X-A333M */
	char			*cName;			/* 送信データポインタ					*/	/* P1X-A333M */
	long			lInetAddr;		/* インターネットアドレス				*/	/* P1X-A333M */
} MEL_FTP_HOSTNAME;																/* P1X-A333M */
typedef	MEL_FTP_HOSTNAME	*LPMEL_FTP_HOSTNAME;								/* P1X-A333M */

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCmelncapih*/
