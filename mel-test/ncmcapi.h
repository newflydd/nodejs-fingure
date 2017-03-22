/**********************************************************
  PROGRAM:		NCMCAPI.DLL関数定義
  NAME: 		ncmcapi.h
  DESCRIPTION:	カスタムAPIDLL関数定義

  Copyright (C) 1995 Mitsubishi Electric Corporation
  All Rights Reserved
**********************************************************/

#ifndef	INCncmcapih
#define	INCncmcapih

#ifdef	_WIN32																	/* MA0-A007 */
#include	<windows.h>
#else																			/* MA0-A007 */
#include	<winhead.h>															/* MA0-A007 */
#endif																			/* MA0-A007 */

#ifdef __cplusplus
extern "C" {
#endif	/*__cplusplus*/

/* --- カスタムAPI関数のプロトタイプ宣言 --------------------*/
/* -- データアクセス関連 -- */
DWORD FAR PASCAL melGetData( HWND hWnd,long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, LPVOID lpGetData, long lGetType);
DWORD FAR PASCAL melGetData4VB( HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, LPVOID lpGetData, LPVOID lpDataBuff, long lGetType );
DWORD FAR PASCAL melGetLumpData( HWND hWnd, long lAddress, long lSectionNum, long lSubSectTop, long lGetNos, LPVOID lpGetData, long lGetType);
DWORD FAR PASCAL melGetLumpData4VB( HWND hWnd, long lAddress, long lSectionNum, long lSubSectTop, long lGetNos, LPVOID lpGetData, LPVOID lpDataBuff, long lGetType );
DWORD FAR PASCAL melSetData( HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, LPVOID lpSetData, long lSetType);
DWORD FAR PASCAL melSetData4VB(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, LPVOID lpSetData, LPVOID lpDataBuff, long lSetType);
DWORD FAR PASCAL melReadData( HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, LPVOID lpReadData, long lReadType );
DWORD FAR PASCAL melReadData4VB( HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, LPVOID lpReadData, LPVOID lpDataBuff, long lReadType );
DWORD FAR PASCAL melWriteData(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, LPVOID lpWriteData, long lWriteType);
DWORD FAR PASCAL melWriteData4VB(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, LPVOID lpWriteData, LPVOID lpDataBuff, long lWriteType);
DWORD FAR PASCAL melCopyData(HWND hWnd, long lSrcAddress, long lSrcSectionNum, long lSrcSubSectionNum, long lDstAddress, long lDstSectionNum, long lDstSubSectionNum);
DWORD FAR PASCAL melRegisterModal(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lPriority);
DWORD FAR PASCAL melRegisterWriteModal(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lPriority);
DWORD FAR PASCAL melCancelModal( HWND hWnd, long lAddress, long lModalId );
DWORD FAR PASCAL melReadModal(HWND hWnd, long lAddress, long lModalId, LPVOID lpReadData, long lReadType);
DWORD FAR PASCAL melReadModal4VB(HWND hWnd, long lAddress, long lModalId, LPVOID lpReadData, LPVOID lpDataBuff, long lReadType);
DWORD FAR PASCAL melWriteModal(HWND hWnd, long lAddress, long lModalId, LPVOID lpWriteData, long lWriteType);
DWORD FAR PASCAL melWriteModal4VB(HWND hWnd, long lAddress, long lModalId, LPVOID lpWriteData, LPVOID lpDataBuff, long lWriteType);
DWORD FAR PASCAL melRegisterCollectData(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, LPVOID lpReadData, long lReadType);
DWORD FAR PASCAL melCancelCollectData(HWND hWnd, long lAddress, long lId);
DWORD FAR PASCAL melReadCollectData(HWND hWnd, long lAddress, LPVOID lpReadData, long lReadType);
DWORD FAR PASCAL melExRegisterModal(HWND hWnd, long lAddress, long lRegisterModalNos, LPVOID lpModalDataBuff, LPDWORD lpdwModalIdBuff);
DWORD FAR PASCAL melExCancelModal(HWND hWnd, long lAddress, long lCancelModalNos, LPDWORD lpdwModalIdBuff, LPDWORD lpdwCancelIdBuff);

DWORD FAR PASCAL melRegisterGetModal(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, long lDataType, long lPriority);
DWORD FAR PASCAL melRegisterSetModal(HWND hWnd, long lAddress, long lSectionNum, long lSubSectionNum, long lAxisFlag, long lDataType, long lPriority);
DWORD FAR PASCAL melRegisterLumpModal(HWND hWnd, long lAddress, long lRegistModalNos, LPVOID lpModalDataBuff, LPDWORD lpdwModalIdBuff);
DWORD FAR PASCAL melCancelLumpModal(HWND hWnd, long lAddress, long lCancelModalNos, LPDWORD lpdwModalIdBuff, LPDWORD lpdwCancelIdBuff);

/* -- キャッシュ制御関連 -- */													/* MA0-A004 */
DWORD FAR PASCAL melReadCacheEnable(HWND hWnd, long lAddress, BOOL bEnable);	/* MA0-A004 */
DWORD FAR PASCAL melIsReadCacheEnable(HWND hWnd, long lAddress);				/* MA0-A004 */
DWORD FAR PASCAL melExRegisterCache(HWND hWnd, long lAddress, long lRegistCacheNos, LPVOID lpCacheDataBuff, LPDWORD lpdwErrorBuff);	/* MA0-A004C */
DWORD FAR PASCAL melRegisterLumpCache(HWND hWnd, long lAddress, long lRegistCacheNos, LPVOID lpCacheDataBuff);	/* MA0-A004D */

/* -- ファイルアクセス関連 -- */
DWORD FAR PASCAL melCreateDirectory( HWND hWnd, LPSTR lpszDirectoryName );		/* MA0-A002D */
DWORD FAR PASCAL melCreateDirectoryW( HWND hWnd, LPWSTR lpszDirectoryName );	/* MA0-A007 */
DWORD FAR PASCAL melDeleteDirectory( HWND hWnd, LPSTR lpszDirectoryName );		/* MA0-A002D */
DWORD FAR PASCAL melDeleteDirectoryW( HWND hWnd, LPWSTR lpszDirectoryName );	/* MA0-A007 */
DWORD FAR PASCAL melOpenDirectory( HWND hWnd, LPSTR lpszDirectoryName, long lFileType );
DWORD FAR PASCAL melOpenDirectoryW( HWND hWnd, LPWSTR lpszDirectoryName, long lFileType );	/* MA0-A007 */
DWORD FAR PASCAL melReadDirectory( HWND hWnd, DWORD lDirectoryId, LPSTR lpszFileInfo, long lBuffSize);
DWORD FAR PASCAL melReadDirectoryW( HWND hWnd, DWORD lDirectoryId, LPWSTR lpszFileInfo, long lBuffSize);	/* MA0-A007 */
DWORD FAR PASCAL melCloseDirectory(HWND hWnd, DWORD lDirectoryId);
DWORD FAR PASCAL melDeleteFile(HWND hWnd, LPSTR lpszFileName);
DWORD FAR PASCAL melDeleteFileW(HWND hWnd, LPWSTR lpszFileName);							/* MA0-A007 */
DWORD FAR PASCAL melRenameFile(HWND hWnd, LPSTR lpszSrcFileName, LPSTR lpszDstFileName);
DWORD FAR PASCAL melRenameFileW(HWND hWnd, LPWSTR lpszSrcFileName, LPWSTR lpszDstFileName);	/* MA0-A007 */
DWORD FAR PASCAL melSetLocaleCopyFile(HWND hWnd, LPSTR lpszSrcFileName, LPSTR lpszDstFileName);
DWORD FAR PASCAL melCopyFile(HWND hWnd, LPSTR lpszSrcFileName, LPSTR lpszDstFileName);
DWORD FAR PASCAL melCopyFileW(HWND hWnd, LPWSTR lpszSrcFileName, LPWSTR lpszDstFileName);	/* MA0-A007 */
DWORD FAR PASCAL melVerifyFile(HWND hWnd, LPSTR lpszSrcFileName, LPSTR lpszDstFileName);
DWORD FAR PASCAL melVerifyFileW(HWND hWnd, LPWSTR lpszSrcFileName, LPWSTR lpszDstFileName);	/* MA0-A007 */
DWORD FAR PASCAL melCondenseFile(HWND hWnd, LPSTR lpszFileName);
DWORD FAR PASCAL melGetDiskFree(HWND hWnd, LPSTR lpszDirectoryName);
DWORD FAR PASCAL melGetDiskFreeW(HWND hWnd, LPWSTR lpszDirectoryName);						/* MA0-A007 */
DWORD FAR PASCAL melGetDriveList(HWND hWnd, LPSTR lpszDriveList, long lBuffSize);
DWORD FAR PASCAL melGetDriveListW(HWND hWnd, LPWSTR lpszDriveList, long lBuffSize);			/* MA0-A007 */

/* -- NCファイルアクセス関連 -- */
DWORD WINAPI melFSOpenDirectory( HWND, long, LPSTR, LPVOID );
DWORD WINAPI melFSOpenDirectoryW( HWND, long, LPWSTR, LPVOID );					/* MA0-A007 */
DWORD WINAPI melFSOpenFile( HWND, long, LPSTR, long, long, LPVOID );
DWORD WINAPI melFSOpenFileW( HWND, long, LPWSTR, long, long, LPVOID );			/* MA0-A007 */
DWORD WINAPI melFSCloseDirectory( HWND, long, long );
DWORD WINAPI melFSCloseFile( HWND, long, long );
DWORD WINAPI melFSCreateFile( HWND, long, LPSTR, long, LPVOID );
DWORD WINAPI melFSCreateFileW( HWND, long, LPWSTR, long, LPVOID );				/* MA0-A007 */
DWORD WINAPI melFSReadDirectory( HWND, long, long, LPVOID );
DWORD WINAPI melFSReadDirectoryW( HWND, long, long, LPVOID );					/* MA0-A007 */
DWORD WINAPI melFSReadFile( HWND, long, long, LPVOID, long, long* );
DWORD WINAPI melFSRewindDirectory( HWND, long, long );
DWORD WINAPI melFSRemoveFile( HWND, long, LPSTR );
DWORD WINAPI melFSRemoveFileW( HWND, long, LPWSTR );							/* MA0-A007 */
DWORD WINAPI melFSRenameFile( HWND, long, LPSTR, LPSTR );
DWORD WINAPI melFSRenameFileW( HWND, long, LPWSTR, LPWSTR );					/* MA0-A007 */
DWORD WINAPI melFSWriteFile( HWND, long, long, LPVOID, LPVOID );
DWORD WINAPI melFSIoctlFile( HWND, long, long, long, LPVOID, long );
DWORD WINAPI melFSStatFile( HWND, long, LPSTR, LPVOID );
DWORD WINAPI melFSStatFileW( HWND, long, LPWSTR, LPVOID );						/* MA0-A007 */
DWORD WINAPI melFSFstatFile( HWND, long, long, LPVOID );
DWORD WINAPI melFSLseekFile( HWND, long, long, long, long, LPVOID );

/* -- システム制御関連 -- */
DWORD FAR PASCAL melIoctl( HWND hWnd, long lAddress, long lFunction, LPVOID lpData );

/* -- 運転操作関連（モニタリング） -- */
DWORD FAR PASCAL melGetCurrentPrgPointer(HWND hWnd, long lAddress, LPVOID lpPrgPointer, long lReadType);
DWORD FAR PASCAL melGetCurrentPrgBlock(HWND hWnd, long lAddress, long lPrgBlockNos, LPVOID lpPrgBlock, long lReadType);
DWORD FAR PASCAL melGetCurrentPrgBlock4VB(HWND hWnd, long lAddress, long lPrgBlockNos, LPVOID lpPrgBlock, LPVOID lpDataBuff, long lReadType);
DWORD FAR PASCAL melGetCurrentAlarmMsg(HWND hWnd, long lAddress, long lMsgNos, long lAlarmType, LPVOID lpAlarmMsg, long lReadType);
DWORD FAR PASCAL melGetCurrentAlarmMsg4VB(HWND hWnd, long lAddress, long lMsgNos, long lAlarmType, LPVOID lpAlarmMsg, LPVOID lpDataBuff, long lReadType);
DWORD FAR PASCAL melGetAlarmMsg(HWND hWnd, long lAddress, long lAlarmType, long lAlarmNum, LPVOID lpAlarmMsg, long lReadType);
DWORD FAR PASCAL melGetExecPrgCallStack(HWND hWnd, long lAddress, long lOption, LPSTR lpszPrgList, long lBuffsize);
DWORD FAR PASCAL melGetExecPrgCallStackW(HWND hWnd, long lAddress, long lOption, LPWSTR lpszPrgList, long lBuffsize);	/* MA0-A007 */

/* -- 運転操作関連（運転操作） -- */
DWORD FAR PASCAL melRset(HWND hWnd, long lAddress, long lResetMode);
DWORD FAR PASCAL melSetBlockstopMode( HWND hWnd, long lAddress, long lBlockStop );
DWORD FAR PASCAL melSetOperationMode( HWND hWnd, long lAddress, long lOperationMode );
DWORD FAR PASCAL melSetOverrideValue( HWND hWnd, long lAddress, long lOverrideValue );
DWORD FAR PASCAL melSetManualFeedSpeed( HWND hWnd, long lAddress, long lManualFeedSpeed );
DWORD FAR PASCAL melSetHandleMagnification(HWND hWnd, long lAddress, long lMagnification);
DWORD FAR PASCAL melStartAxisOperation( HWND hWnd, long lAddress, long lAxisMode );
DWORD FAR PASCAL melStartOperation(HWND hWnd, long lAddress, LPVOID lpStartPrg, long lDataType, long lSequenceNum, long lBlockNum);
DWORD FAR PASCAL melSelectExecPrg(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum);
DWORD FAR PASCAL melSelectExecPrg4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg, LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum);
DWORD FAR PASCAL melSelectExecPrgEx(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum,long lAppearanceNumber, long lSelectType, long lParam);
DWORD FAR PASCAL melSelectExecPrgEx4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg, LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum,long lAppearanceNumber, long lSelectType, long lParam);

