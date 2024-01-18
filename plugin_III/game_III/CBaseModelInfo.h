/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColModel.h"
#include "C2dEffect.h"

enum PLUGIN_API ModelInfoType : unsigned char {
    MODEL_INFO_SIMPLE = 1,
    MODEL_INFO_MLO = 2,
    MODEL_INFO_TIME = 3,
    MODEL_INFO_CLUMP = 4,
    MODEL_INFO_VEHICLE = 5,
    MODEL_INFO_PED = 6,
    MODEL_INFO_XTRACOMPS = 7
};

//! CBaseModelInfo       // base, abstract class
//!      |
//!      |
//!      +---CSimpleModelInfo       // (static) map object
//!      |      |
//!      |      |
//!      |      +---CTimeModelInfo         // map time object (night objects)
//!      |
//!      |
//!      +---CClumpModelInfo        // (dynamic) object with hierarchy
//!             |
//!             |
//!             +---CVehicleModelInfo      // vehicle
//!             |
//!             |
//!             +---CPedModelInfo          // ped
//!             |
//!             |
//!             +---CMloModelInfo          // 'sta' section
//!             |
//!             |
//!             +---CXtraCompsModelInfo    // ped parts?
//!             |
//!             |
//!             +---C2deffectsModelInfo
//! 
class PLUGIN_API CBaseModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CBaseModelInfo)

public:
    char m_szName[24];
    CColModel *m_pColModel;
    C2dEffect *m_p2dEffect;
    short m_nObjectDataIndex;
    unsigned short m_nRefCount;
    short m_nTxdIndex;
    ModelInfoType m_nType;
    unsigned char m_nNum2dEffects;
    bool m_bDoWeOwnTheColModel;

    // virtual function #0 (destructor)

    SUPPORTED_10EN_11EN_STEAM void Shutdown();
    void DeleteRwObject();
    RwObject* CreateInstance();

    SUPPORTED_10EN_11EN_STEAM void Add2dEffect(C2dEffect *effect);
    SUPPORTED_10EN_11EN_STEAM void AddRef();
    SUPPORTED_10EN_11EN_STEAM void AddTexDictionaryRef();
    SUPPORTED_10EN_11EN_STEAM void ClearTexDictionary();
    SUPPORTED_10EN_11EN_STEAM void DeleteCollisionModel();
    SUPPORTED_10EN_11EN_STEAM C2dEffect *Get2dEffect(int effectNumber);
    SUPPORTED_10EN_11EN_STEAM void Init2dEffects();
    SUPPORTED_10EN_11EN_STEAM void RemoveRef();
    SUPPORTED_10EN_11EN_STEAM void RemoveTexDictionaryRef();
    SUPPORTED_10EN_11EN_STEAM void SetTexDictionary(char const *txdName);
};

VTABLE_DESC(CBaseModelInfo, 0x5FAB58, 2);
VALIDATE_SIZE(CBaseModelInfo, 0x30);

#include "meta/meta.CBaseModelInfo.h"
