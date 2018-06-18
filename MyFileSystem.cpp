#include <iostream>
#include <time.h>
#include "stdafx.h"
#include "MyFileSystem.h"

using namespace std;

//********************************** Global Variables *****************************
FILE			*fp;						//Global File Pointer
Buffer			my_Buffer[NBUF];
unsigned char	Buffer_area[NBUF][BUFFER_SIZE];
time_t			nowtime;
DiskInode		dInode[80];
DirectoryEntry	direEn[16];


void Initialize()
{

}

void easycreateDinode(int num, int addr, int mode) 
{

}
