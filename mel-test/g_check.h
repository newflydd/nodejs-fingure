/******************************************** MELCO *****/
/*											 (Nx)		*/
/* <ファイル名> g_check.h								*/
/* <機能>		チェック描画データ定義					*/
/* <タスク名>											*/
/*														*/
/* COPYRIGHT (C) 2000 MITSUBISHI ELECTRIC CORPORATION	*/
/* ALL RIGHTS RESERVED									*/
/********************************************************/

#ifndef	INCg_checkh
#define	INCg_checkh

#ifdef	__cplusplus
extern "C" {
#endif	/*__cplusplus*/

#define MAX_SYS_AXIS	8					//系統内最大軸数

typedef struct							//形状情報
{
	short		shape_mode;					//形状モード	
											//	0:形状指令なし、1:直線、
											//	2:ＣＷ円弧、3:ＣＣＷ円弧、
											//	4:ＣＷ渦巻き、5:ＣＣＷ渦巻き、
											//	6:ＣＷヘリカル、7:ＣＣＷヘリカル、
											//	8:ＣＷ渦巻きヘリカル、9:ＣＣＷ渦巻きヘリカル
	short		arc_plane_i;				//円弧平面横軸		
											//円弧平面を構成する横軸の系統内軸番号
											//	系統内第1軸:0、第２軸:1、...
	short		arc_plane_j;				//円弧平面縦軸		
											//円弧平面を構成する縦軸の系統内軸番号
											//	系統内第1軸:0、第２軸:1、...
	short		dummy ;						//ダミー		
	short		arc_pitch;					//円弧繰り返し回数
	short		draw_axis_1;				//描画対象第１軸		
											//	系統内第1軸:0、第２軸:1、...
	short		draw_axis_2;				//描画対象第２軸		
											//	系統内第1軸:0、第２軸:1、...
	short		draw_axis_3;				//描画対象第３軸		
											//	系統内第1軸:0、第２軸:1、...
	double		start_point[MAX_SYS_AXIS];
											//機械座標系始点      MAX_SYS_AXIS：系統内軸数
	double		end_point[MAX_SYS_AXIS];
											//機械座標系終点      MAX_SYS_AXIS：系統内軸数
	double		work_coord_start_point[MAX_SYS_AXIS];
											//ワーク座標系始点    MAX_SYS_AXIS：系統内軸数
	double		work_coord_end_point[MAX_SYS_AXIS];
											//ワーク座標系終点    MAX_SYS_AXIS：系統内軸数
	double		arc_center_point_h;			//円弧横軸中心座標
	double		arc_center_point_v;			//円弧縦軸中心座標
	double		radius;						//半径
} ShapeData;

typedef struct							//軌跡情報
{
	short		move_mode;					//動作モード
											//	0:移動なし、1:早送り非補間、2:早送り補間、
											//	3:切削送り補間、4:ねじ切り補間、5:スキップ、
											//	6:レファレンス点復帰
	short		dummy[3];					//ダミー
	ShapeData	shape_data;					//形状情報
} PathData;

typedef struct							//チェック描画情報
{
	short		exec_status;				//ブロック実行状態
											//	0:停止中、初期状態
											//	1:実行中（リセット起動中、ブロック実行中）
											//	2:プログラム完了
											//	3:M0/M1ﾌﾞﾛｯｸ停止中
											//	4:エラー
	short		abs_inc;					//絶対増分Ｇモーダル
											//	0:絶対(G90)、1:増分(G91)
	short		fix_cycle;					//固定サイクルＧモーダル(マシセン)
											//	0:G70、1:G71、2:G72、3:G73、4:G74、5:G75、
											//	6:G76、7:G77、8:G78、9:G79、10:G80、11:G81、
											//	12:G82、13:G83、14:G84、15:G85、16:G86、17:G87、
											//	18:G88、19:G89
	short		tool_compen;				//工具補正Ｇモーダル
											//	0:G40、1:G41、2:G42
	short		current_work_coord_sys;		//現在のワーク座標系
											//	0:G54、1:G55、2:G56、3:G57、4:G58、5:G59
											//	6:G54.1P1
	short		process_info;				//加工情報 0：通常 1:ミーリング						// MA0-A059
	short		dummy[2];					//ダミー											// MA0-A059

	PathData	tool_path_data;				//工具中心軌跡情報

	PathData	prg_path_data;				//プログラム中心軌跡情報

	long		m_code[4];					//Mコード   0x80000000：指令なし、左記以外：Mコード
	long		t_code;						//Tコード   0x80000000：指令なし、左記以外：Tコード
	long		d_number;					//工具径補正番号モーダル
	long		h_number[MAX_SYS_AXIS];		//工具長補正番号モーダル MAX_SYS_AXIS：系統内軸数
	long		f_modal;					//Fモーダル
	long		dummy1;						//空き
	short		tool_offset[MAX_SYS_AXIS];	//工具長補正Gモーダル 0:G43、1:G44、2:G49
	double		cylnd_radius;				//円筒半径
	char		dummy2[24];					//空き
} CheckDraw;

#ifdef	__cplusplus
}
#endif	/*__cplusplus*/

#endif	/*INCg_checkh*/
