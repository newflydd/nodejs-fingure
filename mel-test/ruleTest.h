#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <io.h>
#include <stdbool.h>
#include <time.h>

#include "melncapi.h"
#include "ncmcapi.h"
#include "melsect.h"
#include "melssect.h"
#include "meltype.h"
#include "melerr.h"

#ifndef __UCHAR__
#define uchar unsigned char
#endif

using namespace std;

short connectCNC(string ip,int port);

uchar readY220();

DWORD writeX0(uchar value);

void processY220(uchar y220);

void processMessage(uchar* message);

DWORD sendMessage(uchar* messageBuffer, uchar length);