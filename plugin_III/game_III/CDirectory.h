/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

//! http://www.gtamodding.com/wiki/IMG_archive#Version_1_-_GTA_III_.26_VC
 
class PLUGIN_API CDirectory {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CDirectory)

public:
    struct PLUGIN_API DirectoryInfo {
        unsigned int m_nOffset;
        unsigned int m_nSize;
        char m_szName[24];
    };

    DirectoryInfo *m_pEntries;
    int m_nCapacity;
    int m_nNumEntries;

    SUPPORTED_10EN_11EN_STEAM void AddItem(CDirectory::DirectoryInfo const &entry);
    SUPPORTED_10EN_11EN_STEAM bool FindItem(char const *name, unsigned int &outOffset, unsigned int &outSize);
    SUPPORTED_10EN_11EN_STEAM void ReadDirFile(char const *fileName);
    SUPPORTED_10EN_11EN_STEAM bool WriteDirFile(char const *fileName);
};

VALIDATE_SIZE(CDirectory::DirectoryInfo, 0x20);
VALIDATE_SIZE(CDirectory, 0xC);

#include "meta/meta.CDirectory.h"
