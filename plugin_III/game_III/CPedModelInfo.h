/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"
#include "CColModel.h"

class CPedModelInfo : public CClumpModelInfo {
public:
    unsigned int  m_nAnimGroupId;
    unsigned int  m_nPedtype;
    unsigned int  m_nStatPedtype;
    unsigned int  m_nCarsCanDriveMask;
    CColModel    *m_pHitColModel;

    //funcs
    CPedModelInfo();
    void CreateHitColModel();
    void SetLowDetailClump(RpClump* clump);
    ~CPedModelInfo();
};

VALIDATE_SIZE(CPedModelInfo, 0x48);

struct PedModelStore {
    unsigned int m_nCount;
    CPedModelInfo m_sObject[90];

    ~PedModelStore();
};
