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

extern CFileTypeMgr& FileTypeMgr;
