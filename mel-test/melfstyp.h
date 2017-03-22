/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<ファイル名>		melfstyp.h																	*/
/*	<機能>				melFs関連の定義(カスタムAPIライブラリ　データタイプ定義)					*/
/*	<プログラム名>																					*/
/*																									*/
/*	COPYRIGHT (C) 1999,2000-2008 MITSUBISHI ELECTRIC CORPORATION									*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/

#ifndef	INCmelfstyph
#define	INCmelfstyph

#ifdef	_WIN32																	/* MA0-A007 */
#include	<windows.h>															/* MA0-A007 */
#else																			/* MA0-A007 */
#include	<winhead.h>															/* MA0-A007 */
#endif																			/* MA0-A007 */

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

/* ----- ＮＣファイルシステムアクセス型データタイプ定義	----- */
/* ファイル情報 */
typedef struct {
	long	lMode;				/* ファイルの属性（st_mode:MM_S_IFDIR:ディレクトリ）	*/
	long	lFileSize;			/* ファイルサイズ			*/
	short	nYear;				/* ファイル更新日（年）		*/
	short	nMonth;				/* ファイル更新日（月）		*/
	short	nDay;				/* ファイル更新日（日）		*/
	short	nHour;				/* ファイル更新日（時）		*/
	short	nMinute;			/* ファイル更新日（分）		*/
	short	nSecond;			/* ファイル更新日（秒）		*/
} FS_STAT;

/* File mode (st_mode) bit masks */
#define MM_S_IFMT   0xf000      /* file type field */
#define MM_S_IFIFO  0x1000      /*  fifo */
#define MM_S_IFCHR  0x2000      /*  character special */
#define MM_S_IFDIR  0x4000      /*  directory */
#define MM_S_IFBLK  0x6000      /*  block special */
#define MM_S_IFREG  0x8000      /*  regular */
#define MM_S_IFLNK  0xa000      /*  symbolic link */
#define MM_S_IFSOCK 0xc000      /*  socket */

#define MM_S_ISUID  0x0800      /* set user id on execution */
#define MM_S_ISGID  0x0400      /* set group id on execution */
#define MM_S_IRUSR  0x0100      /* read permission, owner */
#define MM_S_IWUSR  0x0080      /* write permission, owner */
#define MM_S_IXUSR  0x0040      /* execute/search permission, owner */
#define MM_S_IRWXU  0x01c0      /* read/write/execute permission, owner */

#define MM_S_IRGRP  0x0020      /* read permission, group */
#define MM_S_IWGRP  0x0010      /* write permission, group */
#define MM_S_IXGRP  0x0008      /* execute/search permission, group */
#define MM_S_IRWXG  0x0038      /* read/write/execute permission, group */

#define MM_S_IROTH  0x0004      /* read permission, other */
#define MM_S_IWOTH  0x0002      /* write permission, other */
#define MM_S_IXOTH  0x0001      /* execute/search permission, other */
#define MM_S_IRWXO  0x0007      /* read/write/execute permission, other */


/* ----- NCメモリファイルシステムアクセスコマンド定義 ----- */
/* melFSCreateFile/melFSOpenFile */
#define	M_FSOPEN_RDONLY			0x0000		/* 読み取り専用にオープンする			*/
#define	M_FSOPEN_WRONLY			0x0001		/* 書き込み専用にオープンする			*/
#define	M_FSOPEN_RDWR			0x0002		/* 読み取り／書き込み用にオープンする	*/
#define	M_FSOPEN_IRWXO 			0x0007		/* read/write/execute permission, other	*//* MA0-B026 */
#define	M_FSOPEN_CREAT 			0x0200		/* open with file create				*//* MA0-B026 */
#define	M_FSOPEN_TRUNC 			0x0400		/* open with truncation					*//* MA0-B026 */

/* melFSIoctlFile */
#define	M_FSIOCTL_FREECHAR		0x0000		/* ファイルシステムの残文字数の取得			*/
#define	M_FSIOCTL_ENTRYCHAR		0x0001		/* ファイルシステムの登録文字数の取得		*/
#define	M_FSIOCTL_FREEFILE		0x0002		/* ファイルシステムのファイル残本数の取得	*/
#define	M_FSIOCTL_ENTRYFILE		0x0003		/* ファイルシステムのファイル登録本数の取得	*/
#define	M_FSIOCTL_MDISETFIN		0x0004		/* ＭＤＩプログラムの設定完了				*/
#define M_FSIOCTL_RDFILECOM		0x0005		/* ファイルコメントの読み出し	<M6L#02>	*/
#define M_FSIOCTL_WTFILECOM		0x0006		/* ファイルコメントの書き込み	<M6L#02>	*/
#define M_FSIOCTL_DISKFORMAT	0x0007		/* NCメモリのフォーマット					*//* P1X-A006E */
#define	M_FSIOCTL_NOBOFOUT		0x0008		/* 出力時にBOF("%")を出力しない				*//* P1X-A047 */
#define M_FSIOCTL_SIOINIT		0x0009		/* NCシリアルの初期設定						*//* MA0-A041 */
#define M_FSIOCTL_SIOGETERR		0x000A		/* NCシリアルのエラー取得					*//* MA0-A041 */
#define M_FSIOCTL_SIOSTOP		0x000B		/* NCシリアルの強制停止						*//* MA0-A041 */
#define	M_FSIOCTL_READDIRSYS	0x000C		/* melFSReadDirectory()で取得する系統指定	*//* MA0-A048 */

/* melFSLseekFile */
#define	M_FSLSEEK_TOP			0x0000		/* ファイルの先頭からシーク		*/
#define	M_FSLSEEK_CURRENT		0x0001		/* ファイルの現在位置からシーク	*/
#define	M_FSLSEEK_END			0x0002		/* ファイルの最後からシーク		*/

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/* INCmelfstyph */
