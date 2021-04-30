/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"
#include "ePedType.h"
#include "ePedStats.h"
#include "CColModel.h"
#include "RenderWare.h"

class PLUGIN_API CPedModelInfo : public CClumpModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedModelInfo)

public:
    unsigned int m_nAnimGroupId;
    ePedType m_nPedType;
    ePedStats m_nPedStatType;
    unsigned int m_nCarsCanDriveMask;
    CColModel *m_pHitColModel;

    SUPPORTED_10EN_11EN_STEAM static RwObjectNameIdAssocation *(&m_pPedIds)[12]; // static RwObjectNameIdAssocation *m_pPedIds[12]

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();

    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetClump(RpClump *clump);

    SUPPORTED_10EN_11EN_STEAM void CreateHitColModel();
    SUPPORTED_10EN_11EN_STEAM void SetLowDetailClump(RpClump *clump);
};

VTABLE_DESC(CPedModelInfo, 0x5FDFFC, 7);
VALIDATE_SIZE(CPedModelInfo, 0x48);

#include "meta/meta.CPedModelInfo.h"
