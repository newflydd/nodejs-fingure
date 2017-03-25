#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <ShlObj.h>
#include <stdlib.h>
#include <vector>
#include "ARITH_LIB.h"
#include "Protocol.h"

#pragma comment(lib,"user32.lib")
#pragma comment(lib,"D:\\workspace-npm\\fingure\\cpp-backup\\ARITH_LIB.lib")
#pragma comment(lib,"D:\\workspace-npm\\fingure\\cpp-backup\\SynoAPIEx.lib")

#ifndef __UCHAR__
#define uchar unsigned char
#endif

#ifndef __UINT__
#define uint unsigned int
#endif

uchar readFingerTempletWriteIntoFile();
uchar readFileDataIntoFinger();


#endif // MAIN_H
