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
    int m_nAnigGroupId;
    int m_nPedType;
    int m_nPedStatType;
    unsigned int m_nCarsCanDriveMask;
    CColModel *m_pHitColModel;
    char m_anPreferredRadioStations[2];
private:
    char _pad46[2];
public:

    //funcs

    void AnimatePedColModelSkinned(RpClump* clump);
    void AnimatePedColModelSkinnedWorld(RpClump* clump);
    void CreateHitColModelSkinned(RpClump* clump);
};

VALIDATE_SIZE(CPedModelInfo, 0x48);