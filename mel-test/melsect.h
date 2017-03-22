/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<ファイル名>		melsect.h																	*/
/*	<機能>				大区分define定義															*/
/*	<プログラム名>																					*/
/*																									*/
/*	COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION												*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/
#ifndef INCmelsecth
#define INCmelsecth

/* システム	*/
#define	M_SEC_SYSINF_SYS	1	/* システム情報(系統別)	*/
#define	M_SEC_SYSINF_COM	2	/* システム情報(系統共通)	*/
#define	M_SEC_FSYSINF	3	/* ファイルシステム情報	*/

/* 変数	*/
#define	M_SEC_CMNVAR_SYS	4	/* コモン変数(系統別 #100～)	*/
#define	M_SEC_CMNVAR_COM	5	/* コモン変数(系統共通 #500～)	*/
#define	M_SEC_LOCVAR	6	/* ローカル変数	*/
#define	M_SEC_MACVAR	7	/* マクロ変数	*//* P1X-A387 */

/* 座標系	*/
#define	M_SEC_WRKOFS	8	/* 座標系オフセット(ワーク座標)	*/
#define	M_SEC_WRKOFS_EX	9	/* 座標系オフセット(拡張ワーク座標)	*/
#define	M_SEC_LOCAL_OFS	10	/* 座標系オフセット(ローカル座標)	*/
#define	M_SEC_OTHER_OFS	11	/* 座標系オフセット(その他座標系)	*/

/* 工具	*/
#define	M_SEC_TOLOFS1_SYS	12	/* 系統別工具オフセット(タイプ1)	*/
#define	M_SEC_TOLOFS2_SYS	13	/* 系統別工具オフセット(タイプ2)	*/
#define	M_SEC_TOLOFS3_SYS	14	/* 系統別工具オフセット(タイプ3)	*/
#define	M_SEC_TLIFE_DAT	18	/* 寿命管理データ	*/
#define	M_SEC_TLIFE_INF	19	/* 寿命管理情報	*/
#define	M_SEC_TOL_REG	20	/* 工具登録	*/
#define	M_SEC_SP_WAIT	21	/* 主軸・待機	*/
#define	M_SEC_TOL_MEAS	22	/* 工具計測	*/

/* プログラム	*/
#define	M_SEC_BUF_EDT	23	/* バッファ修正	*/
#define	M_SEC_PRG_CHKIF	24	/* バックグランドチェック	*/
#define	M_SEC_FILE_INF	25	/* ファイル情報	*/

/* 運転	*/
#define	M_SEC_SPEED_INF	33	/* 速度情報	*/
#define	M_SEC_SP_INF	34	/* 主軸情報	*/
#define	M_SEC_EXEC_STS	35	/* 運転状態	*/
#define	M_SEC_AXIS_STS	36	/* 軸ステータス	*/
#define	M_SEC_COUNTER	37	/* カウンタ	*/
#define	M_SEC_MSTB_EXEC_STS	38	/* MSTB実行状態	*/
#define	M_SEC_RUNTIME	40	/* 積算時間	*/
#define	M_SEC_G_MODAL	41	/* Gモーダル	*/
#define	M_SEC_F_MODAL	42	/* Fモーダル	*/
#define	M_SEC_MSTB_MODAL	43	/* MSTBモーダル	*/
#define	M_SEC_PRG_EXEC_STAT	45	/* プログラム実行状態	*/
#define	M_SEC_PRG_TREE	46	/* プログラムツリー	*/
#define	M_SEC_PRG_TREE_GC	47	/* グラフィックチェック用プログラムツリー	*/

/* 診断	*/
#define	M_SEC_PLC_DEV_BIT	53	/* PLCデバイス(bit)	*/
#define	M_SEC_PLC_DEV_CHAR	54	/* PLCデバイス(char)	*/
#define	M_SEC_PLC_DEV_WORD	55	/* PLCデバイス(word)	*/
#define	M_SEC_PLC_DEV_LONG	56	/* PLCデバイス(long)	*/
#define	M_SEC_PLC_FORCE_OUT	58	/* PLC強制出力	*/
#define	M_SEC_MON_SV	59	/* サーボモニタ	*/
#define	M_SEC_MON_SV_PLC	60	/* サーボモニタ(PLC軸)	*//* P0Y-A013E */
#define	M_SEC_MON_SYNCERR	62	/* 同期誤差モニタ	*/
#define	M_SEC_MON_SP	63	/* 主軸モニタ	*/
#define	M_SEC_MON_PW_SPLY	64	/* パワーサプライモニタ	*/
#define	M_SEC_MON_AUX	65	/* 補助軸アンプモニタ	*/
#define	M_SEC_HW_CFG	66	/* H/W構成	*/
#define	M_SEC_SW_CFG	67	/* S/W構成	*/
#define	M_SEC_ANET_IF	69	/* 安心ネットI/F	*//* P1X-A121 */

