#include "main.h"

using namespace std;

HANDLE pHandle = NULL;
int type;
uchar fingerAddressIndex[4][32];        //指纹索引
uchar charTempletBuffer[512];           //指纹特征码模板缓冲区
int   charTempletLength;                //特征码大小
std::vector<int> fingerAddressList;     //索引号列表
int   pInt[1];

int result;

int main()
{
    result = PSAutoOpen(&pHandle, &type);
    if(result != PS_OK){
        printf("Can't Connect to USB Finger Modual.\n");
        printf("The Programe exit.");

        return -1;
    }

    PSReadIndexTable(pHandle, 0xFFFFFFFF, 0, fingerAddressIndex[0]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 1, fingerAddressIndex[1]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 2, fingerAddressIndex[2]);
    PSReadIndexTable(pHandle, 0xFFFFFFFF, 3, fingerAddressIndex[3]);

    for(int i = 0; i < 1000; i++){
        if((fingerAddressIndex[i/256][(i%256)/8]>>(i%8))&(0x80) == 0x80)
           fingerAddressList.push_back(i);
    }

    //readFingerTempletWriteIntoFile();
    readFileDataIntoFinger();

    return 0;
}

/**
 * 将指纹模板写入二进制文件
 * 格式:
 * 4byte 总长度
 * 4byte 序号 + 512byte 特征码 (循环)
 * @return 0x00 成功
 */
uchar readFingerTempletWriteIntoFile(){
    FILE *file;
    file = fopen("database.bin","wb");

    pInt[0] = fingerAddressList.size();
    fwrite(pInt, 4, 1, file);

    for(uint i = 0; i < fingerAddressList.size(); i++){
        printf("%d :\n", fingerAddressList[i]);
        pInt[0] = fingerAddressList[i];
        fwrite(pInt, 4, 1, file);

        PSLoadChar(pHandle, 0xFFFFFFFF, 1, fingerAddressList[i]);
        PSUpChar(pHandle, 0xFFFFFFFF, 1, charTempletBuffer, &charTempletLength);

        fwrite(charTempletBuffer, 1, charTempletLength, file);
    }
    fclose(file);

    return 0x00;
}

/**
 * 将二进制文件按索引写入指纹模块
 * @return
 */
uchar readFileDataIntoFinger(){
    FILE *file;
    file = fopen("database.bin","rb");

    int templetSize, templetIndex;
    uchar templetBuffer[512];
    fread(&templetSize, 4, 1, file);

    for(int i = 0; i < templetSize; i++){
        fread(&templetIndex, 4, 1, file);
        printf("saving No.%d templet into Finger Modual.\n", templetIndex);
        fread(templetBuffer, 1, 512, file);

        PSDownChar(pHandle, 0xFFFFFFFF, 1, templetBuffer, 512);
        result = PSStoreChar(pHandle, 0xFFFFFFFF, 1, templetIndex);

        if(!result)
            printf("saved Sucess\n");
        else
            printf("Fail\n");
    }

    return 0x00;
}
