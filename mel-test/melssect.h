/**************************************************************************************** MELCO *****/
/*																						  (Nx)		*/
/*	<ファイル名>		melssect.h																	*/
/*	<機能>				小区分define定義															*/
/*	<プログラム名>																					*/
/*																									*/
/*	COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION												*/
/*	ALL RIGHTS RESERVED																				*/
/****************************************************************************************************/
#ifndef INCmelssecth
#define INCmelssecth

/* システム情報（系統別）	*/
#define	M_SSEC_SINFSS_AXIS_NUM	1	/* 系統内軸数(クロス構成)	*/
#define	M_SSEC_SINFSS_AXIS_NUM_BASE	2	/* 系統内軸数(基本構成)	*/
#define	M_SSEC_SINFSS_CMVRS_NOS	100	/* コモン変数(#100～)組数	*/

/* システム情報（系統共通）	*/
#define	M_SSEC_SINFC_SYSTEM_NUM	1	/* 系統数	*/
#define	M_SSEC_SINFC_NC_AXIS	2	/* 全NC軸数(NC)	*/
#define	M_SSEC_SINFC_ALL_AXIS	3	/* 全制御軸数(NC+PLC+SP)	*/
#define	M_SSEC_SINFC_SP_AXIS	4	/* 主軸軸数	*/
#define	M_SSEC_SINFC_PLC_AXIS	5	/* PLC軸数	*/
#define	M_SSEC_SINFC_AUX_AXIS	6	/* 補助軸軸数	*/
#define	M_SSEC_SINFC_FSYS_FORM	7	/* ファイルシステム形式	*/
#define	M_SSEC_SINFC_CMVRC_NOS	8	/* コモン変数(#500～)組数	*/
#define	M_SSEC_SINFC_PRSIZE	9	/* 加工プログラム登録最大本数情報	*//* P0Y-A013B */
#define	M_SSEC_SINFC_PWSPLY_AXIS	10	/* パワーサプライ軸数（SV+SP)	*//* P0Y-A013E */
#define	M_SSEC_SINFC_PLCIDX_AXIS	11	/* PLC割り出し軸数	*//* P1X-A299J */
#define	M_SSEC_SINFC_NCTYPE	100	/* NCのタイプ	*//* P1X-A006 */
#define	M_SSEC_SINFC_PLCIF_TYPE	101	/* PLCデバイスの割付けタイプ（M6/M7)	*//* P1X-A030 */
#define	M_SSEC_SINFC_4PALLET_ON	102	/* 4面パレット登録有効	*//* P1X-A166 */
#define	M_SSEC_SINFC_CMVRC_N400_ON	103	/* コモン変数#400番台有効	*//* P1X-A099AJ */
#define	M_SSEC_SINFC_CROSSCOM_ON	104	/* 系統間コモン変数#100100番台有効	*//* P1X-A295 */
#define	M_SSEC_SINFC_MCP_CYCLE	105	/* 制御周期				*//* P1X-A145M */
#define	M_SSEC_SINFC_CMVRC_N900000_ON 	106	/* コモン変数#900000番台有効	*//* P1X-A489 */
#define	M_SSEC_SINFC_SERIAL_NO	201	/* NC製造番号	*//* P1X-A904 */

/* ファイルシステム情報	*/
#define	M_SSEC_FINF_TOFS_TYP	1	/* 工具オフセットタイプ	*/
#define	M_SSEC_FINF_TOFS_NOS	2	/* 工具オフセット組数	*/
#define	M_SSEC_FINF_WOFS_NOS	3	/* ワークオフセット組数	*/
#define	M_SSEC_FINF_EDTFILE_REGIST	100	/* 編集/入力ファイルの登録	*//* P1X-A471 */
#define	M_SSEC_FINF_EDTFILE_RELEASE	101	/* 編集/入力ファイルの解除	*//* P1X-A471 */
#define	M_SSEC_FINF_EDTFILE_CHK	102	/* 編集/入力ファイルのチェック	*//* P1X-A471 */

/* コモン変数(系統別 #100～)	*/
#define	M_SSEC_CMVRS_DAT(x)	(700 + (x))	/* 100～199 (x=100～199)	*/

/* コモン変数(系統共通 #500～)	*/
#define	M_SSEC_CMVRC_DAT(x)	(900 + (x))	/* コモン変数 変数(系統共通 #400～#999) (x=400～999)	*/
#define	M_SSEC_CMVRC_CMT(x)	(2000 + (x))	/* コモン変数コメント(系統共通 #500～#519) (x=500～519)	*/
#define	M_SSEC_CMVRC_S1_DAT(x)	(10000 + (x))	/* コモン変数 変数(系統共通 #100100～#100199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S2_DAT(x)	(11000 + (x))	/* コモン変数 変数(系統共通 #200100～#200199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S3_DAT(x)	(12000 + (x))	/* コモン変数 変数(系統共通 #300100～#300199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S4_DAT(x)	(13000 + (x))	/* コモン変数 変数(系統共通 #400100～#400199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S5_DAT(x)	(14000 + (x))	/* コモン変数 変数(系統共通 #500100～#500199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S6_DAT(x)	(15000 + (x))	/* コモン変数 変数(系統共通 #600100～#600199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S7_DAT(x)	(16000 + (x))	/* コモン変数 変数(系統共通 #700100～#700199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_S8_DAT(x)	(17000 + (x))	/* コモン変数 変数(系統共通 #800100～#800199) (x=100～199)	*//* P1X-A295 */
#define	M_SSEC_CMVRC_DAT2(x)	(20000 + (x))	/* コモン変数 変数(系統共通 #900000～#907399) (x=0～7399)	*//* P1X-A489 */
#define	M_SSEC_CMVRC_CMVRS_CLR	100000	/* コモン変数範囲指定クリア	*//* P1X-A489 */

/* ローカル変数	*/
#define	M_SSEC_LOCVR_LV0_DAT(x)	(1000 + (x))	/* ローカル変数(レベル0)(x=1～33)	*/
#define	M_SSEC_LOCVR_LV1_DAT(x)	(1100 + (x))	/* ローカル変数(レベル1)(x=1～33)	*/
#define	M_SSEC_LOCVR_LV2_DAT(x)	(1200 + (x))	/* ローカル変数(レベル2)(x=1～33)	*/
#define	M_SSEC_LOCVR_LV3_DAT(x)	(1300 + (x))	/* ローカル変数(レベル3)(x=1～33)	*/
#define	M_SSEC_LOCVR_LV4_DAT(x)	(1400 + (x))	/* ローカル変数(レベル4)(x=1～33)	*/
#define	M_SSEC_LOCVR_EMPTY_VAL	2000	/* ローカル変数　空変数	*//* P0Y-A013B */

/* マクロ変数	*/
#define	M_SSEC_MACVR_DAT(x)	(x)	/* 機械メーカマクロ変数(x=450～499,80000～80049,80500～80649)	*//* P1X-A387 */

/* 座標系オフセット（ワーク座標）	*/
#define	M_SSEC_WOFS_G54	54	/* G54ワーク座標系オフセット	*/
#define	M_SSEC_WOFS_G55	55	/* G55ワーク座標系オフセット	*/
#define	M_SSEC_WOFS_G56	56	/* G56ワーク座標系オフセット	*/
#define	M_SSEC_WOFS_G57	57	/* G57ワーク座標系オフセット	*/
#define	M_SSEC_WOFS_G58	58	/* G58ワーク座標系オフセット	*/
#define	M_SSEC_WOFS_G59	59	/* G59ワーク座標系オフセット	*/

/* 座標系オフセット（拡張ワーク座標）	*/
#define	M_SSEC_AWOFS_G54_1P1	1	/* G54.1P1	*/
#define	M_SSEC_AWOFS_G54_1P2	2	/* G54.1P2	*/
#define	M_SSEC_AWOFS_G54_1P3	3	/* G54.1P3	*/
#define	M_SSEC_AWOFS_G54_1P4	4	/* G54.1P4	*/
#define	M_SSEC_AWOFS_G54_1P5	5	/* G54.1P5	*/
#define	M_SSEC_AWOFS_G54_1P6	6	/* G54.1P6	*/
#define	M_SSEC_AWOFS_G54_1P7	7	/* G54.1P7	*/
#define	M_SSEC_AWOFS_G54_1P8	8	/* G54.1P8	*/
#define	M_SSEC_AWOFS_G54_1P9	9	/* G54.1P9	*/
#define	M_SSEC_AWOFS_G54_1P10	10	/* G54.1P10	*/
#define	M_SSEC_AWOFS_G54_1P11	11	/* G54.1P11	*/
#define	M_SSEC_AWOFS_G54_1P12	12	/* G54.1P12	*/
#define	M_SSEC_AWOFS_G54_1P13	13	/* G54.1P13	*/
#define	M_SSEC_AWOFS_G54_1P14	14	/* G54.1P14	*/
#define	M_SSEC_AWOFS_G54_1P15	15	/* G54.1P15	*/
#define	M_SSEC_AWOFS_G54_1P16	16	/* G54.1P16	*/
#define	M_SSEC_AWOFS_G54_1P17	17	/* G54.1P17	*/
#define	M_SSEC_AWOFS_G54_1P18	18	/* G54.1P18	*/
#define	M_SSEC_AWOFS_G54_1P19	19	/* G54.1P19	*/
#define	M_SSEC_AWOFS_G54_1P20	20	/* G54.1P20	*/
#define	M_SSEC_AWOFS_G54_1P21	21	/* G54.1P21	*/
#define	M_SSEC_AWOFS_G54_1P22	22	/* G54.1P22	*/
#define	M_SSEC_AWOFS_G54_1P23	23	/* G54.1P23	*/
#define	M_SSEC_AWOFS_G54_1P24	24	/* G54.1P24	*/
#define	M_SSEC_AWOFS_G54_1P25	25	/* G54.1P25	*/
#define	M_SSEC_AWOFS_G54_1P26	26	/* G54.1P26	*/
#define	M_SSEC_AWOFS_G54_1P27	27	/* G54.1P27	*/
#define	M_SSEC_AWOFS_G54_1P28	28	/* G54.1P28	*/
#define	M_SSEC_AWOFS_G54_1P29	29	/* G54.1P29	*/
#define	M_SSEC_AWOFS_G54_1P30	30	/* G54.1P30	*/
#define	M_SSEC_AWOFS_G54_1P31	31	/* G54.1P31	*/
#define	M_SSEC_AWOFS_G54_1P32	32	/* G54.1P32	*/
#define	M_SSEC_AWOFS_G54_1P33	33	/* G54.1P33	*/
#define	M_SSEC_AWOFS_G54_1P34	34	/* G54.1P34	*/
#define	M_SSEC_AWOFS_G54_1P35	35	/* G54.1P35	*/
#define	M_SSEC_AWOFS_G54_1P36	36	/* G54.1P36	*/
#define	M_SSEC_AWOFS_G54_1P37	37	/* G54.1P37	*/
#define	M_SSEC_AWOFS_G54_1P38	38	/* G54.1P38	*/
#define	M_SSEC_AWOFS_G54_1P39	39	/* G54.1P39	*/
#define	M_SSEC_AWOFS_G54_1P40	40	/* G54.1P40	*/
#define	M_SSEC_AWOFS_G54_1P41	41	/* G54.1P41	*/
#define	M_SSEC_AWOFS_G54_1P42	42	/* G54.1P42	*/
#define	M_SSEC_AWOFS_G54_1P43	43	/* G54.1P43	*/
#define	M_SSEC_AWOFS_G54_1P44	44	/* G54.1P44	*/
#define	M_SSEC_AWOFS_G54_1P45	45	/* G54.1P45	*/
#define	M_SSEC_AWOFS_G54_1P46	46	/* G54.1P46	*/
#define	M_SSEC_AWOFS_G54_1P47	47	/* G54.1P47	*/
#define	M_SSEC_AWOFS_G54_1P48	48	/* G54.1P48	*/
#define	M_SSEC_AWOFS_G54_1P49	49	/* G54.1P49	*/
#define	M_SSEC_AWOFS_G54_1P50	50	/* G54.1P50	*/
#define	M_SSEC_AWOFS_G54_1P51	51	/* G54.1P51	*/
#define	M_SSEC_AWOFS_G54_1P52	52	/* G54.1P52	*/
#define	M_SSEC_AWOFS_G54_1P53	53	/* G54.1P53	*/
#define	M_SSEC_AWOFS_G54_1P54	54	/* G54.1P54	*/
#define	M_SSEC_AWOFS_G54_1P55	55	/* G54.1P55	*/
#define	M_SSEC_AWOFS_G54_1P56	56	/* G54.1P56	*/
#define	M_SSEC_AWOFS_G54_1P57	57	/* G54.1P57	*/
#define	M_SSEC_AWOFS_G54_1P58	58	/* G54.1P58	*/
#define	M_SSEC_AWOFS_G54_1P59	59	/* G54.1P59	*/
#define	M_SSEC_AWOFS_G54_1P60	60	/* G54.1P60	*/
#define	M_SSEC_AWOFS_G54_1P61	61	/* G54.1P61	*/
#define	M_SSEC_AWOFS_G54_1P62	62	/* G54.1P62	*/
#define	M_SSEC_AWOFS_G54_1P63	63	/* G54.1P63	*/
#define	M_SSEC_AWOFS_G54_1P64	64	/* G54.1P64	*/
#define	M_SSEC_AWOFS_G54_1P65	65	/* G54.1P65	*/
#define	M_SSEC_AWOFS_G54_1P66	66	/* G54.1P66	*/
#define	M_SSEC_AWOFS_G54_1P67	67	/* G54.1P67	*/
#define	M_SSEC_AWOFS_G54_1P68	68	/* G54.1P68	*/
#define	M_SSEC_AWOFS_G54_1P69	69	/* G54.1P69	*/
#define	M_SSEC_AWOFS_G54_1P70	70	/* G54.1P70	*/
#define	M_SSEC_AWOFS_G54_1P71	71	/* G54.1P71	*/
#define	M_SSEC_AWOFS_G54_1P72	72	/* G54.1P72	*/
#define	M_SSEC_AWOFS_G54_1P73	73	/* G54.1P73	*/
#define	M_SSEC_AWOFS_G54_1P74	74	/* G54.1P74	*/
#define	M_SSEC_AWOFS_G54_1P75	75	/* G54.1P75	*/
#define	M_SSEC_AWOFS_G54_1P76	76	/* G54.1P76	*/
#define	M_SSEC_AWOFS_G54_1P77	77	/* G54.1P77	*/
#define	M_SSEC_AWOFS_G54_1P78	78	/* G54.1P78	*/
#define	M_SSEC_AWOFS_G54_1P79	79	/* G54.1P79	*/
#define	M_SSEC_AWOFS_G54_1P80	80	/* G54.1P80	*/
#define	M_SSEC_AWOFS_G54_1P81	81	/* G54.1P81	*/
#define	M_SSEC_AWOFS_G54_1P82	82	/* G54.1P82	*/
#define	M_SSEC_AWOFS_G54_1P83	83	/* G54.1P83	*/
#define	M_SSEC_AWOFS_G54_1P84	84	/* G54.1P84	*/
#define	M_SSEC_AWOFS_G54_1P85	85	/* G54.1P85	*/
#define	M_SSEC_AWOFS_G54_1P86	86	/* G54.1P86	*/
#define	M_SSEC_AWOFS_G54_1P87	87	/* G54.1P87	*/
#define	M_SSEC_AWOFS_G54_1P88	88	/* G54.1P88	*/
#define	M_SSEC_AWOFS_G54_1P89	89	/* G54.1P89	*/
#define	M_SSEC_AWOFS_G54_1P90	90	/* G54.1P90	*/
#define	M_SSEC_AWOFS_G54_1P91	91	/* G54.1P91	*/
#define	M_SSEC_AWOFS_G54_1P92	92	/* G54.1P92	*/
#define	M_SSEC_AWOFS_G54_1P93	93	/* G54.1P93	*/
#define	M_SSEC_AWOFS_G54_1P94	94	/* G54.1P94	*/
#define	M_SSEC_AWOFS_G54_1P95	95	/* G54.1P95	*/
#define	M_SSEC_AWOFS_G54_1P96	96	/* G54.1P96	*/

/* 座標系オフセット(ローカル座標)	*/
#define	M_SSEC_LOCALOFS_G54	1	/* ローカル座標系オフセット（G54）	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G55	2	/* ローカル座標系オフセット（G55）	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G56	3	/* ローカル座標系オフセット（G56）	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G57	4	/* ローカル座標系オフセット（G57）	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G58	5	/* ローカル座標系オフセット（G58）	*//* P1X-A020M */
#define	M_SSEC_LOCALOFS_G59	6	/* ローカル座標系オフセット（G59）	*//* P1X-A020M */

/* 座標系オフセット(その他座標系)	*/
#define	M_SSEC_OTHOFS_EXT	1	/* 外部ワークオフセット(EXT)	*/
#define	M_SSEC_OTHOFS_G92OFS	2	/* G92座標系オフセット	*//* P1X-A020M */
#define	M_SSEC_OTHOFS_ROT_TYPE	1000	/* 5軸加工機械構成	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_COM	1100	/* ワーク設置誤差補正データ（共通）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P1	1101	/* ワーク設置誤差補正データ（G54.4P1)	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P2	1102	/* ワーク設置誤差補正データ（G54.4P2）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P3	1103	/* ワーク設置誤差補正データ（G54.4P3）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P4	1104	/* ワーク設置誤差補正データ（G54.4P4）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P5	1105	/* ワーク設置誤差補正データ（G54.4P5）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P6	1106	/* ワーク設置誤差補正データ（G54.4P6）	*//* P1X-A426 */
#define	M_SSEC_OTHOFS_WRKCOMP_P7	1107	/* ワーク設置誤差補正データ（G54.4P7）	*//* P1X-A426 */

/* 系統別工具オフセット（タイプ1）	*/
#define	M_SSEC_TOFS1S_MC_DAT(x)	(x)	/* 補正データ (x=1～999)	*/

/* 系統別工具オフセット（タイプ2）	*/
#define	M_SSEC_TOFS2S_LENG(x)	(x)	/* 長寸法 (x=1～999)	*/
#define	M_SSEC_TOFS2S_RADIUS(x)	(1000 + (x))	/* 径寸法 (x=1～999)	*/
#define	M_SSEC_TOFS2S_WEAR_L(x)	(2000 + (x))	/* 長摩耗 (x=1～999)	*/
#define	M_SSEC_TOFS2S_WEAR_R(x)	(3000 + (x))	/* 径摩耗 (x=1～999)	*/

/* 系統別工具オフセット（タイプ3）	*/
#define	M_SSEC_TOFS3S_EDGE_P(x)	(x)	/* 刃先点P (x=1～999)	*/
#define	M_SSEC_TOFS3S_LENG_X(x)	(1000 + (x))	/* X工具長 (x=1～999)	*/
#define	M_SSEC_TOFS3S_LENG_Y(x)	(2000 + (x))	/* Y工具長 (x=1～999)	*/
#define	M_SSEC_TOFS3S_LENG_Z(x)	(3000 + (x))	/* Z工具長 (x=1～999)	*/
#define	M_SSEC_TOFS3S_EDGE_R(x)	(4000 + (x))	/* 刃先点R (x=1～999)	*/
#define	M_SSEC_TOFS3S_WEAR_X(x)	(5000 + (x))	/* X摩耗 (x=1～999)	*/
#define	M_SSEC_TOFS3S_WEAR_Y(x)	(6000 + (x))	/* Y摩耗 (x=1～999)	*/
#define	M_SSEC_TOFS3S_WEAR_Z(x)	(7000 + (x))	/* Z摩耗 (x=1～999)	*/
#define	M_SSEC_TOFS3S_WEAR_R(x)	(8000 + (x))	/* R摩耗 (x=1～999)	*/

/* 工具管理データ	*/
#define	M_SSEC_TOLMNG_TNO(x)	(0+(x))	/* 工具番号 (x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_KIND(x)	(2000+(x))	/* 工具種類 （x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_RADIUS(x)	(4000+(x))	/* 工具直径 （x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_LENGTH(x)	(6000+(x))	/* 工具長（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_DATA1(x)	(8000+(x))	/* 工具形状データ１（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_DATA2(x)	(10000+(x))	/* 工具形状データ２（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_COLOR(x)	(12000+(x))	/* 工具色（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_HOL_H(x)	(14000+(x))	/* ホルダ高さ（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_HOL_R(x)	(16000+(x))	/* ホルダ直径（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_TREGDAT_ALL(x)	(70000+(x))	/* 工具登録データ（一括）（x=1～1000)	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_FORMAT	100000	/* 工具管理データフォーマット	*//* P1X-A269A */
#define	M_SSEC_TOLMNG_TNO_CHK	100001	/* 工具管理工具番号重複チェック	*//* P1X-A269A */

/* 系統共通工具オフセット（タイプ2）	*/

/* 系統共通工具オフセット（タイプ3）	*/

/* 寿命管理データ	*/
#define	M_SSEC_TLIFEDAT_TOOL_NO(x)	(1000 + (x))	/* 工具番号 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_STATUS(x)	(2000 + (x))	/* ステータス (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_MTHD(x)	(3000 + (x))	/* 方式 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_L_COMPEN(x)	(4000 + (x))	/* 長補正 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_R_COMPEN(x)	(5000 + (x))	/* 径補正 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_USED(x)	(6000 + (x))	/* 使用(時間、回数、摩耗量) (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_LIFE(x)	(7000 + (x))	/* 寿命(時間、回数、摩耗量) (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_AUXIL(x)	(8000 + (x))	/* 補助 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_GROUP_NO(x)	(9000 + (x))	/* グループ番号 (x=1～1000)	*/
#define	M_SSEC_TLIFEDAT_DEL_GROUP	10001	/* 指定したグループ番号のグループを削除する	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_ADD_TOOL	10002	/* 工具を新規追加する	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GROUPID	10003	/* 指定したグループ番号のグループID	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GROUPNO(x)	(11000+(x))	/* 指定したグループIDのグループ番号(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TOP_REC_ID(x)	(12000+(x))	/* 指定したグループIDの先頭レコードID(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TLNOS_GROUPID(x)	(13000+(x))	/* 指定したグループIDに登録されている工具本数(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_CHG_GROUP(x)	(14000+(x))	/* 指定したグループIDのグループ番号を変更する(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_DEL_TOOL(x)	(15000+(x))	/* 指定したレコードの工具を削除する(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_TOOLDATA(x)	(16000+(x))	/* 指定したレコードの工具情報(x=1～1000)	*//* P1X-A006d */
#define	M_SSEC_TLIFEDAT_GNO_DSP(x)	(17000+(x))	/* 指定したグループIDのグループ番号取得 (60個) (x=1～1000)	*//* P1X-A104K */
#define	M_SSEC_TLIFEDAT_GRP_LIFE_INFO(x)	(18000+(x))	/* 指定したグループIDの寿命到達情報取得(60個) (x=1～1000)	*//* P1X-A006BE */
#define	M_SSEC_TLIFEDAT_L1TOOL_USE_TIME(x)	(100000+(x))	/* 工具使用積算時間(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_LIFE_TIME(x)	(101000+(x))	/* 工具寿命設定時間(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_USE_NUM(x)	(102000+(x))	/* 工具使用積算回数(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1TOOL_LIFE_NUM(x)	(103000+(x))	/* 工具寿命設定回数(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1STATUS_A(x)	(104000+(x))	/* ステータスA(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1STATUS_B(x)	(105000+(x))	/* ステータスB(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L1DEL_DAT(x)	(106000+(x))	/* 指定された工具の内容をクリアする(工具番号 x=1～200)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2DEL_GROUP	200000	/* 指定したグループ番号のグループを削除する	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2ADD_TOOL	200001	/* 工具を新規追加する	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_ID(x)	(201000+(x))	/* 指定したグループ番号のグループID(x=1～9999: グループ番号1～9999)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_NO(x)	(220000+(x))	/* 指定したグループIDのグループ番号(x=1～200: グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2TOP_REC_ID(x)	(221000+(x))	/* 指定したグループIDの先頭レコードの工具ID(x=1～200: グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_TOOL_NUM(x)	(222000+(x))	/* 指定したグループIDに登録されている工具本数(x=1～200: グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2CHG_GROUP(x)	(223000+(x))	/* 指定したグループIDのグループ番号を変更する(x=1～200: グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2DEL_TOOL(x)	(224000+(x))	/* 指定した工具IDのレコードを削除する(x=1～200: 工具ID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2TOOL_NO(x)	(225000+(x))	/* 指定した工具IDの工具No.(x=1～200: 工具ID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2COMP_NO(x)	(226000+(x))	/* 指定した工具IDの補正No.(x=1～200: 工具ID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_DATA(x)	(227000+(x))	/* 指定した工具IDの使用(MIN) (x=1～200: 工具ID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2STATUS(x)	(228000+(x))	/* 指定した工具IDのST(x=1～200: 工具ID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2SYSTEM(x)	(229000+(x))	/* 指定した工具IDの方式(x=1～200:グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2LIFE(x)	(230000+(x))	/* 指定した工具IDの寿命(x=1～200:グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2GROUP_LIFE_CHK(x)	(231000+(x))	/* 指定したグループIDに寿命工具があるか(x=1～200: グループID0～199)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_GROUP_NO	232000	/* 使用中工具のグループNo.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_TOOL_NO	232001	/* 使用中工具の工具No.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_COMP_NO	232002	/* 使用中工具の補正No.	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_SYSTEM	232003	/* 使用中工具の方式	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_USEDATA	232004	/* 使用中工具の使用(MIN)	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_SUM	232005	/* 使用中工具の合計	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_LIFE	232006	/* 使用中工具の寿命	*//* P1X-A006f */
#define	M_SSEC_TLIFEDAT_L2USE_STATUS	232007	/* 使用中工具のST	*//* P1X-A006f */

/* 寿命管理情報	*/
#define	M_SSEC_TLIFINF_TOOL_NOS	1	/* 寿命管理使用本数	*/
#define	M_SSEC_TLIFINF_GROUP_NOS	2	/* 寿命管理登録グループ数	*/
#define	M_SSEC_TLIFINF_CHG_FLAG	3	/* 寿命管理データ更新フラグ	*//* P0Y-A013B */
#define	M_SSEC_TLIFINF_TOOL_MAX	4	/* 寿命管理最大登録本数	*//* P1X-A006d */
#define	M_SSEC_TLIFINF_NEXT_TOOL	100	/* 寿命管理次回使用工具番号	*//* P1X-A354 */
#define	M_SSEC_TLIFINF_L1TOOL_MAX	1000	/* 寿命管理最大登録本数(Ｌ系TYPEⅠ)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2TOOL_NOS	2000	/* 寿命管理使用本数(Ｌ系TYPEⅡ)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2ALL_GROUP_NOS	2001	/* 寿命管理登録グループ数(Ｌ系TYPEⅡ)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_L2TOOL_MAX	2002	/* 寿命管理最大登録本数(Ｌ系TYPEⅡ)	*//* P1X-A006f */
#define	M_SSEC_TLIFINF_FORMAT	10000	/* 寿命管理データフォーマット	*//* P1X-A006AG */

/* 工具登録	*/
#define	M_SSEC_TOLREG_POT_NO(x)	(x)	/* 工具登録データ(ポット番号) (x=1～360)	*/
#define	M_SSEC_TOLREG_TOOL_NO(x)	(1000 + (x))	/* 工具登録データ(工具番号) (x=1～360)	*/
#define	M_SSEC_TOLREG_D_NO(x)	(2000 + (x))	/* 工具登録データ(補助:Ｄ) (x=1～360)	*/

/* 主軸・待機	*/
#define	M_SSEC_SPWAIT_TOOL_NO(x)	(x)	/* 主軸待機(工具番号) (x=0～4)	*/
#define	M_SSEC_SPWAIT_D_NO(x)	(10+(x))	/* 主軸待機(補助D) (x=0～4)	*//* P1X-A006U */
#define	M_SSEC_SPWAIT_DISP_NOS	200	/* 主軸待機表示個数	*/
#define	M_SSEC_SPWAIT_SPINDL_TLIFE	1000	/* 主軸工具の工具寿命管理データ	*//* P0Y-A013E */
#define	M_SSEC_SPWAIT_WAIT_TLIFE	1001	/* 待機工具の工具寿命管理データ	*//* P0Y-A013E */

/* 工具計測	*/
#define	M_SSEC_TLM_SW	1	/* TLMスイッチ	*/
#define	M_SSEC_TLM_LAST_MOVE_DIRECTION	2	/* 最終移動方向	*//* P1X-A080 */
#define	M_SSEC_TLM_LAST_MOVE_AXIS	3	/* 最終移動軸	*//* P1X-A080 */
#define	M_SSEC_TLM_SECOND_SKIP	4	/* 2回目スキップ接触	*//* P1X-A080 */
#define	M_SSEC_TLM_RST_INPUT_STS	5	/* リセット入力状態	*//* P1X-A080 */
#define	M_SSEC_TLM_SKP_POS_READ_STS	6	/* スキップ位置読取り状態	*//* P1X-A080 */
#define	M_SSEC_TLM_TLMS_SW	100	/* TLMS 状態(L系工具計測2)	*//* P1X-A128B */
#define	M_SSEC_TLM_L2_STS	101	/* 工具補正量計測 状態(L系工具計測2)	*//* P1X-A128B */
#define	M_SSEC_TLM_EXTWOFS_STS	102	/* 外部ワーク座標オフセット計測 状態(L系工具計測2)	*//* P1X-A128B */
#define	M_SSEC_TLM_L2_START	103	/* 工具補正量計測要求(L系工具計測2)	*//* P1X-A128B */
#define	M_SSEC_TLM_EXTWOFS_START	104	/* 外部ワーク座標オフセット計測要求(L系工具計測2)	*//* P1X-A128B */

/* バッファ修正	*/
#define	M_SSEC_BUFEDT_STATUS	1	/* バッファ修正状況	*//* P0Y-A013B */
#define	M_SSEC_BUFEDT_PATH	2	/* バッファ修正プログラムパス	*//* P0Y-A013B */

/* バックグランドチェック	*/
#define	M_SSEC_PRGCHK_OPT_BLKSKIP	1	/* オプショナルブロックスキップ	*//* P1X-A202A */

/* ファイル情報	*/
#define	M_SSEC_FILEINF_REG_PROG_NOS	1	/* 加工プログラム登録本数	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_USED_PROG_NOS	2	/* 加工プログラム残本数	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_CAPA_CHAR_NOS	3	/* 加工プログラム記憶文字数	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_FREE_CHAR_NOS	4	/* 加工プログラム残り文字数	*//* P0Y-A013B */
#define	M_SSEC_FILEINF_TRANS_SIZE	10	/*転送済データサイズ	*//* P0Y-A028B */

/* プログラム一覧(メモリ)	*/

/* プログラム一覧(固定サイクル)	*/

/* プログラム一覧(機械メーカマクロ)	*/

/* プログラム一覧(HD)	*/

/* プログラム一覧(ICカード)	*/

/* プログラム一覧(FLD)	*/

/* プログラム一覧(イーサネット)	*/

/* 速度情報	*/
#define	M_SSEC_SPDINF_FC	1	/* FC(合成速度)	*/
#define	M_SSEC_SPDINF_FA	2	/* FA：F指令送り速度	*/
#define	M_SSEC_SPDINF_FH	3	/* FH：先端速度	*//* P1X-A125 */
#define	M_SSEC_SPDINF_DISP_FC	101	/* 速度表示FC(合成速度)	*//* P1X-A006 */

/* 主軸情報	*/
#define	M_SSEC_SPINF_REV_SPD	1	/* 主軸回転速度(rev/min)	*/
#define	M_SSEC_SPINF_LOD	2	/* 主軸負荷値	*/
#define	M_SSEC_SPINF_OPT_SP_NO	1000	/* 光主軸の主軸番号	*//* P1X-A091A */
#define	M_SSEC_SPINF_MET_SP_NO	1001	/* メタル主軸の主軸番号	*//* P1X-A091A */
#define	M_SSEC_SPINF_OPT_SP_NUM	1002	/* 光主軸の総軸数	*//* P1X-A091A */
#define	M_SSEC_SPINF_MET_SP_NUM	1003	/* メタル主軸の総軸数	*//* P1X-A091A */

/* 運転状態	*/
#define	M_SSEC_EXST_MACRO_EXEC_LV	1	/* マクロ実行レベル	*/
#define	M_SSEC_EXST_BUSY_COLLATION	2	/* 照合停止中状態	*/
#define	M_SSEC_EXST_COLLATION_O	3	/* 照合停止O番号	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_N	4	/* 照合停止N番号	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_B	5	/* 照合停止B番号	*//* P1X-A107 */
#define	M_SSEC_EXST_COLLATION_PATH	6	/* 照合停止パス名	*//* P1X-A107 */
#define	M_SSEC_EXST_NC_RUN_STATUS	10	/* 運転状態1(運転ステータス)	*/
#define	M_SSEC_EXST_NC_RUN_MODE	11	/* 運転状態2(運転モード)	*/
#define	M_SSEC_EXST_AUTO_STL	20	/* 自動運転起動中	*/
#define	M_SSEC_EXST_OPERATION	21	/* 自動運転中	*/
#define	M_SSEC_EXST_STOP_OPERATION	22	/* 自動運転休止中	*/
#define	M_SSEC_EXST_LOCK_KEY_1	100	/* データ保護キー1	*/
#define	M_SSEC_EXST_LOCK_KEY_2	101	/* データ保護キー2	*/
#define	M_SSEC_EXST_LOCK_KEY_3	102	/* データ保護キー3	*/
#define	M_SSEC_EXST_PISW1	200	/* 外部入力信号1	*//* P0Y-A013B */
#define	M_SSEC_EXST_PIJSP	201	/* JOGモード(特殊)信号	*//* P0Y-A013B */
#define	M_SSEC_EXST_PODT1	202	/* NC状態出力信号1	*//* P0Y-A013B */
#define	M_SSEC_EXST_POAL	203	/* アラーム状態信号	*//* P0Y-A013B */
#define	M_SSEC_EXST_AUTO_MOD	204	/* 運転(自動)モード関連信号	*//* P0Y-A013B */
#define	M_SSEC_EXST_MANU_MOD	205	/* 運転(手動)モード関連信号	*//* P0Y-A013B */
#define	M_SSEC_EXST_RST_STS	206	/* 再開サーチ状態	*//* P0Y-A013B */
#define	M_SSEC_EXST_RST_TP1STS	207	/* 再開サーチタイプ1有効	*//* P0Y-A013B */
#define	M_SSEC_EXST_EXSRCH_STS	208	/* 拡張運転サーチ状態	*//* P0Y-A013B */
#define	M_SSEC_EXST_EXSRCH_LINE	209	/* サーチ中の現在サーチ行番号	*//* P0Y-A013B */
#define	M_SSEC_EXST_CHECK_STS	210	/* チェック中状態	*//* P0Y-A038 */
#define	M_SSEC_EXST_3D_M_CHECK_STS	211	/* 3D機械干渉チェック中状態	*//* P1X-A269M */
#define	M_SSEC_EXST_PRON	220	/* 電源再投入要パラメータフラグ	*//* P1X-A006 */
#define	M_SSEC_EXST_PLC_RUN_STOP	221	/* PLC Run/Stop状態	*//* P1X-A006E */
#define	M_SSEC_EXST_MDI_STS	222	/* MDI設定状態	*//* P1X-A006R */
#define	M_SSEC_EXST_MDI_CLR_STS	223	/* MDIクリア完了	*//* P1X-A348 */
#define	M_SSEC_EXST_CONNECT_STS	224	/* 複数Network接続中状態	*//* P1X-A020AX */
#define	M_SSEC_EXST_RAS_INPOSITION	300	/* インポジション	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_INTERLOCK_P	310	/* インタロック(+)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_INTERLOCK_N	311	/* インタロック(-)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_EXTDCC_P	320	/* 外部減速(+)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAS_EXTDCC_N	321	/* 外部減速(-)	*//* P1X-A144 */
#define	M_SSEC_EXST_RAPID_OVERRIDE	330	/* 早送りオーバライド	*//* P1X-A167 */
#define	M_SSEC_EXST_SCRN_REQ_UP	400	/* Y729(画面表示要求信号)の立上り信号	*//* P1X-A276 */
#define	M_SSEC_EXST_SCRN_REQ_DOWN	401	/* Y729(画面表示要求信号)の立下り信号	*//* P1X-A276 */
#define	M_SSEC_EXST_MACRO_ALM	500	/* マクロアラーム発生状態	*//* P1X-A006BB */

/* 軸ステータス	*/
#define	M_SSEC_AXISSTS_POFF	1	/* 軸ステータス(軸取り外し)	*/
#define	M_SSEC_AXISSTS_SVOF	2	/* 軸ステータス(サーボオフ)	*/
#define	M_SSEC_AXISSTS_REF1	3	/* 軸ステータス(第1ref)	*/
#define	M_SSEC_AXISSTS_REF2	4	/* 軸ステータス(第2ref)	*/
#define	M_SSEC_AXISSTS_REF3	5	/* 軸ステータス(第3ref)	*/
#define	M_SSEC_AXISSTS_REF4	6	/* 軸ステータス(第4ref)	*/
#define	M_SSEC_AXISSTS_MR	7	/* 軸ステータス(ミラーイメージ)	*/
#define	M_SSEC_AXISSTS_RSTAT	8	/* 軸ステータス(再開サーチRP)	*/
#define	M_SSEC_AXISSTS_CT	9	/* 軸ステータス(補助軸状態CT)	*//* P1X-A299J */
#define	M_SSEC_AXISSTS_SVOF_AL	100	/* 軸ステータス(サーボオフ)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF1_AL	101	/* 軸ステータス(第1ref)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF2_AL	102	/* 軸ステータス(第2ref)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF3_AL	103	/* 軸ステータス(第3ref)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_REF4_AL	104	/* 軸ステータス(第4ref)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_MR_AL	105	/* 軸ステータス(ミラーイメージ）全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_RP_AL	106	/* 軸ステータス(再開サーチRP)全軸	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_PROG_MR_AL	200	/* プログラムミラー軸（全軸）	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_AXOFST	201	/* 軸取り外し中情報	*//* P0Y-A013B */
#define	M_SSEC_AXISSTS_FDT_DIRECT	202	/* 軸移動方向(FDT方向)	*//* P1X-A006AC */

/* カウンタ	*/
#define	M_SSEC_CNTR_POS_WRK	1	/* ワーク座標位置カウンタ	*/
#define	M_SSEC_CNTR_POS_MCH	2	/* 機械位置カウンタ	*/
#define	M_SSEC_CNTR_POS_CURRENT	3	/* 現在位置カウンタ	*/
#define	M_SSEC_CNTR_POS_RELATV	4	/* 相対位置カウンタ	*/
#define	M_SSEC_CNTR_POS_PROGRAM	5	/* プログラム位置カウンタ	*/
#define	M_SSEC_CNTR_DISTANCE	6	/* 残指令	*/
#define	M_SSEC_CNTR_SKIP	7	/* スキップ座標カウンタ（ワーク座標）	*/
#define	M_SSEC_CNTR_INTER	8	/* 手動割込み量1(ABS Off)	*/
#define	M_SSEC_CNTR_INTER2	9	/* 手動割込み量2(ABS On)	*/
#define	M_SSEC_CNTR_NEXT	10	/* 次指令	*/
#define	M_SSEC_CNTR_POS_RESTART	11	/* 再開位置カウンタ（ワーク座標）	*/
#define	M_SSEC_CNTR_POS_RE_DIST	12	/* 再開残距離カウンタ	*/
#define	M_SSEC_CNTR_POS_RE_MCH	13	/* 再開位置カウンタ(機械座標）	*//* P0Y-A013B */
#define	M_SSEC_CNTR_POS_PROG2	14	/* プログラム位置カウンタ２	*//* P0Y-A013B */
#define	M_SSEC_CNTR_POS_TLM	15	/* TLM位置カウンタ	*/
#define	M_SSEC_CNTR_TLM_SKIP	16	/* TLMスキップ位置カウンタ(mxtlms)	*//* P0Y-A013B */
#define	M_SSEC_CNTR_TLM	17	/* TLM位置カウンタ(mxtlm)	*//* P0Y-A013B */
#define	M_SSEC_CNTR_MXSKPM	18	/* スキップ座標カウンタ（機械座標）	*//* P0Y-A013E */
#define	M_SSEC_CNTR_MXSKPR	19	/* スキップ残距離カウンタ	*//* P0Y-A013E */
#define	M_SSEC_CNTR_LM	20	/* 補間合成ベクトル長（lm)	*//* P0Y-A013E */
#define	M_SSEC_CNTR_POS_CURRENT_B	21	/* 現在位置Bカウンタ	*//* P0Y-A013c */
#define	M_SSEC_CNTR_SKIP_WORK	22	/* スキップ機械値（manual skip position）	*//* P1X-A080 */
#define	M_SSEC_CNTR_SKP_COORD_POS	23	/* スキップ座標位置(スキップ座標カウンタ)	*//* P1X-A080 */
#define	M_SSEC_CNTR_MEAS_POS	24	/* 測定位置	*//* P1X-A080 */
#define	M_SSEC_CNTR_POS_TIP_M	25	/* 先端機械位置	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_TIP_W	26	/* 先端ワーク位置	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_T_HDL	27	/* 工具軸移動量(ABSオフ)	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_MECHA1	28	/* 第1メカ軸角度	*//* P1X-A125 */
#define	M_SSEC_CNTR_POS_MECHA2	29	/* 第2メカ軸角度	*//* P1X-A125 */
#define	M_SSEC_CNTR_GTR_POS_MCH	30	/* 機械位置カウンタ(トレース用)	*//* P1X-A006r */
#define	M_SSEC_CNTR_GTR_POS_WRK	31	/* ワーク座標カウンタ（トレース用）	*//* P1X-A006r */
#define	M_SSEC_CNTR_POS_MCH_DATA	32	/* 機械位置カウンタ（傾斜軸無効）	*//* P1X-A100G */
#define	M_SSEC_CNTR_POS_FB	33	/* フィードバック位置	*//* P1X-A308 */
#define	M_SSEC_CNTR_TABLE	34	/* テーブル座標系カウンタ	*//* P1X-A326 */
#define	M_SSEC_CNTR_WORKPOS	35	/* ワーク設置座標系カウンタ	*//* P1X-A326 */
#define	M_SSEC_CNTR_SLOPE	36	/* 傾斜面座標系カウンタ	*//* P1X-A326 */
#define	M_SSEC_CNTR_POS_STDCOORD	37	/* 基準座標位置カウンタ	*//* P1X-A451 */
#define	M_SSEC_CNTR_GTR_POS_TOOL	38	/* 工具位置カウンタ(トレース用)	*//* P1X-A020BK */
#define	M_SSEC_CNTR_TLM1_POS_TOOL	39	/* L系手動工具長測定1の工具基準点	*//* P1X-A466 */
#define	M_SSEC_CNTR_TLM1_WRK	40	/* L系手動工具長測定1カウンタ(ワーク座標系オフセット方式) (ワーク座標位置+手動割込み量1(ABS Off))	*//* P1X-A473 */
#define	M_SSEC_CNTR_CNTR_ZERO	50	/* カウンタ・ゼロ	*/
#define	M_SSEC_CNTR_ORG_ZERO	51	/* オリジン・ゼロ	*/
#define	M_SSEC_CNTR_ORG_CANCEL	52	/* オリジンキャンセル	*//* P1X-A114 */
#define	M_SSEC_CNTR_POS_INDEXDIST	10000	/* 割出残距離カウンタ	*//* P1X-A451 */

/* MSTB実行状態	*/
#define	M_SSEC_MSTBE_M_COD	1	/* M指令/手動数値指令(M1)	*/
#define	M_SSEC_MSTBE_M2_COD	2	/* M指令/手動数値指令(M2)	*/
#define	M_SSEC_MSTBE_M3_COD	3	/* M指令/手動数値指令(M3)	*/
#define	M_SSEC_MSTBE_M4_COD	4	/* M指令/手動数値指令(M4)	*/
#define	M_SSEC_MSTBE_S_COD	101	/* M指令/手動数値指令(S1)	*/
#define	M_SSEC_MSTBE_S2_COD	102	/* M指令/手動数値指令(S2)	*/
#define	M_SSEC_MSTBE_S3_COD	103	/* M指令/手動数値指令(S3)	*/
#define	M_SSEC_MSTBE_S4_COD	104	/* M指令/手動数値指令(S4)	*/
#define	M_SSEC_MSTBE_S5_COD	105	/* M指令/手動数値指令(S5)	*//* P1X-A297 */
#define	M_SSEC_MSTBE_S6_COD	106	/* M指令/手動数値指令(S6)	*//* P1X-A297 */
#define	M_SSEC_MSTBE_T_COD	201	/* M指令/手動数値指令(T1)	*/
#define	M_SSEC_MSTBE_T_CMD	251	/* L系T指令(工具番号+補正量)	*//* P1X-A513 */
#define	M_SSEC_MSTBE_B_COD	301	/* M指令/手動数値指令(B1)	*/
#define	M_SSEC_MSTBE_B2_COD	302	/* M指令/手動数値指令(B2)	*/
#define	M_SSEC_MSTBE_B3_COD	303	/* M指令/手動数値指令(B3)	*/
#define	M_SSEC_MSTBE_B4_COD	304	/* M指令/手動数値指令(B4)	*/
#define	M_SSEC_MSTBE_RST_T	401	/* 再開サーチT指令履歴	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S1	411	/* 再開サーチS1指令履歴	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S2	412	/* 再開サーチS2指令履歴	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_S3	413	/* 再開サーチS3指令履歴	*//* P1X-A079C */
#define	M_SSEC_MSTBE_RST_S4	414	/* 再開サーチS4指令履歴	*//* P1X-A079C */
#define	M_SSEC_MSTBE_RST_S5	415	/* 再開サーチS5指令履歴	*//* P1X-A297 */
#define	M_SSEC_MSTBE_RST_S6	416	/* 再開サーチS6指令履歴	*//* P1X-A297 */
#define	M_SSEC_MSTBE_RST_B	421	/* 再開サーチB指令履歴	*//* P0Y-A013B */
#define	M_SSEC_MSTBE_RST_M	431	/* 再開サーチM指令履歴	*//* P0Y-A013B */

/* PLC情報	*/
#define	M_SSEC_PLCINF_SIG	1	/* PLC信号状態	*/

/* 積算時間	*/
#define	M_SSEC_RTIME_POWER_ON	1	/* 電源入時間	*/
#define	M_SSEC_RTIME_AUTO_OP	2	/* 自動運転時間	*/
#define	M_SSEC_RTIME_AUTO_STL	3	/* 自動起動時間	*/
#define	M_SSEC_RTIME_EXT1	4	/* 外部積算時間1	*/
#define	M_SSEC_RTIME_EXT2	5	/* 外部積算時間2	*/
#define	M_SSEC_RTIME_DATE	6	/* 日付	*/
#define	M_SSEC_RTIME_TIME	7	/* 時刻	*/
#define	M_SSEC_RTIME_CYCLE	8	/* サイクル時間	*//* P1X-A020H */
#define	M_SSEC_RTIME_PROCESS_TIME	100	/* 加工時間算出	*//* P1X-A084A */

/* Gモーダル	*/
#define	M_SSEC_GMDL_G(x)	(x)	/* Gコード (x=グループ1～27)	*//* P0Y-A013D */
#define	M_SSEC_GMDL_GEO_MC_NO	51	/* 形状(径)補正モーダルの工具補正番号	*/
#define	M_SSEC_GMDL_GEO_RADIUS	52	/* 形状(径)補正モーダルの補正量	*/
#define	M_SSEC_GMDL_GEO_WEAR	53	/* 形状(径)補正モーダルの摩耗量	*/
#define	M_SSEC_GMDL_WEAR_MC_NO	54	/* 径補正モーダルのの工具摩耗番号	*/
#define	M_SSEC_GMDL_TPOS	55	/* 使用中工具の位置補正ベクトル	*//* P1X-A006h */
#define	M_SSEC_GMDL_LENG_MC_NO	101	/* 長補正モーダルの工具補正番号	*/
#define	M_SSEC_GMDL_LENG_AXIS	102	/* 長補正モーダルの軸名称	*/
#define	M_SSEC_GMDL_LENG_OFFSET	103	/* 長補正モーダルの補正量	*/
#define	M_SSEC_GMDL_LENG_WEAR	104	/* 長補正モーダルの摩耗量	*/
#define	M_SSEC_GMDL_H_COMP_AL	105	/* 長補正中軸情報（全軸）	*//* P0Y-A013B */
#define	M_SSEC_GMDL_H_COMP_NO	106	/* 長補正モーダルの工具補正番号	*//* P0Y-A013B */
#define	M_SSEC_GMDL_SCALE_MAG	201	/* スケーリング倍率(G50P_)[Grp11]	*/
#define	M_SSEC_GMDL_COORD_ROT	202	/* 座標回転角度(G68R_)[Grp16]	*/
#define	M_SSEC_GMDL_H_SPEED_MODE	203	/* 高速加工モ－ド(G5P_)	*/
#define	M_SSEC_GMDL_GMOV	204	/* gmov 切削／非切削指令	*//* P0Y-A013B */
#define	M_SSEC_GMDL_AWOFS_NO	205	/* 拡張ワーク座標選択(G54.1P_)	*//* P0Y-A013B */
#define	M_SSEC_GMDL_CUTTING_STS	206	/* 切削中情報	*//* P0Y-A013B */
#define	M_SSEC_GMDL_SCALE_MAG2	207	/* スケーリング倍率(G50P_)[Grp11] (Magic互換)	*//* P0Y-A013J */
#define	M_SSEC_GMDL_COORD_ROT2	208	/* 座標回転角度(G68R_)[Grp16] (Magic互換)	*//* P0Y-A013J */
#define	M_SSEC_GMDL_3D_DISP_STS	209	/* 3次元座標変換状態（ワーク座標選択G68表示用）	*//* P1X-A059 */
#define	M_SSEC_GMDL_H_SPEED_SPLINE	210	/* スプライン補間モード	*//* P1X-B104 */
#define	M_SSEC_GMDL_H_SPEED_SSS	211	/* SSS制御	*//* P1X-B104 */
#define	M_SSEC_GMDL_PREMOD	212	/* 高精度制御モード(G08P)	*//* P1X-A089B */
#define	M_SSEC_GMDL_WAC_NO	213	/* ワーク設置誤差補正選択(G54.4P_)	*//* P1X-A426 */
#define	M_SSEC_GMDL_APPLICATION	301	/* 選択中加工用途	*//* P1X-A517 */
#define	M_SSEC_GMDL_ACC_LV	302	/* 選択中条件	*//* P1X-A517 */
#define	M_SSEC_GMDL_FEED_MODE	500	/* 送り種別	*//* P1X-A020BK */

/* Fモーダル	*/
#define	M_SSEC_FMDL_FA	1	/* プログラム指令Fモーダル(FA)	*/
#define	M_SSEC_FMDL_FM	2	/* 手動送り速度(FM)	*/
#define	M_SSEC_FMDL_FS	3	/* 同期送り速度(FS)	*/
#define	M_SSEC_FMDL_FE	4	/* ねじ切りリード(FE)	*/
#define	M_SSEC_FMDL_DWELL	5	/* ドウェル残り時間	*/
#define	M_SSEC_FMDL_G96S(x)	(10 + (x))	/* 周速一定制御（周速度S)　(x=1～6)	*//* P0Y-A013B */

/* MSTBモーダル	*/
#define	M_SSEC_MSTBMDL_S(x)	(x)	/* Sモーダル(S1～S6) (x=1～6)	*/
#define	M_SSEC_MSTBMDL_T(x)	(100 + (x))    	/* Tモーダル(T1～T2) (x=1～2)	*/
#define	M_SSEC_MSTBMDL_M(x)	(200 + (x))    	/* Mモーダル(M1～M4) (x=1～4)	*/
#define	M_SSEC_MSTBMDL_B(x)	(300 + (x))    	/* Bモーダル(B1～B4) (x=1～4)	*/

/* ノンモーダル情報	*/

/* プログラム実行状態	*/
#define	M_SSEC_PGST_NEST_LEBEL	1	/* 実行中サブプログラムのネストレベル	*/
#define	M_SSEC_PGST_INVLD_STS1	2	/* 無効状態：シングルブロック・MST完了	*//* P0Y-A013B */
#define	M_SSEC_PGST_INVLD_STS2	3	/* 無効状態：Feedホールド・オーバライド・イグザクト	*//* P0Y-A013B */
#define	M_SSEC_PGST_ACT_PROG_PATH	100	/* 実行中プログラムのメインProgパス	*//* P0Y-A013B */
#define	M_SSEC_PGST_ACT_MAIN_O	101	/* 実行中メイン O番号	*/
#define	M_SSEC_PGST_ACT_MAIN_N	102	/* 実行中メイン N番号	*/
#define	M_SSEC_PGST_ACT_MAIN_B	103	/* 実行中メイン B番号	*/
#define	M_SSEC_PGST_ACT_MAIN_PER	105	/* 実行中メイン 割合表示(%)	*//* P1X-A410 */
#define	M_SSEC_PGST_ACT_SUB_O	201	/* 実行中サブ O番号	*/
#define	M_SSEC_PGST_ACT_SUB_N	202	/* 実行中サブ N番号	*/
#define	M_SSEC_PGST_ACT_SUB_B	203	/* 実行中サブ B番号	*/
#define	M_SSEC_PGST_ACT_SUB_PER	205	/* 実行中サブ 割合表示(%)	*//* P1X-A410 */
#define	M_SSEC_PGST_BUFF_PRG_POS	210	/* バッファ表示プログラムの表示位置（プログラム先頭からのbyte数）	*//* P1X-A020AV */
#define	M_SSEC_PGST_RUN_AFTER_SRCH	211	/* サーチ後の自動起動未実施状態	*//* P1X-A232 */
#define	M_SSEC_PGST_LST_PROG_PATH	300	/* 最後に運転したプログラムのパス	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_O	301	/* 最後に運転したプログラムのメインO番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_N	302	/* 最後に運転したプログラムのメインN番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_MAIN_B	303	/* 最後に運転したプログラムのメインB番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_O	401	/* 最後に運転したプログラムのサブO番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_N	402	/* 最後に運転したプログラムのサブN番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_B	403	/* 最後に運転したプログラムのサブB番号	*//* P0Y-A013B */
#define	M_SSEC_PGST_LST_SUB_P	404	/* 最後に運転したプログラムのサブP番号	*//* P1X-A079D */
#define	M_SSEC_PGST_SRCH_N	501	/* サーチしたN番号	*//* P1X-B316 */
#define	M_SSEC_PGST_SRCH_B	502	/* サーチしたB番号	*//* P1X-B316 */

/* プログラムツリー	*/
#define	M_SSEC_TREE_MAIN_DEV	1	/* 実行中メイン デバイス名	*/
#define	M_SSEC_TREE_MAIN_O	2	/* 実行中メイン O番号	*/
#define	M_SSEC_TREE_MAIN_N	3	/* 実行中メイン N番号	*/
#define	M_SSEC_TREE_MAIN_B	4	/* 実行中メイン B番号	*/
#define	M_SSEC_TREE_SUB_DEV(x)	(100 + (x))    	/* 実行中サブ1～10 デバイス名 (x=1～10)	*/
#define	M_SSEC_TREE_SUB_O(x)	(200 + (x))    	/* 実行中サブ1～10 O番号 (x=1～10)	*/
#define	M_SSEC_TREE_SUB_N(x)	(300 + (x))    	/* 実行中サブ1～10 N番号 (x=1～10)	*/
#define	M_SSEC_TREE_SUB_B(x)	(400 + (x))    	/* 実行中サブ1～10 B番号 (x=1～10)	*/
#define	M_SSEC_TREE_SUB_L(x)	(500 + (x))    	/* 実行中サブ1～10 繰返し回数 (x=1～10)	*/
#define	M_SSEC_TREE_PROG_LIST	1000	/* 実行中プログラムツリー情報(ONB) 表示プログラム名	*//* P0Y-A013B */
#define	M_SSEC_TREE_PROG_LIST2	1001	/* 実行中プログラムツリー情報(ONB) 内部プログラム名	*//* P1X-A307 */
#define	M_SSEC_TREE_PROG_LIST_PATH(x)	(1100 + (x))	/* 実行中プログラムのパス情報(X=1～2) ※HMIからは使用禁止	*//* P1X-A099W */

/* グラフィックチェック用プログラムツリー	*/
#define	M_SSEC_TREEGC_MAIN_O	1	/* チェック用実行メイン O番号	*/
#define	M_SSEC_TREEGC_MAIN_N	2	/* チェック用実行メイン N番号	*/
#define	M_SSEC_TREEGC_MAIN_B	3	/* チェック用実行メイン B番号	*/

/* 任意軸重畳データ	*/

/* NCアラーム（エラー・警告）	*/

/* PLCアラーム	*/

/* PLC警告（オペレータメッセージ）	*/

/* PLCデバイス(bit)	*/
#define	M_SSEC_PLBIT_X_1SHOT(x)	(1 + (x))	/* デバイスX (x=0～2815　/ [M7] x=0～8191)	*/
#define	M_SSEC_PLBIT_Y_1SHOT(x)	(10000 + (x))	/* デバイスY (x=0～3583　/ [M7] x=0～8191)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_M_1SHOT(x)	(20000 + (x))	/* デバイスM (x=0～8191　/ [M7] x=0～10239)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_F_1SHOT(x)	(40000 + (x))	/* デバイスF (x=0～255　  / [M7] x=0～1024)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_L_1SHOT(x)	(50000 + (x))	/* デバイスL (x=0～255 　 / [M7] x=0～511)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_SM_1SHOT(x)	(60000 + (x))	/* デバイスSM (x=0～127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_T_1SHOT(x)	(70000 + (x))	/* デバイスT (x=0～1255　/ [M7] x=0～1703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_C_1SHOT(x)	(80000 + (x))	/* デバイスC(x=0～1127 　/ [M7] x=0～1255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_E_1SHOT(x)	(90000 + (x))	/* デバイスE (x=0～127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_U_1SHOT(x)	(100000 + (x))	/* デバイスU (x=0～383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_W_1SHOT(x)	(110000 + (x))	/* デバイスW (x=0～511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_B_1SHOT(x)	(120000 + (x))	/* デバイスB (x=0～1103 　/ [M7] x=0～8191)(PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_G_1SHOT(x)	(130000 + (x))	/* デバイスG (x=0～3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_I_1SHOT(x)	(140000 + (x))	/* デバイスI (x=0～1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_J_1SHOT(x)	(150000 + (x))	/* デバイスJ (x=0～1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_Q_1SHOT(x)	(160000 + (x))	/* デバイスQ (x=0～1151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_S_1SHOT(x)	(170000 + (x))	/* デバイスS (x=0～319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLBIT_SB_1SHOT(x)	(180000 + (x))	/* デバイスSB (x=0～511)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_V_1SHOT(x)	(190000 + (x))	/* デバイスV   (x=0～255)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLBIT_ST_1SHOT(x)	(200000 + (x))	/* デバイスST (x=0～1063)(M7 GPPW)	*//* P1X-A030 */

/* PLCデバイス(char)	*/
#define	M_SSEC_PLCHR_X_1SHOT(x)	(1 + (x))	/* デバイスX (x=0～2815　/ [M7] x=0～8191)	*/
#define	M_SSEC_PLCHR_Y_1SHOT(x)	(10000 + (x))	/* デバイスY (x=0～3583　/ [M7] x=0～8191)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_M_1SHOT(x)	(20000 + (x))	/* デバイスM (x=0～8191　/ [M7] x=0～10239)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_F_1SHOT(x)	(40000 + (x))	/* デバイスF (x=0～255　  / [M7] x=0～1024)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_L_1SHOT(x)	(50000 + (x))	/* デバイスL (x=0～255 　 / [M7] x=0～511)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_SM_1SHOT(x)	(60000 + (x))	/* デバイスSM (x=0～127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_T_1SHOT(x)	(70000 + (x))	/* デバイスT (x=0～1255　/ [M7] x=0～1703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_C_1SHOT(x)	(80000 + (x))	/* デバイスC(x=0～1127 　/ [M7] x=0～1255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_E_1SHOT(x)	(90000 + (x))	/* デバイスE (x=0～127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_U_1SHOT(x)	(100000 + (x))	/* デバイスU (x=0～383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_W_1SHOT(x)	(110000 + (x))	/* デバイスW (x=0～511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_B_1SHOT(x)	(120000 + (x))	/* デバイスB (x=0～1103 　/ [M7] x=0～8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_G_1SHOT(x)	(130000 + (x))	/* デバイスG (x=0～3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_I_1SHOT(x)	(140000 + (x))	/* デバイスI (x=0～1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_J_1SHOT(x)	(150000 + (x))	/* デバイスJ (x=0～1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_Q_1SHOT(x)	(160000 + (x))	/* デバイスQ (x=0～1151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_S_1SHOT(x)	(170000 + (x))	/* デバイスS (x=0～319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLCHR_SB_1SHOT(x)	(180000 + (x))	/* デバイスSB (x=0～511)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_V_1SHOT(x)	(190000 + (x))	/* デバイスV   (x=0～255)(NET10)	*//* P1X-A030 */
#define	M_SSEC_PLCHR_ST_1SHOT(x)	(200000 + (x))	/* デバイスST (x=0～1063)(M7 GPPW)	*//* P1X-A030 */

/* PLCデバイス(word)	*/
#define	M_SSEC_PLWRD_X_1SHOT(x)	(1 + (x))	/* デバイスX (x=0～2815　/ [M7] x=0～8191)	*/
#define	M_SSEC_PLWRD_Y_1SHOT(x)	(10000 + (x))	/* デバイスY (x=0～3583　/ [M7] x=0～8191)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_M_1SHOT(x)	(20000 + (x))	/* デバイスM (x=0～8191　/ [M7] x=0～10239)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_F_1SHOT(x)	(40000 + (x))	/* デバイスF (x=0～255　  / [M7] x=0～1024)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_L_1SHOT(x)	(50000 + (x))	/* デバイスL (x=0～255 　 / [M7] x=0～511)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SM_1SHOT(x)	(60000 + (x))	/* デバイスSM (x=0～127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_T_1SHOT(x)	(70000 + (x))	/* デバイスT (x=0～4255  / [M7] x=0～4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_C_1SHOT(x)	(80000 + (x))	/* デバイスC (x=0～4127  / [M7] x=0～4255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_D_1SHOT(x)	(90000 + (x))	/* デバイスD (x=0～1023  / [M7] x=0～2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_R_1SHOT(x)	(100000 + (x))	/* デバイスR (x=0～8191  / [M7] x=0～13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_E_1SHOT(x)	(120000 + (x))	/* デバイスE (x=0～127)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_U_1SHOT(x)	(130000 + (x))	/* デバイスU (x=0～383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_W_1SHOT(x)	(140000 + (x))	/* デバイスW (x=0～511   /[M7] x=0～8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_B_1SHOT(x)	(150000 + (x))	/* デバイスB (x=0～4103  /[M7] x=0～8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_G_1SHOT(x)	(160000 + (x))	/* デバイスG (x=0～3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_I_1SHOT(x)	(170000 + (x))	/* デバイスI (x=0～1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_J_1SHOT(x)	(180000 + (x))	/* デバイスJ (x=0～1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_Q_1SHOT(x)	(190000 + (x))	/* デバイスQ (x=0～4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_S_1SHOT(x)	(200000 + (x))	/* デバイスS (x=0～319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLWRD_SB_1SHOT(x)	(210000 + (x))	/* デバイスSB (x=0～511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_V_1SHOT(x)	(220000 + (x))	/* デバイスV   (x=0～255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SW_1SHOT(x)	(230000 + (x))	/* デバイスSW (x=0～511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_SD_1SHOT(x)	(240000 + (x))	/* デバイスSD (x=0～127) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_ST_1SHOT(x)	(250000 + (x))	/* デバイスST (x=0～4063)(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLWRD_R_1SHOT_EXT(x)	(500000 + (x))	/* デバイスR ( [M7] x=0～32767)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_C_1SHOT_BIT(x)	(1000000+(x))	/* デバイスC(CA/CS)へのビットアクセス(M7 x=2000～4255)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_D_1SHOT_BIT(x)	(1100000+(x))	/* デバイスDへのビットアクセス(M7 x=0～2047)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_SD_1SHOT_BIT(x)	(1200000+(x))	/* デバイスSDへのビットアクセス(M7 x=0～1023)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_SW_1SHOT_BIT(x)	(1300000+(x))	/* デバイスSWへのビットアクセス(M7 x=0～511)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_R_1SHOT_BIT(x)	(1400000+(x))	/* デバイスRへのビットアクセス(M7 x=0～32767)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_ST_1SHOT_BIT(x)	(1500000+(x))	/* デバイスST(STA/STS)へのビットアクセス(M7 x=2000～4063)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_T_1SHOT_BIT(x)	(1600000+(x))	/* デバイスT(TA/TS)へのビットアクセス(M7 x=2000～4703)	*//* P1X-A395 */
#define	M_SSEC_PLWRD_W_1SHOT_BIT(x)	(1700000+(x))	/* デバイスWへのビットアクセス(M7 x=0～8191)	*//* P1X-A395 */

/* PLCデバイス（long）	*/
#define	M_SSEC_PLLNG_X_1SHOT(x)	(1 + (x))	/* デバイスX (x=0～2815　/ [M7] x=0～8191)	*/
#define	M_SSEC_PLLNG_Y_1SHOT(x)	(10000 + (x))	/* デバイスY (x=0～3583　/ [M7] x=0～8191)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_M_1SHOT(x)	(20000 + (x))	/* デバイスM (x=0～8191　/ [M7] x=0～10239)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_F_1SHOT(x)	(40000 + (x))	/* デバイスF (x=0～255　  / [M7] x=0～1024)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_L_1SHOT(x)	(50000 + (x))	/* デバイスL (x=0～255 　 / [M7] x=0～511)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SM_1SHOT(x)	(60000 + (x))	/* デバイスSM (x=0～127)(GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_T_1SHOT(x)	(70000 + (x))	/* デバイスT (x=0～4255  / [M7] x=0～4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_C_1SHOT(x)	(80000 + (x))	/* デバイスC (x=0～4127  / [M7] x=0～4255)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_D_1SHOT(x)	(90000 + (x))	/* デバイスD (x=0～1023  / [M7] x=0～2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_R_1SHOT(x)	(100000 + (x))	/* デバイスR (x=0～8191  / [M7] x=0～13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_E_1SHOT(x)	(120000 + (x))	/* デバイスE (x=0～127)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_U_1SHOT(x)	(130000 + (x))	/* デバイスU (x=0～383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_W_1SHOT(x)	(140000 + (x))	/* デバイスW (x=0～511   /[M7] x=0～8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_B_1SHOT(x)	(150000 + (x))	/* デバイスB (x=0～4103  /[M7] x=0～8191) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_G_1SHOT(x)	(160000 + (x))	/* デバイスG (x=0～3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_I_1SHOT(x)	(170000 + (x))	/* デバイスI (x=0～1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_J_1SHOT(x)	(180000 + (x))	/* デバイスJ (x=0～1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_Q_1SHOT(x)	(190000 + (x))	/* デバイスQ (x=0～4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_S_1SHOT(x)	(200000 + (x))	/* デバイスS (x=0～319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLLNG_SB_1SHOT(x)	(210000 + (x))	/* デバイスSB (x=0～511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_V_1SHOT(x)	(220000 + (x))	/* デバイスV   (x=0～255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SW_1SHOT(x)	(230000 + (x))	/* デバイスSW (x=0～511) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_SD_1SHOT(x)	(240000 + (x))	/* デバイスSD (x=0～127) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_ST_1SHOT(x)	(250000 + (x))	/* デバイスST (x=0～4063)(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLLNG_R_1SHOT_EXT(x)	(500000 + (x))	/* デバイスR ( [M7] x=0～32767)	*//* P1X-A395 */

/* PLCデバイス(double)	*/

/* PLC強制出力	*/
#define	M_SSEC_PLFOUT_BIT_C(x)	(1 + (x))	/* デバイスC(bit) (x=0～4127  / [M7] x=0～4255)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_E(x)	(10000 + (x))	/* デバイスE(bit) (x=0～127)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_F(x)	(20000 + (x))	/* デバイスF(bit) (x=0～255　  / [M7] x=0～1024)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_L(x)	(30000 + (x))	/* デバイスL(bit) (x=0～255 　 / [M7] x=0～511)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_M(x)	(40000 + (x))	/* デバイスM(bit) (x=0～8191  / [M7] x=0～10239)	*//* P0Y-A013G */
#define	M_SSEC_PLFOUT_BIT_T(x)	(60000 + (x))	/* デバイスT(bit) (x=0～4255  / [M7] x=0～4703)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_X(x)	(70000 + (x))	/* デバイスX(bit) (x=0～0xAFF/ [M7] x=0～0x1FFF)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_Y(x)	(80000 + (x))	/* デバイスY(bit) (x=0～0xDFF/ [M7] x=0～0x1FFF)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_U(x)	(90000 + (x))	/* デバイスU(bit) (x=0～383)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_W(x)	(100000 + (x))	/* デバイスW(bit) (x=0～511)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_B(x)	(110000 + (x))	/* デバイスB(bit) (x=0～4103  /[M7] x=0～0x1FFF) (PLC4B/NET10)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_G(x)	(120000 + (x))	/* デバイスG(bit) (x=0～3071)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_I(x)	(130000 + (x))	/* デバイスI(bit) (x=0～1023)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_J(x)	(140000 + (x))	/* デバイスJ(bit) (x=0～1599)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_Q(x)	(150000 + (x))	/* デバイスQ(bit) (x=0～4151)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_S(x)	(160000 + (x))	/* デバイスS(bit) (x=0～319)(PLC4B)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_SM(x)	(170000 + (x))	/* デバイスSM(bit) (x=0～127)(GPPW)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_SB(x)	(180000 + (x))	/* デバイスSB(bit) (x=0～0x1FF) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_V(x)	(190000 + (x))	/* デバイスV(bit)   (x=0～255) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_BIT_ST(x)	(200000 + (x))	/* デバイスST(bit) (x=0～4063） (M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_D(x)	(300000 + (x))	/* デバイスD(word) (x=0～1023  / [M7] x=0～2047)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_R(x)	(310000 + (x))	/* デバイスR(word) (x=0～8191  / [M7] x=0～13311)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_SW(x)	(330000 + (x))	/* デバイスSW(word) (x=0～0x1FF ) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_SD(x)	(340000 + (x))	/* デバイスSD(word) (x=0～127     ) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_W(x)	(350000 + (x))	/* デバイスW  (word) (x=0～0x1FFF) (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_CANCEL	500000	/* デバイスモーダル出力キャンセル	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_FOUT(x)	(500001 + (x))	/* デバイスモーダル出力 (x=1～4)	*//* P0Y-A013G P1X-A030 */
#define	M_SSEC_PLFOUT_FOUT2(x)	(500101 + (x))	/* デバイスモーダル出力2(T, Cの2文字, STの3文字対応） (x=1～4)	*//* P1X-A006 P1X-A030 */
#define	M_SSEC_PLFOUT_1SHOT2	500201	/* デバイスワンショット出力	*//* P1X-A006 P1X-A030 */
#define	M_SSEC_PLFOUT_X_NOS	600000	/* デバイスXの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_Y_NOS	600001	/* デバイスYの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_M_NOS	600002	/* デバイスMの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_F_NOS	600003	/* デバイスFの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_L_NOS	600004	/* デバイスLの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SM_NOS	600005	/* デバイスSMの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_T_NOS	600006	/* デバイスTの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_C_NOS	600007	/* デバイスCの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_V_NOS	600008	/* デバイスVの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_D_NOS	600009	/* デバイスDの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_R_NOS	600010	/* デバイスRの点数 (GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SB_NOS	600011	/* デバイスSBの点数 (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_B_NOS	600012	/* デバイスBの点数 (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SW_NOS	600013	/* デバイスSWの点数 (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_SD_NOS	600014	/* デバイスSDの点数 (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_W_NOS	600015	/* デバイスWの点数 (NET10)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_ST_NOS	600016	/* デバイスSTの点数(M7 GPPW)	*//* P1X-A030 */
#define	M_SSEC_PLFOUT_WRD_R_EXT(x)	(1000000+(x))	/* デバイスR(word) ( [M7] x=0～32767)	*//* P1X-A395 */

/* サーボモニタ	*/
#define	M_SSEC_MSV_GAIN	1	/* ゲイン	*/
#define	M_SSEC_MSV_DROOP	2	/* ドループ	*/
#define	M_SSEC_MSV_REV_SPD	3	/* 回転速度	*/
#define	M_SSEC_MSV_CURRENT	4	/* 負荷電流(%)	*/
#define	M_SSEC_MSV_MAX_CUR1	5	/* MAX電流1	*/
#define	M_SSEC_MSV_MAX_CUR2	6	/* MAX電流2	*/
#define	M_SSEC_MSV_OVER_LOAD	7	/* 過負荷	*/
#define	M_SSEC_MSV_OVER_REG	8	/* 回生負荷	*/
#define	M_SSEC_MSV_AMP_DISP	9	/* アンプ表示	*/
#define	M_SSEC_MSV_ALARM1	10	/* アラーム1	*/
#define	M_SSEC_MSV_ALARM2	11	/* アラーム2	*/
#define	M_SSEC_MSV_ALARM3	12	/* アラーム3	*/
#define	M_SSEC_MSV_ALARM4	13	/* アラーム4	*/
#define	M_SSEC_MSV_CYC_CNT	14	/* サイクルカウンタ	*/
#define	M_SSEC_MSV_GRDSP	15	/* グリッド間隔	*/
#define	M_SSEC_MSV_GRID	16	/* グリッド量	*/
#define	M_SSEC_MSV_MAC_POS	17	/* 機械位置	*/
#define	M_SSEC_MSV_MOT_POS	18	/* モータ端FB	*/
#define	M_SSEC_MSV_SCA_POS	19	/* 機械端FB	*/
#define	M_SSEC_MSV_FB_ERROR	20	/* FB誤差	*/
#define	M_SSEC_MSV_DFB_COMP	21	/* DFB補正量	*/
#define	M_SSEC_MSV_DISTANCE	22	/* 残指令	*/
#define	M_SSEC_MSV_POSITION2	23	/* 現在値(2)	*/
#define	M_SSEC_MSV_MANUAL_IT	24	/* 手動割込み量	*/
#define	M_SSEC_MSV_ABS_SYS	25	/* 検出システム	*/
#define	M_SSEC_MSV_ABS_PON_POS	26	/* パワーオン位置	*/
#define	M_SSEC_MSV_ABS_POF_POS	27	/* パワーオフ位置	*/
#define	M_SSEC_MSV_ABS_MAC_POS	28	/* 現在位置	*/
#define	M_SSEC_MSV_R0	29	/* R0(基準点セット時の多回転カウンタ)	*/
#define	M_SSEC_MSV_P0	30	/* P0(基準点セット時の1回転内位置)	*/
#define	M_SSEC_MSV_E0	31	/* E0(基準点セット時の絶対位置誤差)	*/
#define	M_SSEC_MSV_RN	32	/* Rn(多回転カウンタ)	*/
#define	M_SSEC_MSV_PN	33	/* Pn(1回転内位置)	*/
#define	M_SSEC_MSV_EN	34	/* En(電源オフ時の絶対位置誤差)	*/
#define	M_SSEC_MSV_ABS0	35	/* ABS0(絶対位置基準カウンタ)	*/
#define	M_SSEC_MSV_ABSN	36	/* ABSn(絶対位置カウンタ)	*/
#define	M_SSEC_MSV_MPOS	37	/* MPOS(初期オフセット量)	*/
#define	M_SSEC_MSV_UNIT_TYP	38	/* アンプ型名	*/
#define	M_SSEC_MSV_UNIT_NO	39	/* アンプ製番	*/
#define	M_SSEC_MSV_SW_VER	40	/* S/Wバージョン	*/
#define	M_SSEC_MSV_CNTROL	41	/* 制御方式	*/
#define	M_SSEC_MSV_MOT_DT	42	/* モータ端検出器	*/
#define	M_SSEC_MSV_MAC_DT	43	/* 機械端検出器	*/
#define	M_SSEC_MSV_MOTOR	44	/* モータ型名	*/
#define	M_SSEC_MSV_WORK_TIME	45	/* 稼動時間	*/
#define	M_SSEC_MSV_ALM_HIST_TM1	46	/* アラーム履歴1(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM2	47	/* アラーム履歴2(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM3	48	/* アラーム履歴3(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM4	49	/* アラーム履歴4(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM5	50	/* アラーム履歴5(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM6	51	/* アラーム履歴6(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM7	52	/* アラーム履歴7(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_TM8	53	/* アラーム履歴8(時間)	*/
#define	M_SSEC_MSV_ALM_HIST_NO1	54	/* アラーム履歴1(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO2	55	/* アラーム履歴2(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO3	56	/* アラーム履歴3(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO4	57	/* アラーム履歴4(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO5	58	/* アラーム履歴5(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO6	59	/* アラーム履歴6(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO7	60	/* アラーム履歴7(アラーム番号)	*/
#define	M_SSEC_MSV_ALM_HIST_NO8	61	/* アラーム履歴8(アラーム番号)	*/
#define	M_SSEC_MSV_MNT1	62	/* 保守履歴(MNT1)	*/
#define	M_SSEC_MSV_MNT2	63	/* 保守履歴(MNT2)	*/
#define	M_SSEC_MSV_MNT3	64	/* 保守履歴(MNT3)	*/
#define	M_SSEC_MSV_MNT4	65	/* 保守履歴(MNT4)	*/
#define	M_SSEC_MSV_SYS	66	/* /SYS	*/
#define	M_SSEC_MSV_ABS_POS	67	/* 絶対位置（アンプ出力）	*//* P1X-A127 */
#define	M_SSEC_MSV_MACECOMP	68	/* 機械誤差補正量（アンプ出力）	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD1L	69	/* 制御入力1L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD1H	70	/* 制御入力1H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD2L	71	/* 制御入力2L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD2H	72	/* 制御入力2H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD3L	73	/* 制御入力3L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD3H	74	/* 制御入力3H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD4L	75	/* 制御入力4L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD4H	76	/* 制御入力4H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD5L	77	/* 制御入力5L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD5H	78	/* 制御入力5H	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD6L	79	/* 制御入力6L	*//* P1X-A127 */
#define	M_SSEC_MSV_CMD6H	80	/* 制御入力6H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS1L	81	/* 制御出力1L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS1H	82	/* 制御出力1H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS2L	83	/* 制御出力2L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS2H	84	/* 制御出力2H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS3L	85	/* 制御出力3L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS3H	86	/* 制御出力3H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS4L	87	/* 制御出力4L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS4H	88	/* 制御出力4H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS5L	89	/* 制御出力5L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS5H	90	/* 制御出力5H	*//* P1X-A127 */
#define	M_SSEC_MSV_STS6L	91	/* 制御出力6L	*//* P1X-A127 */
#define	M_SSEC_MSV_STS6H	92	/* 制御出力6H	*//* P1X-A127 */
#define	M_SSEC_MSV_ALM_CLR	100	/* アラーム履歴クリア	*//* P0Y-A013E */
#define	M_SSEC_MSV_FEED	200	/* 送り速度	*//* P1X-A006t */
#define	M_SSEC_MSV_MAX_CUR3	201	/* MAX電流3	*//* P1X-A006t */
#define	M_SSEC_MSV_EST_DTORQ	202	/* 推定外乱トルク	*//* P1X-A006t */
#define	M_SSEC_MSV_MAX_DTORQ	203	/* MAX外乱トルク	*//* P1X-A006t */
#define	M_SSEC_MSV_LOAD_INER	204	/* 負荷イナーシャ比	*//* P1X-A006t */
#define	M_SSEC_MSV_AFLT_FREQ	205	/* AFLT周波数	*//* P1X-A006t */
#define	M_SSEC_MSV_AFLT_GAIN	206	/* AFLTゲイン	*//* P1X-A006t */
#define	M_SSEC_MSV_MOT_DT_NO	207	/* モータ端検出器製番	*//* P1X-A006t */
#define	M_SSEC_MSV_MAC_DT_NO	208	/* 機械端検出器製番	*//* P1X-A006t */
#define	M_SSEC_MSV_STL_CNV_NUM	209	/* ストール定格換算定数	*//* P1X-A145A */
#define	M_SSEC_MSV_SCA_POS2	210	/* 機械端FB(回転軸丸め)	*//* P1X-A308A */
#define	M_SSEC_MSV_AUX_CUR_STN	500	/* 補助軸 現在ステーション番号	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_MAC_POS	501	/* 補助軸 現在位置	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_INST_STN	502	/* 補助軸 目標ステーション番号	*//* P1X-A299 */
#define	M_SSEC_MSV_AUX_INST_POS	503	/* 補助軸 指令位置	*//* P1X-A299 */
#define	M_SSEC_MSV_ALM_NO(x)	(1000 + (x))	/* アラーム番号(x=1～32)	*//* P1X-A006t */
#define	M_SSEC_MSV_ALM_TIMES(x)	(1100 + (x))	/* アラーム回数(x=1～32)	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_ADDRESS1	1200	/* DAアドレス1	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_OUTPUT1	1201	/* DA出力1	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_ADDRESS2	1202	/* DAアドレス2	*//* P1X-A006t */
#define	M_SSEC_MSV_DA_OUTPUT2	1203	/* DA出力2	*//* P1X-A006t */
#define	M_SSEC_MSV_ALM_TIMES_CLR	1300	/* 全アラーム回数クリア	*//* P1X-A006t */
#define	M_SSEC_MSV_FCTCNT_CLR	2000	/* サーボ軸アラーム要因カウンタクリア	*//* P1X-A497 */
#define	M_SSEC_MSV_ALM_SUM(x)	(2100+(x))	/* サーボ軸アラームNO(x)累積カウンタ (x=0x00～0xFF)	*//* P1X-A497 */
#define	M_SSEC_MSV_ALM_INC(x)	(2400+(x))	/* サーボ軸アラームNO(x)頻度カウンタ (x=0x00～0xFF)	*//* P1X-A497 */

/* サーボモニタ（主軸型サーボ）	*/

/* 同期誤差モニタ	*/
#define	M_SSEC_MSERR_DOK1_SGOSA	1	/* 指令誤差(1組目)	*/
#define	M_SSEC_MSERR_DOK2_SGOSA	2	/* 指令誤差(2組目)	*/
#define	M_SSEC_MSERR_DOK3_SGOSA	3	/* 指令誤差(3組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBGOSA	11	/* FB誤差(1組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBGOSA	12	/* FB誤差(2組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBGOSA	13	/* FB誤差(3組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_MACHIN	21	/* 機械位置(1組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_MACHIN	22	/* 機械位置(2組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_MACHIN	23	/* 機械位置(3組目)	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_SLVNO	31	/* スレーブ軸番号（1組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_SLVNO	32	/* スレーブ軸番号（2組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_SLVNO	33	/* スレーブ軸番号（3組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBMAX1	41	/* FB誤差 MAX1（1組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBMAX1	42	/* FB誤差 MAX1（2組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBMAX1	43	/* FB誤差 MAX1（3組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK1_FBMAX2	51	/* FB誤差 MAX2（1組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK2_FBMAX2	52	/* FB誤差 MAX2（2組目）	*//* P1X-A106 */
#define	M_SSEC_MSERR_DOK3_FBMAX2	53	/* FB誤差 MAX2（3組目）	*//* P1X-A106 */

/* 主軸モニタ	*/
#define	M_SSEC_MSP_GAIN	1	/* ゲイン	*/
#define	M_SSEC_MSP_DROOP	2	/* ドループ	*/
#define	M_SSEC_MSP_REV_SPD	3	/* 回転速度	*/
#define	M_SSEC_MSP_LOAD	4	/* ロード	*/
#define	M_SSEC_MSP_AMP_DISP	5	/* アンプ表示	*/
#define	M_SSEC_MSP_ALARM1	6	/* アラーム1	*/
#define	M_SSEC_MSP_ALARM2	7	/* アラーム2	*/
#define	M_SSEC_MSP_ALARM3	8	/* アラーム3	*/
#define	M_SSEC_MSP_ALARM4	9	/* アラーム4	*/
#define	M_SSEC_MSP_CYC_CNT	10	/* サイクルカウンタ	*/
#define	M_SSEC_MSP_CMD1L	11	/* 制御入力1L	*/
#define	M_SSEC_MSP_CMD1H	12	/* 制御入力1H	*/
#define	M_SSEC_MSP_CMD2L	13	/* 制御入力2L	*/
#define	M_SSEC_MSP_CMD2H	14	/* 制御入力2H	*/
#define	M_SSEC_MSP_CMD3L	15	/* 制御入力3L	*/
#define	M_SSEC_MSP_CMD3H	16	/* 制御入力3H	*/
#define	M_SSEC_MSP_CMD4L	17	/* 制御入力4L	*/
#define	M_SSEC_MSP_CMD4H	18	/* 制御入力4H	*/
#define	M_SSEC_MSP_STS1L	19	/* 制御出力1L	*/
#define	M_SSEC_MSP_STS1H	20	/* 制御出力1H	*/
#define	M_SSEC_MSP_STS2L	21	/* 制御出力2L	*/
#define	M_SSEC_MSP_STS2H	22	/* 制御出力2H	*/
#define	M_SSEC_MSP_STS3L	23	/* 制御出力3L	*/
#define	M_SSEC_MSP_STS3H	24	/* 制御出力3H	*/
#define	M_SSEC_MSP_STS4L	25	/* 制御出力4L	*/
#define	M_SSEC_MSP_STS4H	26	/* 制御出力4H	*/
#define	M_SSEC_MSP_UNIT_TYP	27	/* アンプ型名	*/
#define	M_SSEC_MSP_UNIT_NO	28	/* アンプ製番	*/
#define	M_SSEC_MSP_SW_VER	29	/* S/Wバージョン	*/
#define	M_SSEC_MSP_WORK_TIME	30	/* 稼動時間	*/
#define	M_SSEC_MSP_ALM_HIST_TM1	31	/* アラーム履歴1(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM2	32	/* アラーム履歴2(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM3	33	/* アラーム履歴3(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM4	34	/* アラーム履歴4(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM5	35	/* アラーム履歴5(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM6	36	/* アラーム履歴6(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM7	37	/* アラーム履歴7(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_TM8	38	/* アラーム履歴8(時間)	*/
#define	M_SSEC_MSP_ALM_HIST_NO1	39	/* アラーム履歴1(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO2	40	/* アラーム履歴2(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO3	41	/* アラーム履歴3(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO4	42	/* アラーム履歴4(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO5	43	/* アラーム履歴5(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO6	44	/* アラーム履歴6(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO7	45	/* アラーム履歴7(アラーム番号)	*/
#define	M_SSEC_MSP_ALM_HIST_NO8	46	/* アラーム履歴8(アラーム番号)	*/
#define	M_SSEC_MSP_MNT1	47	/* 保守履歴(MNT1)	*/
#define	M_SSEC_MSP_MNT2	48	/* 保守履歴(MNT2)	*/
#define	M_SSEC_MSP_MNT3	49	/* 保守履歴(MNT3)	*/
#define	M_SSEC_MSP_MNT4	50	/* 保守履歴(MNT4)	*/
#define	M_SSEC_MSP_SYS	51	/* /SYS	*/
#define	M_SSEC_MSP_CMD1	52	/* 制御入力1	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD2	53	/* 制御入力2	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD3	54	/* 制御入力3	*//* P0Y-A013E */
#define	M_SSEC_MSP_CMD4	55	/* 制御入力4	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS1	56	/* 制御出力1	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS2	57	/* 制御出力2	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS3	58	/* 制御出力3	*//* P0Y-A013E */
#define	M_SSEC_MSP_STS4	59	/* 制御出力4	*//* P0Y-A013E */
#define	M_SSEC_MSP_SPNDL_ANGL	60	/* 主軸角度	*//* P1X-A020 */
#define	M_SSEC_MSP_CMD5L	61	/* 制御入力5L	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD5H	62	/* 制御入力5H	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6L	63	/* 制御入力6L	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6H	64	/* 制御入力6H	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5L	65	/* 制御出力5L	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5H	66	/* 制御出力5H	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6L	67	/* 制御出力6L	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6H	68	/* 制御出力6H	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD5	69	/* 制御入力5	*//* P1X-A091A */
#define	M_SSEC_MSP_CMD6	70	/* 制御入力6	*//* P1X-A091A */
#define	M_SSEC_MSP_STS5	71	/* 制御出力5	*//* P1X-A091A */
#define	M_SSEC_MSP_STS6	72	/* 制御出力6	*//* P1X-A091A */
#define	M_SSEC_MSP_ALM_CLR	100	/* アラーム履歴クリア	*//* P0Y-A013E */
#define	M_SSEC_MSP_FEED	200	/* 送り速度	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR1	201	/* MAX電流1	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR2	202	/* MAX電流2	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_CUR3	203	/* MAX電流3	*//* P1X-A006t */
#define	M_SSEC_MSP_OVER_LOAD	204	/* 過負荷	*//* P1X-A006t */
#define	M_SSEC_MSP_OVER_REG	205	/* 回生負荷	*//* P1X-A006t */
#define	M_SSEC_MSP_EST_DTORQ	206	/* 推定外乱トルク	*//* P1X-A006t */
#define	M_SSEC_MSP_MAX_DTORQ	207	/* MAX外乱トルク	*//* P1X-A006t */
#define	M_SSEC_MSP_LOAD_INER	208	/* 負荷イナーシャ比	*//* P1X-A006t */
#define	M_SSEC_MSP_AFLT_FREQ	209	/* AFLT周波数	*//* P1X-A006t */
#define	M_SSEC_MSP_AFLT_GAIN	210	/* AFLTゲイン	*//* P1X-A006t */
#define	M_SSEC_MSP_GRDSP	211	/* グリッド間隔	*//* P1X-A006t */
#define	M_SSEC_MSP_GRID	212	/* グリッド量	*//* P1X-A006t */
#define	M_SSEC_MSP_MAC_POS	213	/* 機械位置	*//* P1X-A006t */
#define	M_SSEC_MSP_MOT_POS	214	/* モータ端FB	*//* P1X-A006t */
#define	M_SSEC_MSP_FB_ERROR	215	/* FB誤差	*//* P1X-A006t */
#define	M_SSEC_MSP_DFB_COMP	216	/* DFB補正量	*//* P1X-A006t */
#define	M_SSEC_MSP_MOT_DT_NO	217	/* モータ端検出器製番	*//* P1X-A006t */
#define	M_SSEC_MSP_MAC_DT_NO	218	/* 機械端検出器製番	*//* P1X-A006t */
#define	M_SSEC_MSP_TAPERR_WIDE	219	/* 同期タップ誤差幅(最大値) 	*//* P1X-A184A */
#define	M_SSEC_MSP_TAPERR_ANGLE	220	/* 同期タップ誤差角度(最大値) 	*//* P1X-A184A */
#define	M_SSEC_MSP_SP_TEMPERATURE	221	/* 主軸サーミスタ温度	*//* P1X-A300 */
#define	M_SSEC_MSP_ALM_NO(x)	(1000 + (x))	/* アラーム番号(x=1～32)	*//* P1X-A006t */
#define	M_SSEC_MSP_ALM_TIMES(x)	(1100 + (x))	/* アラーム回数(x=1～32)	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_ADDRESS1	1200	/* DAアドレス1	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_OUTPUT1	1201	/* DA出力1	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_ADDRESS2	1202	/* DAアドレス2	*//* P1X-A006t */
#define	M_SSEC_MSP_DA_OUTPUT2	1203	/* DA出力2	*//* P1X-A006t */
#define	M_SSEC_MSP_ALM_TIMES_CLR	1300	/* 全アラーム回数クリア	*//* P1X-A006t */
#define	M_SSEC_MSP_ENC_DIAG_L	1400	/* モータ端PLG診断L	*//* P1X-A476 */
#define	M_SSEC_MSP_ENC_DIAG_H	1401	/* モータ端PLG診断H	*//* P1X-A476 */
#define	M_SSEC_MSP_SUB_ENC_DIAG_L	1402	/* 機械端PLG診断L	*//* P1X-A476 */
#define	M_SSEC_MSP_SUB_ENC_DIAG_H	1403	/* 機械端PLG診断H	*//* P1X-A476 */
#define	M_SSEC_MSP_FCTCNT_CLR	2000	/* 主軸アラーム要因カウンタクリア	*//* P1X-A497 */
#define	M_SSEC_MSP_ALM_SUM(x)	(2100+(x))	/* 主軸アラームNO(x)累積カウンタ (x=0x00～0xFF)	*//* P1X-A497 */
#define	M_SSEC_MSP_ALM_INC(x)	(2400+(x))	/* 主軸アラームNO(x)頻度カウンタ (x=0x00～0xFF)	*//* P1X-A497 */

/* パワーサプライモニタ	*/
#define	M_SSEC_MPWS_UNIT_TYP	1	/* ユニット型名	*/
#define	M_SSEC_MPWS_UNIT_NO	2	/* ユニット番号	*/
#define	M_SSEC_MPWS_SW_VER	3	/* S/Wバージョン	*/
#define	M_SSEC_MPWS_WORK_TIME	4	/* 稼動時間	*/
#define	M_SSEC_MPWS_ALM_HIST_TM1	5	/* アラーム履歴1(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM2	6	/* アラーム履歴2(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM3	7	/* アラーム履歴3(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM4	8	/* アラーム履歴4(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM5	9	/* アラーム履歴5(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM6	10	/* アラーム履歴6(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM7	11	/* アラーム履歴7(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_TM8	12	/* アラーム履歴8(時間)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO1	13	/* アラーム履歴1(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO2	14	/* アラーム履歴2(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO3	15	/* アラーム履歴3(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO4	16	/* アラーム履歴4(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO5	17	/* アラーム履歴5(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO6	18	/* アラーム履歴6(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO7	19	/* アラーム履歴7(アラーム番号)	*/
#define	M_SSEC_MPWS_ALM_HIST_NO8	20	/* アラーム履歴8(アラーム番号)	*/
#define	M_SSEC_MPWS_MNT1	21	/* 保守履歴(MNT1)	*/
#define	M_SSEC_MPWS_MNT2	22	/* 保守履歴(MNT2)	*/
#define	M_SSEC_MPWS_MNT3	23	/* 保守履歴(MNT3)	*/
#define	M_SSEC_MPWS_MNT4	24	/* 保守履歴(MNT4)	*/
#define	M_SSEC_MPWS_SYS	25	/* /SYS	*/
#define	M_SSEC_MPWS_DRIVE	26	/* 接続ドライブ	*//* P0Y-A013E */
#define	M_SSEC_MPWS_REC_ENERGY	27	/* 回収エネルギー	*//* P1X-A006t */
#define	M_SSEC_MPWS_PWSPLY_VOL	28	/* 電源電圧	*//* P1X-A006t */
#define	M_SSEC_MPWS_PNBUS_VOL	29	/* PN母線電圧	*//* P1X-A006t */
#define	M_SSEC_MPWS_MIN_PNBUS_VOL	30	/* MINPN母線電圧	*//* P1X-A006t */
#define	M_SSEC_MPWS_MIN_PNBUS_CUR	31	/* MINPN時母線電流	*//* P1X-A006t */
#define	M_SSEC_MPWS_BUS_CUR	32	/* 母線電流	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_CUR1	33	/* MAX力行電流１	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_CUR2	34	/* MAX力行電流２	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_RGN_CUR1	35	/* MAX回生電流１	*//* P1X-A006t */
#define	M_SSEC_MPWS_MAX_RGN_CUR2	36	/* MAX回生電流２	*//* P1X-A006t */
#define	M_SSEC_MPWS_INSTANT_STOP	37	/* 瞬停回数	*//* P1X-A006t */
#define	M_SSEC_MPWS_ALM_CLR	100	/* アラーム履歴クリア	*//* P0Y-A013E */

/* 補助軸アンプモニタ	*/
#define	M_SSEC_MAUX_DROOP	1	/* ドループ	*/
#define	M_SSEC_MAUX_REV_SPD	2	/* 回転速度	*/
#define	M_SSEC_MAUX_CURRENT	3	/* 負荷電流	*/
#define	M_SSEC_MAUX_MAX_CUR1	4	/* MAX電流1	*/
#define	M_SSEC_MAUX_MAX_CUR2	5	/* MAX電流2	*/
#define	M_SSEC_MAUX_OVER_LOAD	6	/* 過負荷	*/
#define	M_SSEC_MAUX_OVER_REG	7	/* 回生負荷	*/
#define	M_SSEC_MAUX_CUR_STN	8	/* 現在ステーション番号	*/
#define	M_SSEC_MAUX_MAC_POS	9	/* 現在位置	*/
#define	M_SSEC_MAUX_INST_STN	10	/* 目標ステーション番号	*/
#define	M_SSEC_MAUX_INST_POS	11	/* 指令位置	*/
#define	M_SSEC_MAUX_AUX_NAME	12	/* 補助軸軸名	*/
#define	M_SSEC_MAUX_POS_CON_GAIN1	13	/* 位置制御ゲイン1	*/
#define	M_SSEC_MAUX_SPEED_CON_GAIN1	14	/* 速度制御ゲイン1	*/
#define	M_SSEC_MAUX_POS_CON_GAIN2	15	/* 位置制御ゲイン2	*/
#define	M_SSEC_MAUX_SPEED_CON_GAIN2	16	/* 速度制御ゲイン2	*/
#define	M_SSEC_MAUX_SPEED_INT_COMP	17	/* 速度積分補償	*/
#define	M_SSEC_MAUX_LOAD_INERTIA	18	/* 負荷イナーシャ比	*/
#define	M_SSEC_MAUX_UNIT_TYP	19	/* ユニット型名	*/
#define	M_SSEC_MAUX_SW_VER	20	/* S/Wバージョン	*/
#define	M_SSEC_MAUX_MOTOR	21	/* モータ型名	*/
#define	M_SSEC_MAUX_ALARM1	22	/* アラーム1	*/
#define	M_SSEC_MAUX_ALARM2	23	/* アラーム2	*/
#define	M_SSEC_MAUX_ALARM3	24	/* アラーム3	*/
#define	M_SSEC_MAUX_ALARM4	25	/* アラーム4	*/
#define	M_SSEC_MAUX_UNIT_NO	26	/* ユニット製番	*//* P1X-A087 */
#define	M_SSEC_MAUX_ALM_HIST_NO(x)	(30 + (x))	/* アラーム履歴1～6(アラーム番号) (x=1～6)	*/
#define	M_SSEC_MAUX_ALM_HIST_INF(x)	(50 + (x))	/* アラーム履歴1～6(アラーム詳細情報)(x=1～6)	*/
#define	M_SSEC_MAUX_ALM_HIST(x)	(70 + (x))	/* アラーム履歴1～6(x=1～6)	*//* P0Y-A013E */

/* H/W構成	*/
#define	M_SSEC_HWCFG_RIO_UNIT(x)	(x)	/* RIOユニット1～8	*/
#define	M_SSEC_HWCFG_TERMINAL_RIO(x)	(100 + (x))	/* ターミナルRIOユニット1～4	*/
#define	M_SSEC_HWCFG_MAIN_UNIT	200	/* 制御ユニット(NCカード)	*//* P0Y-A013B */
#define	M_SSEC_HWCFG_EXT_UNIT	201	/* 拡張ユニット	*//* P0Y-A013B */
#define	M_SSEC_HWCFG_TERMINAL	300	/* ターミナル表示器（M7用）	*//* P1X-A020B */
#define	M_SSEC_HWCFG_OPT_CARD	301	/* オプションカード用拡張バス(OPTION CARD)   （M7用）	*//* P1X-A020B */
#define	M_SSEC_HWCFG_ATT_CARD	302	/* CPUCARD用 外部I/F  （Magic68用）	*//* P1X-A020B */
#define	M_SSEC_HWCFG_OPE_CARD	303	/* 操作盤分線カード  （M7用）	*//* P1X-A120B */
#define	M_SSEC_HWCFG_RIO_NOS	400	/* RIOユニット個数（M7用）	*//* P1X-A020B */
#define	M_SSEC_HWCFG_RIO_ALL(x)	(400 + (x))	/* RIOユニット（M7用）(x=1～32)	*//* P1X-A020B */
#define	M_SSEC_HWCFG_CNC_UNITS(x)	(500 + (x))	/* 制御ユニット1～4(M7)(x=1～4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_EXT_UNITS(x)	(550 + (x))	/* 拡張ユニット1～4(M7)(x=1～4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_CNC_UNITS_VER(x)	(600 + (x))	/* 制御ユニットHWバージョン1～4(x=1～4)	*//* P1X-A006n */
#define	M_SSEC_HWCFG_RAS_BATTERY_VOLT	1000	/* バッテリ電圧	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_BATTERY_STS	1001	/* バッテリー電圧状態	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_BATTERY_USED	1002	/* バッテリー経過年数	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_TEMP	1010	/* 制御ユニット温度	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_FAN_REV	1011	/* 制御ユニットファン回転数	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_MAIN_UNIT_TEMP2	1012	/* 制御ユニット温度2	*//* P1X-A333Q */
#define	M_SSEC_HWCFG_RAS_SV_COMERR_NOS	1020	/* サーボ通信エラー1回数	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_SV_COMERR_ACC	1021	/* サーボ通信エラー1累積	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_COMERR_NOS	1030	/* RIO通信エラー回数	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_COMERR_ACC	1031	/* RIO通信エラー累積	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_RIO_CHNODE1	1032	/* RIOチャンネル番号/局番号1	*//* P1X-A240A */
#define	M_SSEC_HWCFG_RAS_RIO_CHNODE2	1033	/* RIOチャンネル番号/局番号2	*//* P1X-A240A */
#define	M_SSEC_HWCFG_RAS_ETHER_COMERR_NOS	1040	/* Ethernet通信エラー回数	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_ETHER_COMERR_ACC	1041	/* Ethernet通信エラー累積	*//* P1X-A144 */
#define	M_SSEC_HWCFG_RAS_SV_ERR_NOS(x)	(1100 + (x))	/* サーボ通信エラー回数（x=1～8)	*//* P1X-A008W */
#define	M_SSEC_HWCFG_RAS_SV_ERR_ACC(x)	(1200 + (x))	/* サーボ通信エラー累積（x=1～8)	*//* P1X-A008W */
#define	M_SSEC_HWCFG_CREDIT_STAUTS	2000	/* クレジットシステム状態	*//* P1X-A181 */
#define	M_SSEC_HWCFG_CREDIT_TIMELIMIT	2001	/* クレジットシステム有効期限	*//* P1X-A181 */
#define	M_SSEC_HWCFG_CCLINK_STATUS	3000	/* CC-Link実装状態	*//* P1X-A247B */

/* S/W構成	*/
#define	M_SSEC_SWCFG_NC_VER	1	/* NCシステムバージョン	*/
#define	M_SSEC_SWCFG_PLC_VER	2	/* PLCバージョン	*/
#define	M_SSEC_SWCFG_PLCE_VER	3	/* PLCeバージョン(拡張外部アラームメッセージ)	*/
#define	M_SSEC_SWCFG_LANG3_VER	4	/* 第3言語バージョン	*/
#define	M_SSEC_SWCFG_LANG4_VER	5	/* 第4言語バージョン	*/
#define	M_SSEC_SWCFG_SVANP_VER	6	/* サーボアンプバージョン	*/
#define	M_SSEC_SWCFG_SPAMP_VER	7	/* 主軸アンプバージョン	*/
#define	M_SSEC_SWCFG_OS_VER	8	/* OSバージョン	*//* P1X-A006M */
#define	M_SSEC_SWCFG_APLC_VER	9	/* APLCバージョン	*//* P1X-A006M */
#define	M_SSEC_SWCFG_USER1_VER	10	/* USER1バージョン	*//* P1X-A167 */
#define	M_SSEC_SWCFG_EX_BUS_VER(x)	(15+(x))	/* 拡張バスバージョン(x=1～3)	*//* P1X-A353 */
#define	M_SSEC_SWCFG_NC_EX_VER	20	/* NCシステムバージョン(4桁表示)	*//* P0Y-A091A */
#define	M_SSEC_SWCFG_SAFE_VER	25	/* 安全監視機能バージョン	*//* P1X-A157T */
#define	M_SSEC_SWCFG_HMI_VER	30	/* HMIバージョン	*//* P1X-A180 */
#define	M_SSEC_SWCFG_LANG_VER(x)	(30 + (x))	/* LANGxバージョン(x=1～23)	*//* P1X-A180 */
#define	M_SSEC_SWCFG_LADFILE_NOS	100	/* ラダーファイル登録個数	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_NAME(x)	(200 + (x))	/* ラダーファイル名（x=1～32）	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_TITLE(x)	(300 + (x))	/* ラダーファイル見出し（x=1～32）	*//* P1X-A006s */
#define	M_SSEC_SWCFG_LADFILE_EXEC_TYPE(x)	(400 + (x))	/* 実行タイプ（x=1～32）	*//* P1X-A006s */

/* 安心ネットI/F	*/
#define	M_SSEC_ANETIF_CALL	1	/* ワンタッチコール	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NOTICEOP	2	/* オペレータ通知	*//* P1X-A121 */
#define	M_SSEC_ANETIF_OPTIONALNO	3	/* 任意番号	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CALLSEL	4	/* 通知先番号選択	*//* P1X-A121 */
#define	M_SSEC_ANETIF_ANETMSGSTS	101	/* 安心ネットメッセージ状態	*//* P1X-A121 */
#define	M_SSEC_ANETIF_HOSTMSG	102	/* NCサービスからのメッセージ	*//* P1X-A121 */
#define	M_SSEC_ANETIF_COMMSTS	103	/* 安心ネット 通信状態	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NET_STS	104	/* 安心ネット 通信ステータス	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NET_COMMAND	105	/* 安心ネット/工機ネット 通信コマンド	*//* P1X-A121 */
#define	M_SSEC_ANETIF_NS_COMMODE	106	/* 安心ネット 通信モード	*//* P1X-A121 */
#define	M_SSEC_ANETIF_ERRNO	107	/* 安心ネット/工機ネット エラーコード	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CHGSTS	201	/* 画面遷移状態	*//* P1X-A121 */
#define	M_SSEC_ANETIF_CHGREST	202	/* 画面遷移制限情報	*//* P1X-A121 */
#define	M_SSEC_ANETIF_DIAG_INFO_SEND	301	/* 工機ネット 診断情報送信	*//* P1X-A257 */
#define	M_SSEC_ANETIF_WARN_CANCEL	302	/* 工機ネット 警告解除	*//* P1X-A257 */
#define	M_SSEC_ANETIF_MESS_RECV	303	/* 工機ネット メッセージ受信 	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_COMMSTS	304	/* 工機ネット 通信状態	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_STS	305	/* 工機ネット 通信ステータス	*//* P1X-A257 */
#define	M_SSEC_ANETIF_KNET_NS_COMMODE	306	/* 工機ネット 通信モード	*//* P1X-A257 */
#define	M_SSEC_ANETIF_DEV_NAME	401	/* 加工データ共有送受信を行う装置名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_DIR_NAME	402	/* 加工データ共有送受信を行うディレクトリ名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_FILE_NAME	403	/* 加工データ共有送受信を行うファイル名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_FILE_SIZE	404	/* 加工データ共有送受信を行うファイルサイズ	*//* P1X-A121F */
#define	M_SSEC_ANETIF_DEV_FREE_SIZE	405	/* 加工データ共有送受信を行う装置の空き容量	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_PUT	406	/* 加工データ共有送信を行う安心ネットサーバ側ファイル名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_GET	407	/* 加工データ共有受信を行う安心ネットサーバ側ファイル名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_ANET_FILE_NAME_DEL	408	/* 加工データ共有削除を行う安心ネットサーバ側ファイル名	*//* P1X-A121F */
#define	M_SSEC_ANETIF_REQ_STS	409	/* 安心ネット、工機ネットの機能ごとの実行要求状態取得	*//* P1X-A121F */

/* 絶対位置検出データ	*/
#define	M_SSEC_ABS_DETECT_TYPE	1	/* 絶対位置検出タイプ	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_STATE	2	/* 絶対位置検出状態	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_EG	3	/* 機械端	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_MAC	4	/* 機械値	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_PASS	5	/* 未通過(機械値の状態)	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_MESS	6	/* 自動初期セットメッセージ	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_SET	7	/* 絶対位置初期セット中	*//* P0Y-A013E */
#define	M_SSEC_ABS_DETECT_REF_POINT	100	/* 絶対位置基準点設定	*/
#define	M_SSEC_ABS_DETECT_SET_ABS_POS	101	/* 絶対位置セット	*/
#define	M_SSEC_ABS_DETECT_ZERO	102	/* 絶対位置原点	*//* P0Y-A013E */

/* 補助軸制御	*/
#define	M_SSEC_AUX_OPETEST_MODE	1	/* 運転調整モード	*/
#define	M_SSEC_AUX_ABS_POS_INIT	2	/* 絶対位置セット	*/
#define	M_SSEC_AUX_POS_SET_TYP	3	/* 位置セット方式	*/
#define	M_SSEC_AUX_POS_SET_STS	4	/* 位置セット状態	*/
#define	M_SSEC_AUX_OPE_MODE	5	/* 運転モード	*/
#define	M_SSEC_AUX_PARAM_SET	6	/* 動作パラメータ群	*/
#define	M_SSEC_AUX_SCALE	7	/* 倍率	*/
#define	M_SSEC_AUX_OPE_STATE	8	/* 運転状態	*/
#define	M_SSEC_AUX_ORIGIN_SET	9	/* 補助軸基準点セット	*/
#define	M_SSEC_AUX_SRAM_BACKUP	1000	/* 補助軸パラメータSRAMバックアップ	*//* P1X-A087 */

/* MELDAS-NET 故障診断情報	*/

/* サンプリングパラメータ	*/
#define	M_SSEC_SMP_PRM_TRIGGER	1	/* サンプリングトリガ	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_RATE	2	/* サンプリング周期	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_NOS	3	/* サンプリングデータ数	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_BUFF_ADDR	4	/* サンプリングデータ格納アドレス	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_BUFF_SIZE	5	/* サンプリングデータ格納サイズ	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR1	6	/* サンプリングアドレス#1(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR2	7	/* サンプリングアドレス#2(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR3	8	/* サンプリングアドレス#3(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR4	9	/* サンプリングアドレス#4(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR5	10	/* サンプリングアドレス#5(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR6	11	/* サンプリングアドレス#6(M625従来互換)	*//* P0Y-B106 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR7	12	/* サンプリングアドレス#7(M625従来互換)	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_ADDR8	13	/* サンプリングアドレス#8(M625従来互換)	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR1	20	/* サンプリングアドレス#1	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR2	21	/* サンプリングアドレス#2	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR3	22	/* サンプリングアドレス#3	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR4	23	/* サンプリングアドレス#4	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR5	24	/* サンプリングアドレス#5	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR6	25	/* サンプリングアドレス#6	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR7	26	/* サンプリングアドレス#7	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_EX_ADDR8	27	/* サンプリングアドレス#8	*//* P0Y-A073 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR1	41	/* AT用サンプリングアドレス#1	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR2	42	/* AT用サンプリングアドレス#2	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR3	43	/* AT用サンプリングアドレス#3	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR4	44	/* AT用サンプリングアドレス#4	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR5	45	/* AT用サンプリングアドレス#5	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR6	46	/* AT用サンプリングアドレス#6	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR7	47	/* AT用サンプリングアドレス#7	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_SAMP_AT_ADDR8	48	/* AT用サンプリングアドレス#8	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_TRGMOD	50	/* バッファ指定（0:内臓メモリ、１：カセットメモリ）	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_BUFF_CAP	51	/* バッファ容量（1024×（設定値+1) byte）	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_START_COND	52	/* 開始条件	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_PROC_FORM	53	/* 処理形態（0:1shot、１：repeat、2:リングバッファ）	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_END_COND	54	/* 終了条件	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_VAR_NUM	55	/* 変数番号（0:#1299、0以外：コモン変数）	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_PLC_DEV	56	/* PLCデバイス	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_ADDR	57	/* 条件アドレス	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_DATA	58	/* 条件データ	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_COND_MASK	59	/* 条件データマスク	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_SAMP_OUT	60	/* サンプリングデータ出力形式	*//* P1X-A141 */
#define	M_SSEC_SMP_PRM_SAMP_MAX_DATA	61	/* 最大サンプリングデータ数	*//* P1X-A141 */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT1	62	/* サンプリングデータ出力単位#1	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT2	63	/* サンプリングデータ出力単位#2	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT3	64	/* サンプリングデータ出力単位#3	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT4	65	/* サンプリングデータ出力単位#4	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT5	66	/* サンプリングデータ出力単位#5	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT6	67	/* サンプリングデータ出力単位#6	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT7	68	/* サンプリングデータ出力単位#7	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_SAMPDAT_UNIT8	69	/* サンプリングデータ出力単位#8	*//* P1X-A141B */
#define	M_SSEC_SMP_PRM_AT_SMP_STS	70	/* サンプリング状態（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_DELAY	71	/* サンプリングディレイ時間（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_START_REQ	72	/* サイクルスタート要求（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_START_LOCK	73	/* サイクルスタート制限（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_SAMP_NOS	74	/* サンプリング数（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_OP_CHK	75	/* OPチェック情報（オートチューニング用）	*//* P0Y-A135 */
#define	M_SSEC_SMP_PRM_AT_SMP_AXNO	76	/* 対象軸番号指定（オートチューニング用）	*//* P1X-A145 */
#define	M_SSEC_SMP_PRM_AT_MSIG_RATE	77	/* M系列加振サンプリング周期（オートチューニング用）	*//* P1X-A145A */
#define	M_SSEC_SMP_PRM_STOP_DELAY	78	/* 停止ディレイ時間	*//* P1X-A141E */
#define	M_SSEC_SMP_PRM_HIGH_FREQ	79	/* 高周期サンプリング	*//* P1X-A440 */
#define	M_SSEC_SMP_PRM_AT_RINGBUF_NOS	80	/* リングバッファ周回数	*//* P1X-A145M */
#define	M_SSEC_SMP_PRM_SAMPLING_NOS	100	/* サンプリングデータ個数	*//* P0Y-A013c */
#define	M_SSEC_SMP_PRM_SMP_STS	110	/* サンプリング状態	*//* P1X-A141A */

/* サンプリングデータ	*/

/* 波形表示パラメータ	*/

/* 波形表示情報	*/

/* アラーム履歴	*/

/* キー履歴	*/
#define	M_SSEC_KEYHIST_SAMPSTS	1	/* サンプリング収集状態	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HISTSTS	2	/* 履歴収集状態	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SYS	11	/* 仕様－系統	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SP	12	/* 仕様－主軸	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SPEC_SV	13	/* 仕様－サーボ	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_HW	21	/* データ－H/W構成	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SW	22	/* データ－S/W構成	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_KEYHIST	23	/* データ－キー履歴	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_ALARMHIST	24	/* データ－アラーム履歴	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_PLCIOHIST	25	/* データ－PLC入出力信号履歴	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_ACINHIST	26	/* データ－AC入力電源異常履歴	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SPDATA1	27	/* データ－主軸データ1	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SPDATA2	28	/* データ－主軸データ2	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SVDATA1	29	/* データ－サーボデータ1	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_SVDATA2	30	/* データ－サーボデータ2	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_MODALINFO	31	/* データ－モーダル情報	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_PRGDATA	32	/* データ－プログラムデータ	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_DATA_COORDDATA	33	/* データ－座標データ	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SAMP_TRIGGER	100	/* サンプリング開始・停止要求（手動）	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HIST_TRIGGER	101	/* 履歴開始・停止要求（手動）	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_PWON	105	/* 電源投入時、データ収集開始・停止要求	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_SAMP_CLR	110	/* サンプリングデータクリア	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_HIST_CLR	111	/* 履歴データクリア	*//* P1X-A047 */
#define	M_SSEC_KEYHIST_ALMHIST_CLR	112	/* アラーム履歴データクリア	*//* P1X-A047A */

/* I/F信号履歴	*/

/* メモリリード／ライト	*/

/* 主軸アナログ調整	*/
#define	M_SSEC_SANA_AUTO_AJST_SET	1	/* 自動調整要求	*//* P1X-A033 */
#define	M_SSEC_SANA_AUTO_AJST_STS	2	/* 自動調整状態	*//* P1X-A033 */
#define	M_SSEC_SANA_MANU_SELECT	3	/* 手動調整データ選択	*//* P1X-A033 */
#define	M_SSEC_SANA_MANU_DATA	4	/* 手動調整中データ	*//* P1X-A033 */
#define	M_SSEC_SANA_OFFSET(x)	(10+(x))	/* Sアナ調整Ch0～3 オフセット(x=0～3)	*//* P1X-A033 */
#define	M_SSEC_SANA_PLUS_GAIN(x)	(20+(x))	/* Sアナ調整Ch0～3 +ゲイン   (x=0～3)	*//* P1X-A033 */
#define	M_SSEC_SANA_MINUS_GAIN(x)	(30+(x))	/* Sアナ調整Ch0～3 -ゲイン   (x=0～3)	*//* P1X-A033 */

/* 原点復帰パラメータ/PLC軸原点復帰パラメータ	*/
#define	M_SSEC_MPREFR_G28RAP	2025	/* G28早送り速度	*//* P1X-A020 */
#define	M_SSEC_MPREFR_G28CRP	2026	/* G28アプローチ速度	*//* P1X-A020 */
#define	M_SSEC_MPREFR_G28	2027	/* レファレンス点シフト量	*//* P1X-A020 */
#define	M_SSEC_MPREFR_GRSFT	2028	/* グリッドマスク量	*//* P1X-A020 */
#define	M_SSEC_MPREFR_GRSPC	2029	/* グリッド間隔	*//* P1X-A020 */
#define	M_SSEC_MPREFR_DIA	2030	/* リファレンス点方向(-)	*//* P1X-A020 */
#define	M_SSEC_MPREFR_NOREF	2031	/* リファレンス点 なし軸	*//* P1X-A020 */
#define	M_SSEC_MPREFR_NOCHK	2032	/* リファレンス点 復帰完了チェックなし	*//* P1X-A020 */
#define	M_SSEC_MPREFR_ZP_NO	2033	/* Z相パルス式レファレンス点復帰 主軸エンコーダ番号(zp_no)	*//* P1X-A020 */
#define	M_SSEC_MPREFR_RFPOFS	2034	/* レファレンス点オフセット量	*//* P1X-A248 */
#define	M_SSEC_MPREFR_SRCHMAX	2035	/* レファレンス点最大走査距離	*//* P1X-A248 */
#define	M_SSEC_MPREFR_SLV_ADJUST	2036	/* 原点調整量	*//* P1X-A106K */
#define	M_SSEC_MPREFR_REF1	2037	/* #1 リファレンス点	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF2	2038	/* #2 リファレンス点	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF3	2039	/* #3 リファレンス点	*//* P1X-A020 */
#define	M_SSEC_MPREFR_REF4	2040	/* #4 リファレンス点	*//* P1X-A020 */

/* サーボパラメータ/PLC軸サーボパラメータ	*/
#define	M_SSEC_MPSV_SV001	1	/* SV01:モータ側のギヤ比	*/
#define	M_SSEC_MPSV_SV002	2	/* SV02:機械側のギヤ比	*/
#define	M_SSEC_MPSV_SV003	3	/* SV03:位置ループゲイン1	*/
#define	M_SSEC_MPSV_SV004	4	/* SV04:位置ループゲイン2	*/
#define	M_SSEC_MPSV_SV005	5	/* SV05:速度ループゲイン1	*/
#define	M_SSEC_MPSV_SV006	6	/* SV06:速度ループゲイン2	*/
#define	M_SSEC_MPSV_SV007	7	/* SV07:速度ループ遅れ補償	*/
#define	M_SSEC_MPSV_SV008	8	/* SV08:速度ループ進み補償	*/
#define	M_SSEC_MPSV_SV009	9	/* SV09:電流ループq軸進み補償	*/
#define	M_SSEC_MPSV_SV010	10	/* SV10:電流ループd軸進み補償	*/
#define	M_SSEC_MPSV_SV011	11	/* SV11:電流ループq軸ゲイン	*/
#define	M_SSEC_MPSV_SV012	12	/* SV12:電流ループd軸ゲイン	*/
#define	M_SSEC_MPSV_SV013	13	/* SV13:電流制限値1	*/
#define	M_SSEC_MPSV_SV014	14	/* SV14:電流制限値2	*/
#define	M_SSEC_MPSV_SV015	15	/* SV15:加速度フィードフォワードゲイン	*/
#define	M_SSEC_MPSV_SV016	16	/* SV16:ロストモーション補正ゲイン1	*/
#define	M_SSEC_MPSV_SV017	17	/* SV17:サーボシステム仕様	*/
#define	M_SSEC_MPSV_SV018	18	/* SV18:ボールネジピッチ	*/
#define	M_SSEC_MPSV_SV019	19	/* SV19:位置検出器分解能	*/
#define	M_SSEC_MPSV_SV020	20	/* SV20:速度検出器分解能	*/
#define	M_SSEC_MPSV_SV021	21	/* SV21:過負荷時定数	*/
#define	M_SSEC_MPSV_SV022	22	/* SV22:過負荷検出レベル	*/
#define	M_SSEC_MPSV_SV023	23	/* SV23:誤差過大幅1	*/
#define	M_SSEC_MPSV_SV024	24	/* SV24:インポジション幅	*/
#define	M_SSEC_MPSV_SV025	25	/* SV25:モータタイプ	*/
#define	M_SSEC_MPSV_SV026	26	/* SV26:誤差過大幅2(サーボオフ時)	*/
#define	M_SSEC_MPSV_SV027	27	/* SV27:サーボ機能1	*/
#define	M_SSEC_MPSV_SV028	28	/* SV28:未使用	*/
#define	M_SSEC_MPSV_SV029	29	/* SV29:未使用	*/
#define	M_SSEC_MPSV_SV030	30	/* SV30:未使用	*/
#define	M_SSEC_MPSV_SV031	31	/* SV31:オーバシュート補正ゲイン1	*/
#define	M_SSEC_MPSV_SV032	32	/* SV32:トルクオフセット補正ゲイン	*/
#define	M_SSEC_MPSV_SV033	33	/* SV33:サーボ機能2	*/
#define	M_SSEC_MPSV_SV034	34	/* SV34:サーボ機能3	*/
#define	M_SSEC_MPSV_SV035	35	/* SV35:サーボ機能4	*/
#define	M_SSEC_MPSV_SV036	36	/* SV36:パワーサプライタイプ	*/
#define	M_SSEC_MPSV_SV037	37	/* SV37:モータ換算イナーシャ量	*/
#define	M_SSEC_MPSV_SV038	38	/* SV38:機械共振抑制フィルタ周波数	*/
#define	M_SSEC_MPSV_SV039	39	/* SV39:ロストモーション補正タイミング	*/
#define	M_SSEC_MPSV_SV040	40	/* SV40:ロストモーション補正不感帯(下位8bit)	*/
#define	M_SSEC_MPSV_SV041	41	/* SV41:ロストモーション補正ゲイン2	*/
#define	M_SSEC_MPSV_SV042	42	/* SV42:オーバシュート補正ゲイン2	*/
#define	M_SSEC_MPSV_SV043	43	/* SV43:オブザーバ1	*/
#define	M_SSEC_MPSV_SV044	44	/* SV44:オブザーバ2	*/
#define	M_SSEC_MPSV_SV045	45	/* SV45:未使用	*/
#define	M_SSEC_MPSV_SV046	46	/* SV46:未使用	*/
#define	M_SSEC_MPSV_SV047	47	/* SV47:誘起電圧補正	*/
#define	M_SSEC_MPSV_SV048	48	/* SV48:上下軸落下防止ブレーキ動作遅延時間	*/
#define	M_SSEC_MPSV_SV049	49	/* SV49:主軸同期位置ループゲイン1	*/
#define	M_SSEC_MPSV_SV050	50	/* SV50:主軸同期位置ループゲイン2	*/
#define	M_SSEC_MPSV_SV051	51	/* SV51:未使用	*/
#define	M_SSEC_MPSV_SV052	52	/* SV52:未使用	*/
#define	M_SSEC_MPSV_SV053	53	/* SV53:誤差過大幅3誤差	*/
#define	M_SSEC_MPSV_SV054	54	/* SV54:未使用	*/
#define	M_SSEC_MPSV_SV055	55	/* SV55:未使用	*/
#define	M_SSEC_MPSV_SV056	56	/* SV56:落下防止減速制御時定数	*/
#define	M_SSEC_MPSV_SV057	57	/* SV57:ハイゲインコントロール定数	*/
#define	M_SSEC_MPSV_SV058	58	/* SV58:主軸同期時ハイゲイン定数	*/
#define	M_SSEC_MPSV_SV059	59	/* SV59:未使用	*/
#define	M_SSEC_MPSV_SV060	60	/* SV60:未使用	*/
#define	M_SSEC_MPSV_SV061	61	/* SV61:D/A出力チャンネル1データ番号	*/
#define	M_SSEC_MPSV_SV062	62	/* SV62:D/A出力チャンネル2データ番号	*/
#define	M_SSEC_MPSV_SV063	63	/* SV63:D/A出力チャンネル1出力倍率	*/
#define	M_SSEC_MPSV_SV064	64	/* SV64:D/A出力チャンネル2出力倍率	*/
#define	M_SSEC_MPSV_SV065	65	/* SV65	*/
#define	M_SSEC_MPSV_SV073	73	/* SV73	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV074	74	/* SV74	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV075	75	/* SV75	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV076	76	/* SV76	*//* P1X-A008J */
#define	M_SSEC_MPSV_SV081	81	/* SV81:サーボ仕様2	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV082	82	/* SV82:特殊サーボ機能選択5	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV083	83	/* SV83:特殊サーボ機能選択6	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV084	84	/* SV84:特殊サーボ機能選択7	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV085	85	/* SV85:ロストモーション補正3 バネ定数	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV086	86	/* SV86:ロストモーション補正3 粘性係数	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV087	87	/* SV87	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV088	88	/* SV88	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV089	89	/* SV89	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV090	90	/* SV90	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV091	91	/* SV91	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV092	92	/* SV92	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV093	93	/* SV93	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV094	94	/* SV94	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV095	95	/* SV95	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV096	96	/* SV96	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV097	97	/* SV97	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV098	98	/* SV98	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV099	99	/* SV99	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV100	100	/* SV100	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV101	101	/* SV101	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV102	102	/* SV102	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV103	103	/* SV103	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV104	104	/* SV104	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV105	105	/* SV105	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV106	106	/* SV106	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV107	107	/* SV107	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV108	108	/* SV108	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV109	109	/* SV109	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV110	110	/* SV110	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV111	111	/* SV111	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV112	112	/* SV112	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV113	113	/* SV113	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV114	114	/* SV114	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV115	115	/* SV115	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV116	116	/* SV116	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV117	117	/* SV117	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV118	118	/* SV118	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV119	119	/* SV119	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV120	120	/* SV120	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV121	121	/* SV121	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV122	122	/* SV122	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV123	123	/* SV123	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV124	124	/* SV124	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV125	125	/* SV125	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV126	126	/* SV126	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV127	127	/* SV127	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV128	128	/* SV128	*//* P1X-A008D */
#define	M_SSEC_MPSV_SV(x)	(x)	/* SV129～SV256 (x=129～256)	*//* P1X-A008H */

/* 主軸仕様パラメータ	*/
#define	M_SSEC_MPSSPC_SALIM1	1	/* 限界回転数ギヤ00	*/
#define	M_SSEC_MPSSPC_SALIM2	2	/* 限界回転数ギヤ01	*/
#define	M_SSEC_MPSSPC_SALIM3	3	/* 限界回転数ギヤ10	*/
#define	M_SSEC_MPSSPC_SALIM4	4	/* 限界回転数ギヤ11	*/
#define	M_SSEC_MPSSPC_SAMAX1	5	/* 最高回転数ギヤ00	*/
#define	M_SSEC_MPSSPC_SAMAX2	6	/* 最高回転数ギヤ01	*/
#define	M_SSEC_MPSSPC_SAMAX3	7	/* 最高回転数ギヤ10	*/
#define	M_SSEC_MPSSPC_SAMAX4	8	/* 最高回転数ギヤ11	*/
#define	M_SSEC_MPSSPC_SASIFT1	9	/* シフト回転数ギヤ00	*/
#define	M_SSEC_MPSSPC_SASIFT2	10	/* シフト回転数ギヤ01	*/
#define	M_SSEC_MPSSPC_SASIFT3	11	/* シフト回転数ギヤ10	*/
#define	M_SSEC_MPSSPC_SASIFT4	12	/* シフト回転数ギヤ11	*/
#define	M_SSEC_MPSSPC_SATAP1	13	/* タップ回転数ギヤ00	*/
#define	M_SSEC_MPSSPC_SATAP2	14	/* タップ回転数ギヤ01	*/
#define	M_SSEC_MPSSPC_SATAP3	15	/* タップ回転数ギヤ10	*/
#define	M_SSEC_MPSSPC_SATAP4	16	/* タップ回転数ギヤ11	*/
#define	M_SSEC_MPSSPC_SATPST1	17	/* タップ時定数ギヤ00	*/
#define	M_SSEC_MPSSPC_SATPST2	18	/* タップ時定数ギヤ01	*/
#define	M_SSEC_MPSSPC_SATPST3	19	/* タップ時定数ギヤ10	*/
#define	M_SSEC_MPSSPC_SATPST4	20	/* タップ時定数ギヤ11	*/
#define	M_SSEC_MPSSPC_SAORI	21	/* オリエント回転数	*/
#define	M_SSEC_MPSSPC_ENCRATE	22	/* エンコーダギヤ比	*/
#define	M_SSEC_MPSSPC_SMIN	23	/* Smin(設定可能最小回転速度)	*/
#define	M_SSEC_MPSSPC_SLIMIT	24	/* Slimit(設定可能最大回転速度)	*/
#define	M_SSEC_MPSSPC_SDAOUT	25	/* 主軸接続	*/
#define	M_SSEC_MPSSPC_ENCON	26	/* 主軸エンコーダ	*/
#define	M_SSEC_MPSSPC_CSORI	27	/* オリエント時の巻線選択仕様	*/
#define	M_SSEC_MPSSPC_CSSYN	28	/* 主軸同期(ポリゴン)時の巻線選択仕様	*/
#define	M_SSEC_MPSSPC_SPRCMM	29	/* 主軸正転/逆転 M指令	*/
#define	M_SSEC_MPSSPC_TAPSEL	30	/* 非同期タップギヤ選択	*/
#define	M_SSEC_MPSSPC_SMCP_NO	31	/* アンプインタフェースチャンネル番号	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_OUTUNIT	35	/* 出力単位(主軸)	*//* P1X-A070 */
#define	M_SSEC_MPSSPC_TAPERR	36	/* 同期タップ許容誤差幅	*//* P1X-A130 */
#define	M_SSEC_MPSSPC_SATAP2_1	37	/* 同期タップ切換主軸回転数2ギヤ00	*/
#define	M_SSEC_MPSSPC_SATAP2_2	38	/* 同期タップ切換主軸回転数2ギヤ01	*/
#define	M_SSEC_MPSSPC_SATAP2_3	39	/* 同期タップ切換主軸回転数2ギヤ10	*/
#define	M_SSEC_MPSSPC_SATAP2_4	40	/* 同期タップ切換主軸回転数2ギヤ11	*/
#define	M_SSEC_MPSSPC_SATPST2_1	41	/* 同期タップ切換時定数2ギヤ00	*/
#define	M_SSEC_MPSSPC_SATPST2_2	42	/* 同期タップ切換時定数2ギヤ01	*/
#define	M_SSEC_MPSSPC_SATPST2_3	43	/* 同期タップ切換時定数2ギヤ10	*/
#define	M_SSEC_MPSSPC_SATPST2_4	44	/* 同期タップ切換時定数2ギヤ11	*/
#define	M_SSEC_MPSSPC_SATPST3_1	45	/* 同期タップ切換時定数3ギヤ00	*/
#define	M_SSEC_MPSSPC_SATPST3_2	46	/* 同期タップ切換時定数3ギヤ01	*/
#define	M_SSEC_MPSSPC_SATPST3_3	47	/* 同期タップ切換時定数3ギヤ10	*/
#define	M_SSEC_MPSSPC_SATPST3_4	48	/* 同期タップ切換時定数3ギヤ11	*/
#define	M_SSEC_MPSSPC_SPT	49	/* 主軸同期加減速時定数	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_DPRLV	50	/* 主軸同期回転数到達レベル	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPLV	51	/* 主軸同期位相到達レベル	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPLR	52	/* 主軸制御フラグ1 BIT0:主軸モータ/主軸,相対極性	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPPST	53	/* 主軸同期位相シフト	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC1	54	/* 主軸同期多段加減速時定数切り換え速度1	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC2	55	/* 主軸同期多段加減速時定数切り換え速度2	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC3	56	/* 主軸同期多段加減速時定数切り換え速度3	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC4	57	/* 主軸同期多段加減速時定数切り換え速度4	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC5	58	/* 主軸同期多段加減速時定数切り換え速度5	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC6	59	/* 主軸同期多段加減速時定数切り換え速度6	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPTC7	60	/* 主軸同期多段加減速時定数切り換え速度7	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV1	61	/* 時定数切り換え速度1時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV2	62	/* 時定数切り換え速度2時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV3	63	/* 時定数切り換え速度3時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV4	64	/* 時定数切り換え速度4時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV5	65	/* 時定数切り換え速度5時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV6	66	/* 時定数切り換え速度6時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SPDIV7	67	/* 時定数切り換え速度7時の倍率(1/n)	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYMTM1	68	/* 主軸同期定常時間1 位相合わせ前	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYMTM2	69	/* 主軸同期定常時間2 位相合わせ後	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SYPRT	70	/* 主軸同期位相合わせ減速率	*//* P0Y-A013F */
#define	M_SSEC_MPSSPC_SSCDRSELSP	71	/* 速度監視主軸ドア選択	*//* P1X-A157 */
#define	M_SSEC_MPSSPC_SSCSVOFFLTRSP	72	/* 速度監視サーボオフ中主軸異常検出時間	*//* P1X-A157E */
#define	M_SSEC_MPSSPC_SPGBSP	74	/* 基準、G/B 主軸指定	*//* P1X-A535 */
#define	M_SSEC_MPSSPC_SPTS1	101	/* S指令による主軸回転時のギア(00)の時定数	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS2	102	/* S指令による主軸回転時のギア(01)の時定数	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS3	103	/* S指令による主軸回転時のギア(10)の時定数	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SPTS4	104	/* S指令による主軸回転時のギア(11)の時定数	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_SUT	105	/* 速度到達範囲	*//* P1X-A091 */
#define	M_SSEC_MPSSPC_ORITYP	106	/* オリエント仕様	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ORISPD	107	/* オリエント速度	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ORISFT	108	/* オリエントインポジションシフト量	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_ZDETSPD	109	/* 初回Z相検出速度	*//* P1X-A091B */
#define	M_SSEC_MPSSPC_TAPSPD	110	/* 同期タップ原点復帰速度	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_TAPSFT	111	/* 同期タップ原点復帰シフト量	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXSPD	112	/* Ｃ軸原点復帰速度	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXSFT	113	/* Ｃ軸原点復帰シフト量	*//* P1X-A091C */
#define	M_SSEC_MPSSPC_CAXPARACHG	114	/* 主軸C軸パラメータ切替え	*//* P1X-A091w */
#define	M_SSEC_MPSSPC_SP2TS1	115	/* オリエント、位置ループ原点復帰方式の時定数（ギア00)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS2	116	/* オリエント、位置ループ原点復帰方式の時定数（ギア01)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS3	117	/* オリエント、位置ループ原点復帰方式の時定数（ギア10)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_SP2TS4	118	/* オリエント、位置ループ原点復帰方式の時定数（ギア11)	*//* P1X-A234 */
#define	M_SSEC_MPSSPC_STAPTR	120	/* 高速同期タップの時定数短縮率	*//* P1X-A282 */
#define	M_SSEC_MPSSPC_TRET	121	/* タレット割出し	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_GRC	122	/* タレット側ギヤ比	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_SPD	123	/* タレット割出し速度	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_T	124	/* タレット割出し時定数	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_INPOS	125	/* タレット割出しインポジション幅	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_TRET_FIN_OFF	126	/* 割出し位置決め完了オフ時間タイマ	*//* P1X-A234A */
#define	M_SSEC_MPSSPC_SPEC_SP	127	/* 主軸仕様	*//* P1X-A091AP */
#define	M_SSEC_MPSSPC_ORI_SPEC	128	/* オリエント仕様	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_CAX_SPEC	129	/* 主軸C軸仕様	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_SYN_SPEC	130	/* 主軸同期仕様	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_TAP_SPEC	131	/* 同期タップ仕様	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_ORI_INP2	132	/* オリエント第2インポジション幅	*//* P1X-A234F */
#define	M_SSEC_MPSSPC_HOBERRPHS	133	/* ホブ軸遅れ（進み）許容角度	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_HOBCMPT	134	/* ホブ軸自動補正一次遅れ時定数	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_HOBFFG	135	/* ホブ軸フィードフォワードゲイン	*//* P1X-A304 */
#define	M_SSEC_MPSSPC_STAP_AX_OFF	137	/* 高速同期タップ無効軸	*//* P1X-A282H */
#define	M_SSEC_MPSSPC_MOT_TYPE	138	/* モータ型名	*//* P1X-A399 */
#define	M_SSEC_MPSSPC_SDINSP	140	/* 速度監視入力ドア番号	*//* P1X-A157U */
#define	M_SSEC_MPSSPC_RATEDOUTL	3146	/* 電力算出用短時間定格出力(L巻線用)	*//* P1X-A481 */
#define	M_SSEC_MPSSPC_RATEDOUTH	3147	/* 電力算出用短時間定格出力(H巻線用)	*//* P1X-A481 */

/* 主軸パラメータ	*/
#define	M_SSEC_MPSP_SP001	1	/* SP001:マグセンサ、モータビルドインエンコーダオリエント位置ループゲイン	*/
#define	M_SSEC_MPSP_SP002	2	/* SP002:エンコーダオリエント位置ループゲイン	*/
#define	M_SSEC_MPSP_SP003	3	/* SP003:C軸非切削時位置ループゲイン	*/
#define	M_SSEC_MPSP_SP004	4	/* SP004:オリエントインポジション幅	*/
#define	M_SSEC_MPSP_SP005	5	/* SP005:オリエント切替速度制限値	*/
#define	M_SSEC_MPSP_SP006	6	/* SP006:オリエント時減速率	*/
#define	M_SSEC_MPSP_SP007	7	/* SP007:オリエントポジションシフト量	*/
#define	M_SSEC_MPSP_SP008	8	/* SP008:未使用	*/
#define	M_SSEC_MPSP_SP009	9	/* SP009:同期タップ位置ループゲイン	*/
#define	M_SSEC_MPSP_SP010	10	/* SP010:主軸同期位置ループゲイン	*/
#define	M_SSEC_MPSP_SP011	11	/* SP011:未使用	*/
#define	M_SSEC_MPSP_SP012	12	/* SP012:未使用	*/
#define	M_SSEC_MPSP_SP013	13	/* SP013:未使用	*/
#define	M_SSEC_MPSP_SP014	14	/* SP014:未使用	*/
#define	M_SSEC_MPSP_SP015	15	/* SP015:未使用	*/
#define	M_SSEC_MPSP_SP016	16	/* SP016:未使用	*/
#define	M_SSEC_MPSP_SP017	17	/* SP017:モータ最高速度	*/
#define	M_SSEC_MPSP_SP018	18	/* SP018:モータ零速度	*/
#define	M_SSEC_MPSP_SP019	19	/* SP019:速度指令加減速時定数	*/
#define	M_SSEC_MPSP_SP020	20	/* SP020:速度検出セット値	*/
#define	M_SSEC_MPSP_SP021	21	/* SP021:トルク制限1	*/
#define	M_SSEC_MPSP_SP022	22	/* SP022:速度制御時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP023	23	/* SP023:速度制御時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP024	24	/* SP024:未使用	*/
#define	M_SSEC_MPSP_SP025	25	/* SP025:主軸側ギヤ歯数1	*/
#define	M_SSEC_MPSP_SP026	26	/* SP026:主軸側ギヤ歯数2	*/
#define	M_SSEC_MPSP_SP027	27	/* SP027:主軸側ギヤ歯数3	*/
#define	M_SSEC_MPSP_SP028	28	/* SP028:主軸側ギヤ歯数4	*/
#define	M_SSEC_MPSP_SP029	29	/* SP029:モータ側ギヤ歯数1	*/
#define	M_SSEC_MPSP_SP030	30	/* SP030:モータ側ギヤ歯数2	*/
#define	M_SSEC_MPSP_SP031	31	/* SP031:モータ側ギヤ歯数3	*/
#define	M_SSEC_MPSP_SP032	32	/* SP032:モータ側ギヤ歯数4	*/
#define	M_SSEC_MPSP_SP033	33	/* SP033:主軸機能1	*/
#define	M_SSEC_MPSP_SP034	34	/* SP034:主軸機能2	*/
#define	M_SSEC_MPSP_SP035	35	/* SP035:主軸機能3	*/
#define	M_SSEC_MPSP_SP036	36	/* SP036:主軸機能4	*/
#define	M_SSEC_MPSP_SP037	37	/* SP037:主軸機能5	*/
#define	M_SSEC_MPSP_SP038	38	/* SP038:主軸機能6	*/
#define	M_SSEC_MPSP_SP039	39	/* SP039:アンプタイプ	*/
#define	M_SSEC_MPSP_SP040	40	/* SP040:モータタイプ	*/
#define	M_SSEC_MPSP_SP041	41	/* SP041:回生抵抗タイプ(SPJ)/パワーサプライタイプ(SP)	*/
#define	M_SSEC_MPSP_SP042	42	/* SP042:C軸用検出器レンジ	*/
#define	M_SSEC_MPSP_SP043	43	/* SP043:同期タップ、主軸同期用検出器レンジ	*/
#define	M_SSEC_MPSP_SP044	44	/* SP044:NC交信周期	*/
#define	M_SSEC_MPSP_SP045	45	/* SP045:未使用	*/
#define	M_SSEC_MPSP_SP046	46	/* SP046:速度指令デュアル・クッション	*/
#define	M_SSEC_MPSP_SP047	47	/* SP047:速度検出リセット値	*/
#define	M_SSEC_MPSP_SP048	48	/* SP048:速度到達範囲	*/
#define	M_SSEC_MPSP_SP049	49	/* SP049:トルク制限2	*/
#define	M_SSEC_MPSP_SP050	50	/* SP050:トルク制限3	*/
#define	M_SSEC_MPSP_SP051	51	/* SP051:トルク制限4(未使用)	*/
#define	M_SSEC_MPSP_SP052	52	/* SP052:トルク制限5(未使用)	*/
#define	M_SSEC_MPSP_SP053	53	/* SP053:トルク制限6(未使用)	*/
#define	M_SSEC_MPSP_SP054	54	/* SP054:トルク制限7(未使用)	*/
#define	M_SSEC_MPSP_SP055	55	/* SP055:速度偏差過大タイマー	*/
#define	M_SSEC_MPSP_SP056	56	/* SP056:可変励磁(min値)	*/
#define	M_SSEC_MPSP_SP057	57	/* SP057:過度切替速度	*/
#define	M_SSEC_MPSP_SP058	58	/* SP058:未使用	*/
#define	M_SSEC_MPSP_SP059	59	/* SP059:巻線切替ベース遮断タイマー	*/
#define	M_SSEC_MPSP_SP060	60	/* SP060:巻線切替後電流制限タイマー	*/
#define	M_SSEC_MPSP_SP061	61	/* SP061:電流制限値	*/
#define	M_SSEC_MPSP_SP062	62	/* SP062:未使用	*/
#define	M_SSEC_MPSP_SP063	63	/* SP063:過負荷アラーム検出時間	*/
#define	M_SSEC_MPSP_SP064	64	/* SP064:過負荷アラーム検出レベル	*/
#define	M_SSEC_MPSP_SP065	65	/* SP065:可変速度ループ比例ゲイン目標値	*/
#define	M_SSEC_MPSP_SP066	66	/* SP066:可変速度ループ比例ゲイン変更開始速度	*/
#define	M_SSEC_MPSP_SP067	67	/* SP067:可変電流ループゲイン変更開始速度	*/
#define	M_SSEC_MPSP_SP068	68	/* SP068:可変電流ループゲイン変更終了速度	*/
#define	M_SSEC_MPSP_SP069	69	/* SP069:可変電流ループゲイン目標値	*/
#define	M_SSEC_MPSP_SP070	70	/* SP070:機械共振抑制フィルタ周波数	*/
#define	M_SSEC_MPSP_SP071	71	/* SP071:固定制御定数	*/
#define	M_SSEC_MPSP_SP072	72	/* SP072:固定制御定数	*/
#define	M_SSEC_MPSP_SP073	73	/* SP073:固定制御定数	*/
#define	M_SSEC_MPSP_SP074	74	/* SP074:固定制御定数	*/
#define	M_SSEC_MPSP_SP075	75	/* SP075:固定制御定数	*/
#define	M_SSEC_MPSP_SP076	76	/* SP076:機械共振抑制フィルタ動作速度	*/
#define	M_SSEC_MPSP_SP077	77	/* SP077:Td時間選択	*/
#define	M_SSEC_MPSP_SP078	78	/* SP078:固定制御定数	*/
#define	M_SSEC_MPSP_SP079	79	/* SP079:固定制御定数	*/
#define	M_SSEC_MPSP_SP080	80	/* SP080:固定制御定数	*/
#define	M_SSEC_MPSP_SP081	81	/* SP081:固定制御定数	*/
#define	M_SSEC_MPSP_SP082	82	/* SP082:固定制御定数	*/
#define	M_SSEC_MPSP_SP083	83	/* SP083:未使用	*/
#define	M_SSEC_MPSP_SP084	84	/* SP084:未使用	*/
#define	M_SSEC_MPSP_SP085	85	/* SP085:未使用	*/
#define	M_SSEC_MPSP_SP086	86	/* SP086:未使用	*/
#define	M_SSEC_MPSP_SP087	87	/* SP087:減速時可変トルク制限倍率目標値	*/
#define	M_SSEC_MPSP_SP088	88	/* SP088:減速時可変トルク制限倍率目標値	*/
#define	M_SSEC_MPSP_SP089	89	/* SP089:未使用	*/
#define	M_SSEC_MPSP_SP090	90	/* SP090:減速検出器パルス誤差許容値	*/
#define	M_SSEC_MPSP_SP091	91	/* SP091:未使用	*/
#define	M_SSEC_MPSP_SP092	92	/* SP092:未使用	*/
#define	M_SSEC_MPSP_SP093	93	/* SP093:位置検出器パルス誤差許容値	*/
#define	M_SSEC_MPSP_SP094	94	/* SP094:ロードメーター出力フィルター	*/
#define	M_SSEC_MPSP_SP095	95	/* SP095:速度フィードバック平均回数	*/
#define	M_SSEC_MPSP_SP096	96	/* SP096:エンコーダギヤ比	*/
#define	M_SSEC_MPSP_SP097	97	/* SP097:オリエント仕様	*/
#define	M_SSEC_MPSP_SP098	98	/* SP098:オリエント時、速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP099	99	/* SP099:オリエント時、速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP100	100	/* SP100:オリエント時、速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP101	101	/* SP101:オリエント前出しインポジション幅	*/
#define	M_SSEC_MPSP_SP102	102	/* SP102:オリエント時誤差過大幅	*/
#define	M_SSEC_MPSP_SP103	103	/* SP103:位置決め完了オフ時間タイマー	*/
#define	M_SSEC_MPSP_SP104	104	/* SP104:オリエントサーボロック中トルク制限値	*/
#define	M_SSEC_MPSP_SP105	105	/* SP105:オリエント電流ループゲイン倍率1	*/
#define	M_SSEC_MPSP_SP106	106	/* SP106:オリエント電流ループゲイン倍率2	*/
#define	M_SSEC_MPSP_SP107	107	/* SP107:オリエント時減速率2	*/
#define	M_SSEC_MPSP_SP108	108	/* SP108:オリエント時減速率3	*/
#define	M_SSEC_MPSP_SP109	109	/* SP109:オリエント時減速率4	*/
#define	M_SSEC_MPSP_SP110	110	/* SP110:未使用	*/
#define	M_SSEC_MPSP_SP111	111	/* SP111:未使用	*/
#define	M_SSEC_MPSP_SP112	112	/* SP112:未使用	*/
#define	M_SSEC_MPSP_SP113	113	/* SP113:未使用	*/
#define	M_SSEC_MPSP_SP114	114	/* SP114:オリエントパルスミスチェック値	*/
#define	M_SSEC_MPSP_SP115	115	/* SP115:未使用	*/
#define	M_SSEC_MPSP_SP116	116	/* SP116:未使用	*/
#define	M_SSEC_MPSP_SP117	117	/* SP117:未使用	*/
#define	M_SSEC_MPSP_SP118	118	/* SP118:未使用	*/
#define	M_SSEC_MPSP_SP119	119	/* SP119:オリエント位置ゲインH巻線補正倍率	*/
#define	M_SSEC_MPSP_SP120	120	/* SP120:オリエント位置ゲインL巻線補正倍率	*/
#define	M_SSEC_MPSP_SP121	121	/* SP121:オリエント減速率H巻線補正倍率	*/
#define	M_SSEC_MPSP_SP122	122	/* SP122:オリエント減速率L巻線補正倍率	*/
#define	M_SSEC_MPSP_SP123	123	/* SP123:マグセンサ出力ピーク値	*/
#define	M_SSEC_MPSP_SP124	124	/* SP124:マグセンサリニアゾーン幅	*/
#define	M_SSEC_MPSP_SP125	125	/* SP125:マグセンサ切換え点	*/
#define	M_SSEC_MPSP_SP126	126	/* SP126:未使用	*/
#define	M_SSEC_MPSP_SP127	127	/* SP127:未使用	*/
#define	M_SSEC_MPSP_SP128	128	/* SP128:未使用	*/
#define	M_SSEC_MPSP_SP129	129	/* SP129:C軸仕様	*/
#define	M_SSEC_MPSP_SP130	130	/* SP130:C軸切削時第1位置ループゲイン	*/
#define	M_SSEC_MPSP_SP131	131	/* SP131:C軸切削時第2位置ループゲイン	*/
#define	M_SSEC_MPSP_SP132	132	/* SP132:C軸切削時第3位置ループゲイン	*/
#define	M_SSEC_MPSP_SP133	133	/* SP133:C軸非切削時停止位置ループゲイン	*/
#define	M_SSEC_MPSP_SP134	134	/* SP134:C軸非切削時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP135	135	/* SP135:C軸非切削時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP136	136	/* SP136:C軸非切削時速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP137	137	/* SP137:C軸切削時第1速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP138	138	/* SP138:C軸切削時第1速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP139	139	/* SP139:C軸切削時第1速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP140	140	/* SP140:C軸切削時第2速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP141	141	/* SP141:C軸切削時第2速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP142	142	/* SP142:C軸切削時第2速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP143	143	/* SP143:C軸切削時第3速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP144	144	/* SP144:C軸切削時第3速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP145	145	/* SP145:C軸切削時第3速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP146	146	/* SP146:C軸切削停止時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP147	147	/* SP147:C軸切削停止時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP148	148	/* SP148:C軸切削停止時速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP149	149	/* SP149:C軸原点復帰速度	*/
#define	M_SSEC_MPSP_SP150	150	/* SP150:C軸原点復帰減速点	*/
#define	M_SSEC_MPSP_SP151	151	/* SP151:C軸原点復帰シフト量(low byte)	*/
#define	M_SSEC_MPSP_SP152	152	/* SP152:C軸原点復帰シフト量(high byte)	*/
#define	M_SSEC_MPSP_SP153	153	/* SP153:C軸インポジション幅	*/
#define	M_SSEC_MPSP_SP154	154	/* SP154:C軸時誤差過大幅(low byte)	*/
#define	M_SSEC_MPSP_SP155	155	/* SP155:C軸時誤差過大幅(high byte)	*/
#define	M_SSEC_MPSP_SP156	156	/* SP156:未使用	*/
#define	M_SSEC_MPSP_SP157	157	/* SP157:未使用	*/
#define	M_SSEC_MPSP_SP158	158	/* SP158:未使用	*/
#define	M_SSEC_MPSP_SP159	159	/* SP159:C軸非切削時可変励磁率	*/
#define	M_SSEC_MPSP_SP160	160	/* SP160:C軸切削時可変励磁率	*/
#define	M_SSEC_MPSP_SP161	161	/* SP161:C軸非切削時電流ループゲイン倍率1	*/
#define	M_SSEC_MPSP_SP162	162	/* SP162:C軸非切削時電流ループゲイン倍率2	*/
#define	M_SSEC_MPSP_SP163	163	/* SP163:C軸切削時電流ループゲイン倍率1	*/
#define	M_SSEC_MPSP_SP164	164	/* SP164:C軸切削時電流ループゲイン倍率2	*/
#define	M_SSEC_MPSP_SP165	165	/* SP165:C軸位置ループゲイン2	*/
#define	M_SSEC_MPSP_SP166	166	/* SP166:C軸位置ループゲイン3	*/
#define	M_SSEC_MPSP_SP167	167	/* SP167:主軸保持力アップ時位置ループゲイン	*/
#define	M_SSEC_MPSP_SP168	168	/* SP168:主軸保持力アップ時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP169	169	/* SP169:主軸保持力アップ時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP170	170	/* SP170:主軸保持力アップ時速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP171	171	/* SP171:未使用	*/
#define	M_SSEC_MPSP_SP172	172	/* SP172:未使用	*/
#define	M_SSEC_MPSP_SP173	173	/* SP173:未使用	*/
#define	M_SSEC_MPSP_SP174	174	/* SP174:未使用	*/
#define	M_SSEC_MPSP_SP175	175	/* SP175:未使用	*/
#define	M_SSEC_MPSP_SP176	176	/* SP176:未使用	*/
#define	M_SSEC_MPSP_SP177	177	/* SP177:主軸同期仕様	*/
#define	M_SSEC_MPSP_SP178	178	/* SP178:主軸同期時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP179	179	/* SP179:主軸同期時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP180	180	/* SP180:主軸同期時速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP181	181	/* SP181:主軸同期時可変速度ループ比例ゲイン目標値	*/
#define	M_SSEC_MPSP_SP182	182	/* SP182:主軸同期時可変速度ループ比例ゲイン変更開始速度	*/
#define	M_SSEC_MPSP_SP183	183	/* SP183:主軸同期自動機一致速度	*/
#define	M_SSEC_MPSP_SP184	184	/* SP184:未使用	*/
#define	M_SSEC_MPSP_SP185	185	/* SP185:主軸同期インポジション幅	*/
#define	M_SSEC_MPSP_SP186	186	/* SP186:主軸同期時誤差拡大幅	*/
#define	M_SSEC_MPSP_SP187	187	/* SP187:主軸同期時電流ループゲイン倍率1	*/
#define	M_SSEC_MPSP_SP188	188	/* SP188:主軸同期時電流ループゲイン倍率2	*/
#define	M_SSEC_MPSP_SP189	189	/* SP189:主軸同期時位置ループゲイン2	*/
#define	M_SSEC_MPSP_SP190	190	/* SP190:主軸同期時位置ループゲイン3	*/
#define	M_SSEC_MPSP_SP191	191	/* SP191:未使用	*/
#define	M_SSEC_MPSP_SP192	192	/* SP192:未使用	*/
#define	M_SSEC_MPSP_SP193	193	/* SP193:同期タップ仕様	*/
#define	M_SSEC_MPSP_SP194	194	/* SP194:同期タップ時速度ループゲイン比例項	*/
#define	M_SSEC_MPSP_SP195	195	/* SP195:同期タップ時速度ループゲイン積分項	*/
#define	M_SSEC_MPSP_SP196	196	/* SP196:同期タップ時速度ループゲイン遅れ進み項	*/
#define	M_SSEC_MPSP_SP197	197	/* SP197:未使用	*/
#define	M_SSEC_MPSP_SP198	198	/* SP198:同期タップ時可変速度ループ比例ゲイン目標値	*/
#define	M_SSEC_MPSP_SP199	199	/* SP199:同期タップ時可変速度ループ比例ゲイン変更開始速度	*/
#define	M_SSEC_MPSP_SP200	200	/* SP200:同期タップ加速度フィードフォワードゲイン(ギヤ1)	*/
#define	M_SSEC_MPSP_SP201	201	/* SP201:同期タップ加速度フィードフォワードゲイン(ギヤ2)	*/
#define	M_SSEC_MPSP_SP202	202	/* SP202:同期タップ加速度フィードフォワードゲイン(ギヤ3)	*/
#define	M_SSEC_MPSP_SP203	203	/* SP203:同期タップ加速度フィードフォワードゲイン(ギヤ4)	*/
#define	M_SSEC_MPSP_SP204	204	/* SP204:未使用	*/
#define	M_SSEC_MPSP_SP205	205	/* SP205:未使用	*/
#define	M_SSEC_MPSP_SP206	206	/* SP206:未使用	*/
#define	M_SSEC_MPSP_SP207	207	/* SP207:未使用	*/
#define	M_SSEC_MPSP_SP208	208	/* SP208:未使用	*/
#define	M_SSEC_MPSP_SP209	209	/* SP209:未使用	*/
#define	M_SSEC_MPSP_SP210	210	/* SP210:未使用	*/
#define	M_SSEC_MPSP_SP211	211	/* SP211:未使用	*/
#define	M_SSEC_MPSP_SP212	212	/* SP212:未使用	*/
#define	M_SSEC_MPSP_SP213	213	/* SP213:未使用	*/
#define	M_SSEC_MPSP_SP214	214	/* SP214:同期タップ原点復帰速度	*/
#define	M_SSEC_MPSP_SP215	215	/* SP215:同期タップ原点復帰減速点	*/
#define	M_SSEC_MPSP_SP216	216	/* SP216:同期タップ原点復帰シフト量	*/
#define	M_SSEC_MPSP_SP217	217	/* SP217:同期タップインポジション幅	*/
#define	M_SSEC_MPSP_SP218	218	/* SP218:同期タップ誤差過大幅	*/
#define	M_SSEC_MPSP_SP219	219	/* SP219:同期タップ電流ループゲイン倍率1	*/
#define	M_SSEC_MPSP_SP220	220	/* SP220:同期タップ電流ループゲイン倍率2	*/
#define	M_SSEC_MPSP_SP221	221	/* SP221:同期タップ位置ループゲイン2	*/
#define	M_SSEC_MPSP_SP222	222	/* SP222:同期タップ位置ループゲイン3	*/
#define	M_SSEC_MPSP_SP223	223	/* SP223:未使用	*/
#define	M_SSEC_MPSP_SP224	224	/* SP224:未使用	*/
#define	M_SSEC_MPSP_SP225	225	/* SP225:主軸側ギヤ歯数5	*/
#define	M_SSEC_MPSP_SP226	226	/* SP226:主軸側ギヤ歯数6	*/
#define	M_SSEC_MPSP_SP227	227	/* SP227:主軸側ギヤ歯数7	*/
#define	M_SSEC_MPSP_SP228	228	/* SP228:主軸側ギヤ歯数8	*/
#define	M_SSEC_MPSP_SP229	229	/* SP229:モータ側ギヤ歯数5	*/
#define	M_SSEC_MPSP_SP230	230	/* SP230:モータ側ギヤ歯数6	*/
#define	M_SSEC_MPSP_SP231	231	/* SP231:モータ側ギヤ歯数7	*/
#define	M_SSEC_MPSP_SP232	232	/* SP232:モータ側ギヤ歯数8	*/
#define	M_SSEC_MPSP_SP233	233	/* SP233:外乱オブザーバ統合イナーシャ倍率	*/
#define	M_SSEC_MPSP_SP234	234	/* SP234:外乱オブザーバローパスフィルタ周波数	*/
#define	M_SSEC_MPSP_SP235	235	/* SP235:外乱オブザーバゲイン	*/
#define	M_SSEC_MPSP_SP236	236	/* SP236:未使用	*/
#define	M_SSEC_MPSP_SP237	237	/* SP237:未使用	*/
#define	M_SSEC_MPSP_SP238	238	/* SP238:未使用	*/
#define	M_SSEC_MPSP_SP239	239	/* SP239:未使用	*/
#define	M_SSEC_MPSP_SP240	240	/* SP240:未使用	*/
#define	M_SSEC_MPSP_SP241	241	/* SP241:未使用	*/
#define	M_SSEC_MPSP_SP242	242	/* SP242:未使用	*/
#define	M_SSEC_MPSP_SP243	243	/* SP243:未使用	*/
#define	M_SSEC_MPSP_SP244	244	/* SP244:未使用	*/
#define	M_SSEC_MPSP_SP245	245	/* SP245:未使用	*/
#define	M_SSEC_MPSP_SP246	246	/* SP246:未使用	*/
#define	M_SSEC_MPSP_SP247	247	/* SP247:未使用	*/
#define	M_SSEC_MPSP_SP248	248	/* SP248:未使用	*/
#define	M_SSEC_MPSP_SP249	249	/* SP249:未使用	*/
#define	M_SSEC_MPSP_SP250	250	/* SP250:未使用	*/
#define	M_SSEC_MPSP_SP251	251	/* SP251:未使用	*/
#define	M_SSEC_MPSP_SP252	252	/* SP252:未使用	*/
#define	M_SSEC_MPSP_SP253	253	/* SP253:D/A出力チャンネル1データ番号	*/
#define	M_SSEC_MPSP_SP254	254	/* SP254:D/A出力チャンネル2データ番号	*/
#define	M_SSEC_MPSP_SP255	255	/* SP255:D/A出力チャンネル3データ番号	*/
#define	M_SSEC_MPSP_SP256	256	/* SP256:D/A出力チャンネル4データ番号	*/
#define	M_SSEC_MPSP_SP257	257	/* SP257:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP258	258	/* SP258:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP259	259	/* SP259:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP260	260	/* SP260:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP261	261	/* SP261:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP262	262	/* SP262:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP263	263	/* SP263:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP264	264	/* SP264:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP265	265	/* SP265:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP266	266	/* SP266:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP267	267	/* SP267:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP268	268	/* SP268:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP269	269	/* SP269:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP270	270	/* SP270:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP271	271	/* SP271:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP272	272	/* SP272:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP273	273	/* SP273:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP274	274	/* SP274:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP275	275	/* SP275:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP276	276	/* SP276:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP277	277	/* SP277:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP278	278	/* SP278:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP279	279	/* SP279:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP280	280	/* SP280:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP281	281	/* SP281:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP282	282	/* SP282:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP283	283	/* SP283:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP284	284	/* SP284:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP285	285	/* SP285:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP286	286	/* SP286:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP287	287	/* SP287:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP288	288	/* SP288:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP289	289	/* SP289:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP290	290	/* SP290:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP291	291	/* SP291:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP292	292	/* SP292:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP293	293	/* SP293:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP294	294	/* SP294:外乱オブザーバトルク定数	*/
#define	M_SSEC_MPSP_SP295	295	/* SP295:外乱オブザーバモータイナーシャ	*/
#define	M_SSEC_MPSP_SP296	296	/* SP296:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP297	297	/* SP297:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP298	298	/* SP298:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP299	299	/* SP299:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP300	300	/* SP300:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP301	301	/* SP301:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP302	302	/* SP302:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP303	303	/* SP303:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP304	304	/* SP304:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP305	305	/* SP305:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP306	306	/* SP306:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP307	307	/* SP307:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP308	308	/* SP308:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP309	309	/* SP309:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP310	310	/* SP310:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP311	311	/* SP311:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP312	312	/* SP312:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP313	313	/* SP313:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP314	314	/* SP314:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP315	315	/* SP315:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP316	316	/* SP316:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP317	317	/* SP317:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP318	318	/* SP318:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP319	319	/* SP319:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP320	320	/* SP320:モータ定数(H巻線)	*/
#define	M_SSEC_MPSP_SP321	321	/* SP321:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP322	322	/* SP322:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP323	323	/* SP323:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP324	324	/* SP324:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP325	325	/* SP325:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP326	326	/* SP326:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP327	327	/* SP327:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP328	328	/* SP328:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP329	329	/* SP329:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP330	330	/* SP330:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP331	331	/* SP331:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP332	332	/* SP332:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP333	333	/* SP333:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP334	334	/* SP334:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP335	335	/* SP335:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP336	336	/* SP336:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP337	337	/* SP337:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP338	338	/* SP338:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP339	339	/* SP339:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP340	340	/* SP340:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP341	341	/* SP341:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP342	342	/* SP342:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP343	343	/* SP343:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP344	344	/* SP344:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP345	345	/* SP345:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP346	346	/* SP346:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP347	347	/* SP347:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP348	348	/* SP348:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP349	349	/* SP349:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP350	350	/* SP350:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP351	351	/* SP351:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP352	352	/* SP352:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP353	353	/* SP353:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP354	354	/* SP354:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP355	355	/* SP355:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP356	356	/* SP356:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP357	357	/* SP357:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP358	358	/* SP358:外乱オブザーバトルク定数2	*/
#define	M_SSEC_MPSP_SP359	359	/* SP359:外乱オブザーバモータイナーシャ2	*/
#define	M_SSEC_MPSP_SP360	360	/* SP360:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP361	361	/* SP361:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP362	362	/* SP362:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP363	363	/* SP363:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP364	364	/* SP364:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP365	365	/* SP365:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP366	366	/* SP366:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP367	367	/* SP367:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP368	368	/* SP368:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP369	369	/* SP369:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP370	370	/* SP370:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP371	371	/* SP371:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP372	372	/* SP372:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP373	373	/* SP373:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP374	374	/* SP374:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP375	375	/* SP375:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP376	376	/* SP376:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP377	377	/* SP377:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP378	378	/* SP378:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP379	379	/* SP379:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP380	380	/* SP380:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP381	381	/* SP381:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP382	382	/* SP382:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP383	383	/* SP383:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP384	384	/* SP384:モータ定数(L巻線)	*/
#define	M_SSEC_MPSP_SP1001	1001	/* SP1001:位置ゲイン 通常	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1002	1002	/* SP1002:位置ゲイン 主軸同期時	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1003	1003	/* SP1003:位置ゲイン Ｃ軸時	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1004	1004	/* SP1004:位置ゲイン 同期タップ時	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1005	1005	/* SP1005:速度 ゲイン1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1006	1006	/* SP1006:速度 進み補償1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1007	1007	/* SP1007:速度 遅れ補償1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1008	1008	/* SP1008:速度 ゲイン2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1009	1009	/* SP1009:速度 進み補償2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1010	1010	/* SP1010:速度 遅れ補償2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1011	1011	/* SP1011:可変電流ゲイン 開始速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1012	1012	/* SP1012:可変電流ゲイン 終了速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1013	1013	/* SP1013:可変電流ゲイン 倍率	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1014	1014	/* SP1014:最小励磁率1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1015	1015	/* SP1015:最小励磁率2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1016	1016	/* SP1016:位相補償時定数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1017	1017	/* SP1017:主軸仕様1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1018	1018	/* SP1018:主軸仕様2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1019	1019	/* SP1019:位置検出器分解能（主軸端）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1020	1020	/* SP1020:速度検出器分解能（モータ端）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1021	1021	/* SP1021:過負荷アラーム 検出時間	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1022	1022	/* SP1022:過負荷アラーム 検出レベル	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1023	1023	/* SP1023:誤差過大検出幅（位置モード）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1024	1024	/* SP1024:インポジション幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1025	1025	/* SP1025:第２インポジション幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1026	1026	/* SP1026:モータ最高速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1027	1027	/* SP1027:モータ零速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1028	1028	/* SP1028:速度検出 セット値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1029	1029	/* SP1029:速度検出 リセット幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1030	1030	/* SP1030:第２速度検出セット値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1031	1031	/* SP1031:モータタイプ	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1032	1032	/* SP1032:パワーサプライタイプ	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1033	1033	/* SP1033:主軸機能1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1034	1034	/* SP1034:主軸機能2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1035	1035	/* SP1035:主軸機能3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1036	1036	/* SP1036:主軸機能4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1037	1037	/* SP1037:負荷イナーシャ倍率	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1038	1038	/* SP1038:ノッチフィルタ 周波数1（76Hz～）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1039	1039	/* SP1039:ロストモーション補正タイミング	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1040	1040	/* SP1040:ロストモーション補正1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1041	1041	/* SP1041:ロストモーション補正2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1042	1042	/* SP1042:オーバーシュート補正1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1043	1043	/* SP1043:オーバーシュート補正2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1044	1044	/* SP1044:外乱オブザーバ フィルター周波数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1045	1045	/* SP1045:外乱オブザーバ ゲイン	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1046	1046	/* SP1046:ノッチフィルタ 周波数2（76Hz～）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1047	1047	/* SP1047:誘起電圧補正ゲイン	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1048	1048	/* SP1048:電圧不感帯補正	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1049	1049	/* SP1049:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1050	1050	/* SP1050:加速度フィードフォワード	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1051	1051	/* SP1051:デュアルフィードバック制御 時定数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1052	1052	/* SP1052:デュアルフィードバック制御 不感帯	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1053	1053	/* SP1053:誤差過大検出幅（速度モード）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1054	1054	/* SP1054:クローズドループ過走検出幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1055	1055	/* SP1055:非常停止最大遅延時間	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1056	1056	/* SP1056:減速制御時定数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1057	1057	/* SP1057:主軸側ギア1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1058	1058	/* SP1058:主軸側ギア2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1059	1059	/* SP1059:主軸側ギア3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1060	1060	/* SP1060:主軸側ギア4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1061	1061	/* SP1061:モータ側ギア1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1062	1062	/* SP1062:モータ側ギア2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1063	1063	/* SP1063:モータ側ギア3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1064	1064	/* SP1064:モータ側ギア4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1065	1065	/* SP1065:トルク制限1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1066	1066	/* SP1066:トルク制限2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1067	1067	/* SP1067:トルク制限3	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1068	1068	/* SP1068:トルク制限4	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1069	1069	/* SP1069:加速時電流低減 下限値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1070	1070	/* SP1070:加速時電流低減 折れ点速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1071	1071	/* SP1071:減速時電流低減 下限値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1072	1072	/* SP1072:減速時電流低減 折れ点速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1073	1073	/* SP1073:可変速度ゲイン 目標値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1074	1074	/* SP1074:可変速度ゲイン 変更開始速度	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1075	1075	/* SP1075:回生時すべり 高速巻線補正倍率	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1076	1076	/* SP1076:回生時すべり 低速巻線補正倍率	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1077	1077	/* SP1077:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1078	1078	/* SP1078:温度補正 機能選択	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1079	1079	/* SP1079:温度補正 初期値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1080	1080	/* SP1080:温度補正 鉄損係数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1081	1081	/* SP1081:速度キャンセル係数	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1082	1082	/* SP1082:位相補償時定数下限値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1083	1083	/* SP1083:位相補償完了幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1084	1084	/* SP1084:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1085	1085	/* SP1085:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1086	1086	/* SP1086:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1087	1087	/* SP1087:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1088	1088	/* SP1088:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1089	1089	/* SP1089:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1090	1090	/* SP1090:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1091	1091	/* SP1091:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1092	1092	/* SP1092:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1093	1093	/* SP1093:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1094	1094	/* SP1094:巻線切替 ゲート遮断タイマ	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1095	1095	/* SP1095:巻線切替 電流制限タイマ	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1096	1096	/* SP1096:巻線切替 電流制限値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1097	1097	/* SP1097:Q軸電流 進み補償	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1098	1098	/* SP1098:D軸電流 進み補償	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1099	1099	/* SP1099:Q軸電流 ゲイン	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1100	1100	/* SP1100:D軸電流 ゲイン	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1101	1101	/* SP1101:Q軸電流 進み補償(低速巻線)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1102	1102	/* SP1102:D軸電流 進み補償(低速巻線)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1103	1103	/* SP1103:Q軸電流 ゲイン(低速巻線)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1104	1104	/* SP1104:D軸電流 ゲイン(低速巻線)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1105	1105	/* SP1105:(中速巻予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1106	1106	/* SP1106:(中速巻予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1107	1107	/* SP1107:(中速巻予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1108	1108	/* SP1108:(中速巻予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1109	1109	/* SP1109:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1110	1110	/* SP1110:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1111	1111	/* SP1111:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1112	1112	/* SP1112:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1113	1113	/* SP1113:オープンループ時電流指令値	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1114	1114	/* SP1114:オリエントパルス誤差チェック幅	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1115	1115	/* SP1115:（SPM Z相位置磁極データ予約）	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1116	1116	/* SP1116:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1117	1117	/* SP1117:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1118	1118	/* SP1118:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1119	1119	/* SP1119:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1120	1120	/* SP1120:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1121	1121	/* SP1121:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1122	1122	/* SP1122:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1123	1123	/* SP1123:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1124	1124	/* SP1124:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1125	1125	/* SP1125:ＤＡ出力データ番号 チャンネル1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1126	1126	/* SP1126:ＤＡ出力データ番号 チャンネル2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1127	1127	/* SP1127:ＤＡ出力倍率 チャンネル1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1128	1128	/* SP1128:ＤＡ出力倍率 チャンネル2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1129	1129	/* SP1129:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1130	1130	/* SP1130:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1131	1131	/* SP1131:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1132	1132	/* SP1132:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1133	1133	/* SP1133:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1134	1134	/* SP1134:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1135	1135	/* SP1135:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1136	1136	/* SP1136:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1137	1137	/* SP1137:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1138	1138	/* SP1138:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1139	1139	/* SP1139:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1140	1140	/* SP1140:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1141	1141	/* SP1141:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1142	1142	/* SP1142:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1143	1143	/* SP1143:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1144	1144	/* SP1144:高速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1145	1145	/* SP1145:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1146	1146	/* SP1146:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1147	1147	/* SP1147:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1148	1148	/* SP1148:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1149	1149	/* SP1149:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1150	1150	/* SP1150:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1151	1151	/* SP1151:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1152	1152	/* SP1152:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1153	1153	/* SP1153:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1154	1154	/* SP1154:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1155	1155	/* SP1155:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1156	1156	/* SP1156:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1157	1157	/* SP1157:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1158	1158	/* SP1158:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1159	1159	/* SP1159:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1160	1160	/* SP1160:高速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1161	1161	/* SP1161:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1162	1162	/* SP1162:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1163	1163	/* SP1163:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1164	1164	/* SP1164:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1165	1165	/* SP1165:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1166	1166	/* SP1166:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1167	1167	/* SP1167:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1168	1168	/* SP1168:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1169	1169	/* SP1169:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1170	1170	/* SP1170:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1171	1171	/* SP1171:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1172	1172	/* SP1172:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1173	1173	/* SP1173:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1174	1174	/* SP1174:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1175	1175	/* SP1175:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1176	1176	/* SP1176:低速巻線モータ定数1	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1177	1177	/* SP1177:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1178	1178	/* SP1178:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1179	1179	/* SP1179:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1180	1180	/* SP1180:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1181	1181	/* SP1181:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1182	1182	/* SP1182:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1183	1183	/* SP1183:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1184	1184	/* SP1184:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1185	1185	/* SP1185:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1186	1186	/* SP1186:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1187	1187	/* SP1187:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1188	1188	/* SP1188:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1189	1189	/* SP1189:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1190	1190	/* SP1190:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1191	1191	/* SP1191:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1192	1192	/* SP1192:低速巻線モータ定数2	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1193	1193	/* SP1193:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1194	1194	/* SP1194:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1195	1195	/* SP1195:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1196	1196	/* SP1196:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1197	1197	/* SP1197:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1198	1198	/* SP1198:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1199	1199	/* SP1199:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1200	1200	/* SP1200:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1201	1201	/* SP1201:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1202	1202	/* SP1202:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1203	1203	/* SP1203:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1204	1204	/* SP1204:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1205	1205	/* SP1205:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1206	1206	/* SP1206:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1207	1207	/* SP1207:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1208	1208	/* SP1208:中速巻線モータ定数1(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1209	1209	/* SP1209:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1210	1210	/* SP1210:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1211	1211	/* SP1211:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1212	1212	/* SP1212:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1213	1213	/* SP1213:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1214	1214	/* SP1214:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1215	1215	/* SP1215:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1216	1216	/* SP1216:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1217	1217	/* SP1217:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1218	1218	/* SP1218:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1219	1219	/* SP1219:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1220	1220	/* SP1220:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1221	1221	/* SP1221:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1222	1222	/* SP1222:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1223	1223	/* SP1223:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1224	1224	/* SP1224:中速巻線モータ定数2(予約)	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1225	1225	/* SP1225:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1226	1226	/* SP1226:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1227	1227	/* SP1227:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1228	1228	/* SP1228:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1229	1229	/* SP1229:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1230	1230	/* SP1230:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1231	1231	/* SP1231:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1232	1232	/* SP1232:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1233	1233	/* SP1233:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1234	1234	/* SP1234:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1235	1235	/* SP1235:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1236	1236	/* SP1236:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1237	1237	/* SP1237:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1238	1238	/* SP1238:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1239	1239	/* SP1239:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1240	1240	/* SP1240:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1241	1241	/* SP1241:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1242	1242	/* SP1242:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1243	1243	/* SP1243:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1244	1244	/* SP1244:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1245	1245	/* SP1245:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1246	1246	/* SP1246:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1247	1247	/* SP1247:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1248	1248	/* SP1248:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1249	1249	/* SP1249:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1250	1250	/* SP1250:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1251	1251	/* SP1251:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1252	1252	/* SP1252:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1253	1253	/* SP1253:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1254	1254	/* SP1254:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1255	1255	/* SP1255:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1256	1256	/* SP1256:ユーザ非公開領域	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1257	1257	/* SP1257:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1258	1258	/* SP1258:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1259	1259	/* SP1259:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1260	1260	/* SP1260:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1261	1261	/* SP1261:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1262	1262	/* SP1262:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1263	1263	/* SP1263:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1264	1264	/* SP1264:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1265	1265	/* SP1265:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1266	1266	/* SP1266:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1267	1267	/* SP1267:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1268	1268	/* SP1268:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1269	1269	/* SP1269:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1270	1270	/* SP1270:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1271	1271	/* SP1271:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1272	1272	/* SP1272:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1273	1273	/* SP1273:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1274	1274	/* SP1274:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1275	1275	/* SP1275:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1276	1276	/* SP1276:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1277	1277	/* SP1277:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1278	1278	/* SP1278:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1279	1279	/* SP1279:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1280	1280	/* SP1280:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1281	1281	/* SP1281:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1282	1282	/* SP1282:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1283	1283	/* SP1283:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1284	1284	/* SP1284:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1285	1285	/* SP1285:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1286	1286	/* SP1286:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1287	1287	/* SP1287:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1288	1288	/* SP1288:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1289	1289	/* SP1289:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1290	1290	/* SP1290:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1291	1291	/* SP1291:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1292	1292	/* SP1292:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1293	1293	/* SP1293:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1294	1294	/* SP1294:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1295	1295	/* SP1295:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1296	1296	/* SP1296:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1297	1297	/* SP1297:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1298	1298	/* SP1298:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1299	1299	/* SP1299:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1300	1300	/* SP1300:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1301	1301	/* SP1301:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1302	1302	/* SP1302:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1303	1303	/* SP1303:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1304	1304	/* SP1304:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1305	1305	/* SP1305:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1306	1306	/* SP1306:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1307	1307	/* SP1307:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1308	1308	/* SP1308:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1309	1309	/* SP1309:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1310	1310	/* SP1310:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1311	1311	/* SP1311:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1312	1312	/* SP1312:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1313	1313	/* SP1313:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1314	1314	/* SP1314:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1315	1315	/* SP1315:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1316	1316	/* SP1316:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1317	1317	/* SP1317:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1318	1318	/* SP1318:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1319	1319	/* SP1319:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1320	1320	/* SP1320:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1321	1321	/* SP1321:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1322	1322	/* SP1322:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1323	1323	/* SP1323:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1324	1324	/* SP1324:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1325	1325	/* SP1325:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1326	1326	/* SP1326:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1327	1327	/* SP1327:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1328	1328	/* SP1328:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1329	1329	/* SP1329:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1330	1330	/* SP1330:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1331	1331	/* SP1331:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1332	1332	/* SP1332:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1333	1333	/* SP1333:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1334	1334	/* SP1334:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1335	1335	/* SP1335:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1336	1336	/* SP1336:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1337	1337	/* SP1337:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1338	1338	/* SP1338:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1339	1339	/* SP1339:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1340	1340	/* SP1340:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1341	1341	/* SP1341:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1342	1342	/* SP1342:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1343	1343	/* SP1343:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1344	1344	/* SP1344:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1345	1345	/* SP1345:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1346	1346	/* SP1346:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1347	1347	/* SP1347:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1348	1348	/* SP1348:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1349	1349	/* SP1349:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1350	1350	/* SP1350:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1351	1351	/* SP1351:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1352	1352	/* SP1352:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1353	1353	/* SP1353:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1354	1354	/* SP1354:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1355	1355	/* SP1355:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1356	1356	/* SP1356:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1357	1357	/* SP1357:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1358	1358	/* SP1358:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1359	1359	/* SP1359:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1360	1360	/* SP1360:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1361	1361	/* SP1361:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1362	1362	/* SP1362:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1363	1363	/* SP1363:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1364	1364	/* SP1364:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1365	1365	/* SP1365:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1366	1366	/* SP1366:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1367	1367	/* SP1367:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1368	1368	/* SP1368:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1369	1369	/* SP1369:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1370	1370	/* SP1370:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1371	1371	/* SP1371:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1372	1372	/* SP1372:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1373	1373	/* SP1373:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1374	1374	/* SP1374:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1375	1375	/* SP1375:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1376	1376	/* SP1376:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1377	1377	/* SP1377:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1378	1378	/* SP1378:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1379	1379	/* SP1379:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1380	1380	/* SP1380:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1381	1381	/* SP1381:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1382	1382	/* SP1382:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1383	1383	/* SP1383:未使用	*//* P1X-A091A */
#define	M_SSEC_MPSP_SP1384	1384	/* SP1384:未使用	*//* P1X-A091A */

/* 主軸型サーボパラメータ	*/

/* 補助軸・軸パラメータ	*/
#define	M_SSEC_MPRMAUX_MSR	1	/* モータシリーズ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_RTY	2	/* 回生オプションタイプ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PC1	3	/* モータ側ギヤ比（機械回転比）	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PC2	4	/* モータ側ギヤ比（モータ回転比）	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PIT	5	/* 送りピッチ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_INP	6	/* インポジション検出幅	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ATU	7	/* オートチューニング	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PG1	8	/* 位置ループゲインＩ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV009	9	/* (sv009)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_EMG	10	/* 減速制御時定数	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV011	11	/* (sv011)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV015	12	/* (sv015)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MBR	13	/* 上下軸落下防止時間	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NCH	14	/* ノッチフィルタ番号	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KEG	15	/* (KEG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JIT	16	/* ジッタ補正	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MV1	17	/* (MV1)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MV2	18	/* (MV2)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PG2	19	/* 位置ループゲイン２	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VG1	20	/* 速度ループゲイン１	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VG2	21	/* 速度ループゲイン１	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VIS	22	/* 速度積分補償	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VDC	23	/* 速度微分補償	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_DG2	24	/* 負荷イナーシャ比	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_SV028	25	/* (sv028)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MTY	30	/* モータタイプ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TMK	31	/* (TMK)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PMS	32	/* (PMS)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_BAS	33	/* (BAS)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MAX	34	/* (MAX)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_AMR	35	/* (AMR)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JMK	36	/* (JMK)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KCM	37	/* (KCM)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KVI	38	/* (KVI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_VGM	39	/* (VGM)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MLD	40	/* (MLD)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_KEC	41	/* (KEC)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IQG	42	/* (IQG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IDG	43	/* (IDG)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IQI	44	/* (IQI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_IDI	45	/* (IDI)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MD1	50	/* Ｄ／Ａ出力チャンネル1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MO1	51	/* Ｄ／Ａ出力チャンネル1　出力オフセット	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MG1	52	/* (MG1)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MD2	53	/* Ｄ／Ａ出力チャンネル2　データ番号	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MO2	54	/* Ｄ／Ａ出力チャンネル2　出力オフセット	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MG2	55	/* (MG2)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STY02	56	/* (STY02)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STATION	100	/* 割出ステーション数	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_CONT1	101	/* 制御パラメータ1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_CONT2	102	/* 制御パラメータ2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_EMGCONT	103	/* 非常停止制御	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TLENG	104	/* 直線軸ストローク長	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_AXIS_NAM	105	/* 軸名	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNSPEED	110	/* レファレンス点復帰速度	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNCREEP	111	/* レファレンス点復帰クリープ速度	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_GRIDMASK	112	/* グリッドマスク量	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_GRSPC	113	/* グリッド間隔	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ZRNSHIFT	114	/* レファレンス点シフト量	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOFSET	115	/* ステーションオフセット	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSBASE	116	/* 絶対位置原点	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_LIMIT_HIGH	117	/* ソフトリミット（+）	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_LIMIT_LOW	118	/* ソフトリミット（-）	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSTYPE	120	/* 絶対位置検出パラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ABSCHECK	123	/* 絶対位置電源断移動許容値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_BACKLASH	130	/* バックラッシ補正量	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI16A	132	/* (YOB16A)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI16B	133	/* (YOB16B)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI32A	134	/* (YOBI32A)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_YOBI32B	135	/* (YOBI32B)	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED1	150	/* 動作パラメータ群１　自動運転速度	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED1	151	/* 動作パラメータ群１　手動運転速度	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL1	152	/* 動作パラメータ群１　加減速時定数１	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2	153	/* 動作パラメータ群１　加減速時定数2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL1	154	/* 動作パラメータ群１　トルク制限値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD1	155	/* 動作パラメータ群１　誤差過大検出幅	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST1	156	/* 動作パラメータ群１　定位置出力幅	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR1	157	/* 動作パラメータ群１　定位置近傍出力幅	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED2	158	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED2	159	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2_1	160	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL2_2	161	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL2	162	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD2	163	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST2	164	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR2	165	/* 動作パラメータ群２のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED3	166	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED3	167	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL3_1	168	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL3_2	169	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL3	170	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD3	171	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST3	172	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR3	173	/* 動作パラメータ群３のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_ASPEED4	174	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_MSPEED4	175	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL4_1	176	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TIMEL4_2	177	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_TL4	178	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_OD4	179	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_JUST4	180	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_NEAR4	181	/* 動作パラメータ群４のパラメータ	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS1	190	/* ステーション２座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS2	191	/* ステーション３座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS3	192	/* ステーション４座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS4	193	/* ステーション５座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS5	194	/* ステーション６座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS6	195	/* ステーション７座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS7	196	/* ステーション８座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_STOPS8	197	/* ステーション９座標値	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSWCHECK	200	/* ＰＳＷ　検出方式	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW1DOG1	201	/* ＰＳＷ1　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW1DOG2	202	/* ＰＳＷ1　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW2DOG1	203	/* ＰＳＷ2　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW2DOG2	204	/* ＰＳＷ2　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW3DOG1	205	/* ＰＳＷ3　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW3DOG2	206	/* ＰＳＷ3　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW4DOG1	207	/* ＰＳＷ4　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW4DOG2	208	/* ＰＳＷ4　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW5DOG1	209	/* ＰＳＷ5　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW5DOG2	210	/* ＰＳＷ5　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW6DOG1	211	/* ＰＳＷ6　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW6DOG2	212	/* ＰＳＷ6　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW7DOG1	213	/* ＰＳＷ7　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW7DOG2	214	/* ＰＳＷ7　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW8DOG1	215	/* ＰＳＷ8　領域設定1	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PSW8DOG2	216	/* ＰＳＷ8　領域設定2	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT	220	/* 押し当て量	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT1	221	/* 押し当て待機時間	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT2	222	/* 押し当てトルク開放時間	*//* P1X-A087 */
#define	M_SSEC_MPRMAUX_PUSHT3	223	/* 定位置信号出力遅延時間	*//* P1X-A087 */

/* 絶対位置パラメータ/PLC軸絶対位置パラメータ	*/
#define	M_SSEC_MPABSP_ABSTYPM	1	/* 絶対位置検出方式	*/
#define	M_SSEC_MPABSP_ABSTYP	2	/* 基準Z-方向	*/
#define	M_SSEC_MPABSP_ABSLMT	3	/* チェック	*/
#define	M_SSEC_MPABSP_ABSG28	4	/* G28照合幅	*/
#define	M_SSEC_MPABSP_ABSM02	5	/* M02照合幅	*/
#define	M_SSEC_MPABSP_CLPUSH	6	/* 電流制限(%)	*/
#define	M_SSEC_MPABSP_PUSHF	7	/* 押当て速度	*/
#define	M_SSEC_MPABSP_APPROCH	8	/* アプローチ	*/
#define	M_SSEC_MPABSP_NREFP	9	/* 原点付近+	*/
#define	M_SSEC_MPABSP_NREFN	10	/* 原点付近-	*/
#define	M_SSEC_MPABSP_ABSZRBA	11	/* 原点パラメータ基点選択	*/
#define	M_SSEC_MPABSP_MLIMIT1BL	12	/* ソフトリミットIB-	*/
#define	M_SSEC_MPABSP_MLIMIT1BU	13	/* ソフトリミットIB+	*/
#define	M_SSEC_MPABSP_MOT1TYPE	14	/* ソフトリミットIBタイプ	*/

/* 機械誤差補正パラメータ	*/
#define	M_SSEC_MPMER_PINC	1	/* 補正機械誤差補正量増分量方式	*/
#define	M_SSEC_MPMER_CMPASC(x)	(1 + (x))	/* 第1～28軸基本軸(1～28)	*/
#define	M_SSEC_MPMER_DRCASC(x)	(29 + (x))	/* 第1～28軸補正軸(1～28)	*/
#define	M_SSEC_MPMER_RDIVNOMS(x)	(57 + (x))	/* 第1～28軸レファレンス点位置分割点番号(1～28)	*/
#define	M_SSEC_MPMER_MDIVNOMS(x)	(85 + (x))	/* 第1～28軸最もマイナス位置の分割点番号(1～28)	*/
#define	M_SSEC_MPMER_PDIVNOMS(x)	(113 + (x))	/* 第1～28軸最もプラス位置の分割点番号(1～28)	*/
#define	M_SSEC_MPMER_SCL(x)	(141 + (x))	/* 第1～28軸補正倍率(1～28)	*/
#define	M_SSEC_MPMER_SPCDIV(x)	(169 + (x))	/* 第1～28軸分割間隔(1～28)	*/
#define	M_SSEC_MPMER_PCMP(x)	(198 + (x))	/* ピッチエラー補正量(0～1023)	*/
#define	M_SSEC_MPMER_TWOPC(x)	(1221+(x))	/* 第1～28軸 双方向ピッチ誤差補正(1～28)	*//* P1X-A341 */
#define	M_SSEC_MPMER_REFRV(x)	(1249+(x))	/* 第1～28軸 レファレンス点補正量(1～28)	*//* P1X-A341 */

/* 機械誤差補正データ	*/

/* ポジションスイッチ	*/
#define	M_SSEC_MPPOSW_CKPSW	1	/* PSW切換	*/
#define	M_SSEC_MPPOSW_PSW1_PAXNAM	2	/* 第1ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW1_DOG1	3	/* 第1ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW1_DOG2	4	/* 第1ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW1_CKTYP	5	/* 第1ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW2_PAXNAM	6	/* 第2ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW2_DOG1	7	/* 第2ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW2_DOG2	8	/* 第2ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW2_CKTYP	9	/* 第2ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW3_PAXNAM	10	/* 第3ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW3_DOG1	11	/* 第3ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW3_DOG2	12	/* 第3ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW3_CKTYP	13	/* 第3ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW4_PAXNAM	14	/* 第4ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW4_DOG1	15	/* 第4ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW4_DOG2	16	/* 第4ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW4_CKTYP	17	/* 第4ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW5_PAXNAM	18	/* 第5ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW5_DOG1	19	/* 第5ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW5_DOG2	20	/* 第5ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW5_CKTYP	21	/* 第5ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW6_PAXNAM	22	/* 第6ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW6_DOG1	23	/* 第6ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW6_DOG2	24	/* 第6ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW6_CKTYP	25	/* 第6ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW7_PAXNAM	26	/* 第7ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW7_DOG1	27	/* 第7ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW7_DOG2	28	/* 第7ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW7_CKTYP	29	/* 第7ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW8_PAXNAM	30	/* 第8ポジションスイッチ軸名称	*/
#define	M_SSEC_MPPOSW_PSW8_DOG1	31	/* 第8ポジションスイッチ仮想ドグ位置1	*/
#define	M_SSEC_MPPOSW_PSW8_DOG2	32	/* 第8ポジションスイッチ仮想ドグ位置2	*/
#define	M_SSEC_MPPOSW_PSW8_CKTYP	33	/* 第8ポジションスイッチPSWチェック方式切換え	*/
#define	M_SSEC_MPPOSW_PSW_EX_NAME(x)	(100 + (x))	/* 第9～24ポジションスイッチ軸名称(x=9～)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_DOG1(x)	(200 + (x))	/* 第9～24ポジションスイッチ仮想ドグ位置1(x=9～)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_DOG2(x)	(300 + (x))	/* 第9～24ポジションスイッチ仮想ドグ位置2(x=9～)	*//* P1X-A020 */
#define	M_SSEC_MPPOSW_PSW_EX_CHCK(x)	(400 + (x))	/* 第9～24ポジションスイッチPSWチェック方式切換え(x=9～)	*//* P1X-A020 */

/* アナログ入出力パラ	*/

/* マクロ一覧	*/
#define	M_SSEC_MPLMAC_M01_TMCODE	1	/* M[01]コード	*/
#define	M_SSEC_MPLMAC_M01_TMMACROT	2	/* M[01]タイプ	*/
#define	M_SSEC_MPLMAC_M01_TMMACRO	3	/* M[01]プログラム番号	*/
#define	M_SSEC_MPLMAC_M02_TMCODE	4	/* M[02]コード	*/
#define	M_SSEC_MPLMAC_M02_TMMACROT	5	/* M[02]タイプ	*/
#define	M_SSEC_MPLMAC_M02_TMMACRO	6	/* M[02]プログラム番号	*/
#define	M_SSEC_MPLMAC_M03_TMCODE	7	/* M[03]コード	*/
#define	M_SSEC_MPLMAC_M03_TMMACROT	8	/* M[03]タイプ	*/
#define	M_SSEC_MPLMAC_M03_TMMACRO	9	/* M[03]プログラム番号	*/
#define	M_SSEC_MPLMAC_M04_TMCODE	10	/* M[04]コード	*/
#define	M_SSEC_MPLMAC_M04_TMMACROT	11	/* M[04]タイプ	*/
#define	M_SSEC_MPLMAC_M04_TMMACRO	12	/* M[04]プログラム番号	*/
#define	M_SSEC_MPLMAC_M05_TMCODE	13	/* M[05]コード	*/
#define	M_SSEC_MPLMAC_M05_TMMACROT	14	/* M[05]タイプ	*/
#define	M_SSEC_MPLMAC_M05_TMMACRO	15	/* M[05]プログラム番号	*/
#define	M_SSEC_MPLMAC_M06_TMCODE	16	/* M[06]コード	*/
#define	M_SSEC_MPLMAC_M06_TMMACROT	17	/* M[06]タイプ	*/
#define	M_SSEC_MPLMAC_M06_TMMACRO	18	/* M[06]プログラム番号	*/
#define	M_SSEC_MPLMAC_M07_TMCODE	19	/* M[07]コード	*/
#define	M_SSEC_MPLMAC_M07_TMMACROT	20	/* M[07]タイプ	*/
#define	M_SSEC_MPLMAC_M07_TMMACRO	21	/* M[07]プログラム番号	*/
#define	M_SSEC_MPLMAC_M08_TMCODE	22	/* M[08]コード	*/
#define	M_SSEC_MPLMAC_M08_TMMACROT	23	/* M[08]タイプ	*/
#define	M_SSEC_MPLMAC_M08_TMMACRO	24	/* M[08]プログラム番号	*/
#define	M_SSEC_MPLMAC_M09_TMCODE	25	/* M[09]コード	*/
#define	M_SSEC_MPLMAC_M09_TMMACROT	26	/* M[09]タイプ	*/
#define	M_SSEC_MPLMAC_M09_TMMACRO	27	/* M[09]プログラム番号	*/
#define	M_SSEC_MPLMAC_M10_TMCODE	28	/* M[10]コード	*/
#define	M_SSEC_MPLMAC_M10_TMMACROT	29	/* M[10]タイプ	*/
#define	M_SSEC_MPLMAC_M10_TMMACRO	30	/* M[10]プログラム番号	*/
#define	M_SSEC_MPLMAC_TBMACROT	31	/* M2macタイプ	*/
#define	M_SSEC_MPLMAC_TBMACRO	32	/* M2macプログラム番号	*/
#define	M_SSEC_MPLMAC_G01_TGCODE	33	/* G[01]コード	*/
#define	M_SSEC_MPLMAC_G01_TGMACROT	34	/* G[01]タイプ	*/
#define	M_SSEC_MPLMAC_G01_TGMACRO	35	/* G[01]プログラム番号	*/
#define	M_SSEC_MPLMAC_G02_TGCODE	36	/* G[02]コード	*/
#define	M_SSEC_MPLMAC_G02_TGMACROT	37	/* G[02]タイプ	*/
#define	M_SSEC_MPLMAC_G02_TGMACRO	38	/* G[02]プログラム番号	*/
#define	M_SSEC_MPLMAC_G03_TGCODE	39	/* G[03]コード	*/
#define	M_SSEC_MPLMAC_G03_TGMACROT	40	/* G[03]タイプ	*/
#define	M_SSEC_MPLMAC_G03_TGMACRO	41	/* G[03]プログラム番号	*/
#define	M_SSEC_MPLMAC_G04_TGCODE	42	/* G[04]コード	*/
#define	M_SSEC_MPLMAC_G04_TGMACROT	43	/* G[04]タイプ	*/
#define	M_SSEC_MPLMAC_G04_TGMACRO	44	/* G[04]プログラム番号	*/
#define	M_SSEC_MPLMAC_G05_TGCODE	45	/* G[05]コード	*/
#define	M_SSEC_MPLMAC_G05_TGMACROT	46	/* G[05]タイプ	*/
#define	M_SSEC_MPLMAC_G05_TGMACRO	47	/* G[05]プログラム番号	*/
#define	M_SSEC_MPLMAC_G06_TGCODE	48	/* G[06]コード	*/
#define	M_SSEC_MPLMAC_G06_TGMACROT	49	/* G[06]タイプ	*/
#define	M_SSEC_MPLMAC_G06_TGMACRO	50	/* G[06]プログラム番号	*/
#define	M_SSEC_MPLMAC_G07_TGCODE	51	/* G[07]コード	*/
#define	M_SSEC_MPLMAC_G07_TGMACROT	52	/* G[07]タイプ	*/
#define	M_SSEC_MPLMAC_G07_TGMACRO	53	/* G[07]プログラム番号	*/
#define	M_SSEC_MPLMAC_G08_TGCODE	54	/* G[08]コード	*/
#define	M_SSEC_MPLMAC_G08_TGMACROT	55	/* G[08]タイプ	*/
#define	M_SSEC_MPLMAC_G08_TGMACRO	56	/* G[08]プログラム番号	*/
#define	M_SSEC_MPLMAC_G09_TGCODE	57	/* G[09]コード	*/
#define	M_SSEC_MPLMAC_G09_TGMACROT	58	/* G[09]タイプ	*/
#define	M_SSEC_MPLMAC_G09_TGMACRO	59	/* G[09]プログラム番号	*/
#define	M_SSEC_MPLMAC_G10_TGCODE	60	/* G[10]コード	*/
#define	M_SSEC_MPLMAC_G10_TGMACROT	61	/* G[10]タイプ	*/
#define	M_SSEC_MPLMAC_G10_TGMACRO	62	/* G[10]プログラム番号	*/
#define	M_SSEC_MPLMAC_TSMACROT	63	/* Smacタイプ	*/
#define	M_SSEC_MPLMAC_TSMACRO	64	/* Smacプログラム番号	*/
#define	M_SSEC_MPLMAC_TTMACROT	65	/* Tmacタイプ	*/
#define	M_SSEC_MPLMAC_TTMACRO	66	/* Tmacプログラム番号	*/
#define	M_SSEC_MPLMAC_ASC_MACSET(x)	(100+(x))	/* ASCII[]ASCIIコードマクロ有効 (x=1～2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_CODE(x)	(200+(x))	/* ASCII[]ASCIIコード (x=1～2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_TYPE(x)	(300+(x))	/* ASCII[]呼出タイプ(0:M98,1:G65,2:G66,3:G66.1) (x=1～2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_PROGNO(x)	(400+(x))	/* ASCII[]プログラムNo. (x=1～2)	*//* P0Y-A013F */
#define	M_SSEC_MPLMAC_ASC_COM_VAL(x)	(500+(x))	/* ASCII[]コモン変数番号(100～149) (x=1～2)	*//* P0Y-A013F */

/* PLC定数	*/
#define	M_SSEC_MP_PLC_CONST(x)	(1 + (x))	/* PLC定数(x=0～95 / [M7] x=0～899)	*/

/* PLCタイマ	*/
#define	M_SSEC_MP_PLC_TIMER10(x)	(1 + (x))	/* 10msタイマ<10ms>    (x=0～15 / [M7] x=0～703)	*/
#define	M_SSEC_MP_PLC_TIMER100(x)	(1000 + (x))	/* 100msタイマ<100ms> (x=0～79 / [M7] x=0～703)	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER100INC(x)	(2000 + (x))	/* 100ms積算タイマ<100msINC>(x=0～7     / [M7] x=0～63)	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_EX_TIMER10(x)	(3000 + (x))	/* 10ms加算拡張タイマ<10ms>  (x=0～399 / [M7]なし)	*//* P0Y-A013F P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER_NOS	10000	/* PLCタイマ(可変)個数       （M7のみ）	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMERINC_NOS	10001	/* PLC積算タイマ(可変)個数（M7のみ）	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_TIMER_STS(x)	(11000 + (x))	/* PLCタイマデバイス使用状態（x=0～703）	*//* P1X-A006p */
#define	M_SSEC_MP_PLC_TIMER_INC_STS(x)	(13000 + (x))	/* PLC積算タイマデバイス使用状態（x=0～63）	*//* P1X-A006p */

/* PLCカウンタ	*/
#define	M_SSEC_MP_PLC_COUNTER(x)	(1 + (x))	/* カウンタ(x=0～23 / [M7] x=0～255)	*/
#define	M_SSEC_MP_PLC_COUNTER_NOS	10000	/* PLCカウンタ（可変）の個数（M7のみ）	*//* P1X-A030 */
#define	M_SSEC_MP_PLC_COUNTER_STS(x)	(11000 + (x))	/* PLCカウンタデバイス使用状態（x=0～256）	*//* P1X-A006p */

/* ビット選択	*/
#define	M_SSEC_MP_SELECT_BIT(x)	(1 + (x))	/* ビット選択(x=0～195)	*//* P1X-B467 */

/* 開放パラメータ1(long)	*/
#define	M_SSEC_MPOPN_1_VALUE(x)	(x)	/* 開放パラメータ値 1(long) (x=1～896)	*//* P1X-A167A */

/* 開放パラメータ2(double)	*/
#define	M_SSEC_MPOPN_2_VALUE(x)	(x)	/* 開放パラメータ値 2(double) (x=1～96)	*//* P1X-A167A */

/* 機械パラ開放I/F	*/

/* 故障診断パラメータ	*/

/* 加工制御共通パラメータ	*/

/* 加工制御軸パラメータ	*/

/* 加工制御ギア段パラメータ	*/

/* 安心ネット1	*/
#define	M_SSEC_MPANET1_CALLBACK_NUM1	400	/* 通知先電話番号1	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM1	401	/* コメント1	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_NUM2	402	/* 通知先電話番号2	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM2	403	/* コメント2	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_NUM3	404	/* 通知先電話番号3	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_CALLBACK_COM3	405	/* コメント3	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_ENABLE_ANET	406	/* 安心ネット有効	*//* P0Y-A013c */
#define	M_SSEC_MPANET1_ENABLE_KNET	407	/* 工機ネット有効	*//* P1X-A257 */
#define	M_SSEC_MPANET1_PASSWD	807	/* 加工データ共有　パスワード	*//* P1X-A121F */
#define	M_SSEC_MPANET1_CUSTOMER_NUM	808	/* 加工データ共有　お客様番号	*//* P1X-A121F */
#define	M_SSEC_MPANET1_NOTICE_COND	814	/* オペレータ通知条件	*//* P1X-A436 */
#define	M_SSEC_MPANET1_NOTICE_MODE	815	/* オペレータ通知モード	*//* P1X-A436 */

/* 安心ネット2	*/
#define	M_SSEC_MPANET2_MODEM_NUM	600	/* モデムの電話番号	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CALL_NUM	601	/* コールセンターへの発信番号	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_KOUKI_NUM	602	/* 工機メーカへの発信番号	*//* P1X-A006e */
#define	M_SSEC_MPANET2_ARV_CALL_NUM1	603	/* コールセンターの着信番号1	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM2	604	/* コールセンターの着信番号2	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM3	605	/* コールセンターの着信番号3	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM4	606	/* コールセンターの着信番号4	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_CALL_NUM5	607	/* コールセンターの着信番号5	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ARV_KOUKI_NUM(x)	(607+(x))	/* 工機メーカの着信番号 (x=1～5)	*//* P1X-A006e */
#define	M_SSEC_MPANET2_RETRY	613	/* リトライ回数	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_ENABLE_ANET	614	/* 安心ネット画面自動選択	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND1	615	/* 条件1(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM1	616	/* 条件1(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND2	617	/* 条件2(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM2	618	/* 条件2(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND3	619	/* 条件3(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM3	620	/* 条件3(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND4	621	/* 条件4(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM4	622	/* 条件4(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND5	623	/* 条件5(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM5	624	/* 条件5(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND6	625	/* 条件6(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM6	626	/* 条件6(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND7	627	/* 条件7(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM7	628	/* 条件7(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND8	629	/* 条件8(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM8	630	/* 条件8(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND9	631	/* 条件9(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM9	632	/* 条件9(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_KIND10	633	/* 条件10(種類/レジスタ)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_COND_NUM10	634	/* 条件10(番号/状態値)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CMD_TIMEOUT	635	/* コマンドタイムアウト時間	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_INT_REDIAL	636	/* リダイヤル間隔(s)	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_FRQ_REDIAL	637	/* リダイヤル回数	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_MODEM_PORT	638	/* モデム接続ポート	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_DIAL_MODEM	639	/* ダイヤル方法	*//* P0Y-A013c */
#define	M_SSEC_MPANET2_CALLBACK_WAIT	640	/* 呼び出し待ち時間	*//* P1X-A006e */
#define	M_SSEC_MPANET2_MACHINE_NO	641	/* 機械製番	*//* P1X-A006e */
#define	M_SSEC_MPANET2_FINNC_REG	971	/* 加工完了条件（レジスタ）	*//* P1X-A436 */
#define	M_SSEC_MPANET2_FINNC_REGVAL	972	/* 加工完了条件（状態値）	*//* P1X-A436 */

/* PLCスイッチ	*/
#define	M_SSEC_UP_PLC_SWITCH_X(x)	(0 + (x))	/* PLCスイッチX(IN) (x=1～64)	*/
#define	M_SSEC_UP_PLC_SWITCH_Y(x)	(100 + (x))	/* PLCスイッチY(OUT) (x=1～64)	*/
#define	M_SSEC_UP_PLCSW_IN0	200	/* PLCスイッチX(IN)1～16	*//* P0Y-A013B */
#define	M_SSEC_UP_PLCSW_IN1	201	/* PLCスイッチX(IN)17～32	*//* P0Y-A013B */
#define	M_SSEC_UP_PLCSW_IN2	202	/* PLCスイッチX(IN)33～48	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_IN3	203	/* PLCスイッチX(IN)49～64	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_OUT0	210	/* PLCスイッチY(OUT)1～16	*//* P1X-A006M */
#define	M_SSEC_UP_PLCSW_OUT1	211	/* PLCスイッチY(OUT)17～32	*//* P1X-A006M */
#define	M_SSEC_UP_PLCSW_OUT2	212	/* PLCスイッチY(OUT)33～48	*//* P1X-A383 */
#define	M_SSEC_UP_PLCSW_OUT3	213	/* PLCスイッチY(OUT)49～64	*//* P1X-A383 */

/* 操作パラメータ	*/
#define	M_SSEC_UPOPE_COUNT_KIND(x)	(8900+(x))	/* カウンタ種類1～6 (x=1～6)	*//* P1X-A006c */
#define	M_SSEC_UPOPE_AUT_MANU_SW	8909	/* 自動/手動表示切替	*//* P1X-A006BF */
#define	M_SSEC_UPOPE_EDIT_UNDO	8910	/* 編集Undo有効	*//* P1X-A006c */
#define	M_SSEC_UPOPE_TP_SENSITIVITY	8913	/* タッチパネル感度調整	*//* P1X-A305C */
#define	M_SSEC_UPOPE_TOPSEARCH_AUTO	8914	/* 自動トップサーチ	*//* P1X-A079A */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY1	8915	/* 自動バックアップ指定日1	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY2	8916	/* 自動バックアップ指定日2	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY3	8917	/* 自動バックアップ指定日3	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DAY4	8918	/* 自動バックアップ指定日4	*//* P1X-A088B */
#define	M_SSEC_UPOPE_AUTO_BACKUP_DEV	8919	/* 自動バックアップ装置	*//* P1X-A088B */
#define	M_SSEC_UPOPE_3D_TOFS_SELECT	8920	/* ソリッド描画工具補正選択	*//* P1X-A006c */
#define	M_SSEC_UPOPE_MASS_EDIT_SELECT	8921	/* 大容量編集選択	*//* P1X-A020Y */
#define	M_SSEC_UPOPE_TREG_REPEAT_INVALID	8922	/* T登録-重複チェック無効	*//* P1X-A115C */
#define	M_SSEC_UPOPE_HIDE_EDIT_IO_MENU	8923	/* 編集-入出力メニュー無	*//* P1X-A020AL */
#define	M_SSEC_UPOPE_MEAS_CONFIRM_MSG	8924	/* 計測-確認メッセージ有	*//* P1X-A020AP */
#define	M_SSEC_UPOPE_SYS1_SPNO	8925	/* 系統1 表示主軸No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS2_SPNO	8926	/* 系統2 表示主軸No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS3_SPNO	8927	/* 系統3 表示主軸No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_SYS4_SPNO	8928	/* 系統4 表示主軸No	*//* P1X-A322 */
#define	M_SSEC_UPOPE_OFS_ABSINPUT	8929	/* ＝入力メニュー無効:補正	*//* P1X-A020AW */
#define	M_SSEC_UPOPE_VAR_ABSINPUT	8930	/* ＝入力メニュー無効:変数	*//* P1X-A020AW */
#define	M_SSEC_UPOPE_DIS_SET_LIMIT	8931	/* 遠隔表示/設定操作制限	*//* P1X-A020AX */
#define	M_SSEC_UPOPE_HIDE_MEAS_SCRN	8932	/* 計測画面非表示	*//* P1X-A020BA */
#define	M_SSEC_UPOPE_TOOLOFS_INPUT	8933	/* 形状補正量設定禁止	*//* P1X-A020AZ */
#define	M_SSEC_UPOPE_WEAROFS_INPUT	8934	/* 摩耗補正量設定禁止	*//* P1X-A020AZ */
#define	M_SSEC_UPOPE_WOFS_CONFIRM	8935	/* W座標-確認メッセージ有	*//* P1X-A362 */
#define	M_SSEC_UPOPE_DEL_LEAD_ZERO	8936	/* リーディング0削除	*//* P1X-A370 */
#define	M_SSEC_UPOPE_FILE_SORT_VOL	8937	/* ファイルソート最大本数	*//* P1X-A369 */
#define	M_SSEC_UPOPE_PRG_AUTODISP	8938	/* 編集-Prg自動表示無	*//* P1X-A376 */
#define	M_SSEC_UPOPE_UNDO_CNF_MSG	8939	/* Undo-確認メッセージ	*//* P1X-A386 */
#define	M_SSEC_UPOPE_SLCT_DISP_CHG	8940	/* セレクト表示切替	*//* P1X-A388 */
#define	M_SSEC_UPOPE_TOFS_ABSINC	8941	/* T補正絶対/加算切替	*//* P1X-A393 */
#define	M_SSEC_UPOPE_SYS1_COLOR	8942	/* 系統1 表示色	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS2_COLOR	8943	/* 系統2 表示色	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS3_COLOR	8944	/* 系統3 表示色	*//* P1X-A404 */
#define	M_SSEC_UPOPE_SYS4_COLOR	8945	/* 系統4 表示色	*//* P1X-A404 */
#define	M_SSEC_UPOPE_INDX_ACC	8946	/* 加速度指標	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_OUTL	8947	/* 輪郭精度指標	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_CSPD	8948	/* コーナ速度指標	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_SFIL	8949	/* S字フィルタ指標	*//* P1X-A414 */
#define	M_SSEC_UPOPE_INDX_SFIL2	8950	/* S字フィルタ2指標	*//* P1X-A414 */
#define	M_SSEC_UPOPE_NO_TAB_CNT_SW	8951	/* カウンタ Tabキー切替無効	*//* P1X-A433 */
#define	M_SSEC_UPOPE_EDT_WIN_SYS_CHG	8952	/* 編集ウィンドウ系統切替	*//* P1X-A456 */
#define	M_SSEC_UPOPE_2SYS_DSP_SW_TYP	8953	/* 2系統同時表示系統切替タイプ	*//* P1X-A456 */
#define	M_SSEC_UPOPE_COOD_METHOD	8954	/* 指定方式初期値	*//* P1X-A451J */
#define	M_SSEC_UPOPE_COOD_PAIR	8955	/* 軸組合せ初期値	*//* P1X-A451J */
#define	M_SSEC_UPOPE_USER_KEY_TYP	8956	/* ユーザ定義キータイプ 	*//* P1X-A488 */
#define	M_SSEC_UPOPE_MON_MAIN_MENU(x)	(10500+(x))	/* 運転メインメニュー (x=1～30)	*//* P1X-A358 */
#define	M_SSEC_UPOPE_SET_MAIN_MENU(x)	(10550+(x))	/* 段取メインメニュー (x=1～30)	*//* P1X-A358 */
#define	M_SSEC_UPOPE_EDT_MAIN_MENU(x)	(10600+(x))	/* 編集メインメニュー (x=1～30)	*//* P1X-A358 */

/* 入出力パラメータ	*/
#define	M_SSEC_UPIO_SINPORT	1	/* データ入力＜ポート番号＞	*/
#define	M_SSEC_UPIO_SINDEV	2	/* データ入力＜装置番号＞	*/
#define	M_SSEC_UPIO_SOTPORT	3	/* データ出力＜ポート番号＞	*/
#define	M_SSEC_UPIO_SOTDEV	4	/* データ出力＜装置番号＞	*/
#define	M_SSEC_UPIO_SNCPORT	5	/* テープ運転＜ポート番号＞	*/
#define	M_SSEC_UPIO_SNCDEV	6	/* テープ運転＜装置番号＞	*/
#define	M_SSEC_UPIO_MCRPORT	7	/* マクロプリント＜出力先＞	*/
#define	M_SSEC_UPIO_MCRDEV	8	/* マクロプリント＜装置番号＞	*/
#define	M_SSEC_UPIO_PLCPORT	9	/* PLC入出力＜ポート番号＞	*/
#define	M_SSEC_UPIO_PLCDEV	10	/* PLC入出力＜装置番号＞	*/
#define	M_SSEC_UPIO_RPGPORT	11	/* リモートプログラム  入力＜ポート番号＞	*/
#define	M_SSEC_UPIO_RPGDEV	12	/* リモートプログラム  入力＜装置番号＞	*/
#define	M_SSEC_UPIO_EXTPORT	13	/* 外部ユニット　通信＜ポート番号＞	*/
#define	M_SSEC_UPIO_EXTDEV	14	/* 外部ユニット　通信＜装置番号＞	*/
#define	M_SSEC_UPIO_SIOTP1_DEVNAME	15	/* 装置1装置名	*/
#define	M_SSEC_UPIO_SIOTP1_BAUDRT	16	/* 装置1ボーレイト	*/
#define	M_SSEC_UPIO_SIOTP1_STOPBT	17	/* 装置1ストップビット	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYB	18	/* 装置1パリティ有効	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYA	19	/* 装置1evenパリティ	*/
#define	M_SSEC_UPIO_SIOTP1_LENCH	20	/* 装置1キャラクタ長	*/
#define	M_SSEC_UPIO_SIOTP1_TERMTP	21	/* 装置1ターミネータタイプ	*/
#define	M_SSEC_UPIO_SIOTP1_HANDTP	22	/* 装置1ハンドシェーク方式	*/
#define	M_SSEC_UPIO_SIOTP1_DCPARI	23	/* 装置1DCコードパリティ	*/
#define	M_SSEC_UPIO_SIOTP1_FEEDFLG	24	/* 装置1DC2/DC4出力	*/
#define	M_SSEC_UPIO_SIOTP1_CROUT	25	/* 装置1CR出力	*/
#define	M_SSEC_UPIO_SIOTP1_EIAOUT	26	/* 装置1EIA出力	*/
#define	M_SSEC_UPIO_SIOTP1_FEEDCHR	27	/* 装置1フィード数	*/
#define	M_SSEC_UPIO_SIOTP1_PARITYV	28	/* 装置1パリティV	*/
#define	M_SSEC_UPIO_SIOTP1_TOUT	29	/* 装置1タイムアウト時間	*/
#define	M_SSEC_UPIO_SIOTP1_DROFF	30	/* 装置1DR無効	*/
#define	M_SSEC_UPIO_SIOTP1_DATASCII	31	/* 装置1データASCII	*/
#define	M_SSEC_UPIO_SIOTP1_INTYPE	32	/* 装置1入力方式	*/
#define	M_SSEC_UPIO_SIOTP1_KAKKOL	33	/* 装置1EIAコード[	*/
#define	M_SSEC_UPIO_SIOTP1_KAKKOR	34	/* 装置1EIAコード]	*/
#define	M_SSEC_UPIO_SIOTP1_SYAAPU	35	/* 装置1EIAコード#	*/
#define	M_SSEC_UPIO_SIOTP1_ASTA	36	/* 装置1EIAコード*	*/
#define	M_SSEC_UPIO_SIOTP1_EQUAL	37	/* 装置1EIAコード=	*/
#define	M_SSEC_UPIO_SIOTP1_KORONN	38	/* 装置1EIAコード:	*/
#define	M_SSEC_UPIO_SIOTP1_SYSCD	39	/* 装置1EIAコード$	*/
#define	M_SSEC_UPIO_SIOTP1_DOUKICD	40	/* 装置1EIAコード!	*/
#define	M_SSEC_UPIO_SIOTP2_DEVNAME	41	/* 装置2装置名	*/
#define	M_SSEC_UPIO_SIOTP2_BAUDRT	42	/* 装置2ボーレイト	*/
#define	M_SSEC_UPIO_SIOTP2_STOPBT	43	/* 装置2ストップビット	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYB	44	/* 装置2パリティ有効	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYA	45	/* 装置2evenパリティ	*/
#define	M_SSEC_UPIO_SIOTP2_LENCH	46	/* 装置2キャラクタ長	*/
#define	M_SSEC_UPIO_SIOTP2_TERMTP	47	/* 装置2ターミネータタイプ	*/
#define	M_SSEC_UPIO_SIOTP2_HANDTP	48	/* 装置2ハンドシェーク方式	*/
#define	M_SSEC_UPIO_SIOTP2_DCPARI	49	/* 装置2DCコードパリティ	*/
#define	M_SSEC_UPIO_SIOTP2_FEEDFLG	50	/* 装置2DC2/DC4出力	*/
#define	M_SSEC_UPIO_SIOTP2_CROUT	51	/* 装置2CR出力	*/
#define	M_SSEC_UPIO_SIOTP2_EIAOUT	52	/* 装置2EIA出力	*/
#define	M_SSEC_UPIO_SIOTP2_FEEDCHR	53	/* 装置2フィード数	*/
#define	M_SSEC_UPIO_SIOTP2_PARITYV	54	/* 装置2パリティV	*/
#define	M_SSEC_UPIO_SIOTP2_TOUT	55	/* 装置2タイムアウト時間	*/
#define	M_SSEC_UPIO_SIOTP2_DROFF	56	/* 装置2DR無効	*/
#define	M_SSEC_UPIO_SIOTP2_DATASCII	57	/* 装置2データASCII	*/
#define	M_SSEC_UPIO_SIOTP2_INTYPE	58	/* 装置2入力方式	*/
#define	M_SSEC_UPIO_SIOTP2_KAKKOL	59	/* 装置2EIAコード[	*/
#define	M_SSEC_UPIO_SIOTP2_KAKKOR	60	/* 装置2EIAコード]	*/
#define	M_SSEC_UPIO_SIOTP2_SYAAPU	61	/* 装置2EIAコード#	*/
#define	M_SSEC_UPIO_SIOTP2_ASTA	62	/* 装置2EIAコード*	*/
#define	M_SSEC_UPIO_SIOTP2_EQUAL	63	/* 装置2EIAコード=	*/
#define	M_SSEC_UPIO_SIOTP2_KORONN	64	/* 装置2EIAコード:	*/
#define	M_SSEC_UPIO_SIOTP2_SYSCD	65	/* 装置2EIAコード$	*/
#define	M_SSEC_UPIO_SIOTP2_DOUKICD	66	/* 装置2EIAコード!	*/
#define	M_SSEC_UPIO_SIOTP3_DEVNAME	67	/* 装置3装置名	*/
#define	M_SSEC_UPIO_SIOTP3_BAUDRT	68	/* 装置3ボーレイト	*/
#define	M_SSEC_UPIO_SIOTP3_STOPBT	69	/* 装置3ストップビット	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYB	70	/* 装置3パリティ有効	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYA	71	/* 装置3evenパリティ	*/
#define	M_SSEC_UPIO_SIOTP3_LENCH	72	/* 装置3キャラクタ長	*/
#define	M_SSEC_UPIO_SIOTP3_TERMTP	73	/* 装置3ターミネータタイプ	*/
#define	M_SSEC_UPIO_SIOTP3_HANDTP	74	/* 装置3ハンドシェーク方式	*/
#define	M_SSEC_UPIO_SIOTP3_DCPARI	75	/* 装置3DCコードパリティ	*/
#define	M_SSEC_UPIO_SIOTP3_FEEDFLG	76	/* 装置3DC2/DC4出力	*/
#define	M_SSEC_UPIO_SIOTP3_CROUT	77	/* 装置3CR出力	*/
#define	M_SSEC_UPIO_SIOTP3_EIAOUT	78	/* 装置3EIA出力	*/
#define	M_SSEC_UPIO_SIOTP3_FEEDCHR	79	/* 装置3フィード数	*/
#define	M_SSEC_UPIO_SIOTP3_PARITYV	80	/* 装置3パリティV	*/
#define	M_SSEC_UPIO_SIOTP3_TOUT	81	/* 装置3タイムアウト時間	*/
#define	M_SSEC_UPIO_SIOTP3_DROFF	82	/* 装置3DR無効	*/
#define	M_SSEC_UPIO_SIOTP3_DATASCII	83	/* 装置3データASCII	*/
#define	M_SSEC_UPIO_SIOTP3_INTYPE	84	/* 装置3入力方式	*/
#define	M_SSEC_UPIO_SIOTP3_KAKKOL	85	/* 装置3EIAコード[	*/
#define	M_SSEC_UPIO_SIOTP3_KAKKOR	86	/* 装置3EIAコード]	*/
#define	M_SSEC_UPIO_SIOTP3_SYAAPU	87	/* 装置3EIAコード#	*/
#define	M_SSEC_UPIO_SIOTP3_ASTA	88	/* 装置3EIAコード*	*/
#define	M_SSEC_UPIO_SIOTP3_EQUAL	89	/* 装置3EIAコード=	*/
#define	M_SSEC_UPIO_SIOTP3_KORONN	90	/* 装置3EIAコード:	*/
#define	M_SSEC_UPIO_SIOTP3_SYSCD	91	/* 装置3EIAコード$	*/
#define	M_SSEC_UPIO_SIOTP3_DOUKICD	92	/* 装置3EIAコード!	*/
#define	M_SSEC_UPIO_SIOTP4_DEVNAME	93	/* 装置4装置名	*/
#define	M_SSEC_UPIO_SIOTP4_BAUDRT	94	/* 装置4ボーレイト	*/
#define	M_SSEC_UPIO_SIOTP4_STOPBT	95	/* 装置4ストップビット	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYB	96	/* 装置4パリティ有効	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYA	97	/* 装置4evenパリティ	*/
#define	M_SSEC_UPIO_SIOTP4_LENCH	98	/* 装置4キャラクタ長	*/
#define	M_SSEC_UPIO_SIOTP4_TERMTP	99	/* 装置4ターミネータタイプ	*/
#define	M_SSEC_UPIO_SIOTP4_HANDTP	100	/* 装置4ハンドシェーク方式	*/
#define	M_SSEC_UPIO_SIOTP4_DCPARI	101	/* 装置4DCコードパリティ	*/
#define	M_SSEC_UPIO_SIOTP4_FEEDFLG	102	/* 装置4DC2/DC4出力	*/
#define	M_SSEC_UPIO_SIOTP4_CROUT	103	/* 装置4CR出力	*/
#define	M_SSEC_UPIO_SIOTP4_EIAOUT	104	/* 装置4EIA出力	*/
#define	M_SSEC_UPIO_SIOTP4_FEEDCHR	105	/* 装置4フィード数	*/
#define	M_SSEC_UPIO_SIOTP4_PARITYV	106	/* 装置4パリティV	*/
#define	M_SSEC_UPIO_SIOTP4_TOUT	107	/* 装置4タイムアウト時間	*/
#define	M_SSEC_UPIO_SIOTP4_DROFF	108	/* 装置4DR無効	*/
#define	M_SSEC_UPIO_SIOTP4_DATASCII	109	/* 装置4データASCII	*/
#define	M_SSEC_UPIO_SIOTP4_INTYPE	110	/* 装置4入力方式	*/
#define	M_SSEC_UPIO_SIOTP4_KAKKOL	111	/* 装置4EIAコード[	*/
#define	M_SSEC_UPIO_SIOTP4_KAKKOR	112	/* 装置4EIAコード]	*/
#define	M_SSEC_UPIO_SIOTP4_SYAAPU	113	/* 装置4EIAコード#	*/
#define	M_SSEC_UPIO_SIOTP4_ASTA	114	/* 装置4EIAコード*	*/
#define	M_SSEC_UPIO_SIOTP4_EQUAL	115	/* 装置4EIAコード=	*/
#define	M_SSEC_UPIO_SIOTP4_KORONN	116	/* 装置4EIAコード:	*/
#define	M_SSEC_UPIO_SIOTP4_SYSCD	117	/* 装置4EIAコード$	*/
#define	M_SSEC_UPIO_SIOTP4_DOUKICD	118	/* 装置4EIAコード!	*/
#define	M_SSEC_UPIO_SIOTP5_DEVNAME	119	/* 装置5装置名	*/
#define	M_SSEC_UPIO_SIOTP5_BAUDRT	120	/* 装置5ボーレイト	*/
#define	M_SSEC_UPIO_SIOTP5_STOPBT	121	/* 装置5ストップビット	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYB	122	/* 装置5パリティ有効	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYA	123	/* 装置5evenパリティ	*/
#define	M_SSEC_UPIO_SIOTP5_LENCH	124	/* 装置5キャラクタ長	*/
#define	M_SSEC_UPIO_SIOTP5_TERMTP	125	/* 装置5ターミネータタ	*/
#define	M_SSEC_UPIO_SIOTP5_HANDTP	126	/* 装置5ハンドシェーク方式	*/
#define	M_SSEC_UPIO_SIOTP5_DCPARI	127	/* 装置5DCコードパリティ	*/
#define	M_SSEC_UPIO_SIOTP5_FEEDFLG	128	/* 装置5DC2/DC4出力	*/
#define	M_SSEC_UPIO_SIOTP5_CROUT	129	/* 装置5CR出力	*/
#define	M_SSEC_UPIO_SIOTP5_EIAOUT	130	/* 装置5EIA出力	*/
#define	M_SSEC_UPIO_SIOTP5_FEEDCHR	131	/* 装置5フィード数	*/
#define	M_SSEC_UPIO_SIOTP5_PARITYV	132	/* 装置5パリティV	*/
#define	M_SSEC_UPIO_SIOTP5_TOUT	133	/* 装置5タイムアウト時間	*/
#define	M_SSEC_UPIO_SIOTP5_DROFF	134	/* 装置5DR無効	*/
#define	M_SSEC_UPIO_SIOTP5_DATASCII	135	/* 装置5データASCII	*/
#define	M_SSEC_UPIO_SIOTP5_INTYPE	136	/* 装置5入力方式	*/
#define	M_SSEC_UPIO_SIOTP5_KAKKOL	137	/* 装置5EIAコード[	*/
#define	M_SSEC_UPIO_SIOTP5_KAKKOR	138	/* 装置5EIAコード]	*/
#define	M_SSEC_UPIO_SIOTP5_SYAAPU	139	/* 装置5EIAコード#	*/
#define	M_SSEC_UPIO_SIOTP5_ASTA	140	/* 装置5EIAコード*	*/
#define	M_SSEC_UPIO_SIOTP5_EQUAL	141	/* 装置5EIAコード=	*/
#define	M_SSEC_UPIO_SIOTP5_KORONN	142	/* 装置5EIAコード:	*/
#define	M_SSEC_UPIO_SIOTP5_SYSCD	143	/* 装置5EIAコード$	*/
#define	M_SSEC_UPIO_SIOTP5_DOUKICD	144	/* 装置5EIAコード!	*/
#define	M_SSEC_UPIO_HANDYTERMINAL_PORT	9017	/* ハンディターミナル＜ポート番号＞	*//* P1X-A193 */
#define	M_SSEC_UPIO_HANDYTERMINAL_DEV	9018	/* ハンディターミナル＜装置番号＞	*//* P1X-A193 */
#define	M_SSEC_UPIO_DATA_IO_PORT	9051	/* データ入出力接続元	*//* P1X-A249D */
#define	M_SSEC_UPIO_TAPE_MODE_PORT	9052	/* テープ運転接続元	*//* P1X-A249D */
#define	M_SSEC_UPIO_M2_MACRO_CONVERT	9053	/* M2マクロコンバータ有効	*//* P1X-A380 */
#define	M_SSEC_UPIO_MCRFNAME	9054	/* マクロプリント出力ファイル名	*//* P1X-A422 */
#define	M_SSEC_UPIO_SIOTP1_OUTBUF	9120	/* 装置1出力バッファ	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP2_OUTBUF	9220	/* 装置2出力バッファ	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP3_OUTBUF	9320	/* 装置3出力バッファ	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP4_OUTBUF	9420	/* 装置4出力バッファ	*//* P1X-A020AY */
#define	M_SSEC_UPIO_SIOTP5_OUTBUF	9520	/* 装置5出力バッファ	*//* P1X-A020AY */

/* コンピュータリンクパラメータ	*/
#define	M_SSEC_UPHLNK_LBAUT	1	/* 転送速度	*/
#define	M_SSEC_UPHLNK_LSTOPBT	2	/* ストップbit	*/
#define	M_SSEC_UPHLNK_LPRITYB	3	/* パリティ有効	*/
#define	M_SSEC_UPHLNK_LPRITYA	4	/* 偶数パリティ	*/
#define	M_SSEC_UPHLNK_LLENGTH	5	/* キャラクタ長	*/
#define	M_SSEC_UPHLNK_LHAND	6	/* ハンドシェーク方式	*/
#define	M_SSEC_UPHLNK_LTIMOUT	7	/* タイムアウト時間	*/
#define	M_SSEC_UPHLNK_LCDMOD	8	/* データコード	*/
#define	M_SSEC_UPHLNK_LPARA1	9	/* リンクパラメータ1	*/
#define	M_SSEC_UPHLNK_LPARA2	10	/* リンクパラメータ2	*/
#define	M_SSEC_UPHLNK_LPARA3	11	/* リンクパラメータ3	*/
#define	M_SSEC_UPHLNK_LPARA4	12	/* リンクパラメータ4	*/
#define	M_SSEC_UPHLNK_LPARA5	13	/* リンクパラメータ5	*/
#define	M_SSEC_UPHLNK_LSTCODE	14	/* スタートコード	*/
#define	M_SSEC_UPHLNK_LCODOUT	15	/* 制御コード出力	*/
#define	M_SSEC_UPHLNK_LLNKTMR	16	/* 制御コード時間間隔	*/
#define	M_SSEC_UPHLNK_LWAITM	17	/* 待ち時間	*/
#define	M_SSEC_UPHLNK_LPCKLEN	18	/* パケット長	*/
#define	M_SSEC_UPHLNK_BUFFSIZE	19	/* バッファサイズ	*/
#define	M_SSEC_UPHLNK_STARTSIZE	20	/* 運転開始サイズ	*/
#define	M_SSEC_UPHLNK_DC1_OUTSIZE	21	/* DC1出力サイズ	*/
#define	M_SSEC_UPHLNK_LPOLLTM	22	/* ポーリング時間	*/
#define	M_SSEC_UPHLNK_LTRNSTM	23	/* 送信切替時間	*/
#define	M_SSEC_UPHLNK_LRTRYTM	24	/* リトライ回数	*/

/* イーサネットパラメータ	*/
#define	M_SSEC_UPETHER_ETHERNET	1	/* サービス開始	*/
#define	M_SSEC_UPETHER_IPADDR	2	/* IPアドレス	*/
#define	M_SSEC_UPETHER_SUBNET	3	/* サブネットマスク	*/
#define	M_SSEC_UPETHER_GATEWAY	4	/* ゲートウェイ	*/
#define	M_SSEC_UPETHER_PORTNUMBER	5	/* ポート番号	*/
#define	M_SSEC_UPETHER_BEFORE_HOSTADDR	6	/* 変換前のイ－サネット通信パラメータ(ホストのIPアドレス)	*/
#define	M_SSEC_UPETHER_HOSTNUMBER	7	/* ホストのポート番号	*/
#define	M_SSEC_UPETHER_LOCAL_IPADDR	34	/* Local IP Address	*//* P1X-A120 */
#define	M_SSEC_UPETHER_LOCAL_SUBNET	35	/* Local Subnetmask	*//* P1X-A120 */
#define	M_SSEC_UPETHER_PC_AUTO_IPADDR	50	/* IPアドレス自動設定	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_IPADDR	51	/* IPアドレス（PC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_SUBNET	52	/* サブネットマスク（PC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_PC_GATEWAY	53	/* ゲートウェイ（PC)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_TIMEOUT	54	/* タイムアウト	*//* P1X-A018 */
#define	M_SSEC_UPETHER_USE_HOSTNUMBER	55	/* 使用するホストの番号	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_LOGINNAME(x)	(100+x)	/* ユーザ名(ホストA～D)(x=0～3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_PWORD(x)	(200+(x))	/* パスワード(ホストA～D)(x=0～3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_DIRPATH(x)	(300+(x))	/* ディレクトリ(ホストA～D)(x=0～3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_IPADDR(x)	(400+(x))	/* ホストアドレス(ホストA～D)(x=0～3)	*//* P0Y-A013c */
#define	M_SSEC_UPETHER_HOST_TYPE(x)	(500+(x))	/* ホストタイプ(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_FILE(x)	(600+(x))	/* ホスト ワード位置：ファイル(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_SIZE(x)	(700+(x))	/* ホスト ワード位置：サイズ(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_DIR(x)	(800+(x))	/* ホスト ワード位置：<DIR>(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_CMT(x)	(900+(x))	/* ホスト ワード位置：コメント(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_WORD_NUM(x)	(1000+(x))	/* ホスト ワード数：コメント(ホスト1～4)(x=0～3)	*//* P1X-A018 */
#define	M_SSEC_UPETHER_HOST_DISP_TYPE(x)	(1100+(x))	/* ホスト 記憶文字数(ホスト1～4)(x=0～3)	*//* P1X-A018 */

/* バリア	*/
#define	M_SSEC_UPBARI_BARI0X	1	/* P0 X	*/
#define	M_SSEC_UPBARI_BARI1X	2	/* P1 X	*/
#define	M_SSEC_UPBARI_BARI1Z	3	/* P1 Z	*/
#define	M_SSEC_UPBARI_BARI2X	4	/* P2 X	*/
#define	M_SSEC_UPBARI_BARI2Z	5	/* P2 Z	*/
#define	M_SSEC_UPBARI_BARI3X	6	/* P3 X	*/
#define	M_SSEC_UPBARI_BARI3Z	7	/* P3 Z	*/
#define	M_SSEC_UPBARI_BARI4X	8	/* P4 X	*/
#define	M_SSEC_UPBARI_BARI4Z	9	/* P4 Z	*/
#define	M_SSEC_UPBARI_BARI5X	10	/* P5 X	*/
#define	M_SSEC_UPBARI_BARI5Z	11	/* P5 Z	*/
#define	M_SSEC_UPBARI_BARI6X	12	/* P6 X	*/
#define	M_SSEC_UPBARI_BARI6Z	13	/* P6 Z	*/
#define	M_SSEC_UPBARI_BARI_ON	20	/* バリア有効	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI7X	21	/* P7 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI8X	22	/* P8 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI8Z	23	/* P8 Z	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI9X	24	/* P9 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI10X	25	/* P10 X	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI10Z	26	/* P10 Z	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BRFORML	27	/* バリアタイプ(左)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BRFORMR	28	/* バリアタイプ(右)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_BARI_SC	29	/* 受け渡し軸名称	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_TAIL_AL	30	/* テールストック角(左)	*//* P0Y-A013F */
#define	M_SSEC_UPBARI_TAIL_AR	31	/* テールストック角(右)	*//* P0Y-A013F */

/* 基本パラメータ	*/
#define	M_SSEC_BASEPRM_SYSON	1	/* 系統有効設定	*/
#define	M_SSEC_BASEPRM_PLCSYSON	2	/* 系統有効設定(PLC)	*/
#define	M_SSEC_BASEPRM_AXISMAS	3	/* 軸数	*/
#define	M_SSEC_BASEPRM_PLCAXISMAS	4	/* 軸数(PLC)	*/
#define	M_SSEC_BASEPRM_IUNIT	5	/* 最小設定単位	*/
#define	M_SSEC_BASEPRM_PLCIUNIT	6	/* 最小設定単位(PLC)	*/
#define	M_SSEC_BASEPRM_CTRLUNIT	7	/* 制御単位	*//* P1X-A002A */
#define	M_SSEC_BASEPRM_PLCCTRLUNIT	8	/* 制御単位(PLC)	*//* P1X-A002A */
#define	M_SSEC_BASEPRM_INIPLAN	10	/* イニシャル平面選択	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_I	11	/* 幅・面計測軸名称(基本軸I)	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_J	12	/* 幅・面計測軸名称(基本軸J)	*/
#define	M_SSEC_BASEPRM_BASE_AXIS_K	13	/* 幅・面計測軸名称(基本軸K)	*/
#define	M_SSEC_BASEPRM_HYOKOH1	14	/* 平行軸 I	*/
#define	M_SSEC_BASEPRM_HTATEH1	15	/* 平行軸 J	*/
#define	M_SSEC_BASEPRM_HTAKAH1	16	/* 平行軸 K	*/
#define	M_SSEC_BASEPRM_CMDTYP	20	/* 指令タイプ	*/
#define	M_SSEC_BASEPRM_PLCSEL	21	/* ラダー選択	*/
#define	M_SSEC_BASEPRM_SP_NUM	22	/* 主軸数	*/
#define	M_SSEC_BASEPRM_MINCH	23	/* M_INCH	*/
#define	M_SSEC_BASEPRM_IINCH	24	/* イニシャルインチ	*/
#define	M_SSEC_BASEPRM_PCINCH	25	/* PLC軸インチ指令	*/
#define	M_SSEC_BASEPRM_LANG	26	/* 言語切替(Lang)	*/
#define	M_SSEC_BASEPRM_AUXNO	27	/* MR-J2-CT接続数	*/
#define	M_SSEC_BASEPRM_NSKNO	28	/* メガトルクモータ接続数	*/
#define	M_SSEC_BASEPRM_MEMPRG	43	/* プログラム領域選択	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_MEMTOL	44	/* 工具補正データ領域選択	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_MEMVAL	45	/* コモン変数領域選択	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_SETUP	50	/* セットアップ処理起動	*/
#define	M_SSEC_BASEPRM_IABSM	73	/* イニシャル絶対値	*/
#define	M_SSEC_BASEPRM_ISYNC	74	/* イニシャル同期送り	*/
#define	M_SSEC_BASEPRM_IG00	75	/* イニシャルG00	*/
#define	M_SSEC_BASEPRM_ABSINC	76	/* ABS/INCアドレス	*/
#define	M_SSEC_BASEPRM_RADIUS	77	/* 直径指定軸の増分指令	*/
#define	M_SSEC_BASEPRM_DECPT2	78	/* 小数点タイプ2	*/
#define	M_SSEC_BASEPRM_FLDIGT	79	/* F1桁有効	*/
#define	M_SSEC_BASEPRM_DRILZ	80	/* 穴あけ軸指定	*/
#define	M_SSEC_BASEPRM_GMACP	81	/* Gコードパラメータ優先	*/
#define	M_SSEC_BASEPRM_GEOMET	82	/* ジオメトリック	*/
#define	M_SSEC_BASEPRM_RADERMA	84	/* 円弧誤差	*/
#define	M_SSEC_BASEPRM_G00DRN	85	/* G00ドライラン	*/
#define	M_SSEC_BASEPRM_G01INTP	86	/* G00非補間	*/
#define	M_SSEC_BASEPRM_G96G0	87	/* 早送り指令の周速一定制御	*/
#define	M_SSEC_BASEPRM_G30SL	88	/* G30ソフトリミット無効	*/
#define	M_SSEC_BASEPRM_CUTRT	89	/* 回転軸近回り	*/
#define	M_SSEC_BASEPRM_LINRT	90	/* 直線型回転軸	*/
#define	M_SSEC_BASEPRM_MPOINT	91	/* 中間点無視	*/
#define	M_SSEC_BASEPRM_TCHGA	92	/* 付加軸工具交換	*/
#define	M_SSEC_BASEPRM_WMVFIN	93	/* 系統間待ち合せ方式	*/
#define	M_SSEC_BASEPRM_TLSBK	94	/* シングルブロック時寿命カウント選択	*/
#define	M_SSEC_BASEPRM_T0TFOF	95	/* TF出力	*/
#define	M_SSEC_BASEPRM_TLTYPE	96	/* 工具寿命管理タイプ	*/
#define	M_SSEC_BASEPRM_TLDIGT	97	/* 工具補正番号1桁指令	*/
#define	M_SSEC_BASEPRM_TLNO	98	/* 工具長補正番号	*/
#define	M_SSEC_BASEPRM_TRESET	99	/* 工具補正量キャンセル	*/
#define	M_SSEC_BASEPRM_TMOVE	100	/* 工具補正動作	*/
#define	M_SSEC_BASEPRM_TABSMV	101	/* 工具補正方式	*/
#define	M_SSEC_BASEPRM_TLM	102	/* 手動工具長測定方式	*/
#define	M_SSEC_BASEPRM_TLIFE	103	/* 寿命管理有効	*/
#define	M_SSEC_BASEPRM_TCOM2	104	/* 工具指令方式2	*/
#define	M_SSEC_BASEPRM_TSEL2	105	/* 工具選択方式2	*/
#define	M_SSEC_BASEPRM_TCOUNT	106	/* 寿命方式回数	*/
#define	M_SSEC_BASEPRM_TLLFSC	107	/* 寿命管理表示画面分割	*/
#define	M_SSEC_BASEPRM_TLRECTM	108	/* 寿命管理再カウントMコード	*/
#define	M_SSEC_BASEPRM_SUBM	109	/* 代替Mコード有効	*/
#define	M_SSEC_BASEPRM_M96CODE	110	/* M96代替Mコード	*/
#define	M_SSEC_BASEPRM_M97CODE	111	/* M97代替Mコード	*/
#define	M_SSEC_BASEPRM_STRG	112	/* ステータストリガ方式有効	*/
#define	M_SSEC_BASEPRM_INT2	113	/* 割込み方式タイプ2有効	*/
#define	M_SSEC_BASEPRM_MCRINT	114	/* マクロ引数の初期セット	*/
#define	M_SSEC_BASEPRM_THRWAIT	115	/* ねじ切り上げ待ち	*/
#define	M_SSEC_BASEPRM_G30SLM	116	/* ソフトリミット無効(手動運転)	*/
#define	M_SSEC_BASEPRM_HSENS	117	/* ハンドル応答切り換え	*/
#define	M_SSEC_BASEPRM_MIRRA	118	/* 対向刃物台工具長設定方式選択	*/
#define	M_SSEC_BASEPRM_TOMIRON	119	/* T指令対向刃物台ミラーイメージ選択	*/
#define	M_SSEC_BASEPRM_TOFVAL	120	/* マクロ変数切換え	*/
#define	M_SSEC_BASEPRM_EDLKC	121	/* 編集ロックC	*/
#define	M_SSEC_BASEPRM_PGLKC	122	/* プログラム表示ロック	*/
#define	M_SSEC_BASEPRM_ORIGN	123	/* オリジンゼロ禁止	*/
#define	M_SSEC_BASEPRM_OFSFIX	124	/* 工具補正番号固定	*/
#define	M_SSEC_BASEPRM_REALF	125	/* 実送り速度表示	*/
#define	M_SSEC_BASEPRM_PBG90	126	/* プレイバックG90	*/
#define	M_SSEC_BASEPRM_DPRINT	127	/* DPRINT桁揃え	*/
#define	M_SSEC_BASEPRM_RSTVC1	128	/* リセット時変数空	*/
#define	M_SSEC_BASEPRM_PWRVC1	129	/* 電源オン時変数空	*/
#define	M_SSEC_BASEPRM_SETT	130	/* 選択工具番号表示	*/
#define	M_SSEC_BASEPRM_FILDCC	131	/* フィードフォワードフィルター	*/
#define	M_SSEC_BASEPRM_BRIGHT	132	/* CRT輝度調整	*/
#define	M_SSEC_BASEPRM_OFSMEM	133	/* 工具補正画面設定操作選択	*/
#define	M_SSEC_BASEPRM_LCDNEG	134	/* LCD反転表示	*/
#define	M_SSEC_BASEPRM_UNITNAME	135	/* ユニット名	*/
#define	M_SSEC_BASEPRM_OPTYPE	136	/* 操作メニュー表示有効(optype)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CNTSEL	137	/* 座標値画面表示カウンタ切換(Cntsel)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_PNOSEL	138	/* パラメータ番号による画面選択	*/
#define	M_SSEC_BASEPRM_EDTYPE	139	/* 編集タイプ切り換え	*/
#define	M_SSEC_BASEPRM_M100	140	/* Mコード番号100～	*/
#define	M_SSEC_BASEPRM_M200	141	/* Mコード番号200～	*/
#define	M_SSEC_BASEPRM_M300	142	/* Mコード番号300～	*/
#define	M_SSEC_BASEPRM_M400	143	/* Mコード番号400～	*/
#define	M_SSEC_BASEPRM_MDLKOF	144	/* MDI設定ロック	*/
#define	M_SSEC_BASEPRM_LABS	145	/* 手動ABSパラメータ	*/
#define	M_SSEC_BASEPRM_SCLAMP	146	/* 主軸回転数クランプ	*/
#define	M_SSEC_BASEPRM_SMINV	147	/* 主軸最低回転数クランプタイプ	*/
#define	M_SSEC_BASEPRM_IG611	148	/* イニシャル高精度	*/
#define	M_SSEC_BASEPRM_CIREFT	149	/* 円弧減速速度切換	*/
#define	M_SSEC_BASEPRM_FILDCCG0	150	/* G00フィードフォワードフィルタ	*/
#define	M_SSEC_BASEPRM_RSTINT	151	/* リセットイニシャル	*/
#define	M_SSEC_BASEPRM_INIG20	152	/* イニシャル指令単位	*/
#define	M_SSEC_BASEPRM_FIXBDC	153	/* 穴底減速チェック	*/
#define	M_SSEC_BASEPRM_PDOOR	154	/* ドアインタロックⅡ系統別	*/
#define	M_SSEC_BASEPRM_DOORM	155	/* 系統共通ドアインタロックⅡ用信号入力デバイス1	*/
#define	M_SSEC_BASEPRM_DOORS	156	/* 系統共通ドアインタロックⅡ用信号入力デバイス2	*/
#define	M_SSEC_BASEPRM_BSCRTYP	157	/* F0オートラン	*/
#define	M_SSEC_BASEPRM_BSCPGNO	158	/* F0オートランプログラムNo.	*/
#define	M_SSEC_BASEPRM_FIXPRO	159	/* 固定サイクル編集	*/
#define	M_SSEC_BASEPRM_E2ROM	160	/* e2rom(未使用)	*/
#define	M_SSEC_BASEPRM_TEST	161	/* シミュレーションテスト	*/
#define	M_SSEC_BASEPRM_SYSNAME	162	/* 系統名	*/
#define	M_SSEC_BASEPRM_M2NAME	163	/* 第2補助コード	*/
#define	M_SSEC_BASEPRM_TAPROV	164	/* タップ戻しオーバライド	*/
#define	M_SSEC_BASEPRM_TAPOVR	165	/* タップ戻りオーバライド	*/
#define	M_SSEC_BASEPRM_DWLSKP	166	/* G04スキップ条件	*/
#define	M_SSEC_BASEPRM_SKPSPD0	167	/* G31スキップ速度	*/
#define	M_SSEC_BASEPRM_SKPCND1	168	/* G31.1スキップ条件	*/
#define	M_SSEC_BASEPRM_SKPSPD1	169	/* G31.1スキップ速度	*/
#define	M_SSEC_BASEPRM_SKPCND2	170	/* G31.2スキップ条件	*/
#define	M_SSEC_BASEPRM_SKPSPD2	171	/* G31.2スキップ速度	*/
#define	M_SSEC_BASEPRM_SKPCND3	172	/* G31.3スキップ条件	*/
#define	M_SSEC_BASEPRM_SKPSPD3	173	/* G31.3スキップ速度	*/
#define	M_SSEC_BASEPRM_SKPCND4	174	/* G31.4スキップ条件	*/
#define	M_SSEC_BASEPRM_SKPSPD4	175	/* G31.4スキップ速度	*/
#define	M_SSEC_BASEPRM_G96AXNO	176	/* 周速一定軸	*/
#define	M_SSEC_BASEPRM_CHNCRP	177	/* ねじ切上げ速度	*/
#define	M_SSEC_BASEPRM_CLMPM	178	/* クランプMコード	*/
#define	M_SSEC_BASEPRM_CLMPD	179	/* アンクランプM後のドウェル	*/
#define	M_SSEC_BASEPRM_SPDF1	180	/* F1桁送り速度F1	*/
#define	M_SSEC_BASEPRM_SPDF2	181	/* F1桁送り速度F2	*/
#define	M_SSEC_BASEPRM_SPDF3	182	/* F1桁送り速度F3	*/
#define	M_SSEC_BASEPRM_SPDF4	183	/* F1桁送り速度F4	*/
#define	M_SSEC_BASEPRM_SPDF5	184	/* F1桁送り速度F5	*/
#define	M_SSEC_BASEPRM_SXCNT	185	/* 傾斜軸制御有効	*/
#define	M_SSEC_BASEPRM_SANGL	186	/* 傾斜角度	*/
#define	M_SSEC_BASEPRM_SZRMV	187	/* 原点復帰時補正	*/
#define	M_SSEC_BASEPRM_INPOS	188	/* インポジチェック有効	*/
#define	M_SSEC_BASEPRM_HANACDC	189	/* ハンドル時定数0	*/
#define	M_SSEC_BASEPRM_MMACSET	190	/* Mコード呼出しマクロ	*/
#define	M_SSEC_BASEPRM_SMACSET	191	/* Sコード呼出しマクロ	*/
#define	M_SSEC_BASEPRM_TMACSET	192	/* Tコード呼出しマクロ	*/
#define	M_SSEC_BASEPRM_BMACSET	193	/* 第2補助コード呼出しマクロ	*/
#define	M_SSEC_BASEPRM_SSELEC	194	/* イニシャル主軸制御選択	*/
#define	M_SSEC_BASEPRM_G0ACC	195	/* G0傾き一定加減速有効	*/
#define	M_SSEC_BASEPRM_G1ACC	196	/* G1傾き一定加減速有効	*/
#define	M_SSEC_BASEPRM_MIROFS	197	/* 対向刃物台間隔	*/
#define	M_SSEC_BASEPRM_TMIRS1	198	/* T指令対向刃物台の刃物台選択	*/
#define	M_SSEC_BASEPRM_TMIRS2	199	/* T指令対向刃物台の刃物台選択	*/
#define	M_SSEC_BASEPRM_G0BDCC	200	/* G0補間前	*/
#define	M_SSEC_BASEPRM_G1BF	201	/* 最高速度	*/
#define	M_SSEC_BASEPRM_G1BTL	202	/* 時定数	*/
#define	M_SSEC_BASEPRM_MRCK	203	/* 円弧半径誤差補正係数	*/
#define	M_SSEC_BASEPRM_CIRDEC	204	/* 円弧減速速度	*/
#define	M_SSEC_BASEPRM_RSTGMD	205	/* モーダルGコードリセット設定	*/
#define	M_SSEC_BASEPRM_FHTYP	206	/* フィードホールド停止タイプ	*/
#define	M_SSEC_BASEPRM_FHNO	207	/* フィードホールド外部信号デバイス	*/
#define	M_SSEC_BASEPRM_PROAXY	208	/* 傾斜角度第1辺	*/
#define	M_SSEC_BASEPRM_MACAXY	209	/* 傾斜角度第2辺	*/
#define	M_SSEC_BASEPRM_MACAXX	210	/* 傾斜角度第3辺	*/
#define	M_SSEC_BASEPRM_EXTDCC	211	/* 外部減速速度	*/
#define	M_SSEC_BASEPRM_AUX01	300	/* aux01(未使用)	*/
#define	M_SSEC_BASEPRM_AUX02	301	/* aux02	*/
#define	M_SSEC_BASEPRM_AUX03	302	/* aux03	*/
#define	M_SSEC_BASEPRM_AUX04	303	/* aux04	*/
#define	M_SSEC_BASEPRM_AUX05	304	/* aux05	*/
#define	M_SSEC_BASEPRM_AUX06	305	/* aux06	*/
#define	M_SSEC_BASEPRM_AUX07	306	/* aux07	*/
#define	M_SSEC_BASEPRM_AUX08	307	/* aux08(使用不可)	*/
#define	M_SSEC_BASEPRM_AUX09	308	/* aux09	*/
#define	M_SSEC_BASEPRM_AUX10	309	/* aux10	*/
#define	M_SSEC_BASEPRM_AUX11	310	/* aux11	*/
#define	M_SSEC_BASEPRM_AUX12	311	/* aux12	*/
#define	M_SSEC_BASEPRM_SET01	350	/* set01	*/
#define	M_SSEC_BASEPRM_SET02	351	/* set02(未使用)	*/
#define	M_SSEC_BASEPRM_SET03	352	/* set03(未使用)	*/
#define	M_SSEC_BASEPRM_SET04	353	/* set04(未使用)	*/
#define	M_SSEC_BASEPRM_SET05	354	/* set05(未使用)	*/
#define	M_SSEC_BASEPRM_SET06	355	/* set06	*/
#define	M_SSEC_BASEPRM_SET07	356	/* set07	*/
#define	M_SSEC_BASEPRM_SET08	357	/* set08	*/
#define	M_SSEC_BASEPRM_SET09	358	/* set09	*/
#define	M_SSEC_BASEPRM_SET10	359	/* set10(未使用)	*/
#define	M_SSEC_BASEPRM_SET11	360	/* set11	*/
#define	M_SSEC_BASEPRM_SET12	361	/* set12	*/
#define	M_SSEC_BASEPRM_SET13	362	/* set13(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET14	363	/* set14(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET15	364	/* set15(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET16	365	/* set16(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET17	366	/* set17	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET18	367	/* set18	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET19	368	/* set19(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET20	369	/* set20(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET21	370	/* set21(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET22	371	/* set22(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET23	372	/* set23(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET24	373	/* set24(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET25	374	/* set25(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET26	375	/* set26(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET27	376	/* set27(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET28	377	/* set28(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET29	378	/* set29(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET30	379	/* set30	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET31	380	/* set31(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET32	381	/* set32(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET33	382	/* set33(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET34	383	/* set34(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET35	384	/* set35(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_SET36	385	/* set36(未使用)	*//* P1X-A170D */
#define	M_SSEC_BASEPRM_EXT01	400	/* ext01	*/
#define	M_SSEC_BASEPRM_EXT02	401	/* ext02(未使用)	*/
#define	M_SSEC_BASEPRM_EXT03	402	/* ext03	*/
#define	M_SSEC_BASEPRM_EXT04	403	/* ext04	*/
#define	M_SSEC_BASEPRM_EXT05	404	/* ext05(未使用)	*/
#define	M_SSEC_BASEPRM_EXT06	405	/* ext06(未使用)	*/
#define	M_SSEC_BASEPRM_EXT07	406	/* ext07	*/
#define	M_SSEC_BASEPRM_EXT08	407	/* ext08(未使用)	*/
#define	M_SSEC_BASEPRM_EXT09	408	/* ext09(未使用)	*/
#define	M_SSEC_BASEPRM_EXT10	409	/* ext10(未使用)	*/
#define	M_SSEC_BASEPRM_EXT11	410	/* ext11(未使用)	*/
#define	M_SSEC_BASEPRM_EXT12	411	/* ext12(未使用)	*/
#define	M_SSEC_BASEPRM_EXT13	412	/* ext13	*/
#define	M_SSEC_BASEPRM_EXT14	413	/* ext14(未使用)	*/
#define	M_SSEC_BASEPRM_EXT15	414	/* ext15(未使用)	*/
#define	M_SSEC_BASEPRM_EXT16	415	/* ext16(未使用)	*/
#define	M_SSEC_BASEPRM_EXT17	416	/* ext17	*/
#define	M_SSEC_BASEPRM_EXT18	417	/* ext18(未使用)	*/
#define	M_SSEC_BASEPRM_EXT19	418	/* ext19(未使用)	*/
#define	M_SSEC_BASEPRM_EXT20	419	/* ext20	*/
#define	M_SSEC_BASEPRM_EXT21	420	/* ext21	*/
#define	M_SSEC_BASEPRM_EXT22	421	/* ext22	*/
#define	M_SSEC_BASEPRM_EXT23	422	/* ext23	*/
#define	M_SSEC_BASEPRM_EXT24	423	/* ext24(未使用)	*/
#define	M_SSEC_BASEPRM_EXT25	424	/* ext25(未使用)	*/
#define	M_SSEC_BASEPRM_EXT26	425	/* ext26(未使用)	*/
#define	M_SSEC_BASEPRM_EXT27	426	/* ext27(未使用)	*/
#define	M_SSEC_BASEPRM_EXT28	427	/* ext28(未使用)	*/
#define	M_SSEC_BASEPRM_EXT29	428	/* ext29(未使用)	*/
#define	M_SSEC_BASEPRM_EXT30	429	/* ext30(未使用)	*/
#define	M_SSEC_BASEPRM_EXT31	430	/* ext31(未使用)	*/
#define	M_SSEC_BASEPRM_EXT32	431	/* ext32(未使用)	*/
#define	M_SSEC_BASEPRM_EXT33	432	/* ext33(未使用)	*/
#define	M_SSEC_BASEPRM_EXT34	433	/* ext34(未使用)	*/
#define	M_SSEC_BASEPRM_EXT35	434	/* ext35(未使用)	*/
#define	M_SSEC_BASEPRM_EXT36	435	/* ext36(未使用)	*/
#define	M_SSEC_BASEPRM_NRFCHK	500	/* 原点付近判定方式	*/
#define	M_SSEC_BASEPRM_RETPRG	501	/* プログラム再開自動復帰	*/
#define	M_SSEC_BASEPRM_V1COM_N	502	/* コモン変数#100-系統共通個数	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_V0COM_N	503	/* コモン変数#500-系統共通個数	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_INPSTYP	506	/* 減速チェック指定タイプ選択(InpsTyp)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_GTYPE	509	/* 機種切換(Gtype)	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_WT_MMIN	510	/* 待ち合わせMコード(最小値)0,100～99999999	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_WT_MMAX	511	/* 待ち合わせMコード(最大値)0,100～99999999	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_TBASE	512	/* 工具寿命管理基準番号	*/
#define	M_SSEC_BASEPRM_TAPDWL	513	/* 同期タップ穴底待ち時間	*/
#define	M_SSEC_BASEPRM_TAPINP	514	/* 同期タップ用インポジション幅(タップ軸)	*/
#define	M_SSEC_BASEPRM_CROSSCOM	516	/* 系統間コモン変数参照(CrossCom)	*//* P1X-A295 */
#define	M_SSEC_BASEPRM_G28_9_OVLP	517	/* G28.9オーバラップ率	*//* P1X-A402 */
#define	M_SSEC_BASEPRM_CHOP_R	524	/* チョッピング補正量記憶領域Rレジスタ先頭番号(chop_R)	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_PLC_CONST_EXT	526	/* PLC定数拡張点数	*//* P1X-A020Z */
#define	M_SSEC_BASEPRM_3D_ATC_TYPE	527	/* 3D工具交換方式	*//* P1X-A020L */
#define	M_SSEC_BASEPRM_TLM_TYPE	528	/* TLM type	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_EMGCNT	529	/* 非常停止コンタクタ遮断時間	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_MCDP1	530	/* コンタクタ溶着検知デバイス1	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_MCDP2	531	/* コンタクタ溶着検知デバイス2	*//* P1X-A157 */
#define	M_SSEC_BASEPRM_F_BUS_INIT_DELAY	532	/* Fieldbus通信エラー無効時間	*//* P1X-A164 */
#define	M_SSEC_BASEPRM_LMC_RESTRAIN	533	/* G00 &ハンドル送り時ロストモーション補正抑制	*//* P1X-A237 */
#define	M_SSEC_BASEPRM_DIDOREFRESH	534	/* DI/DOのリフレッシュ間隔	*//* P1X-A252X */
#define	M_SSEC_BASEPRM_MAN_SMG	535	/* 手動送り加減速切換	*//* P1X-A283 */
#define	M_SSEC_BASEPRM_N400VALTYPE	536	/* #400番台変数タイプ	*//* P1X-A099AJ */
#define	M_SSEC_BASEPRM_REVSVTRG	538	/* 任意逆行データ保存トリガ切換え	*//* P1X-A303 */
#define	M_SSEC_BASEPRM_MCDP3	539	/* コンタクタ溶着検知デバイス3	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCDP4	540	/* コンタクタ溶着検知デバイス4	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_SSC_RIO	541	/* 安全監視リモートI/O接続	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_ALMDLY	542	/* アラーム表示遅延時間	*//* P1X-A409 */
#define	M_SSEC_BASEPRM_DOOR1	549	/* ドア1スイッチ入力デバイス	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_DOOR2	550	/* ドア2スイッチ入力デバイス	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCCT1	553	/* コンタクタ遮断出力1デバイス	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_MCHKT1	557	/* コンタクタ動作確認チェック許容時間1	*//* P1X-A157K */
#define	M_SSEC_BASEPRM_PLCUNIT	600	/* PLC単位	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_PLCPLCUNIT	601	/* PLC単位(PLC)	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_MCMPUNIT	602	/* 機械誤差補正単位	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_PLCMCMPUNIT	603	/* 機械誤差補正単位(PLC)	*//* P1X-A070 */
#define	M_SSEC_BASEPRM_SYSTEMTYPE	1007	/* 機械タイプ選択	*//* P1X-A252M */
#define	M_SSEC_BASEPRM_NORIOCHK	1163	/* RIO未接続検知無効	*//* P1X-A120A */
#define	M_SSEC_BASEPRM_ATS	1164	/* ATS機能有効	*//* P1X-A145 */
#define	M_SSEC_BASEPRM_AUX_ACC	1361	/* 補助軸傾き一定	*//* P1X-A299 */
#define	M_SSEC_BASEPRM_MANUALF_TYPE 	1365	/* 手動速度指令タイプ	*//* P1X-A158d */
#define	M_SSEC_BASEPRM_SKIPEXTYP	1366	/* 多系統同時スキップ指令選択	*//* P1X-B588A */
#define	M_SSEC_BASEPRM_G1ACCOVRMAX	1367	/* 切削送り傾き一定加減速用オーバライド最大値	*//* P1X-A455 */
#define	M_SSEC_BASEPRM_POLYAX	1501	/* 回転工具軸の制御軸番号	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_G0IPFG	1502	/* G1→G0減速チェック	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_G1IPFG	1503	/* G1→G1減速チェック	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CKREF2	1505	/* 第2原点復帰チェック切換え	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_F1FM	1506	/* F1桁送り速度上限値	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_F1CONST	1507	/* F1桁送り速度変化定数	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORH	1510	/* ドアインタロックⅡ軸停止時間短縮切換え	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORPM	1511	/* 系統別ドアインタロックⅡ用信号入力デバイス1	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DOORPS	1512	/* 系統別ドアインタロックⅡ用信号入力デバイス2	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STAPM	1513	/* 同期タップ選択用Mコード	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_EXP_LINAX	1514	/* 指数関数補間を行う直線軸名称('A'～'Z')	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_EXP_ROTAX	1515	/* 指数関数補間を行う回転軸名称('A'～'Z')	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_AX	1516	/* 旋盤ミーリング回転軸番号	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_C	1517	/* 旋盤ミーリング回転軸名称 0:Y軸 1:C軸	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_POLM	1518	/* 主軸ポリゴン基準軸番号	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_POLS	1519	/* 主軸ポリゴン同期軸番号	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_TCHG34	1520	/* 付加軸工具補正選択用パラメータ	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_C_MIN	1521	/* 旋回最小角(C_min)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_AXIS	1522	/* 法線制御軸(C_axis)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_FEED	1523	/* 法線制御軸旋回速度(C_feed)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_TYPE	1524	/* 法線制御タイプ(C_type)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_PAX	1533	/* ミーリング 直線軸	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_SNG44_1	1534	/* G44.1指令時の主軸番号	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_C_LENG	1535	/* 旋回最小移動量(C_leng)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX1	1537	/* 第1軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX2	1538	/* 第2軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX3	1539	/* 第3軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX4	1540	/* 第4軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX5	1541	/* 第5軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX6	1542	/* 第6軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX7	1543	/* 第7軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_CRS_AX8	1544	/* 第8軸と混合制御する軸名	*//* P0Y-A013F P1X-A020 */
#define	M_SSEC_BASEPRM_3DCDC	1561	/* 3次元座標変換中ワーク座標表示切換	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DREMC	1562	/* 3次元座標変換中残指令表示切換	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DCDRC	1563	/* 3次元座標変換中座標読取切換	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_3DSPD	1564	/* 3次元座標変換中穴あけ速度	*//* P1X-A059 */
#define	M_SSEC_BASEPRM_HELGEAR	1565	/* はすば加工基準軸	*//* P1X-A304 */
#define	M_SSEC_BASEPRM_3DSPDSLCT	1566	/* 3次元座標変換中穴あけ軸早送り動作モード選択	*//* P1X-A059U */
#define	M_SSEC_BASEPRM_SFILTG1	1568	/* G01 S字フィルタ	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SFILTG0	1569	/* G00 S字フィルタ	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SFILT2	1570	/* S字フィルタ２（補間後フィルタ）	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_SSSDIS	1571	/* SSS制御 形状認識範囲を固定化	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_CIRORP	1572	/* 円弧ブロックオーバラップ有効	*//* P0Y-A013N P1X-A020 */
#define	M_SSEC_BASEPRM_RET1	1573	/* 復帰タイプ１	*//* P1X-A071 */
#define	M_SSEC_BASEPRM_RET2	1574	/* 復帰タイプ２	*//* P1X-A071 */
#define	M_SSEC_BASEPRM_ANIAXDIR	1590	/* Animate ax direct	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX1	1591	/* Animate ax-1	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX2	1592	/* Animate ax-2	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_ANIAX3	1593	/* Animate ax-3	*//* P1X-A102 */
#define	M_SSEC_BASEPRM_HACCC	1801	/* 円弧半径クランプ加速度(Hacc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MACCC	1802	/* 加速度判定中速(Macc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_LACCC	1803	/* 加速度判定低速(Lacc_c)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_HCOFA	1811	/* X軸高加速度係数β(Hcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_HCOFB	1812	/* X軸高加速度係数α(Hcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MCOFA	1813	/* X軸中加速度係数β(Mcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MCOFB	1814	/* X軸中加速度係数α(Mcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_LCOFA	1815	/* X軸低加速度係数β(Lcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_LCOFB	1816	/* X軸低加速度係数α(Lcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_X_MAGC	1817	/* X軸変更倍率θ(mag_C)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_HCOFA	1821	/* Y軸高加速度係数β(Hcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_HCOFB	1822	/* Y軸高加速度係数α(Hcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MCOFA	1823	/* Y軸中加速度係数β(Mcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MCOFB	1824	/* Y軸中加速度係数α(Mcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_LCOFA	1825	/* Y軸低加速度係数β(Lcof_A)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_LCOFB	1826	/* Y軸低加速度係数α(Lcof_B)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_Y_MAGC	1827	/* Y軸変更倍率θ(mag_C)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STNAD	1901	/* station addr	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_INSIZ	1902	/* Din  size	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OTSIZ	1903	/* Dout size	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_DLENG	1904	/* data length	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_BRATE	1905	/* baud rate	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_STPBT	1906	/* stop bit	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_PRITY	1907	/* parity check	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_EVPTY	1908	/* even parity	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TIMIN	1909	/* Tout (ini)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TIMRN	1910	/* Tout (run)	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_CLOCK	1911	/* clock select	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_WCOUNTM	8001	/* ワーク加工数M	*/
#define	M_SSEC_BASEPRM_WCOUNT	8002	/* ワーク加工数	*/
#define	M_SSEC_BASEPRM_WCOUNTMAX	8003	/* ワーク最大値	*/
#define	M_SSEC_BASEPRM_PG37F	8004	/* 自動工具長測定計測速度	*/
#define	M_SSEC_BASEPRM_PG37R	8005	/* 自動工具長測定減速領域r	*/
#define	M_SSEC_BASEPRM_PG37D	8006	/* 自動工具長測定減速領域d	*/
#define	M_SSEC_BASEPRM_OVRIDE	8007	/* 自動コーナオーバライド	*/
#define	M_SSEC_BASEPRM_ANGLE	8008	/* 自動コーナオーバライド最大角度	*/
#define	M_SSEC_BASEPRM_INN	8009	/* 自動コーナオーバライドコーナ前長さ	*/
#define	M_SSEC_BASEPRM_MAMOU1	8010	/* 摩耗データ最大値	*/
#define	M_SSEC_BASEPRM_MAMOU2	8011	/* 摩耗データ最大加算値	*/
#define	M_SSEC_BASEPRM_G73	8012	/* G73戻り	*/
#define	M_SSEC_BASEPRM_G83	8013	/* G83戻り	*/
#define	M_SSEC_BASEPRM_CHANF	8014	/* チャンファ量	*/
#define	M_SSEC_BASEPRM_G78	8015	/* 角度	*/
#define	M_SSEC_BASEPRM_AMARI	8016	/* G71最小切込	*/
#define	M_SSEC_BASEPRM_LAPDLT	8017	/* 切込変化	*/
#define	M_SSEC_BASEPRM_PEKRVM	8018	/* G84/G74戻り	*/
#define	M_SSEC_BASEPRM_RCOMP	8019	/* 精度係数	*/
#define	M_SSEC_BASEPRM_FCORN	8020	/* コーナ減速角度	*/
#define	M_SSEC_BASEPRM_RCOMP_CHG	8021	/* 精度係数分離	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_RCOMP1	8022	/* コーナ精度係数	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_RCOMP2	8023	/* 曲線精度係数	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_SPLINE	8025	/* 高精度スプライン有効	*/
#define	M_SSEC_BASEPRM_SPCAN_ANGL	8026	/* キャンセル角度	*/
#define	M_SSEC_BASEPRM_DISTTH1	8027	/* 弦誤差1	*/
#define	M_SSEC_BASEPRM_DISTTH2	8028	/* 弦誤差2	*/
#define	M_SSEC_BASEPRM_MINLENG	8029	/* 統合長	*/
#define	M_SSEC_BASEPRM_MINUTE	8030	/* 微小線分長	*/
#define	M_SSEC_BASEPRM_FAIRING_ON	8033	/* フェアリング有効	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_ACCCLAMP_ON	8034	/* 加速度クランプ有効	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_ACCCLAMP_MAG	8035	/* 加速度クランプ倍率	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CORDEC_JUDGE	8036	/* コーナ判定切換	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CORDEC_JUDGE_L	8037	/* コーナ判定長	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_C_ROTR	8041	/* C軸旋回径	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_C_CONR	8042	/* C軸挿入径	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_HDL_OFS	8043	/* ハンドル補正量	*//* P1X-A062 */
#define	M_SSEC_BASEPRM_PRUNIT10PRM	8044	/* 指令単位１０倍	*//* P1X-A061 */
#define	M_SSEC_BASEPRM_LAPCUT	8051	/* G71切込み	*/
#define	M_SSEC_BASEPRM_G71	8052	/* G71逃げ	*/
#define	M_SSEC_BASEPRM_LAPX	8053	/* G73削りX	*/
#define	M_SSEC_BASEPRM_LAPZ	8054	/* G73削りZ	*/
#define	M_SSEC_BASEPRM_LAPCT	8055	/* G73回数	*/
#define	M_SSEC_BASEPRM_G74	8056	/* G74戻り	*/
#define	M_SSEC_BASEPRM_G76	8057	/* G76仕上げ代	*/
#define	M_SSEC_BASEPRM_G76CT	8058	/* G76回数	*/
#define	M_SSEC_BASEPRM_G76AN	8059	/* G76ねじ山	*/
#define	M_SSEC_BASEPRM_P3D	8071	/* 3次元補正	*/
#define	M_SSEC_BASEPRM_SCALE	8072	/* スケーリング倍率	*/
#define	M_SSEC_BASEPRM_SPIRAL_ERR	8075	/* 渦巻Q,K増分指令時終点誤差(タイプ2)	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_SCRN_TIME	8078	/* スクリーンセーバー時間	*//* P0Y-A013c */
#define	M_SSEC_BASEPRM_G68ANGLE	8081	/* G指令回転角	*//* P1X-A483 */
#define	M_SSEC_BASEPRM_G68FLAG	8082	/* G68.1角度増分	*//* P1X-A483 */
#define	M_SSEC_BASEPRM_G83SMCOD	8083	/* G83小径モードMコード	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SCLRN	8084	/* G83小径クリアランス量	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SFWD_F	8085	/* G83小径切削開始位置送り速度	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G83SBAK_F	8086	/* G83小径戻り速度	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_SSS_ON	8090	/* SSS制御有効	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_STDLENGTH	8091	/* 基準長さ	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_CLAMP_COEFF	8092	/* クランプ速度係数	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_STEP_LENGTH	8093	/* 段差幅	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_DCC_WAIT_ADD	8094	/* 減速予備時間	*//* P1X-A055 */
#define	M_SSEC_BASEPRM_MACSINGLE	8101	/* マクロシングル	*/
#define	M_SSEC_BASEPRM_COLLALMOFF	8102	/* 干渉回避	*/
#define	M_SSEC_BASEPRM_COLLCHKOFF	8103	/* 干渉チェック無効	*/
#define	M_SSEC_BASEPRM_EDTLCKB	8105	/* 編集ロックB	*/
#define	M_SSEC_BASEPRM_G46ERR	8106	/* G46反転軸エラー回避	*/
#define	M_SSEC_BASEPRM_MCERRRAD	8107	/* 半径誤差補正	*/
#define	M_SSEC_BASEPRM_CNGMCERRRAD	8108	/* 半径誤差補正切換	*/
#define	M_SSEC_BASEPRM_HOSTLNK	8109	/* 上位通信	*/
#define	M_SSEC_BASEPRM_POCKET_ON	8110	/* G71/G72ポケット加工オン	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_MILL_R	8111	/* ミーリング半径値指定	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_G04P	8112	/* G04P小数点有効	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_MILL_INIG16	8113	/* ミーリングイニシャルG16	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_MILL_INIG19	8114	/* ミーリングイニシャルG19	*//* P0Y-A013F */
#define	M_SSEC_BASEPRM_COORDOFF	8116	/* 座標回転パラ無効	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_OFSDIAM	8117	/* 径補正直径指定有効	*//* P1X-A170B */
#define	M_SSEC_BASEPRM_COMPUNITSWITCH	8119	/* 補正量設定単位切換	*//* P1X-A203B */
#define	M_SSEC_BASEPRM_FONTSELECT	8120	/* フォント選択	*//* P1X-A333n */
#define	M_SSEC_BASEPRM_SCRNCAP	8121	/* スクリーンキャプチャ	*//* P1X-A301 */
#define	M_SSEC_BASEPRM_KEEP_G43	8122	/* 手動R点復帰G43保持(M専用)	*//* P1X-A320 */
#define	M_SSEC_BASEPRM_DRIL_QR	8123	/* 高速引き戻し有効	*//* P1X-A318 */
#define	M_SSEC_BASEPRM_RST_MR	8124	/* リセット時のミラー動作	*//* P1X-B496 */
#define	M_SSEC_BASEPRM_G84_S	8125	/* G84 S指令チェック有効	*//* P1X-A365 */
#define	M_SSEC_BASEPRM_BUZZER_OFF	8126	/* 操作音無効(Disable op tone)	*//* P1X-A398 */
#define	M_SSEC_BASEPRM_RNAVI_MANUAL_CRD	8127	/* R-Navi手動送り座標	*//* P1X-A451S */
#define	M_SSEC_BASEPRM_UPRM_F1	8145	/* #8145 F1桁送り有効	*//* P1X-A006AQ */
#define	M_SSEC_BASEPRM_EXTDCC_AX	8154	/* 外部減速軸対応有効	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_SUBPRO_INTER	8155	/* サブプロ型割り込み	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_FINE_THRECUT_E	8156	/* 精密ねじ切りE	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_COMP_TYPE_B	8157	/* 補正タイプB (M系:径補正、L系：刃先補正)	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_INITCONST_SUR_SPD	8158	/* イニシャル周速一定	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_SYNTAP	8159	/* 同期タップ	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_STARTP_ALARM	8160	/* スタート点アラーム	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_HOLD_INTR_AMOUNT	8173	/* 割込み量保持	*//* P1X-B551 */
#define	M_SSEC_BASEPRM_LKYOKO	8621	/* 座標回転  平面(横軸名称)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKTATE	8622	/* 座標回転  平面(縦軸名称)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKCENTY	8623	/* 座標回転中心座標(横軸)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKSENTT	8624	/* 座標回転中心座標(縦軸)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKYOKOL	8625	/* 座標回転  ベクトル(横軸)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKTATEL	8626	/* 座標回転  ベクトル(縦軸)	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_LKKAKUDO	8627	/* 座標回転角度	*//* P1X-A090 */
#define	M_SSEC_BASEPRM_TOOL_LEN	8701	/* センサ長	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_TOOL_DIA	8702	/* センサ直径	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OFFSET_X	8703	/* 中心補正量　横	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_OFFSET_Y	8704	/* 中心補正量　縦	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_RETURN	8705	/* 戻り量	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_FEED	8706	/* 送り速度	*//* P1X-A020 */
#define	M_SSEC_BASEPRM_SKIP_PAST_H	8707	/* スキップ流れ量（横軸）	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_SKIP_PAST_V	8708	/* スキップ流れ量（縦軸）	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_WORK_SIN_CHG	8709	/* 外部ワーク符号反転	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_WORK_INVA	8710	/* 外部ワークオフセット無効	*//* P1X-A076 */
#define	M_SSEC_BASEPRM_TLM_L_MEAS_AXIS	8711	/* 工具計測長測定軸	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_TLM_M_MEAS_AXIS	8712	/* 工具計測径測定軸	*//* P1X-A080 */
#define	M_SSEC_BASEPRM_SKIP_COORD_SW	8713	/* スキップ座標切替	*//* P1X-A332U */
#define	M_SSEC_BASEPRM_D0DEV	8880	/* サブプロ格納先D0:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D0DIR	8881	/* サブプロ格納先D0:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D1DEV	8882	/* サブプロ格納先D1:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D1DIR	8883	/* サブプロ格納先D1:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D2DEV	8884	/* サブプロ格納先D2:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D2DIR	8885	/* サブプロ格納先D2:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D3DEV	8886	/* サブプロ格納先D3:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D3DIR	8887	/* サブプロ格納先D3:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D4DEV	8888	/* サブプロ格納先D4:dev	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D4DIR	8889	/* サブプロ格納先D4:dir	*//* P1X-A099A */
#define	M_SSEC_BASEPRM_D0_SRCH_ODR	8890	/* サブプロサーチ順D0	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D1_SRCH_ODR	8891	/* サブプロサーチ順D1	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D2_SRCH_ODR	8892	/* サブプロサーチ順D2	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D3_SRCH_ODR	8893	/* サブプロサーチ順D3	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_D4_SRCH_ODR	8894	/* サブプロサーチ順D4	*//* P1X-A468 */
#define	M_SSEC_BASEPRM_G_CODE_FORMAT	10001	/* Gコードフォーマット	*/
#define	M_SSEC_BASEPRM_M2_LABEL_O	10002	/* M2ラベルO	*/
#define	M_SSEC_BASEPRM_M2_MACRO_CONVERT	10003	/* M2マクロコンバータ有効	*/
#define	M_SSEC_BASEPRM_COORD_ANGL	10004	/* 座標回転角度	*/
#define	M_SSEC_BASEPRM_COORD_ROT_CENTER_H	10005	/* 座標回転中心座標(横)	*/
#define	M_SSEC_BASEPRM_COORD_ROT_CENTER_V	10006	/* 座標回転中心座標(縦)	*/
#define	M_SSEC_BASEPRM_PASSWD	10007	/* 機械メーカマクロ暗証番号	*/
#define	M_SSEC_BASEPRM_M3MPAR1	10008	/* M3/L3用パラメータ(m3mpar1)	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT1	10009	/* operat1	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT2	10010	/* operat2	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT3	10011	/* operat3	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT5	10012	/* operat5	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_OPERAT7	10013	/* operat7	*//* P0Y-A013B */
#define	M_SSEC_BASEPRM_MASMAC5	10035	/* masmac5	*//* P0Y-A013E */
#define	M_SSEC_BASEPRM_CHRCOMP	10100	/* 変換後補間前誤差率(#8019カッコ）	*//* P0Y-A013N */
#define	M_SSEC_BASEPRM_CHRCOMP2	10101	/* 曲線精度係数の変換後補間前誤差率(#8023カッコ）	*//* P0Y-A042A */
#define	M_SSEC_BASEPRM_APC_TYPE	11001	/* APC画面表示タイプ選択	*//* P1X-A166 */
#define	M_SSEC_BASEPRM_VALID_PALLET_NUM	11002	/* パレット数設定	*//* P1X-A166 */
#define	M_SSEC_BASEPRM_APLC	11003	/* APLC有効/無効(APLC valid)	*//* P1X-A167 */
#define	M_SSEC_BASEPRM_PLCAUTO	11004	/* PLC起動タイミング切り替え(PLCautorun enable)	*//* P1X-A014A */
#define	M_SSEC_BASEPRM_HD_IPADDR	11005	/* 加工プログラムが格納されているPCのIPアドレス	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_PORTNUMBER	11006	/* 加工プログラムが格納されているPCのポート番号	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_TIMEOUT	11007	/* 加工プログラムが格納されているPCのタイムアウト時間	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_HD_CACHE	11008	/* HD運転用キャッシュ設定	*//* P1X-A179 */
#define	M_SSEC_BASEPRM_SW_KEYBOARD	11010	/* ソフトウェアキーボード	*//* P1X-A006AH */
#define	M_SSEC_BASEPRM_HANDYTERMINAL_PW	11011	/* ハンディターミナルパスワード	*//* P1X-A193 */
#define	M_SSEC_BASEPRM_AX16MD	11012	/* 1チャンネル16軸接続設定	*//* P1X-A008h */
#define	M_SSEC_BASEPRM_3D_MCHK	11013	/* 3D機械干渉チェック無効	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_CHK_LEN1	11014	/* 1段階目の干渉チェック距離	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_CHK_LEN2	11015	/* 2段階目の干渉チェック距離	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_EXPAND_RATE	11016	/* 3D機械干渉チェック　形状膨らまし率	*//* P1X-A269 */
#define	M_SSEC_BASEPRM_TOFS_RUNNING	11017	/* 自動運転中工具補正量設定有効(T-ofs set at run)	*//* P1X-A203C */
#define	M_SSEC_BASEPRM_M_PW_HOLD	11018	/* マシンユーザパスワード保持 	*//* P1X-A020AS */
#define	M_SSEC_BASEPRM_2SYS_DISPLAY	11019	/* 2系統同時表示有効	*//* P1X-A322 */
#define	M_SSEC_BASEPRM_PLC_MESG_TYPE	11021	/* PLCメッセージ表示形式切替(PLC mesg disp type)	*//* P1X-A006BB */
#define	M_SSEC_BASEPRM_SRAM_OUT_TYPE	11022	/* SRAM出力形式	*//* P1X-A395 */
#define	M_SSEC_BASEPRM_G33_1_DRN	11023	/* G33.1ドライラン	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_G33_1_FHD	11024	/* G33.1フィードホールド	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_TOLE_ARC_CENT	11028	/* 円弧中心誤差修正許容値	*//* P1X-B523 */
#define	M_SSEC_BASEPRM_ARC_TO_G1	11029	/* 円弧中心指定なし円弧－直線置き換え	*//* P1X-B522 */
#define	M_SSEC_BASEPRM_MANTAPSYNCCANCL	11030	/* 手動同期タップ中同期解除	*//* P1X-B548 */
#define	M_SSEC_BASEPRM_CURSOR_POS_SRCH	11031	/* カーソル位置サーチ	*//* P1X-A020AV */
#define	M_SSEC_BASEPRM_MENU_SEL_PARA	11032	/* メニュー選択パラメータ設定禁止	*//* P1X-A358 */
#define	M_SSEC_BASEPRM_SKPB_NO_SENS	11033	/* B接点時未実装センサ部選択	*//* P1X-A382 */
#define	M_SSEC_BASEPRM_G12ADDRCHECKTYPE	11034	/* 円切削指令アドレスチェックタイプ	*//* P1X-A406 */
#define	M_SSEC_BASEPRM_SYS_CHG_LMT	11035	/* 系統切替操作制限	*//* P1X-A413 */
#define	M_SSEC_BASEPRM_MEAS_DIR_JUDGE	11036	/* 手動計測方向判定不感帯幅	*//* P1X-A349A */
#define	M_SSEC_BASEPRM_RNAVI_INDEX_TYPE	11037	/* R-Navi 加工面割り出し方式	*//* P1X-A451Q */
#define	M_SSEC_BASEPRM_MBTANAXH	12001	/* 手動送り速度B周速制御直交系統軸名称（横）	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBTANAXV	12002	/* 手動送り速度B周速制御直交系統軸名称（縦）	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBROTCH	12003	/* 手動送り速度B周速制御回転中心機械位置（横）	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBROTCV	12004	/* 手動送り速度B周速制御回転中心機械位置（縦）	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MFIG	12005	/* M個数	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_MBIN	12006	/* Mバイナリ	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_SFIG	12007	/* S個数	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_SBIN	12008	/* Sバイナリ	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_TFIG	12009	/* T個数	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_TBIN	12010	/* Tバイナリ	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_BFIG	12011	/* B個数	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_BBIN	12012	/* Bバイナリ	*//* P1X-A152 */
#define	M_SSEC_BASEPRM_G33_1_ROT_NAME	12013	/* G33.1回転軸名称	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_G33_1_OVR	12014	/* G33.1オーバライド	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_SYNTAP_SCANCEL	19001	/* 同期タップ(,S)キャンセル	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_ZEROPOINT_MARK	19002	/* 原点マークの表示位置	*//* P1X-A310 */
#define	M_SSEC_BASEPRM_PRGCRDROT_TYPE	19003	/* PRG座標回転タイプ	*//* P1X-B396A */
#define	M_SSEC_BASEPRM_MAXSYNCTAP_F	19004	/* 同期タップ最大切削送り速度指令範囲制限	*//* P1X-A363 */
#define	M_SSEC_BASEPRM_MANUALF2_CLAMP	19005	/* 手動速度指令2クランプ速度(%)	*//* P1X-A158d */
#define	M_SSEC_BASEPRM_EOR_DISABLE	19006	/* EOR無効	*//* P1X-A482 */
#define	M_SSEC_BASEPRM_G33_1_CUTUP_SPD	19401	/* G33.1切り上げ速度	*//* P1X-A334 */
#define	M_SSEC_BASEPRM_ROT_AX_DRAW	19405	/* グラフィック回転軸描画	*//* P1X-A020BP */
#define	M_SSEC_BASEPRM_FIXCYCLE_CUTTIME	19417	/* 穴あけサイクル時間短縮	*//* P1X-A519 */
#define	M_SSEC_BASEPRM_MBRSTDR1	19425	/* 周速制御基準半径1	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDF1	19426	/* 周速制御基準速度1	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDR2	19427	/* 周速制御基準半径2	*//* P1X-A111 */
#define	M_SSEC_BASEPRM_MBRSTDF2	19428	/* 周速制御基準速度2	*//* P1X-A111 */

/* 軸パラメータ/PLC軸パラメータ	*/
#define	M_SSEC_AXISPRM_NAME	1	/* 軸名称	*/
#define	M_SSEC_AXISPRM_DSP_NAME	2	/* 表示用軸名称	*/
#define	M_SSEC_AXISPRM_INCNAME	3	/* 増分指令軸名 	*/
#define	M_SSEC_AXISPRM_CS	4	/* 指令単位	*/
#define	M_SSEC_AXISPRM_IOUT	5	/* インチ出力 	*/
#define	M_SSEC_AXISPRM_ROT	6	/* 回転軸	*/
#define	M_SSEC_AXISPRM_CCW	7	/* モータccw	*/
#define	M_SSEC_AXISPRM_DIA	8	/* 直径指定軸	*/
#define	M_SSEC_AXISPRM_SPAX	9	/* 主軸補間	*/
#define	M_SSEC_AXISPRM_MCP_NO	10	/* アンプインタフェースチャンネル番号	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_CRS_ADR	12	/* 混合時の指令アドレス	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_CRS_INC	13	/* 混合時の増分指令アドレス	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_INTABS	101	/* 手動ABS更新	*/
#define	M_SSEC_AXISPRM_TCOMP	102	/* 工具補正機能	*/
#define	M_SSEC_AXISPRM_MANDOG	103	/* 手動ドグ式	*/
#define	M_SSEC_AXISPRM_SVOF	104	/* 誤差修正	*/
#define	M_SSEC_AXISPRM_JOGH	105	/* JOG応答性タイプ	*/
#define	M_SSEC_AXISPRM_JOGHP	106	/* JOG起動(+)デバイス選択	*/
#define	M_SSEC_AXISPRM_JOGHN	107	/* JOG起動(-)デバイス選択	*/
#define	M_SSEC_AXISPRM_TSLVNO	108	/* スレーブ軸番号	*/
#define	M_SSEC_AXISPRM_NO_DSP	109	/* No_dsp	*/
#define	M_SSEC_AXISPRM_AXOFF	110	/* 軸取り外し	*/
#define	M_SSEC_AXISPRM_JOGD	111	/* ±JOG起動信号デバイス名	*/
#define	M_SSEC_AXISPRM_CHOP_AX	112	/* チョッピング指定軸	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_OUTUNIT	1010	/* 出力単位(サーボ)	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_REF_SYN	1493	/* 原点確定操作同期 	*//* P1X-A106H */
#define	M_SSEC_AXISPRM_DSP_AX_CHG	1494	/* カウンタ表示軸順序	*//* P1X-A315 */
#define	M_SSEC_AXISPRM_GRF_AX_DIR	1495	/* 2Dグラフィック軸移動方向	*//* P1X-A020BH */
#define	M_SSEC_AXISPRM_RAPID	2001	/* Rapid	*/
#define	M_SSEC_AXISPRM_CRUMP	2002	/* 切削送りクランプ速度	*/
#define	M_SSEC_AXISPRM_SMGST	2003	/* 加減速モード	*/
#define	M_SSEC_AXISPRM_LG0T	2004	/* G0時定数(リニア),   ソフト1段目	*/
#define	M_SSEC_AXISPRM_G0T	2005	/* G0時定数(1次遅れ),ソフト2段目	*/
#define	M_SSEC_AXISPRM_G02T	2006	/* G0時定数(ソフト)  (M7未使用)	*/
#define	M_SSEC_AXISPRM_LG1T	2007	/* G1時定数(リニア),   ソフト1段目	*/
#define	M_SSEC_AXISPRM_G1T	2008	/* G1時定数(1次遅れ),ソフト2段目	*/
#define	M_SSEC_AXISPRM_G12T	2009	/* G1時定数(ソフト)  (M7未使用)	*/
#define	M_SSEC_AXISPRM_FFGAIN	2010	/* フィードフォワードゲイン	*/
#define	M_SSEC_AXISPRM_G0BACK	2011	/* G0 バック ラッシ	*/
#define	M_SSEC_AXISPRM_G1BACK	2012	/* G1 バック ラッシ	*/
#define	M_SSEC_AXISPRM_STLIM_MIN	2013	/* ソフトリミット-(SW OT-)	*/
#define	M_SSEC_AXISPRM_STLIM_MAX	2014	/* ソフトリミット-(SW OT+)	*/
#define	M_SSEC_AXISPRM_TLMLN	2015	/* ツールセッタ－方向センサ または TLM基準長さ	*/
#define	M_SSEC_AXISPRM_TLMLP	2016	/* ツールセッタ＋方向センサ	*/
#define	M_SSEC_AXISPRM_TAPGAINM	2017	/* 軸サーボゲイン	*/
#define	M_SSEC_AXISPRM_NOSRV	2018	/* サーボなし運転	*/
#define	M_SSEC_AXISPRM_REVNUM	2019	/* 戻し順序	*/
#define	M_SSEC_AXISPRM_OCHKP	2020	/* 第2原点復帰主軸オリエント完了チェック位置	*/
#define	M_SSEC_AXISPRM_OUTF	2021	/* ソフトリミット範囲外最大速度	*/
#define	M_SSEC_AXISPRM_G30SLX	2022	/* ソフトリミット無効(自動＆手動)	*/
#define	M_SSEC_AXISPRM_OZFMIN	2023	/* ATC速度下限設定	*/
#define	M_SSEC_AXISPRM_SYNERR	2024	/* 誤差許容値	*/
#define	M_SSEC_AXISPRM_MLIMIT1BL	2061	/* ソフトリミットIB-	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_MLIMIT1BU	2062	/* ソフトリミットIB+	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_MOT1TYPE	2063	/* ソフトリミットIBタイプ	*//* P1X-A006 */
#define	M_SSEC_AXISPRM_FFGAING0	2068	/* G00フィードフォワードゲイン	*/
#define	M_SSEC_AXISPRM_MRCKAX	2069	/* 各軸円弧半径誤差補正係数	*/
#define	M_SSEC_AXISPRM_DIVRT	2070	/* 回転軸分割数	*/
#define	M_SSEC_AXISPRM_SAXNO	2071	/* 傾斜軸選択	*/
#define	M_SSEC_AXISPRM_RSLIMIT	2072	/* 再開リミット	*/
#define	M_SSEC_AXISPRM_ZRNDOG	2073	/* 原点ドグ	*/
#define	M_SSEC_AXISPRM_HWOTP	2074	/* H/W OT+	*/
#define	M_SSEC_AXISPRM_HWOTN	2075	/* H/W OT-	*/
#define	M_SSEC_AXISPRM_INDEXX	2076	/* インデックステーブル割出し軸	*/
#define	M_SSEC_AXISPRM_G0INPS	2077	/* G0インポジション幅(G0inps)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_G1INPS	2078	/* G1インポジション幅（G1inps)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHCOMP	2079	/* チョッピング補正量(パラメータ値)(chcomp)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHWID	2080	/* チョッピング補正量計算最小値 (chwid)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_CHCLSP	2081	/* チョッピング最高速度(chclsp)	*//* P0Y-A013c */
#define	M_SSEC_AXISPRM_A_RSTAX	2082	/* 自動再開位置復帰軸の復帰順序	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_G60_AX	2084	/* 一方向位置決め軸選択	*//* P0Y-A013F */
#define	M_SSEC_AXISPRM_SYNCNT	2087	/* 同期重畳制御の軸毎設定(syncnt）	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_BSAX_SY	2088	/* 同期制御の基準軸(bsax_sy）	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_BSAX_PL	2089	/* 重畳制御の基準軸(bsax_pl）	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLRAPID	2090	/* 重畳制御中の早送り速度(plrapid）	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLCLAMP	2091	/* 重畳制御中の切削送りクランプ速度(plclamp)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG0TL	2092	/* 重畳制御中のG0時定数 - リニア(plG0tL)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG0T1	2093	/* 重畳制御中のG0時定数 - 一時遅れ(plG0tl)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG1TL	2094	/* 重畳制御中のG1時定数 - リニア(plG1tL)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_PLG1T1	2095	/* 重畳制御中のG1時定数 - 一時遅れ(plG1tl)	*//* P1X-A020 */
#define	M_SSEC_AXISPRM_CRNCSP	2096	/* コーナ減速最低速度	*//* P0Y-A042A */
#define	M_SSEC_AXISPRM_TLMSUBLN	2097	/* ツールセッタ サブ側 センサ位置－	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_TLMSUBLP	2098	/* ツールセッタ サブ側 センサ位置＋	*//* P1X-A070 */
#define	M_SSEC_AXISPRM_LSKPT	2102	/* スキップ時定数(リニア)	*//* P0Y-A096 */
#define	M_SSEC_AXISPRM_SKPT	2103	/* スキップ時定数(1次遅れ)	*//* P0Y-A096 */
#define	M_SSEC_AXISPRM_INDEX_UNIT	2106	/* 割り出し単位	*//* P1X-A060 */
#define	M_SSEC_AXISPRM_RAPID_HIMOD	2109	/* 高精度制御モード用早送り速度	*//* P1X-A064 */
#define	M_SSEC_AXISPRM_CLAMP_HIMOD 	2110	/* 高精度制御モード用切削クランプ送り速度	*//* P1X-A065 */
#define	M_SSEC_AXISPRM_BLF_VALID	2111	/* 象限突起補正有効	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_MI	2112	/* モータイナーシャ	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_VF	2113	/* 粘性摩擦	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_FWDG	2114	/* 補正ＦＦゲイン	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_BLF_ST	2115	/* モータストールトルク	*//* P1X-A067 */
#define	M_SSEC_AXISPRM_SSCDRSEL	2118	/* 速度監視ドア選択	*//* P1X-A157 */
#define	M_SSEC_AXISPRM_BKVALID	2121	/* 可変バックラッシ無効／有効／連続化/可変バックラッシⅡ有効	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKP	2122	/* Ｇ０＋領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKC	2123	/* Ｇ０中央領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G0BACKM	2124	/* Ｇ０－領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKP	2125	/* Ｇ1＋領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKC	2126	/* Ｇ1中央領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_G1BACKM	2127	/* Ｇ1－領域補正量	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFE1	2128	/* Ｇ1補正量切替速度１	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFE2	2129	/* Ｇ1補正量切替速度２	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDIS1	2130	/* Ｇ1補正量切替距離１	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDIS2	2131	/* Ｇ1補正量切替距離２	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOS1	2132	/* Ｇ1補正量切替終点位置１	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOS2	2133	/* Ｇ1補正量切替終点位置２	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKARCK	2134	/* 円弧補正係数	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKFRE	2135	/* レファレンス点速度	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPRE	2136	/* レファレンス点終点位置	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKDRE	2137	/* レファレンス点進入方向	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_BKPOSC	2138	/* 連続化位置中央点	*//* P1X-A069 */
#define	M_SSEC_AXISPRM_OMRFF_OFF	2139	/* omrff_off （OMR-FF無効）	*//* P1X-A127 */
#define	M_SSEC_AXISPRM_SSCSVOFFLTR	2140	/* 速度監視サーボオフ中異常検出時間	*//* P1X-A157E */
#define	M_SSEC_AXISPRM_LCHT	2141	/* チョッピング時定数(ソフト1段目)	*//* P1X-A217 */
#define	M_SSEC_AXISPRM_CH1T	2142	/* チョッピング時定数(ソフト2段目)	*//* P1X-A217 */
#define	M_SSEC_AXISPRM_POLAR	2143	/* 制御軸相対極性	*//* P1X-A377 */
#define	M_SSEC_AXISPRM_BASEPS	2144	/* 基本機械座標原点相対距離	*//* P1X-A377 */
#define	M_SSEC_AXISPRM_POS_BLF_L1	2146	/* 位置依存漸増型バックラッシ基準距離1(Blf_L1)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_L2	2147	/* 位置依存漸増型バックラッシ基準距離2(Blf_L2)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_E1	2148	/* 位置依存漸増型バックラッシ基準補正量1(Blf_E1)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_POS_BLF_E2	2149	/* 位置依存漸増型バックラッシ基準補正量2(Blf_E2)	*//* P1X-A205 */
#define	M_SSEC_AXISPRM_ROT_LEN	2150	/* 3D機械干渉チェック 回転軸最遠距離	*//* P1X-A269 */
#define	M_SSEC_AXISPRM_RATEDSPD	2151	/* 定格速度	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_ACCRATE	2152	/* 最大加速度に対する加速率	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_G0TRATED	2153	/* 定格速度までのG0時定数(多段加減速)	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_HOBFFG	2155	/* ホブ加工時フィードフォワードゲイン	*//* P1X-A304 */
#define	M_SSEC_AXISPRM_MM_RTNDIR	2169	/* 手動計測戻り方向	*//* P1X-A349 */
#define	M_SSEC_AXISPRM_LMC1QR	2170	/* 高速引き戻し用ロストモーション補正ゲイン1	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMC2QR	2171	/* 高速引き戻し用ロストモーション補正ゲイン2	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCDQR	2172	/* 高速引き戻し用ロストモーション補正タイミング	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCKQR	2173	/* 高速引き戻し用ロストモーション補正3 ばね定数	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_LMCCQR	2174	/* 高速引き戻し用ロストモーション補正3 粘性係数	*//* P1X-A318 */
#define	M_SSEC_AXISPRM_SPRADX_RADIUS	2175	/* 特殊直径軸(X)半径	*//* P1X-A346 */
#define	M_SSEC_AXISPRM_SPRADX_CLAMP	2176	/* 特殊直径軸制御時クランプ速度	*//* P1X-A346 */
#define	M_SSEC_AXISPRM_MANUALBTL	2177	/* 手動送り速度B加減速時定数	*//* P1X-A028A */
#define	M_SSEC_AXISPRM_SDIN	2180	/* 速度監視入力ドア番号	*//* P1X-A157U */
#define	M_SSEC_AXISPRM_STLTRQ	2189	/* 電力算出用ストールトルク	*//* P1X-A481 */
#define	M_SSEC_AXISPRM_VBL2_VG1	2561	/* 可変バックラッシ補正Ⅱ 補正データ切り替え速度１	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_VG0	2562	/* 可変バックラッシ補正Ⅱ 補正データ切り替え速度２	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P1	2563	/* 可変バックラッシ補正Ⅱ ストローク点１	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P2	2564	/* 可変バックラッシ補正Ⅱ ストローク点２	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_P3	2565	/* 可変バックラッシ補正Ⅱ ストローク点３	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL11	2566	/* 可変バックラッシ補正Ⅱ 切り替え速度１、ストローク点１での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL12	2567	/* 可変バックラッシ補正Ⅱ 切り替え速度１、ストローク点２での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL13	2568	/* 可変バックラッシ補正Ⅱ 切り替え速度１、ストローク点３での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL01	2569	/* 可変バックラッシ補正Ⅱ 切り替え速度２、ストローク点１での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL02	2570	/* 可変バックラッシ補正Ⅱ 切り替え速度２、ストローク点２での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BL03	2571	/* 可変バックラッシ補正Ⅱ 切り替え速度２、ストローク点３での補正データ	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_FLOAT_TC	2572	/* 可変バックラッシ補正Ⅱ 浮き上がり量算出時の時定数	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_LM_MUL	2573	/* 可変バックラッシ補正Ⅱ ロストモーション量算出時の乗数	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_VBOUND	2574	/* 可変バックラッシ補正Ⅱ 速度境界値	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_COMP_MAG	2575	/* 可変バックラッシ補正Ⅱ 補正倍率	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_COMP_MUL	2576	/* 可変バックラッシ補正Ⅱ 補正量算出時の乗数	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BLE	2577	/* 可変バックラッシ補正Ⅱ 漸増量	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_VBL2_BLL	2578	/* 可変バックラッシ補正Ⅱ 漸増移動量	*//* P1X-A350 */
#define	M_SSEC_AXISPRM_BLAT_FEED	2579	/* バックラッシ自動調整用送り速度	*//* P1X-A475 */
#define	M_SSEC_AXISPRM_AXISREMOVE	8201	/* 軸取り外し	*/
#define	M_SSEC_AXISPRM_INVALIDLIMIT	8202	/* ソフトリミット無効	*/
#define	M_SSEC_AXISPRM_LMITCAN	8203	/* ソフトリミット一時解除	*/
#define	M_SSEC_AXISPRM_SW_STLIM_MIN	8204	/* ソフトリミット-	*/
#define	M_SSEC_AXISPRM_SW_STLIM_MAX	8205	/* ソフトリミット+	*/
#define	M_SSEC_AXISPRM_TCHPOS	8206	/* 工具交換	*/
#define	M_SSEC_AXISPRM_NOG76G87	8207	/* G76/G87シフト無	*/
#define	M_SSEC_AXISPRM_G76G87	8208	/* G76/87シフト(-)	*/
#define	M_SSEC_AXISPRM_G60	8209	/* G60シフト量	*/
#define	M_SSEC_AXISPRM_INNERLIMIT	8210	/* ソフトリミット内側	*/
#define	M_SSEC_AXISPRM_MIRRORIMG	8211	/* ミラーイメージ	*/
#define	M_SSEC_AXISPRM_ROT_TYPE	8213	/* 回転軸タイプ	*//* P1X-A140 */
#define	M_SSEC_AXISPRM_TLM_LENGTH	8215	/* TLM基準長さ	*//* P1X-A020AC */
#define	M_SSEC_AXISPRM_G28TYPE	8216	/* G28復帰動作タイプ	*//* P1X-A248 */
#define	M_SSEC_AXISPRM_CHECK_ST	8217	/* グラフィックチェック始点	*//* P1X-A202R */
#define	M_SSEC_AXISPRM_DIRECT_ESC	8218	/* ダイレクト指令退避量	*//* P1X-A432 */
#define	M_SSEC_AXISPRM_NAME_CHAR	10000	/* 軸名称Char	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_TLML	10001	/* 工具長測定基準長さ(tlml)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_TLMH	10002	/* 工具長測定基準面高さ(tlmh)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_BIT_AXBITP	10003	/* ユーザパラの各種ビットパラメータ(axbitp)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_BIT_AXCONT	10004	/* 機械パラの各種ビットパラメータ(axcont)	*//* P0Y-A013B */
#define	M_SSEC_AXISPRM_G0TRAPID	10005	/* 早送り速度までのG0時定数(多段加減速)	*//* P1X-A294 */
#define	M_SSEC_AXISPRM_RAPID_DOUBLE	10101	/* 早送り速度 (Double用）-#2001	*//* P1X-A100H */
#define	M_SSEC_AXISPRM_CRUMP_DOUBLE	10102	/* 切削送りクランプ速度 (Double用）-#2002	*//* P1X-A100H */
#define	M_SSEC_AXISPRM_SMGST1	12818	/* 動作パラメータ群1　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST2	12828	/* 動作パラメータ群2　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST3	12838	/* 動作パラメータ群3　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_AXISPRM_SMGST4	12848	/* 動作パラメータ群4　加減速タイプ	*//* P1X-A299 */

/* 回転軸構成パラメータ	*/
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_I	7900	/* 直交座標横軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_J	7901	/* 直交座標縦軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_RECTANGULAR_AX_K	7902	/* 直交座標高さ軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_G92_COORD	7903	/* オリジンゼロ座標系選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_NO_TIP_POSITION	7904	/* 工具ハンドル送り機能選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_NO_ABS	7905	/* 手動ABSスイッチオン／オフ時の工具軸移動量表示選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SINGU_PASS_TYPE	7906	/* 特異点通過タイプ	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SINGU_CHK_HOLD	7907	/* 特異点近傍判定閾値	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_SLCT_PRG_COORD	7908	/* プログラミング座標系選択	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_IJK_VEC_MR	7909	/* 姿勢ベクトルミラーイメージ選択	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_SLCT_INT_MODE	7910	/* 先端点制御補間方式選択	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_SLCT_STD_POS	7911	/* 回転軸基準位置選択	*//* P1X-A085 */
#define	M_SSEC_MPROTAX_NO_MANUAL	7912	/* 5軸加工用手動送り機能選択	*//* P1X-A452 */
#define	M_SSEC_MPROTAX_MCHN_SPD_CTRL	7913	/* 機械移動速度変動抑制	*//* P1X-A085T */
#define	M_SSEC_MPROTAX_ROT_PREFILT	7914	/* 回転軸プレフィルタ時定数	*//* P1X-A351 */
#define	M_SSEC_MPROTAX_SLCT_SLOPE_CRD_MOD	7915	/* 傾斜面加工回転軸基準位置選択	*//* P1X-A332E */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_T1	7920	/* 工具軸根元側回転軸選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_T1	7921	/* 工具軸根元側傾斜角度	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_T1	7922	/* 工具軸根元側回転軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_T1	7923	/* 工具軸根元側回転方向	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1H	7924	/* 工具軸根元側横軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1V	7925	/* 工具軸根元側縦軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T1T	7926	/* 工具軸根元側高さ軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T1H	7927	/* 工具軸根元側横軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T1V	7928	/* 工具軸根元側縦軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_T2	7930	/* 工具軸工具側回転軸選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_T2	7931	/* 工具軸工具側傾斜角度	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_T2	7932	/* 工具軸工具側回転軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_T2	7933	/* 工具軸工具側回転方向	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2H	7934	/* 工具軸工具側横軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2V	7935	/* 工具軸工具側縦軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_T2T	7936	/* 工具軸工具側高さ軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T2H	7937	/* 工具軸工具側横軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_T2V	7938	/* 工具軸工具側縦軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_W1	7940	/* テーブル軸根元側回転軸選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_W1	7941	/* テーブル軸根元側傾斜角度	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_W1	7942	/* テーブル軸根元側回転軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_W1	7943	/* テーブル軸根元側回転方向	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1H	7944	/* テーブル軸根元側横軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1V	7945	/* テーブル軸根元側縦軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W1T	7946	/* テーブル軸根元側高さ軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W1H	7947	/* テーブル軸根元側横軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W1V	7948	/* テーブル軸根元側縦軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_SELECT_ROT_AX_W2	7950	/* テーブル軸ワーク側回転軸選択	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_TILT_ANG_W2	7951	/* テーブル軸ワーク側傾斜角度	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_ROT_AX_NAME_W2	7952	/* テーブル軸ワーク側回転軸名称	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_DIR_ROT_AX_W2	7953	/* テーブル軸ワーク側回転方向	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2H	7954	/* テーブル軸ワーク側横軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2V	7955	/* テーブル軸ワーク側縦軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_OFS_W2T	7956	/* テーブル軸ワーク側高さ軸回転中心オフセット	*//* P1X-A062 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W2H	7957	/* テーブル軸ワーク側横軸回転中心誤差補正量	*//* P1X-A221 */
#define	M_SSEC_MPROTAX_CENTER_ERR_W2V	7958	/* テーブル軸ワーク側縦軸回転中心誤差補正量	*//* P1X-A221 */

/* PLC軸割出しパラメータ/PLC軸PLC軸割出しパラメータ	*/
#define	M_SSEC_PLCINDXPRM_CHGAUXNO	12800	/* 補助軸番号	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STATION	12801	/* 割出ステーション数	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_CONT1	12802	/* 制御パラメータ1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_CONT2	12803	/* 制御パラメータ2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TLENG	12804	/* 直線軸ストローク長	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STOFSET	12805	/* ステーションオフセット	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED1	12810	/* 動作パラメータ群１　自動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED1	12811	/* 動作パラメータ群１　手動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL1	12812	/* 動作パラメータ群１　加減速時定数１	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2	12813	/* 動作パラメータ群１　加減速時定数2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL1	12814	/* 動作パラメータ群１　トルク制限値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD1	12815	/* 動作パラメータ群１　誤差過大検出幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST1	12816	/* 動作パラメータ群１　定位置出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR1	12817	/* 動作パラメータ群１　定位置近傍出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST1	12818	/* 動作パラメータ群１　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED2	12820	/* 動作パラメータ群２　自動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED2	12821	/* 動作パラメータ群２　手動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2_1	12822	/* 動作パラメータ群２　加減速時定数１	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL2_2	12823	/* 動作パラメータ群２　加減速時定数2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL2	12824	/* 動作パラメータ群２　トルク制限値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD2	12825	/* 動作パラメータ群２　誤差過大検出幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST2	12826	/* 動作パラメータ群２　定位置出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR2	12827	/* 動作パラメータ群２　定位置近傍出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST2	12828	/* 動作パラメータ群２　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED3	12830	/* 動作パラメータ群３　自動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED3	12831	/* 動作パラメータ群３　手動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL3_1	12832	/* 動作パラメータ群３　加減速時定数１	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL3_2	12833	/* 動作パラメータ群３　加減速時定数2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL3	12834	/* 動作パラメータ群３　トルク制限値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD3	12835	/* 動作パラメータ群３　誤差過大検出幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST3	12836	/* 動作パラメータ群３　定位置出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR3	12837	/* 動作パラメータ群３　定位置近傍出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST3	12838	/* 動作パラメータ群３　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_ASPEED4	12840	/* 動作パラメータ群４　自動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_MSPEED4	12841	/* 動作パラメータ群４　手動運転速度	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL4_1	12842	/* 動作パラメータ群４　加減速時定数１	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TIMEL4_2	12843	/* 動作パラメータ群４　加減速時定数2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_TL4	12844	/* 動作パラメータ群４　トルク制限値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_OD4	12845	/* 動作パラメータ群４　誤差過大検出幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_JUST4	12846	/* 動作パラメータ群４　定位置出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_NEAR4	12847	/* 動作パラメータ群４　定位置近傍出力幅	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_SMGST4	12848	/* 動作パラメータ群４　加減速タイプ	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS2	12850	/* ステーション２座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS3	12851	/* ステーション３座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS4	12852	/* ステーション４座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS5	12853	/* ステーション５座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS6	12854	/* ステーション６座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS7	12855	/* ステーション７座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS8	12856	/* ステーション８座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS9	12857	/* ステーション９座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS10	12858	/* ステーション１０座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS11	12859	/* ステーション１１座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS12	12860	/* ステーション１２座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS13	12861	/* ステーション１３座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS14	12862	/* ステーション１４座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS15	12863	/* ステーション１５座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS16	12864	/* ステーション１６座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS17	12865	/* ステーション１７座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS18	12866	/* ステーション１８座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS19	12867	/* ステーション１９座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_STPOS20	12868	/* ステーション２０座標値	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSWCHECK	12870	/* ＰＳＷ　検出方式	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW1DOG1	12871	/* ＰＳＷ1　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW1DOG2	12872	/* ＰＳＷ1　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW2DOG1	12873	/* ＰＳＷ2　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW2DOG2	12874	/* ＰＳＷ2　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW3DOG1	12875	/* ＰＳＷ3　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW3DOG2	12876	/* ＰＳＷ3　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW4DOG1	12877	/* ＰＳＷ4　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW4DOG2	12878	/* ＰＳＷ4　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW5DOG1	12879	/* ＰＳＷ5　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW5DOG2	12880	/* ＰＳＷ5　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW6DOG1	12881	/* ＰＳＷ6　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW6DOG2	12882	/* ＰＳＷ6　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW7DOG1	12883	/* ＰＳＷ7　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW7DOG2	12884	/* ＰＳＷ7　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW8DOG1	12885	/* ＰＳＷ8　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW8DOG2	12886	/* ＰＳＷ8　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW9DOG1	12887	/* ＰＳＷ9　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW9DOG2	12888	/* ＰＳＷ9　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW10DOG1	12889	/* ＰＳＷ10　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW10DOG2	12890	/* ＰＳＷ10　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW11DOG1	12891	/* ＰＳＷ11　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW11DOG2	12892	/* ＰＳＷ11　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW12DOG1	12893	/* ＰＳＷ12　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW12DOG2	12894	/* ＰＳＷ12　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW13DOG1	12895	/* ＰＳＷ13　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW13DOG2	12896	/* ＰＳＷ13　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW14DOG1	12897	/* ＰＳＷ14　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW14DOG2	12898	/* ＰＳＷ14　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW15DOG1	12899	/* ＰＳＷ15　領域設定1	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PSW15DOG2	12900	/* ＰＳＷ15　領域設定2	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT	12910	/* 押し当て量	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT1	12911	/* 押し当て待機時間	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT2	12912	/* 押し当てトルク開放時間	*//* P1X-A299 */
#define	M_SSEC_PLCINDXPRM_PUSHT3	12913	/* 定位置信号出力遅延時間	*//* P1X-A299 */

/* HMIパラメータ	*/
#define	M_SSEC_HMI_PRM_GCK_DISPMODE	1	/* 表示モード(チェック用)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_SCALE	2	/* スケール  (チェック用）	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX1(x)	(10+(x))	/* 変換マトリクス1(チェック用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX2(x)	(20+(x))	/* 変換マトリクス2(チェック用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_TRMTX3(x)	(30+(x))	/* 変換マトリクス3(チェック用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_UP_TROFS(x)	(40+(x))	/* 変換オフセット上(チェック用) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_DN_TROFS(x)	(50+(x))	/* 変換オフセット下(チェック用) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GCK_DRAXID(x)	(60+(x))	/* 描画軸番号(チェック用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DISPMODE	101	/* 表示モード(トレース用)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_SCALE	102	/* スケール  (トレース用）	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_CNTR_TYPE	103	/* トレースONカウンタ種類	*//* P1X-A020AJ */
#define	M_SSEC_HMI_PRM_GTR_TIPCNTR_TYPE	104	/* 先端トレースONカウンタ種類	*//* P1X-A020AJ */
#define	M_SSEC_HMI_PRM_GTR_TRMTX1(x)	(110+(x))	/* 変換マトリクス1(トレース用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_TRMTX2(x)	(120+(x))	/* 変換マトリクス2(トレース用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_TRMTX3(x)	(130+(x))	/* 変換マトリクス3(トレース用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_UP_TROFS(x)	(140+(x))	/* 変換オフセット上(トレース用) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DN_TROFS(x)	(150+(x))	/* 変換オフセット下(トレース用) (x=0,1)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GTR_DRAXID(x)	(160+(x))	/* 描画軸番号(トレース用) (x=0～2)	*//* P1X-A020A */
#define	M_SSEC_HMI_PRM_GRF_PRG	200	/* トレース・チェック2Dプログラム表示切替	*//* P1X-A020S */
#define	M_SSEC_HMI_PRM_GRF_FULL_DISP	201	/* トレース・チェック2D/3D全画面表示切替	*//* P1X-A020S */
#define	M_SSEC_HMI_PRM_2D_AUTOGRF	996	/* 2Dチェック 自動グラフィック	*//* P1X-A020BJ */
#define	M_SSEC_HMI_PRM_2D_DRAW_WOFS	997	/* 2Dチェック描画のワーク座標系選択	*//* P1X-A020BF */
#define	M_SSEC_HMI_PRM_WORK_DRAW_WOFS	998	/* 素材描画(3D)のワーク座標系選択	*//* P1X-A020AH */
#define	M_SSEC_HMI_PRM_WORK_DRAW_POS	999	/* 素材の描画座標系	*//* P1X-A020AG */
#define	M_SSEC_HMI_PRM_WORK_FORM	1000	/* ワーク形状 素材形状	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_I	1001	/* 素材の原点(I座標)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_J	1002	/* 素材の原点(J座標)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_REFPOINT_K	1003	/* 素材の原点(K座標)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_I	1004	/* 素材の幅(Ｉ軸方向)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_J	1005	/* 素材の幅(J軸方向)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_WIDTH_K	1006	/* 素材の幅(K軸方向)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_WORK_COLOR	1007	/* 素材色	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_MACHINED_COLOR	1008	/* 素材加工面色	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TAPPED_COLOR	1009	/* 素材タップ加工面色	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_INTERFERENCE_COLOR	1010	/* 素材干渉面色	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_SECTION_COLOR	1011	/* 素材断面色	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_NO(x)	(1100+(x))	/* 工具番号 (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_KIND(x)	(1500+(x))	/* 工具種類 (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_RADIUS(x)	(1900+(x))	/* 工具直径 (x=1～80)	*//* P1X-A020J　P1X-A269 */
#define	M_SSEC_HMI_PRM_TOOL_LENGTH(x)	(2300+(x))	/* 工具長 (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_DATA1(x)	(2700+(x))	/* 工具形状データ１ (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_DATA2(x)	(3100+(x))	/* 工具形状データ２ (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_TOOL_COLOR(x)	(3500+(x))	/* 工具色 (x=1～80)	*//* P1X-A020J */
#define	M_SSEC_HMI_PRM_COUNTER_TYPE	4000	/* カウンタ種類の記憶（M7ポップアップ表示用）	*//* P1X-A006c */
#define	M_SSEC_HMI_PRM_CMT_DISP	4001	/* 一覧表のコメント表示	*//* P1X-A099f */
#define	M_SSEC_HMI_PRM_EDIT_DISPLAY_TYPE	4002	/* 編集表示したときの画面表示タイプ切替	*//* P1X-A020R */
#define	M_SSEC_HMI_PRM_SORT_TYPE	4003	/* 一覧表のソートタイプ	*//* P1X-A020AF */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_I	4010	/* 3Dソリッド視点の座標(I座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_J	4011	/* 3Dソリッド視点の座標(J軸方向)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_EYE_POS_K	4012	/* 3Dソリッド視点の座標(K軸方向)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_I	4013	/* 3Dソリッド目標点の座標(I座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_J	4014	/* 3Dソリッド目標点の座標(J座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_TARGET_POS_K	4015	/* 3Dソリッド目標点の座標(K座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_I	4016	/* 3Dソリッド上方向のベクトル(I座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_J	4017	/* 3Dソリッド上方向のベクトル(J座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_3D_VECTOR_K	4018	/* 3Dソリッド上方向のベクトル(K座標)	*//* P1X-A020L */
#define	M_SSEC_HMI_PRM_CYCLETIME_1	5000	/* サイクルタイム表示切替1	*//* P1X-A020Q */
#define	M_SSEC_HMI_PRM_CYCLETIME_2	5001	/* サイクルタイム表示切替2	*//* P1X-A020Q */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE1	5002	/* カウンタ種類1(先端表示用)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE2	5003	/* カウンタ種類2(先端表示用)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_TIPCNTR_TYPE3	5004	/* カウンタ種類3(先端表示用)	*//* P1X-A326 */
#define	M_SSEC_HMI_PRM_MSTB_TYPE	5100	/* MSTB表示タイプ(2系統同時表示)	*//* P1X-A322 */
#define	M_SSEC_HMI_PRM_SCRN_SIZE	5200	/* 画面サイズ	*//* P1X-A388 */
#define	M_SSEC_HMI_PRM_ABSINC_MODE	6000	/* 絶対/加算入力モード記憶	*//* P1X-A393 */
#define	M_SSEC_HMI_PRM_DEVOPEN_CMT	6001	/* デバイス開放コメント表示	*//* P1X-A412E */
#define	M_SSEC_HMI_PRM_MON_DISPWORK_NO	7000	/* 運転画面 表示ワークNo	*//* P1X-A451 */
#define	M_SSEC_HMI_PRM_SET_DISPWORK_NO	7001	/* 段取画面 表示ワークNo	*//* P1X-A451 */
#define	M_SSEC_HMI_PRM_3DTOOL_NO(x)	(10000+(x))	/* 工具管理 工具番号 (x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_KIND(x)	(12000+(x))	/* 工具管理 工具種類 （x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_RADIUS(x)	(14000+(x))	/* 工具管理 工具直径 （x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_LENGTH(x)	(16000+(x))	/* 工具管理 工具長（x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_DATA1(x)	(18000+(x))	/* 工具管理 工具形状データ１（x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_DATA2(x)	(20000+(x))	/* 工具管理 工具形状データ２（x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_COLOR(x)	(22000+(x))	/* 工具管理 工具色（x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_HOL_H(x)	(24000+(x))	/* 工具管理 ホルダ高さ（x=1～80)	*//* P1X-A269 */
#define	M_SSEC_HMI_PRM_3DTOOL_HOL_R(x)	(26000+(x))	/* 工具管理 ホルダ直径（x=1～80)	*//* P1X-A269 */

/* 加工条件選択パラメータ	*/

/* 4200100～4261800の小区分に関してはx=0の時(xは条件に対応)、標準パラメータに対応している。 */
/* Gコード指令ではアドレスP(加工用途)が0の時、標準パラメータに対応している。	*/
#define	M_SSEC_CNDSLC_CHGCOND	1	/* 加工条件切換え	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP_NAME(x)	(10+(x))	/* 加工用途名称(x=0～2)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_INICONDPRM	100	/* 加工条件パラメータ初期化	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_G1BTL(x)	(4200100+(x))	/* [加工用途1]時定数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SFILT(x)	(4200200+(x))	/* [加工用途1]G01ソフト加減速S字フィルタ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SFILT2(x)	(4200300+(x))	/* [加工用途1]ソフト加減速フィルタ2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_RCOMP(x)	(4200400+(x))	/* [加工用途1]精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CORCOMP(x)	(4200500+(x))	/* [加工用途1]コーナ精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CURCOMP(x)	(4200600+(x))	/* [加工用途1]曲線精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FFGAIN(x)	(4200700+(x))	/* [加工用途1]フィードフォワードゲイン (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FCORN(x)	(4200800+(x))	/* [加工用途1]コーナ減速角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SPCANAG(x)	(4200900+(x))	/* [加工用途1]キャンセル角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_DISTTH1(x)	(4201000+(x))	/* [加工用途1]弦誤差1 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_DISTTH2(x)	(4201100+(x))	/* [加工用途1]弦誤差2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_MINUTE(x)	(4201200+(x))	/* [加工用途1]微小線分長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_FAIRING_ON(x)	(4201300+(x))	/* [加工用途1]フェアリング有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_MINLENG(x)	(4201400+(x))	/* [加工用途1]統合長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_CORDEC_JUDGE_L(x)	(4201500+(x))	/* [加工用途1]コーナ判定長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_SSS_ON(x)	(4201600+(x))	/* [加工用途1]SSS制御有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_STDLENGTH(x)	(4201700+(x))	/* [加工用途1]基準長さ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP1_STEPLENGTH(x)	(4201800+(x))	/* [加工用途1]段差幅 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_G1BTL(x)	(4230100+(x))	/* [加工用途2]時定数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SFILT(x)	(4230200+(x))	/* [加工用途2]G01ソフト加減速S字フィルタ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SFILT2(x)	(4230300+(x))	/* [加工用途2]ソフト加減速フィルタ2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_RCOMP(x)	(4230400+(x))	/* [加工用途2]精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CORCOMP(x)	(4230500+(x))	/* [加工用途2]コーナ精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CURCOMP(x)	(4230600+(x))	/* [加工用途2]曲線精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FFGAIN(x)	(4230700+(x))	/* [加工用途2]フィードフォワードゲイン (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FCORN(x)	(4230800+(x))	/* [加工用途2]コーナ減速角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SPCANAG(x)	(4230900+(x))	/* [加工用途2]キャンセル角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_DISTTH1(x)	(4231000+(x))	/* [加工用途2]弦誤差1 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_DISTTH2(x)	(4231100+(x))	/* [加工用途2]弦誤差2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_MINUTE(x)	(4231200+(x))	/* [加工用途2]微小線分長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_FAIRING_ON(x)	(4231300+(x))	/* [加工用途2]フェアリング有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_MINLENG(x)	(4231400+(x))	/* [加工用途2]統合長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_CORDEC_JUDGE_L(x)	(4231500+(x))	/* [加工用途2]コーナ判定長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_SSS_ON(x)	(4231600+(x))	/* [加工用途2]SSS制御有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_STDLENGTH(x)	(4231700+(x))	/* [加工用途2]基準長さ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP2_STEPLENGTH(x)	(4231800+(x))	/* [加工用途2]段差幅 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_G1BTL(x)	(4260100+(x))	/* [加工用途3]時定数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SFILT(x)	(4260200+(x))	/* [加工用途3]G01ソフト加減速S字フィルタ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SFILT2(x)	(4260300+(x))	/* [加工用途3]ソフト加減速フィルタ2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_RCOMP(x)	(4260400+(x))	/* [加工用途3]精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CORCOMP(x)	(4260500+(x))	/* [加工用途3]コーナ精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CURCOMP(x)	(4260600+(x))	/* [加工用途3]曲線精度係数 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FFGAIN(x)	(4260700+(x))	/* [加工用途3]フィードフォワードゲイン (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FCORN(x)	(4260800+(x))	/* [加工用途3]コーナ減速角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SPCANAG(x)	(4260900+(x))	/* [加工用途3]キャンセル角度 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_DISTTH1(x)	(4261000+(x))	/* [加工用途3]弦誤差1 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_DISTTH2(x)	(4261100+(x))	/* [加工用途3]弦誤差2 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_MINUTE(x)	(4261200+(x))	/* [加工用途3]微小線分長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_FAIRING_ON(x)	(4261300+(x))	/* [加工用途3]フェアリング有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_MINLENG(x)	(4261400+(x))	/* [加工用途3]統合長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_CORDEC_JUDGE_L(x)	(4261500+(x))	/* [加工用途3]コーナ判定長 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_SSS_ON(x)	(4261600+(x))	/* [加工用途3]SSS制御有効 (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_STDLENGTH(x)	(4261700+(x))	/* [加工用途3]基準長さ (x=0～3)	*//* P1X-A517 */
#define	M_SSEC_CNDSLC_APP3_STEPLENGTH(x)	(4261800+(x))	/* [加工用途3]段差幅 (x=0～3)	*//* P1X-A517 */

/* CC-Linkパラ（基本）	*/
#define	M_SSEC_CCLK_BASE_EXCHG_NO1	24001	/* 1スロット目局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP1	24002	/* 1スロット目伝送速度＆モード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK1	24003	/* 1スロット目データリンク異常局設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP1	24004	/* 1スロット目PLC STOP時設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX1	24005	/* 1スロット目占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC1	24006	/* 1スロット目拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM1	24007	/* 1スロット目接続台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY1	24008	/* 1スロット目リトライ回数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA1	24009	/* 1スロット目自動復列台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER1	24010	/* 1スロット目待機マスタ指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN1	24011	/* 1スロット目NCダウン時運転指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE1	24012	/* 1スロット目スキャンモード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME1	24013	/* 1スロット目ディレイ時間	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV1	24014	/* 1スロット目リモート入力(RX)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO1	24015	/* 1スロット目リモート入力(RX)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV1	24016	/* 1スロット目リモート出力(RY)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO1	24017	/* 1スロット目リモート出力(RY)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV1	24018	/* 1スロット目リモートレジスタ(RWr)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO1	24019	/* 1スロット目リモートレジスタ(RWr)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV1	24020	/* 1スロット目リモートレジスタ(RWw)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO1	24021	/* 1スロット目リモートレジスタ(RWw)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV1	24022	/* 1スロット目特殊リレー(SB)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO1	24023	/* 1スロット目特殊リレー(SB)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV1	24024	/* 1スロット目特殊リレー(SW)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO1	24025	/* 1スロット目特殊リレー(SW)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER1	24026	/* 1スロット目プロトコルバージョン	*//* P1X-A247B */
#define	M_SSEC_CCLK_BASE_EXCHG_NO2	24041	/* 2スロット目局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP2	24042	/* 2スロット目伝送速度＆モード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK2	24043	/* 2スロット目データリンク異常局設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP2	24044	/* 2スロット目PLC STOP時設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX2	24045	/* 2スロット目占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC2	24046	/* 2スロット目拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM2	24047	/* 2スロット目接続台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY2	24048	/* 2スロット目リトライ回数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA2	24049	/* 2スロット目自動復列台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER2	24050	/* 2スロット目待機マスタ指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN2	24051	/* 2スロット目NCダウン時運転指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE2	24052	/* 2スロット目スキャンモード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME2	24053	/* 2スロット目ディレイ時間	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV2	24054	/* 2スロット目リモート入力(RX)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO2	24055	/* 2スロット目リモート入力(RX)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV2	24056	/* 2スロット目リモート出力(RY)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO2	24057	/* 2スロット目リモート出力(RY)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV2	24058	/* 2スロット目リモートレジスタ(RWr)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO2	24059	/* 2スロット目リモートレジスタ(RWr)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV2	24060	/* 2スロット目リモートレジスタ(RWw)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO2	24061	/* 2スロット目リモートレジスタ(RWw)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV2	24062	/* 2スロット目特殊リレー(SB)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO2	24063	/* 2スロット目特殊リレー(SB)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV2	24064	/* 2スロット目特殊リレー(SW)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO2	24065	/* 2スロット目特殊リレー(SW)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER2	24066	/* 2スロット目プロトコルバージョン	*//* P1X-A247B */
#define	M_SSEC_CCLK_BASE_EXCHG_NO3	24081	/* 3スロット目局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_TRANS_SP3	24082	/* 3スロット目伝送速度＆モード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_ABNML_LINK3	24083	/* 3スロット目データリンク異常局設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PLC_STOP3	24084	/* 3スロット目PLC STOP時設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_OCCUP_BUREAUX3	24085	/* 3スロット目占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CYCLIC3	24086	/* 3スロット目拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_CONNECT_NUM3	24087	/* 3スロット目接続台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RETRY3	24088	/* 3スロット目リトライ回数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_AUTO_OPE_MATA3	24089	/* 3スロット目自動復列台数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_STANDBY_MASTER3	24090	/* 3スロット目待機マスタ指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_NC_DOWN3	24091	/* 3スロット目NCダウン時運転指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SCAN_MODE3	24092	/* 3スロット目スキャンモード	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_DELAY_TIME3	24093	/* 3スロット目ディレイ時間	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_DEV3	24094	/* 3スロット目リモート入力(RX)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RX_NO3	24095	/* 3スロット目リモート入力(RX)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_DEV3	24096	/* 3スロット目リモート出力(RY)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RY_NO3	24097	/* 3スロット目リモート出力(RY)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_DEV3	24098	/* 3スロット目リモートレジスタ(RWr)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWR_NO3	24099	/* 3スロット目リモートレジスタ(RWr)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_DEV3	24100	/* 3スロット目リモートレジスタ(RWw)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_RWW_NO3	24101	/* 3スロット目リモートレジスタ(RWw)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_DEV3	24102	/* 3スロット目特殊リレー(SB)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SB_NO3	24103	/* 3スロット目特殊リレー(SB)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_DEV3	24104	/* 3スロット目特殊リレー(SW)リフレッシュデバイス名	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_SW_NO3	24105	/* 3スロット目特殊リレー(SW)リフレッシュデバイス番号	*//* P1X-A247 */
#define	M_SSEC_CCLK_BASE_PRTCL_VER3	24106	/* 3スロット目プロトコルバージョン	*//* P1X-A247B */

/* CC-Linkパラ（局情報）	*/
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE1	24121	/* 局番1局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC1	24122	/* 局番1拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO1	24123	/* 局番1占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO1	24124	/* 局番1局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM1	24125	/* 局番1リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM1	24126	/* 局番1予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ1	24131	/* 局番1送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ1	24132	/* 局番1受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ1	24133	/* 局番1自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE2	24136	/* 局番2局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC2	24137	/* 局番2拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO2	24138	/* 局番2占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO2	24139	/* 局番2局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM2	24140	/* 局番2リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM2	24141	/* 局番2予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ2	24146	/* 局番2送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ2	24147	/* 局番2受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ2	24148	/* 局番2自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE3	24151	/* 局番3局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC3	24152	/* 局番3拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO3	24153	/* 局番3占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO3	24154	/* 局番3局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM3	24155	/* 局番3リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM3	24156	/* 局番3予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ3	24161	/* 局番3送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ3	24162	/* 局番3受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ3	24163	/* 局番3自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE4	24166	/* 局番4局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC4	24167	/* 局番4拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO4	24168	/* 局番4占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO4	24169	/* 局番4局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM4	24170	/* 局番4リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM4	24171	/* 局番4予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ4	24176	/* 局番4送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ4	24177	/* 局番4受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ4	24178	/* 局番4自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE5	24181	/* 局番5局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC5	24182	/* 局番5拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO5	24183	/* 局番5占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO5	24184	/* 局番5局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM5	24185	/* 局番5リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM5	24186	/* 局番5予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ5	24191	/* 局番5送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ5	24192	/* 局番5受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ5	24193	/* 局番5自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE6	24196	/* 局番6局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC6	24197	/* 局番6拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO6	24198	/* 局番6占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO6	24199	/* 局番6局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM6	24200	/* 局番6リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM6	24201	/* 局番6予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ6	24206	/* 局番6送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ6	24207	/* 局番6受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ6	24208	/* 局番6自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE7	24211	/* 局番7局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC7	24212	/* 局番7拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO7	24213	/* 局番7占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO7	24214	/* 局番7局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM7	24215	/* 局番7リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM7	24216	/* 局番7予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ7	24221	/* 局番7送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ7	24222	/* 局番7受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ7	24223	/* 局番7自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE8	24226	/* 局番8局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC8	24227	/* 局番8拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO8	24228	/* 局番8占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO8	24229	/* 局番8局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM8	24230	/* 局番8リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM8	24231	/* 局番8予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ8	24236	/* 局番8送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ8	24237	/* 局番8受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ8	24238	/* 局番8自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE9	24241	/* 局番9局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC9	24242	/* 局番9拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO9	24243	/* 局番9占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO9	24244	/* 局番9局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM9	24245	/* 局番9リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM9	24246	/* 局番9予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ9	24251	/* 局番9送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ9	24252	/* 局番9受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ9	24253	/* 局番9自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE10	24256	/* 局番10局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC10	24257	/* 局番10拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO10	24258	/* 局番10占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO10	24259	/* 局番10局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM10	24260	/* 局番10リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM10	24261	/* 局番10予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ10	24266	/* 局番10送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ10	24267	/* 局番10受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ10	24268	/* 局番10自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE11	24271	/* 局番11局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC11	24272	/* 局番11拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO11	24273	/* 局番11占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO11	24274	/* 局番11局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM11	24275	/* 局番11リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM11	24276	/* 局番11予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ11	24281	/* 局番11送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ11	24282	/* 局番11受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ11	24283	/* 局番11自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE12	24286	/* 局番12局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC12	24287	/* 局番12拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO12	24288	/* 局番12占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO12	24289	/* 局番12局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM12	24290	/* 局番12リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM12	24291	/* 局番12予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ12	24296	/* 局番12送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ12	24297	/* 局番12受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ12	24298	/* 局番12自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE13	24301	/* 局番13局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC13	24302	/* 局番13拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO13	24303	/* 局番13占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO13	24304	/* 局番13局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM13	24305	/* 局番13リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM13	24306	/* 局番13予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ13	24311	/* 局番13送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ13	24312	/* 局番13受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ13	24313	/* 局番13自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE14	24316	/* 局番14局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC14	24317	/* 局番14拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO14	24318	/* 局番14占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO14	24319	/* 局番14局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM14	24320	/* 局番14リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM14	24321	/* 局番14予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ14	24326	/* 局番14送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ14	24327	/* 局番14受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ14	24328	/* 局番14自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE15	24331	/* 局番15局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC15	24332	/* 局番15拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO15	24333	/* 局番15占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO15	24334	/* 局番15局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM15	24335	/* 局番15リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM15	24336	/* 局番15予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ15	24341	/* 局番15送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ15	24342	/* 局番15受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ15	24343	/* 局番15自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE16	24346	/* 局番16局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC16	24347	/* 局番16拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO16	24348	/* 局番16占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO16	24349	/* 局番16局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM16	24350	/* 局番16リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM16	24351	/* 局番16予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ16	24356	/* 局番16送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ16	24357	/* 局番16受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ16	24358	/* 局番16自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE17	24361	/* 局番17局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC17	24362	/* 局番17拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO17	24363	/* 局番17占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO17	24364	/* 局番17局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM17	24365	/* 局番17リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM17	24366	/* 局番17予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ17	24371	/* 局番17送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ17	24372	/* 局番17受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ17	24373	/* 局番17自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE18	24376	/* 局番18局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC18	24377	/* 局番18拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO18	24378	/* 局番18占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO18	24379	/* 局番18局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM18	24380	/* 局番18リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM18	24381	/* 局番18予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ18	24386	/* 局番18送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ18	24387	/* 局番18受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ18	24388	/* 局番18自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE19	24391	/* 局番19局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC19	24392	/* 局番19拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO19	24393	/* 局番19占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO19	24394	/* 局番19局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM19	24395	/* 局番19リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM19	24396	/* 局番19予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ19	24401	/* 局番19送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ19	24402	/* 局番19受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ19	24403	/* 局番19自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE20	24406	/* 局番20局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC20	24407	/* 局番20拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO20	24408	/* 局番20占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO20	24409	/* 局番20局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM20	24410	/* 局番20リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM20	24411	/* 局番20予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ20	24416	/* 局番20送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ20	24417	/* 局番20受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ20	24418	/* 局番20自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE21	24421	/* 局番21局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC21	24422	/* 局番21拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO21	24423	/* 局番21占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO21	24424	/* 局番21局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM21	24425	/* 局番21リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM21	24426	/* 局番21予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ21	24431	/* 局番21送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ21	24432	/* 局番21受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ21	24433	/* 局番21自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE22	24436	/* 局番22局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC22	24437	/* 局番22拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO22	24438	/* 局番22占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO22	24439	/* 局番22局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM22	24440	/* 局番22リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM22	24441	/* 局番22予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ22	24446	/* 局番22送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ22	24447	/* 局番22受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ22	24448	/* 局番22自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE23	24451	/* 局番23局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC23	24452	/* 局番23拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO23	24453	/* 局番23占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO23	24454	/* 局番23局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM23	24455	/* 局番23リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM23	24456	/* 局番23予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ23	24461	/* 局番23送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ23	24462	/* 局番23受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ23	24463	/* 局番23自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE24	24466	/* 局番24局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC24	24467	/* 局番24拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO24	24468	/* 局番24占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO24	24469	/* 局番24局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM24	24470	/* 局番24リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM24	24471	/* 局番24予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ24	24476	/* 局番24送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ24	24477	/* 局番24受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ24	24478	/* 局番24自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE25	24481	/* 局番25局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC25	24482	/* 局番25拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO25	24483	/* 局番25占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO25	24484	/* 局番25局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM25	24485	/* 局番25リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM25	24486	/* 局番25予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ25	24491	/* 局番25送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ25	24492	/* 局番25受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ25	24493	/* 局番25自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE26	24496	/* 局番26局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC26	24497	/* 局番26拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO26	24498	/* 局番26占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO26	24499	/* 局番26局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM26	24500	/* 局番26リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM26	24501	/* 局番26予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ26	24506	/* 局番26送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ26	24507	/* 局番26受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ26	24508	/* 局番26自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE27	24511	/* 局番27局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC27	24512	/* 局番27拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO27	24513	/* 局番27占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO27	24514	/* 局番27局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM27	24515	/* 局番27リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM27	24516	/* 局番27予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ27	24521	/* 局番27送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ27	24522	/* 局番27受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ27	24523	/* 局番27自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE28	24526	/* 局番28局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC28	24527	/* 局番28拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO28	24528	/* 局番28占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO28	24529	/* 局番28局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM28	24530	/* 局番28リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM28	24531	/* 局番28予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ28	24536	/* 局番28送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ28	24537	/* 局番28受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ28	24538	/* 局番28自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE29	24541	/* 局番29局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC29	24542	/* 局番29拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO29	24543	/* 局番29占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO29	24544	/* 局番29局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM29	24545	/* 局番29リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM29	24546	/* 局番29予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ29	24551	/* 局番29送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ29	24552	/* 局番29受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ29	24553	/* 局番29自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE30	24556	/* 局番30局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC30	24557	/* 局番30拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO30	24558	/* 局番30占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO30	24559	/* 局番30局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM30	24560	/* 局番30リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM30	24561	/* 局番30予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ30	24566	/* 局番30送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ30	24567	/* 局番30受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ30	24568	/* 局番30自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE31	24571	/* 局番31局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC31	24572	/* 局番31拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO31	24573	/* 局番31占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO31	24574	/* 局番31局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM31	24575	/* 局番31リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM31	24576	/* 局番31予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ31	24581	/* 局番31送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ31	24582	/* 局番31受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ31	24583	/* 局番31自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE32	24586	/* 局番32局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC32	24587	/* 局番32拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO32	24588	/* 局番32占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO32	24589	/* 局番32局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM32	24590	/* 局番32リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM32	24591	/* 局番32予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ32	24596	/* 局番32送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ32	24597	/* 局番32受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ32	24598	/* 局番32自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE33	24601	/* 局番33局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC33	24602	/* 局番33拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO33	24603	/* 局番33占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO33	24604	/* 局番33局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM33	24605	/* 局番33リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM33	24606	/* 局番33予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ33	24611	/* 局番33送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ33	24612	/* 局番33受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ33	24613	/* 局番33自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE34	24616	/* 局番34局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC34	24617	/* 局番34拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO34	24618	/* 局番34占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO34	24619	/* 局番34局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM34	24620	/* 局番34リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM34	24621	/* 局番34予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ34	24626	/* 局番34送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ34	24627	/* 局番34受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ34	24628	/* 局番34自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE35	24631	/* 局番35局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC35	24632	/* 局番35拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO35	24633	/* 局番35占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO35	24634	/* 局番35局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM35	24635	/* 局番35リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM35	24636	/* 局番35予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ35	24641	/* 局番35送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ35	24642	/* 局番35受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ35	24643	/* 局番35自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE36	24646	/* 局番36局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC36	24647	/* 局番36拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO36	24648	/* 局番36占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO36	24649	/* 局番36局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM36	24650	/* 局番36リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM36	24651	/* 局番36予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ36	24656	/* 局番36送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ36	24657	/* 局番36受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ36	24658	/* 局番36自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE37	24661	/* 局番37局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC37	24662	/* 局番37拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO37	24663	/* 局番37占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO37	24664	/* 局番37局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM37	24665	/* 局番37リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM37	24666	/* 局番37予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ37	24671	/* 局番37送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ37	24672	/* 局番37受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ37	24673	/* 局番37自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE38	24676	/* 局番38局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC38	24677	/* 局番38拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO38	24678	/* 局番38占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO38	24679	/* 局番38局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM38	24680	/* 局番38リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM38	24681	/* 局番38予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ38	24686	/* 局番38送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ38	24687	/* 局番38受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ38	24688	/* 局番38自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE39	24691	/* 局番39局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC39	24692	/* 局番39拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO39	24693	/* 局番39占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO39	24694	/* 局番39局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM39	24695	/* 局番39リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM39	24696	/* 局番39予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ39	24701	/* 局番39送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ39	24702	/* 局番39受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ39	24703	/* 局番39自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE40	24706	/* 局番40局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC40	24707	/* 局番40拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO40	24708	/* 局番40占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO40	24709	/* 局番40局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM40	24710	/* 局番40リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM40	24711	/* 局番40予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ40	24716	/* 局番40送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ40	24717	/* 局番40受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ40	24718	/* 局番40自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE41	24721	/* 局番41局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC41	24722	/* 局番41拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO41	24723	/* 局番41占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO41	24724	/* 局番41局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM41	24725	/* 局番41リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM41	24726	/* 局番41予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ41	24731	/* 局番41送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ41	24732	/* 局番41受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ41	24733	/* 局番41自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE42	24736	/* 局番42局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC42	24737	/* 局番42拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO42	24738	/* 局番42占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO42	24739	/* 局番42局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM42	24740	/* 局番42リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM42	24741	/* 局番42予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ42	24746	/* 局番42送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ42	24747	/* 局番42受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ42	24748	/* 局番42自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE43	24751	/* 局番43局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC43	24752	/* 局番43拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO43	24753	/* 局番43占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO43	24754	/* 局番43局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM43	24755	/* 局番43リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM43	24756	/* 局番43予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ43	24761	/* 局番43送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ43	24762	/* 局番43受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ43	24763	/* 局番43自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE44	24766	/* 局番44局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC44	24767	/* 局番44拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO44	24768	/* 局番44占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO44	24769	/* 局番44局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM44	24770	/* 局番44リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM44	24771	/* 局番44予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ44	24776	/* 局番44送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ44	24777	/* 局番44受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ44	24778	/* 局番44自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE45	24781	/* 局番45局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC45	24782	/* 局番45拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO45	24783	/* 局番45占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO45	24784	/* 局番45局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM45	24785	/* 局番45リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM45	24786	/* 局番45予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ45	24791	/* 局番45送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ45	24792	/* 局番45受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ45	24793	/* 局番45自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE46	24796	/* 局番46局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC46	24797	/* 局番46拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO46	24798	/* 局番46占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO46	24799	/* 局番46局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM46	24800	/* 局番46リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM46	24801	/* 局番46予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ46	24806	/* 局番46送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ46	24807	/* 局番46受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ46	24808	/* 局番46自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE47	24811	/* 局番47局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC47	24812	/* 局番47拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO47	24813	/* 局番47占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO47	24814	/* 局番47局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM47	24815	/* 局番47リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM47	24816	/* 局番47予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ47	24821	/* 局番47送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ47	24822	/* 局番47受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ47	24823	/* 局番47自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE48	24826	/* 局番48局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC48	24827	/* 局番48拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO48	24828	/* 局番48占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO48	24829	/* 局番48局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM48	24830	/* 局番48リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM48	24831	/* 局番48予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ48	24836	/* 局番48送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ48	24837	/* 局番48受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ48	24838	/* 局番48自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE49	24841	/* 局番49局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC49	24842	/* 局番49拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO49	24843	/* 局番49占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO49	24844	/* 局番49局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM49	24845	/* 局番49リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM49	24846	/* 局番49予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ49	24851	/* 局番49送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ49	24852	/* 局番49受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ49	24853	/* 局番49自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE50	24856	/* 局番50局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC50	24857	/* 局番50拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO50	24858	/* 局番50占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO50	24859	/* 局番50局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM50	24860	/* 局番50リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM50	24861	/* 局番50予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ50	24866	/* 局番50送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ50	24867	/* 局番50受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ50	24868	/* 局番50自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE51	24871	/* 局番51局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC51	24872	/* 局番51拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO51	24873	/* 局番51占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO51	24874	/* 局番51局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM51	24875	/* 局番51リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM51	24876	/* 局番51予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ51	24881	/* 局番51送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ51	24882	/* 局番51受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ51	24883	/* 局番51自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE52	24886	/* 局番52局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC52	24887	/* 局番52拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO52	24888	/* 局番52占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO52	24889	/* 局番52局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM52	24890	/* 局番52リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM52	24891	/* 局番52予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ52	24896	/* 局番52送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ52	24897	/* 局番52受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ52	24898	/* 局番52自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE53	24901	/* 局番53局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC53	24902	/* 局番53拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO53	24903	/* 局番53占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO53	24904	/* 局番53局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM53	24905	/* 局番53リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM53	24906	/* 局番53予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ53	24911	/* 局番53送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ53	24912	/* 局番53受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ53	24913	/* 局番53自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE54	24916	/* 局番54局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC54	24917	/* 局番54拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO54	24918	/* 局番54占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO54	24919	/* 局番54局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM54	24920	/* 局番54リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM54	24921	/* 局番54予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ54	24926	/* 局番54送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ54	24927	/* 局番54受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ54	24928	/* 局番54自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE55	24931	/* 局番55局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC55	24932	/* 局番55拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO55	24933	/* 局番55占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO55	24934	/* 局番55局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM55	24935	/* 局番55リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM55	24936	/* 局番55予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ55	24941	/* 局番55送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ55	24942	/* 局番55受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ55	24943	/* 局番55自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE56	24946	/* 局番56局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC56	24947	/* 局番56拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO56	24948	/* 局番56占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO56	24949	/* 局番56局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM56	24950	/* 局番56リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM56	24951	/* 局番56予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ56	24956	/* 局番56送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ56	24957	/* 局番56受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ56	24958	/* 局番56自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE57	24961	/* 局番57局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC57	24962	/* 局番57拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO57	24963	/* 局番57占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO57	24964	/* 局番57局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM57	24965	/* 局番57リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM57	24966	/* 局番57予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ57	24971	/* 局番57送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ57	24972	/* 局番57受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ57	24973	/* 局番57自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE58	24976	/* 局番58局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC58	24977	/* 局番58拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO58	24978	/* 局番58占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO58	24979	/* 局番58局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM58	24980	/* 局番58リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM58	24981	/* 局番58予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ58	24986	/* 局番58送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ58	24987	/* 局番58受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ58	24988	/* 局番58自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE59	24991	/* 局番59局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC59	24992	/* 局番59拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO59	24993	/* 局番59占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO59	24994	/* 局番59局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM59	24995	/* 局番59リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM59	24996	/* 局番59予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ59	25001	/* 局番59送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ59	25002	/* 局番59受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ59	25003	/* 局番59自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE60	25006	/* 局番60局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC60	25007	/* 局番60拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO60	25008	/* 局番60占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO60	25009	/* 局番60局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM60	25010	/* 局番60リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM60	25011	/* 局番60予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ60	25016	/* 局番60送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ60	25017	/* 局番60受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ60	25018	/* 局番60自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE61	25021	/* 局番61局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC61	25022	/* 局番61拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO61	25023	/* 局番61占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO61	25024	/* 局番61局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM61	25025	/* 局番61リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM61	25026	/* 局番61予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ61	25031	/* 局番61送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ61	25032	/* 局番61受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ61	25033	/* 局番61自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE62	25036	/* 局番62局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC62	25037	/* 局番62拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO62	25038	/* 局番62占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO62	25039	/* 局番62局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM62	25040	/* 局番62リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM62	25041	/* 局番62予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ62	25046	/* 局番62送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ62	25047	/* 局番62受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ62	25048	/* 局番62自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE63	25051	/* 局番63局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC63	25052	/* 局番63拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO63	25053	/* 局番63占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO63	25054	/* 局番63局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM63	25055	/* 局番63リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM63	25056	/* 局番63予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ63	25061	/* 局番63送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ63	25062	/* 局番63受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ63	25063	/* 局番63自動更新バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TYPE64	25066	/* 局番64局種別	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_CYCLIC64	25067	/* 局番64拡張サイクリック設定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_OCCUO64	25068	/* 局番64占有局数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_EXCHG_NO64	25069	/* 局番64局番	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_REMOTE_NUM64	25070	/* 局番64リモート局点数	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RESERVE_NUM64	25071	/* 局番64予約局指定	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_TRANS_SZ64	25076	/* 局番64送信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_RECEPT_SZ64	25077	/* 局番64受信バッファサイズ	*//* P1X-A247 */
#define	M_SSEC_CCLK_BRAU_CNCT_AUTO_SZ64	25078	/* 局番64自動更新バッファサイズ	*//* P1X-A247 */

/* ラダーI/F（共通）	*/
#define	M_SSEC_LDCM_LOADM_NAME(x)	(x)	/* ロードメータ名称（x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_SCALE1(x)	(x + 10)	/* ロードメータ目盛コメント1行目(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_UNIT(x)	(x + 20)	/* ロードメータ単位コメント(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_LOADM_SCALE2(x)	(x + 30)	/* ロードメータ目盛コメント2行目(x=1,2)	*//* P1X-A006 */
#define	M_SSEC_LDCM_SPWAIT_CMT(x)	(x + 100)	/* 主軸待機工具コメント（x=0～4）	*//* P1X-A006 */
#define	M_SSEC_LDCM_PLCSW_MSG(x)	(x + 200)	/* PLCスイッチメッセージ（x=1～64）	*//* P1X-A006M */
#define	M_SSEC_LDCM_OPE_MODE	8700	/* 操作モード	*/
#define	M_SSEC_LDCM_OPE_MODE_VAL	8800	/* 操作モード設定値	*/
#define	M_SSEC_LDCM_RESET_REWIND	8900	/* リセット＆リワインド	*/
#define	M_SSEC_LDCM_STOP	9000	/* 非常停止	*/
#define	M_SSEC_LDCM_SINGL_STS	9100	/* シングルブロック実行状態	*/
#define	M_SSEC_LDCM_SINGL_CMD	9200	/* シングルブロック実行状態設定値	*/
#define	M_SSEC_LDCM_DRUN_STS	9300	/* ドライラン実行状態	*/
#define	M_SSEC_LDCM_DRUN_CMD	9400	/* ドライラン実行状態設定値	*/
#define	M_SSEC_LDCM_MLOCK_STS	9500	/* マシンロック状態	*/
#define	M_SSEC_LDCM_MLOCK_CMD	9600	/* マシンロック状態設定値	*/

/* ラダーI/F（軸）	*/
#define	M_SSEC_LDAX_AMOT_STS_REV	9800	/* 軸移動状態 -方向	*/
#define	M_SSEC_LDAX_AMOT_STS_MOT	9810	/* 軸移動状態 -状態	*/
#define	M_SSEC_LDAX_AMOT_CMD_REV	9900	/* 軸移動状態設定値　-方向	*/
#define	M_SSEC_LDAX_AMOT_CMD_MOT	9910	/* 軸移動状態設定値　-状態	*/
#define	M_SSEC_LDAX_AXIS_TO	10000	/* 軸位置指定移動	*/
#define	M_SSEC_LDAX_AXIS_SPD	10100	/* 軸送り速度	*/
#define	M_SSEC_LDAX_AXIS_SPD_CMD	10200	/* 軸送り速度設定値	*/
#define	M_SSEC_LDAX_SV_FEED_ORIDE	10300	/* サーボ軸のFEEDオーバーライド	*/
#define	M_SSEC_LDAX_SV_JOG_ORIDE	10400	/* サーボ軸のJOGオーバーライド	*/
#define	M_SSEC_LDAX_SV_RAPID_ORIDE	10500	/* サーボ軸のRAPIDオーバーライド	*/
#define	M_SSEC_LDAX_SV_FEED_ORIDE_CMD	10600	/* サーボ軸のFEEDオーバーライド設定値	*/
#define	M_SSEC_LDAX_SV_JOG_ORIDE_CMD	10700	/* サーボ軸のJOGオーバーライド設定値	*/
#define	M_SSEC_LDAX_SV_RAPID_ORIDE_CMD	10800	/* サーボ軸のRAPIDオーバーライド設定値	*/
#define	M_SSEC_LDAX_AXIS_INTRLOC_STS	10900	/* 軸インターロック状態	*/
#define	M_SSEC_LDAX_AXIS_INTRLOC_CMD	11000	/* 軸インターロック状態設定値	*/
#define	M_SSEC_LDAX_SV_ON_STS	11600	/* サーボオン状態	*/
#define	M_SSEC_LDAX_SV_ON_CMD	11700	/* サーボオン状態設定値	*/

/* ラダーI/F（主軸）	*/
#define	M_SSEC_LDSP_SP_MOT_STS_REV	11800	/* 主軸動作状態 -方向	*/
#define	M_SSEC_LDSP_SP_MOT_STS_MOT	11810	/* 主軸動作状態 -状態	*/
#define	M_SSEC_LDSP_SP_MOT_CMD_REV	11900	/* 主軸動作状態設定値 -方向	*/
#define	M_SSEC_LDSP_SP_MOT_CMD_MOT	11910	/* 主軸動作状態設定値 -状態	*/
#define	M_SSEC_LDSP_SP_ORIENT_CW	12000	/* 主軸回転の定角位置 CW回転	*/
#define	M_SSEC_LDSP_SP_ORIENT_CCW	12010	/* 主軸回転の定角位置 CCW回転	*/
#define	M_SSEC_LDSP_SP_ORIENT_MOT	12020	/* 主軸回転の定角位置 状態	*/
#define	M_SSEC_LDSP_SP_REV_SPD_CMD	12100	/* 主軸回転速度設定値	*/
#define	M_SSEC_LDSP_SP_FEED_ORIDE	12200	/* 主軸FEEDオーバライド	*/
#define	M_SSEC_LDSP_SP_FEED_ORIDE_CMD	12300	/* 主軸FEEDオーバライド設定値	*/
#define	M_SSEC_LDSP_SP_CLAMP_STS	12600	/* 主軸クランプ状態	*/
#define	M_SSEC_LDSP_TOL_CLAMP_STS	12700	/* ツールクランプ状態	*/
#define	M_SSEC_LDSP_SP_CLAMP_CMD	12800	/* 主軸クランプ設定状態	*/
#define	M_SSEC_LDSP_TOL_CLAMP_CMD	12900	/* ツールクランプ設定状態	*/
#define	M_SSEC_LDSP_ORIENT_POS	13000	/* 主軸回転の定角位置指定	*/
#define	M_SSEC_LDSP_ORIENT_ROT	13100	/* 主軸回転の定角位置回転実行	*/

/* ユーザ開放I/Fパラメータ	*/
#define	M_SSEC_UOPEN_SRAM_CMD_MAXSIZE	1	/* SRAM開放使用可能容量	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_CMD_REMAIN	2	/* SRAM開放空き容量	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_CLEAR	101	/* デバイス開放パラメータ クリア	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_CLEAR	102	/* SRAM   開放パラメータ クリア	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_DEV(x)	(x)	/* デバイス開放パラメータ　デバイス割付(x=40001～40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_TYPE(x)	(10000 + (x))	/* デバイス開放パラメータ　データ型(x=40001～40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_NUM(x)	(20000 + (x))	/* デバイス開放パラメータ　データ数(x=40001～40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_DEV_PRM_DSP(x)	(30000 + (x))	/* デバイス開放パラメータ　表示形式(x=40001～40100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_TYPE(x)	(x)	/* SRAM開放パラメータ　データ型(x=41001～41100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_NUM(x)	(10000 + (x))	/* SRAM開放パラメータ　データ数(x=41001～41100)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_PRM_DSP(x)	(20000 + (x))	/* SRAM開放パラメータ　表示形式(x=41001～41100)	*//* P1X-A412 */

/* ユーザ開放I/Fデータ	*/
#define	M_SSEC_UOPEN_SRAM_DATA_41001(x)	(x)	/* #41001 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41002(x)	 (10000000 +(x))	/* #41002 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41003(x)	 (20000000 +(x))	/* #41003 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41004(x)	 (30000000 +(x))	/* #41004 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41005(x)	 (40000000 +(x))	/* #41005 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41006(x)	 (50000000 +(x))	/* #41006 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41007(x)	 (60000000 +(x))	/* #41007 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41008(x)	 (70000000 +(x))	/* #41008 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41009(x)	 (80000000 +(x))	/* #41009 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41010(x)	 (90000000 +(x))	/* #41010 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41011(x)	 (100000000 +(x))	/* #41011 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41012(x)	 (110000000 +(x))	/* #41012 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41013(x)	 (120000000 +(x))	/* #41013 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41014(x)	 (130000000 +(x))	/* #41014 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41015(x)	 (140000000 +(x))	/* #41015 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41016(x)	 (150000000 +(x))	/* #41016 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41017(x)	 (160000000 +(x))	/* #41017 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41018(x)	 (170000000 +(x))	/* #41018 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41019(x)	 (180000000 +(x))	/* #41019 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41020(x)	 (190000000 +(x))	/* #41020 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41021(x)	 (200000000 +(x))	/* #41021 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41022(x)	 (210000000 +(x))	/* #41022 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41023(x)	 (220000000 +(x))	/* #41023 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41024(x)	 (230000000 +(x))	/* #41024 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41025(x)	 (240000000 +(x))	/* #41025 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41026(x)	 (250000000 +(x))	/* #41026 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41027(x)	 (260000000 +(x))	/* #41027 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41028(x)	 (270000000 +(x))	/* #41028 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41029(x)	 (280000000 +(x))	/* #41029 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41030(x)	 (290000000 +(x))	/* #41030 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41031(x)	 (300000000 +(x))	/* #41031 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41032(x)	 (310000000 +(x))	/* #41032 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41033(x)	 (320000000 +(x))	/* #41033 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41034(x)	 (330000000 +(x))	/* #41034 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41035(x)	 (340000000 +(x))	/* #41035 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41036(x)	 (350000000 +(x))	/* #41036 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41037(x)	 (360000000 +(x))	/* #41037 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41038(x)	 (370000000 +(x))	/* #41038 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41039(x)	 (380000000 +(x))	/* #41039 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41040(x)	 (390000000 +(x))	/* #41040 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41041(x)	 (400000000 +(x))	/* #41041 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41042(x)	 (410000000 +(x))	/* #41042 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41043(x)	 (420000000 +(x))	/* #41043 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41044(x)	 (430000000 +(x))	/* #41044 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41045(x)	 (440000000 +(x))	/* #41045 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41046(x)	 (450000000 +(x))	/* #41046 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41047(x)	 (460000000 +(x))	/* #41047 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41048(x)	 (470000000 +(x))	/* #41048 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41049(x)	 (480000000 +(x))	/* #41049 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41050(x)	 (490000000 +(x))	/* #41050 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41051(x)	 (500000000 +(x))	/* #41051 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41052(x)	 (510000000 +(x))	/* #41052 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41053(x)	 (520000000 +(x))	/* #41053 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41054(x)	 (530000000 +(x))	/* #41054 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41055(x)	 (540000000 +(x))	/* #41055 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41056(x)	 (550000000 +(x))	/* #41056 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41057(x)	 (560000000 +(x))	/* #41057 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41058(x)	 (570000000 +(x))	/* #41058 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41059(x)	 (580000000 +(x))	/* #41059 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41060(x)	 (590000000 +(x))	/* #41060 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41061(x)	 (600000000 +(x))	/* #41061 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41062(x)	 (610000000 +(x))	/* #41062 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41063(x)	 (620000000 +(x))	/* #41063 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41064(x)	 (630000000 +(x))	/* #41064 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41065(x)	 (640000000 +(x))	/* #41065 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41066(x)	 (650000000 +(x))	/* #41066 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41067(x)	 (660000000 +(x))	/* #41067 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41068(x)	 (670000000 +(x))	/* #41068 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41069(x)	 (680000000 +(x))	/* #41069 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41070(x)	 (690000000 +(x))	/* #41070 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41071(x)	 (700000000 +(x))	/* #41071 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41072(x)	 (710000000 +(x))	/* #41072 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41073(x)	 (720000000 +(x))	/* #41073 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41074(x)	 (730000000 +(x))	/* #41074 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41075(x)	 (740000000 +(x))	/* #41075 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41076(x)	 (750000000 +(x))	/* #41076 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41077(x)	 (760000000 +(x))	/* #41077 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41078(x)	 (770000000 +(x))	/* #41078 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41079(x)	 (780000000 +(x))	/* #41079 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41080(x)	 (790000000 +(x))	/* #41080 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41081(x)	 (800000000 +(x))	/* #41081 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41082(x)	 (810000000 +(x))	/* #41082 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41083(x)	 (820000000 +(x))	/* #41083 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41084(x)	 (830000000 +(x))	/* #41084 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41085(x)	 (840000000 +(x))	/* #41085 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41086(x)	 (850000000 +(x))	/* #41086 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41087(x)	 (860000000 +(x))	/* #41087 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41088(x)	 (870000000 +(x))	/* #41088 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41089(x)	 (880000000 +(x))	/* #41089 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41090(x)	 (890000000 +(x))	/* #41090 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41091(x)	 (900000000 +(x))	/* #41091 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41092(x)	 (910000000 +(x))	/* #41092 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41093(x)	 (920000000 +(x))	/* #41093 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41094(x)	 (930000000 +(x))	/* #41094 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41095(x)	 (940000000 +(x))	/* #41095 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41096(x)	 (950000000 +(x))	/* #41096 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41097(x)	 (960000000 +(x))	/* #41097 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41098(x)	 (970000000 +(x))	/* #41098 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41099(x)	 (980000000 +(x))	/* #41099 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */
#define	M_SSEC_UOPEN_SRAM_DATA_41100(x)	 (990000000 +(x))	/* #41100 SRAM開放データ(x=1-9999999)	*//* P1X-A412 */

/* サーボコマンドI/F	*/
#define	M_SSEC_SV_CMD_PRM_SEND	1	/* パラメータ転送要求	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MSIG_ADD	2	/* M系列加振指令	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_MODE	3	/* マルチバッファモード	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_ADDR	4	/* マルチバッファアドレス(固定用)	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA1	101	/* マルチバッファ#1	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA2	102	/* マルチバッファ#2	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA3	103	/* マルチバッファ#3	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA4	104	/* マルチバッファ#4	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA5	105	/* マルチバッファ#5	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA6	106	/* マルチバッファ#6	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA7	107	/* マルチバッファ#7	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_MBUF_DATA8	108	/* マルチバッファ#8	*//* P0Y-A135 */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY	199	/* トランジェント占有／解除設定	*//* P1X-A145A */
#define	M_SSEC_SV_CMD_TRAN_REQSND	200	/* トランジェント要求送信	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_TRAN_REQSET(x)	(201+(x))	/* トランジェント要求セット(x=1～2)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_TRAN_AREA(x)	(211+(x))	/* トランジェント回答領域 (x=1～2)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_AMPTYPE	221	/* アンプ接続タイプ（光/メタル)	*//* P1X-A145 */
#define	M_SSEC_SV_CMD_MSIG_ADD_SP	1002	/* 主軸 M系列加振指令	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY_SP	1199	/* 主軸 トランジェント占有/解除	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_REQSND_SP	1200	/* 主軸 トランジェント要求送信	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_REQSET_SP(x)	(1201+(x))	/* 主軸 トランジェント要求セット(x=1～2)	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_TRAN_AREA_SP(x)	(1211+(x))	/* 主軸 トランジェント回答領域(x=1～2)	*//* P1X-A145G */
#define	M_SSEC_SV_CMD_MSIG_ADD_PLC	2002	/* PLC軸 M系列加振指令	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_OCCUPY_PLC	2199	/* PLC軸 トランジェント占有/解除	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_REQSND_PLC	2200	/* PLC軸 トランジェント要求送信	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_REQSET_PLC(x)	2201+(x)	/* PLC軸 トランジェント要求セット(x=1～2)	*//* P1X-A145L */
#define	M_SSEC_SV_CMD_TRAN_AREA_PLC(x)	2211+(x)	/* PLC軸 トランジェント回答領域(x=1～2)	*//* P1X-A145L */

/* 再ねじ切り	*/
#define	M_SSEC_RETHREAD_LEAD_POS	1	/* 再ねじ切りリード軸位置	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ROT_POS	2	/* 再ねじ切り回転軸位置	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_REQ	3	/* 再ねじ切り要求	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_STS	4	/* 再ねじ切りステータス	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ALLAX_SMZ	5	/* 再ねじ切り全軸スムージングゼロ	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_LEAD_AX	6	/* 再ねじ切りリード軸(軸ビット)	*//* P1X-A357D */
#define	M_SSEC_RETHREAD_ROT_AX	7	/* 再ねじ切り回転軸(軸ビット)	*//* P1X-A357D */

/* R-Naviデータ	*/
#define	M_SSEC_RNAVI_TARGET_SURFACE_NO	1	/* 加工対象面の加工面No	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_SURFACE_NAME	2	/* 加工対象面の加工面名称	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_WORK_NO	3	/* 加工対象面のワークNo	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_WORK_NAME	4	/* 加工対象面のワーク名称	*//* P1X-A451 */
#define	M_SSEC_RNAVI_TARGET_SURFACE_SET	10	/* 加工対象面の設定・キャンセル（ワークNo/加工面No）	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_PRE_CHECK	20	/* 加工対象面選択事前チェック	*//* P1X-A451 */
#define	M_SSEC_RNAVI_INDEX_REQ_STATE	50	/* 割出要求の状態	*//* P1X-A451 */
#define	M_SSEC_RNAVI_INDEX_REQUEST	51	/* 割出要求	*//* P1X-A451 */
#define	M_SSEC_RNAVI_OFFSET_H_NO	52	/* 工具長オフセット番号Hの設定	*//* P1X-A451Q */
#define	M_SSEC_RNAVI_INDEX_ERRNO	53	/* 割出処理のエラー番号取得	*//* P1X-A451Q */
#define	M_SSEC_RNAVI_MANUAL_CRD_STS	54	/* R-Navi手動送り座標系状態	*//* P1X-A451S */
#define	M_SSEC_RNAVI_MANUAL_CRD_CHG	55	/* R-Navi手動送り座標系切替要求	*//* P1X-A451S */
#define	M_SSEC_RNAVI_WORK_AUTO_REGIST	200	/* 指定したワークの側面自動セット	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_CLEAR	201	/* 指定したワークの削除	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_COPY	202	/* 指定したワークのコピー	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_CLEAR	300	/* 指定した加工面 のクリア	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_COPY	301	/* 指定した加工面 のコピー	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_DATA_CHECK	400	/* 指定したワークの設定値チェック	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_DATA_CHECK	401	/* 指定した加工面の設定値チェック	*//* P1X-A451 */
#define	M_SSEC_RNAVI_SURFACE_ROTATE_AXIS	500	/* 加工面の軸方向回転指定	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_NAME(x)	(1000+(x))	/* ワーク(x) 名称 (ｘ=1～10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_FORM(x)	(1100+(x))	/* ワーク(x) 形状 (ｘ=1～10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE1(x)	(1200+(x))	/* ワーク(x) サイズ+X(円柱：中心X) (ｘ=1～10) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE2(x)	(1300+(x))	/* ワーク(x) サイズ-X(円柱：中心Y) (ｘ=1～10) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE3(x)	(1400+(x))	/* ワーク(x) サイズ+Y(円柱：半径R) (ｘ=1～10) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE4(x)	(1500+(x))	/* ワーク(x) サイズ-Y(円柱：+Z) (ｘ=1～10) ) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE5(x)	(1600+(x))	/* ワーク(x) サイズ+Z(円柱：-Z) (ｘ=1～10) ) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZE6(x)	(1700+(x))	/* ワーク(x) サイズ-Z(円柱：未使用) (ｘ=1～10) ) [変換後]	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_STDCOORD(x)	(1800+(x))	/* ワーク(x) 基準座標系(G54～G59,G54.1P) (ｘ=1～10)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SIZEX(x)	(1900+(x))	/* ワーク(x) サイズX(円柱：直径D) (x=1～10) [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SIZEY(x)	(2000+(x))	/* ワーク(x) サイズY(円柱：未使用) (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SIZEZ(x)	(2100+(x))	/* ワーク(x) サイズZ(円柱：高さZ) (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_STDNO(x)	(2200+(x))	/* ワーク(x) 基準No(円柱：未使用) (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTX(x)	(2300+(x))	/* ワーク(x) シフト量X (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTY(x)	(2400+(x))	/* ワーク(x) シフト量Y (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SHIFTZ(x)	(2500+(x))	/* ワーク(x) シフト量Z (x=1～10)  [変換前]	*//* P1X-A451F */
#define	M_SSEC_RNAVI_WORK_SURFACE_NAME(x,y)	(10000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 名称 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_X(x,y)	(20000+((x)*100)+(y))	/* ワーク(x)の加工面(y) フィーチャ座標原点X0 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_Y(x,y)	(30000+((x)*100)+(y))	/* ワーク(x)の加工面(y) フィーチャ座標原点Y0 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ORIGIN_Z(x,y)	(40000+((x)*100)+(y))	/* ワーク(x)の加工面(y) フィーチャ座標原点Z0 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_INDEX_ANGLE1(x,y)	(50000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 横軸 割出角度 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_INDEX_ANGLE2(x,y)	(60000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 縦軸 割出角度 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS_PAIR(x,y)	(70000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 軸方向組合せ (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_METHOD(x,y)	(80000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 指定方式 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL1(x,y)	(90000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値1(X/TH1) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL2(x,y)	(100000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値2(Y/TH2) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL3(x,y)	(110000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値3(Z) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL4(x,y)	(120000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値4(+X) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL5(x,y)	(130000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値5(+Y) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS1_VAL6(x,y)	(140000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 1軸目 設定値6(+Z） (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_METHOD(x,y)	(150000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 指定方式 (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL1(x,y)	(160000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値1(X/TH1) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL2(x,y)	(170000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値2(Y/TH2) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL3(x,y)	(180000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値3(Z) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL4(x,y)	(190000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値4(+X) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL5(x,y)	(200000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値5(+Y) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_AXIS2_VAL6(x,y)	(210000+((x)*100)+(y))	/* ワーク(x)の加工面(y) 2軸目 設定値6(+Z） (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT1(x,y)	(500000+((x)*100)+(y))	/* ワーク(x)の加工面(y) X軸ベクトル(X成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT2(x,y)	(510000+((x)*100)+(y))	/* ワーク(x)の加工面(y) X軸ベクトル(Y成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_XVECT3(x,y)	(520000+((x)*100)+(y))	/* ワーク(x)の加工面(y) X軸ベクトル(Z成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT1(x,y)	(530000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Y軸ベクトル(X成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT2(x,y)	(540000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Y軸ベクトル(Y成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_YVECT3(x,y)	(550000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Y軸ベクトル(Z成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT1(x,y)	(560000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Z軸ベクトル(X成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT2(x,y)	(570000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Z軸ベクトル(Y成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */
#define	M_SSEC_RNAVI_WORK_SURFACE_ZVECT3(x,y)	(580000+((x)*100)+(y))	/* ワーク(x)の加工面(y) Z軸ベクトル(Z成分) (ｘ=1～10,y=1～17)	*//* P1X-A451 */


#endif 
