/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"

class CMloModelInfo : public CClumpModelInfo {
    char _pad34[4];
public:
    unsigned int dword38;
    unsigned int dword3C;

    //funcs
    CMloModelInfo();
    ~CMloModelInfo();
};

VALIDATE_SIZE(CMloModelInfo, 0x40);

struct MloModelStore {
    unsigned int m_nCount;
    CMloModelInfo m_sObject;

    ~MloModelStore();
};
