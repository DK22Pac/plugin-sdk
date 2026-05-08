/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CFileType {
public:
    int32_t field_4;
    int32_t pfnAt;
    int32_t field_12;
    int32_t field_16;
    int32_t pfnReleaseData;
    int32_t pfnGetIndexByNameAlways;
    int32_t pfnAddRef;
    int32_t pfnRelease;
    int32_t pfnGetUsageCount;
    int32_t pfnHaveParent;
    int32_t pfnDefrag;
    int32_t pfnOnLoad;
    int32_t pfnSetData;
    int8_t szStructureName[32];
    int8_t szExt[4];
    int32_t nStartIndex;
    uint32_t field_106;
    int32_t nVersion;
};
VALIDATE_OFFSET(CFileType, field_4, 0x0);
VALIDATE_OFFSET(CFileType, pfnAt, 0x4);
VALIDATE_OFFSET(CFileType, field_12, 0x8);
VALIDATE_OFFSET(CFileType, field_16, 0xC);
VALIDATE_OFFSET(CFileType, pfnReleaseData, 0x10);
VALIDATE_OFFSET(CFileType, pfnGetIndexByNameAlways, 0x14);
VALIDATE_OFFSET(CFileType, pfnAddRef, 0x18);
VALIDATE_OFFSET(CFileType, pfnRelease, 0x1C);
VALIDATE_OFFSET(CFileType, pfnGetUsageCount, 0x20);
VALIDATE_OFFSET(CFileType, pfnHaveParent, 0x24);
VALIDATE_OFFSET(CFileType, pfnDefrag, 0x28);
VALIDATE_OFFSET(CFileType, pfnOnLoad, 0x2C);
VALIDATE_OFFSET(CFileType, pfnSetData, 0x30);
VALIDATE_OFFSET(CFileType, szStructureName, 0x34);
VALIDATE_OFFSET(CFileType, szExt, 0x54);
VALIDATE_OFFSET(CFileType, nStartIndex, 0x58);
VALIDATE_OFFSET(CFileType, field_106, 0x5C);
VALIDATE_OFFSET(CFileType, nVersion, 0x60);
VALIDATE_SIZE(CFileType, 0x64);

class CFileTypeMgr {
public:
    CFileType m_types[25];
    int32_t m_nTypeCount;

public:
    static int32_t& IndexOfType_WDR;
    static int32_t& IndexOfType_WPL;
    static int32_t& IndexOfType_SCO;

public:
    static CFileTypeMgr* GetManager();
};
VALIDATE_OFFSET(CFileTypeMgr, m_types, 0x0);
VALIDATE_OFFSET(CFileTypeMgr, m_nTypeCount, 0x9C4);
VALIDATE_SIZE(CFileTypeMgr, 0x9C8);

extern CFileTypeMgr& FileTypeMgr;
