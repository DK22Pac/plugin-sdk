/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBaseModelInfo.h"
#include "RenderWare.h"

class PLUGIN_API CSimpleModelInfo : public CBaseModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CSimpleModelInfo)

public:
    RpAtomic *m_apAtomics[3]; //!< m_apAtomics[2] is often a pointer to the non-LOD modelinfo
    float m_afLodDistances[3]; //!< m_afLodDistances[2] holds the near distance for LODs
    unsigned char m_nNumAtomics;
    unsigned char m_nVisibility; //!< 0 - invisible, 255 - fully visible
    struct {
        unsigned short nFirstDamaged : 2; //!< 0 no damage model, 1 and 2 are damage models, 2 is damage model
        unsigned short bNormalCull : 1;
        unsigned short bIsDamaged : 1;
        unsigned short bIsBigBuilding : 1;
        unsigned short bNoFade : 1;
        unsigned short bDrawLast : 1;
        unsigned short bAdditive : 1;

        unsigned short bIsSubway : 1;
        unsigned short bIgnoreLight : 1;
        unsigned short bNoZwrite : 1;
    } m_nSimpleModelFlags;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();
    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance();
    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance(RwMatrix *matrix);
    SUPPORTED_10EN_11EN_STEAM RwObject *GetRwObject();

    SUPPORTED_10EN_11EN_STEAM void FindRelatedModel();
    SUPPORTED_10EN_11EN_STEAM RpAtomic *GetAtomicFromDistance(float distance);
    SUPPORTED_10EN_11EN_STEAM float GetLargestLodDistance();
    SUPPORTED_10EN_11EN_STEAM float GetNearDistance();
    SUPPORTED_10EN_11EN_STEAM void IncreaseAlpha();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void SetAtomic(int number, RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM void SetLodDistances(float *distance);
    SUPPORTED_10EN_11EN_STEAM void SetupBigBuilding();
};

VTABLE_DESC(CSimpleModelInfo, 0x5FDF98, 6);
VALIDATE_SIZE(CSimpleModelInfo, 0x4C);

#include "meta/meta.CSimpleModelInfo.h"
