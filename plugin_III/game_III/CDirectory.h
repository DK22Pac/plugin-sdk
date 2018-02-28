/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

/*
    http://www.gtamodding.com/wiki/IMG_archive#Version_1_-_GTA_III_.26_VC
*/

class CDirectory {
public:
    struct DirectoryInfo {
        unsigned int m_nOffset;
        unsigned int m_nSize;
        char m_szName[24];
    };

    DirectoryInfo *m_pEntries;
    unsigned int m_nCapacity;
    unsigned int m_nNumEntries;

    CDirectory(int capacity);
    ~CDirectory();
    void AddItem(DirectoryInfo const& entry);
    void ReadDirFile(char const* filename);
    bool WriteDirFile(char const* filename);
    DirectoryInfo* FindItem(char const* name, unsigned int& outOffset, unsigned int& outSize);
};

VALIDATE_SIZE(CDirectory, 0xC);
VALIDATE_SIZE(CDirectory::DirectoryInfo, 0x20);