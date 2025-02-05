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

struct tTextHeader {
    char code[4];
    short size;
};

class CFileMgr {
public:
    static int OpenFile(const char* name);
    static int CloseFile();
    static size_t Read(void* buff, int const& size);
    static bool ReadLine(void* buff, int const& size);
    static int Seek(int const& size);
};
