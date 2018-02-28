/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

#define FILESTREAM int

class PLUGIN_API CFileMgr {
public:
    static char *ms_dirName; // static char ms_dirName[128]
    static char *ms_rootDirName; // static char ms_rootDirName[128]

    static int GetErrorReadWrite(FILESTREAM fileHandle);
    static int CloseFile(FILESTREAM fileHandle);
    static bool ReadLine(FILESTREAM fileHandle, char* buffer, int maxSize);
    static bool Seek(FILESTREAM fileHandle, int offset, int origin);
    static int Write(FILESTREAM fileHandle, char* buffer, int size);
    static int Read(FILESTREAM fileHandle, char* buffer, int size);
    static FILESTREAM OpenFileForWriting(char const* filepath);
    static FILESTREAM OpenFile(char const* filepath, char const* mode);
    static FILESTREAM LoadFile(char const* filepath, unsigned char* buffer, int size, char const* mode);
    static void SetDirMyDocuments();
    static void SetDir(char const* dir);
    static void ChangeDir(char const* dir);
    static void Initialise();
};