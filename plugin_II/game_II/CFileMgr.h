/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct tChunkHeader {
    char code[4];
    int size;
};
VALIDATE_OFFSET(tChunkHeader, code, 0x0);
VALIDATE_OFFSET(tChunkHeader, size, 0x4);
VALIDATE_SIZE(tChunkHeader, 0x8);

struct tTextHeader {
    char code[4];
    short size;
};
VALIDATE_OFFSET(tTextHeader, code, 0x0);
VALIDATE_OFFSET(tTextHeader, size, 0x4);
VALIDATE_SIZE(tTextHeader, 0x6);

class CFileMgr {
public:
    static int OpenFile(const char* name);
    static int CloseFile();
    static size_t Read(void* buff, int const& size);
    static bool ReadLine(void* buff, int const& size);
    static int Seek(int const& size);
};
VALIDATE_SIZE(CFileMgr, 0x1);