DWORD FAR PASCAL melSelectRestartPrg(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber,long lSelectType);
DWORD FAR PASCAL melSelectRestartPrg4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg, LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber,long lSelectType);
DWORD FAR PASCAL melEntryCollationPrg(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber);
DWORD FAR PASCAL melEntryCollationPrg4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg, LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber);

DWORD FAR PASCAL melSelectCheckPrg(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum, long lReserve);
DWORD FAR PASCAL melSelectCheckPrg4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg,LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum, long lReserve);
DWORD FAR PASCAL melEntryBottomCheckPrg(HWND hWnd, long lAddress, LPVOID lpSelectPrg, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber);
DWORD FAR PASCAL melEntryBottomCheckPrg4VB(HWND hWnd, long lAddress, LPVOID lpSelectPrg,LPVOID lpDataBuff, long lDataType, long lSequenceNum, long lBlockNum, long lAppearanceNumber);
DWORD FAR PASCAL melResetCheckPrg(HWND hWnd, long lAddress);
DWORD FAR PASCAL melExecCheckPrg(HWND hWnd, long lAddress, long lCntrlFlag);
DWORD FAR PASCAL melGetDrawData(HWND hWnd, long lAddress, LPVOID lpCheckDraw, long lDataType);

DWORD FAR PASCAL melOpenBuffEdit(HWND hWnd, long lAddress);
DWORD FAR PASCAL melGetBuffEditPrgBlock(HWND hWnd, long lAddress, DWORD dwBuffEditId, long lPrgBlockNos, LPVOID lpPrgBlock, long lReadType);
DWORD FAR PASCAL melSetBuffEditPrgBlock(HWND hWnd, long lAddress, DWORD dwBuffEditId, LPVOID lpPrgBlock, long lWriteType);
DWORD FAR PASCAL melCloseBuffEdit(HWND hWnd, long lAddress, DWORD dwBuffEditId);
DWORD FAR PASCAL melStateOfBuffEdit(HWND hWnd, long lAddress, DWORD dwBuffEditId);
DWORD FAR PASCAL melSizeOfBuffEdit(HWND hWnd, long lAddress, DWORD dwBuffEditId);

