/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

#define FILESTREAM int

class CFileMgr {
public:
    static char *ms_dirName; // static char ms_dirName[128]
    static char *ms_rootDirName; // static char ms_rootDirName[128]

    static void Initialise();
    static void ChangeDir(char const* dir);
    static void SetDir(char const* dir);
    static void SetDirMyDocuments();
    static FILESTREAM LoadTextFile(char const* filepath, unsigned char* buffer, int size, char const* mode);
    static FILESTREAM OpenFile(char const* filepath, char const* mode);
    static FILESTREAM OpenFileForWriting(char const* filepath);
    static int Read(FILESTREAM fileHandle, char* buffer, int size);
    static int Write(FILESTREAM fileHandle, char* buffer, int size);
    static bool Seek(FILESTREAM fileHandle, int offset, int origin);
    static bool ReadLine(FILESTREAM fileHandle, char* buffer, int maxSize);
    static int CloseFile(FILESTREAM fileHandle);
    static int GetErrorReadWrite(FILESTREAM fileHandle);
};