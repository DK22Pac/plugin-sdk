/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CVirtualBase.h"
#include "eModelHashes.h"

class CBaseModelInfo : CVirtualBase {
public:
    int32_t field_4;
    int32_t field_8;
    int32_t field_C;
    int32_t field_10;
    int32_t field_14;
    int32_t field_18;
    int32_t field_1C;
    rage::Vector3 m_vMinBounds;
    float m_fDrawDistance;
    rage::Vector3 m_vMaxBounds;
    int32_t m_nHash;
    uint32_t m_nIDEFlags;
    int32_t m_nRefCount;
    int16_t m_nTxd;
    int16_t field_4A;
    int16_t field_4C;
    int16_t field_4E;
    int16_t field_50;
    int16_t field_52;
    int16_t field_54;
    int16_t field_56;
    int16_t m_nAnimIndex;
    uint8_t field_5A;
    uint8_t field_5B;
    int32_t field_5C;
};

VALIDATE_SIZE(CBaseModelInfo, 0x60);

class CModelInfo {
public:
    static CBaseModelInfo** ms_modelInfoPtrs;

public:
    static CBaseModelInfo* GetModelByHash(int32_t hash, uint32_t* indexOut);
};

extern CModelInfo* ModelInfo;
