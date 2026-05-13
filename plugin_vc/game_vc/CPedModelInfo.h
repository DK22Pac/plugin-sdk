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
VALIDATE_OFFSET(CPedModelInfo, m_nAnigGroupId, 0x30);
VALIDATE_OFFSET(CPedModelInfo, m_nPedType, 0x34);
VALIDATE_OFFSET(CPedModelInfo, m_nPedStatType, 0x38);
VALIDATE_OFFSET(CPedModelInfo, m_nCarsCanDriveMask, 0x3C);
VALIDATE_OFFSET(CPedModelInfo, m_pHitColModel, 0x40);
VALIDATE_OFFSET(CPedModelInfo, m_anPreferredRadioStations, 0x44);
VALIDATE_SIZE(CPedModelInfo, 0x48);

struct PedModelStore {
    unsigned int m_nCount;
    CPedModelInfo m_sObject[130];

    ~PedModelStore();
};
VALIDATE_OFFSET(PedModelStore, m_nCount, 0x0);
VALIDATE_OFFSET(PedModelStore, m_sObject, 0x4);
VALIDATE_SIZE(PedModelStore, 0x2494);