/* -- ロケール設定 -- */
DWORD WINAPI melSetLocale(HWND hWnd, DWORD dwLocale);							/* MA0-A007 */
DWORD WINAPI melGetLocale(HWND hWnd, LPDWORD lpdwLocale);						/* MA0-A007 */


/* -- 運転操作関連（保守、その他） -- */
DWORD FAR PASCAL melTransferPLC(HWND hWnd, long lAddress, long lTransferMode);
DWORD FAR PASCAL melActivatePLC(HWND hWnd, long lAddress, long lActivePLC);
DWORD FAR PASCAL melSampling(HWND hWnd, long lAddress, long lSamplingMode);
DWORD FAR PASCAL melSetKeyData(HWND hWnd, LPSTR lpKeyData);						/* MA0-A009 */

/* -- APIユーティリティ -- */
DWORD FAR PASCAL melCallTest( HWND hWnd, long lArg1, short nArg2 );
short FAR PASCAL melStatusIsErr(HWND hWnd, DWORD dwStatus, LPSTR lpszMsg);
short FAR PASCAL melStatusIsErrW(HWND hWnd, DWORD dwStatus, LPWSTR lpszMsg);	/* MA0-A007 */
DWORD WINAPI melGetSubError(void);												/* MA0-A015 *//* MA0-A015A */
void  WINAPI melSetSubError(DWORD dwErrCode);									/* MA0-A015 *//* MA0-A015A */

/* -- FTP通信関連 -- */																		/* P1X-A333M */
DWORD FAR PASCAL melFtpIoctl(HWND hWnd, long lAddress, long lFunction, LPVOID lpData);		/* P1X-A333M */

#ifdef __cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCncmcapih*/
