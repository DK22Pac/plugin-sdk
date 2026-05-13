/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"



class PLUGIN_API CDirectory {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CDirectory)
public:

	struct DirectoryInfo {
		unsigned int m_nOffset;
		unsigned int m_nSize;
		char m_szName[24];
	} *m_pEntries;
    unsigned int m_nCapacity;
    unsigned int m_nNumEntries;

    SUPPORTED_10EN void AddItem(const CDirectory::DirectoryInfo* entry);
    SUPPORTED_10EN bool FindItem(char const *name, unsigned int *outOffset, unsigned int *outSize);
    SUPPORTED_10EN void ReadDirFile(char const *filename);
    SUPPORTED_10EN bool WriteDirFile(char const *filename);
};
VALIDATE_OFFSET(CDirectory, m_pEntries, 0x0);
VALIDATE_OFFSET(CDirectory, m_nCapacity, 0x4);
VALIDATE_OFFSET(CDirectory, m_nNumEntries, 0x8);
VALIDATE_SIZE(CDirectory, 0xC);

#include "meta/meta.CDirectory.h"
