/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"

class C2deffectsModelInfo : public CClumpModelInfo {
public:
    //funcs
    C2deffectsModelInfo();
    ~C2deffectsModelInfo();
};

VALIDATE_SIZE(C2deffectsModelInfo, 0x34);

struct EffectStore {
    unsigned int m_nCount;
    C2deffectsModelInfo m_sObject[2000];

    ~EffectStore();
};