/* 保守	*/
#define	M_SEC_ABS_DETECT	70	/* 絶対位置検出データ	*/
#define	M_SEC_ABS_DETECT_PLC	71	/* 絶対位置検出データ(PLC)	*//* P0Y-A013E */
#define	M_SEC_AUX_AXIS_CTL	72	/* 補助軸制御	*/
#define	M_SEC_SMP_PRM	74	/* サンプリングパラメータ	*/
#define	M_SEC_KEY_HIST	79	/* キー履歴	*/
#define	M_SEC_SANALOG	82	/* 主軸アナログ調整	*//* P1X-A033 */

/* 機械パラメータ	*/
#define	M_SEC_MPRM_REF_RTN	95	/* 原点復帰パラメータ	*/
#define	M_SEC_MPRM_SV	96	/* サーボパラメータ	*/
#define	M_SEC_MPRM_SP_SPC	97	/* 主軸仕様パラメータ	*/
#define	M_SEC_MPRM_SP	98	/* 主軸パラメータ	*/
#define	M_SEC_MPRM_AUX	100	/* 補助軸・軸パラメータ	*/
#define	M_SEC_MPRM_ABS_POS	101	/* 絶対位置パラメータ	*/
#define	M_SEC_MPRM_MC_ERR	102	/* 機械誤差補正パラメータ	*/
#define	M_SEC_MPRM_POS_SW	104	/* ポジションスイッチ	*/
#define	M_SEC_MPRM_MACRO	106	/* マクロ一覧	*/
#define	M_SEC_MPRM_PLC_CONST	107	/* PLC定数	*/
#define	M_SEC_MPRM_PLC_TIMER	108	/* PLCタイマ	*//* P1X-A006p */
#define	M_SEC_MPRM_PLC_COUNT	109	/* PLCカウンタ	*//* P1X-A006p */
#define	M_SEC_MPRM_SELECT_BIT	110	/* ビット選択	*/
#define	M_SEC_MPRM_OPEN_1	111	/* 開放パラメータ1(long)	*/
#define	M_SEC_MPRM_OPEN_2	112	/* 開放パラメータ2(double)	*/
#define	M_SEC_MPRM_ANET1	118	/* 安心ネット1	*//* P0Y-A013c */
#define	M_SEC_MPRM_ANET2	119	/* 安心ネット2	*//* P0Y-A013c */

/* ユーザパラメータ	*/
#define	M_SEC_UPRM_PLC_SWH	120	/* PLCスイッチ	*/
#define	M_SEC_UPRM_OPE	121	/* 操作パラメータ	*/
#define	M_SEC_UPRM_IO	122	/* 入出力パラメータ	*/
#define	M_SEC_UPRM_HOST_LINK	123	/* コンピュータリンクパラメータ	*/
#define	M_SEC_UPRM_ETHER	124	/* イーサネットパラメータ	*/
#define	M_SEC_UPRM_BARI	125	/* バリア	*/

/* 基本パラメータ	*/
#define	M_SEC_BASEPRM	126	/* 基本パラメータ	*/

/* 軸パラメータ	*/
#define	M_SEC_AXISPRM	127	/* 軸パラメータ	*/

/* 回転軸構成パラメータ	*/
#define	M_SEC_MPRM_ROT_AXIS	128	/* 回転軸構成パラメータ	*//* P1X-A062 */

/* PLC軸割出しパラメータ	*/
#define	M_SEC_MPRM_PLCINDEX	129	/* PLC軸割出しパラメータ	*//* P1X-A299 */

/* PLC軸パラメータ	*/
#define	M_SEC_AXISPRM_PLC	130	/* PLC軸パラメータ	*//* P0Y-A013E */
#define	M_SEC_MPRM_REF_RTN_PLC	131	/* PLC軸原点復帰パラメータ	*//* P0Y-A013E */
#define	M_SEC_MPRM_SV_PLC	132	/* PLC軸サーボパラメータ	*//* P0Y-A013E */
#define	M_SEC_MPRM_ABS_POS_PLC	133	/* PLC軸絶対位置パラメータ	*//* P0Y-A013E */
#define	M_SEC_MPRM_PLCINDEX_PLC	134	/* PLC軸PLC軸割出しパラメータ	*//* P1X-A299 */

/* 加工条件選択パラメータ	*/
#define	M_SEC_CNDSLC_PRM	137	/* 加工条件選択パラメータ	*//* P1X-A517 */

/* CC-Link	*/
#define	M_SEC_MPRM_CCLK_BASE	138	/* CC-Linkパラメータ基本  (系統共通)	*//* P1X-A247 */
#define	M_SEC_MPRM_CCLK_BRAU	139	/* CC-Linkパラメータ局情報(系統共通)	*//* P1X-A247 */

/* ラダー	*/
#define	M_SEC_LADIF_COM	140	/* ラダーI/F(共通)	*//* P0Y-A013E */

/* ユーザ開放I/F	*/
#define	M_SEC_UOPEN_PARA	150	/* ユーザ開放I/Fパラメータ	*//* P1X-A412 */
#define	M_SEC_UOPEN_DATA	151	/* ユーザ開放I/Fデータ		*//* P1X-A412 */

/* 段取	*/
#define	M_SEC_RNAVIGATER	301	/* らくらく5軸I/F	*//* P1X-A451 */

#endif
