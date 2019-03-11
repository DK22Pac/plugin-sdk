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
public:
    float field_34;
    unsigned int m_nIndex;
    unsigned int m_nCount;

    //funcs
    CMloModelInfo();
    ~CMloModelInfo();
};

VALIDATE_SIZE(CMloModelInfo, 0x40);

struct MloModelStore {
    unsigned int m_nCount;
    CMloModelInfo m_sObject[1];

    ~MloModelStore();
};
