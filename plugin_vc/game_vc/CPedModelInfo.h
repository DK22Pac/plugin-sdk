/*
Plugin-SDK (Grand Theft Auto Vice City) header file
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
    unsigned int m_nAnigGroupId;
    unsigned int m_nPedType;
    unsigned int m_nPedStatType;
    unsigned int m_nCarsCanDriveMask;
    CColModel *m_pHitColModel;
    char m_anPreferredRadioStations[2];
    //char _pad46[2];

    //funcs
    CPedModelInfo();
    ~CPedModelInfo();
    void AnimatePedColModelSkinned(RpClump* clump);
    void AnimatePedColModelSkinnedWorld(RpClump* clump);
    void CreateHitColModelSkinned(RpClump* clump);
};

VALIDATE_SIZE(CPedModelInfo, 0x48);

struct PedModelStore {
    unsigned int m_nCount;
    CPedModelInfo m_sObject[130];

    ~PedModelStore();
};
