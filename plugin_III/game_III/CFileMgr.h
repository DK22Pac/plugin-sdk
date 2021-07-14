/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#define FILESTREAM int

class PLUGIN_API CFileMgr {
public:
    SUPPORTED_10EN_11EN_STEAM static char(&ms_rootDirName)[128]; // static char ms_rootDirName[128]
    SUPPORTED_10EN_11EN_STEAM static char(&ms_dirName)[128]; // static char ms_dirName[128]

    SUPPORTED_10EN_11EN_STEAM static void ChangeDir(char const *dir);
    SUPPORTED_10EN_11EN_STEAM static int CloseFile(FILESTREAM fileHandle);
    SUPPORTED_10EN_11EN_STEAM static int GetErrorReadWrite(FILESTREAM fileHandle);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static FILESTREAM LoadTextFile(char const *filePath, unsigned char *buf, int size, char const *mode);
    SUPPORTED_10EN_11EN_STEAM static FILESTREAM OpenFile(char const *filePath, char const *mode);
    SUPPORTED_10EN_11EN_STEAM static FILESTREAM OpenFileForWriting(char const *filePath);
    SUPPORTED_10EN_11EN_STEAM static int Read(FILESTREAM fileHandle, char *buf, int size);
    SUPPORTED_10EN_11EN_STEAM static bool ReadLine(FILESTREAM fileHandle, char *buf, int len);
    SUPPORTED_10EN_11EN_STEAM static bool Seek(FILESTREAM fileHandle, int offset, int origin);
    SUPPORTED_10EN_11EN_STEAM static void SetDir(char const *dir);
    SUPPORTED_10EN_11EN_STEAM static void SetDirMyDocuments();
    SUPPORTED_10EN_11EN_STEAM static int Write(FILESTREAM fileHandle, char *buf, int size);
};

#include "meta/meta.CFileMgr.h"
