#ifdef __cplusplus
extern "C" {
#endif

/*
IN	ImgP：图像指针（256*288字节）
OUT	TempletP：特征指针（512字节）
OUT	TempGnd：背景表指针（背景为8*8小块,0表示有图像、1表示为背景）
OUT px1、py1：中心点1坐标（有任意1个为0表示中心点1不存在）
OUT	px2、py2：中心点2坐标（有任意1个为0表示中心点2不存在）
*/
int SY_GenChar(unsigned char * ImgP,
			   unsigned char *TempletP,
			   unsigned char TempGnd[36][32],
			   unsigned int* px1,unsigned int* py1,
			   unsigned int* px2,unsigned int* py2);

#ifdef __cplusplus
}
#endif
