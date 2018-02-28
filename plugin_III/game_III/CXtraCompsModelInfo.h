/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"

class CXtraCompsModelInfo : public CClumpModelInfo {
public:
    unsigned int m_nModelIndex;
    
    //funcs
    CXtraCompsModelInfo();
    ~CXtraCompsModelInfo();
};

VALIDATE_SIZE(CXtraCompsModelInfo, 0x38);

struct XtraCompsModelStore {
    unsigned int m_nCount;
    CXtraCompsModelInfo m_sObject[2];

    ~XtraCompsModelStore();
};
