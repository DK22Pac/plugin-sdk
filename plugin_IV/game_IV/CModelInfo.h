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
    uint32_t m_nHash;
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
VALIDATE_OFFSET(CBaseModelInfo, field_4, 0x4);
VALIDATE_OFFSET(CBaseModelInfo, field_8, 0x8);
VALIDATE_OFFSET(CBaseModelInfo, field_C, 0xC);
VALIDATE_OFFSET(CBaseModelInfo, field_10, 0x10);
VALIDATE_OFFSET(CBaseModelInfo, field_14, 0x14);
VALIDATE_OFFSET(CBaseModelInfo, field_18, 0x18);
VALIDATE_OFFSET(CBaseModelInfo, field_1C, 0x1C);
VALIDATE_OFFSET(CBaseModelInfo, m_vMinBounds, 0x20);
VALIDATE_OFFSET(CBaseModelInfo, m_fDrawDistance, 0x2C);
VALIDATE_OFFSET(CBaseModelInfo, m_vMaxBounds, 0x30);
VALIDATE_OFFSET(CBaseModelInfo, m_nHash, 0x3C);
VALIDATE_OFFSET(CBaseModelInfo, m_nIDEFlags, 0x40);
VALIDATE_OFFSET(CBaseModelInfo, m_nRefCount, 0x44);
VALIDATE_OFFSET(CBaseModelInfo, m_nTxd, 0x48);
VALIDATE_OFFSET(CBaseModelInfo, field_4A, 0x4A);
VALIDATE_OFFSET(CBaseModelInfo, field_4C, 0x4C);
VALIDATE_OFFSET(CBaseModelInfo, field_4E, 0x4E);
VALIDATE_OFFSET(CBaseModelInfo, field_50, 0x50);
VALIDATE_OFFSET(CBaseModelInfo, field_52, 0x52);
VALIDATE_OFFSET(CBaseModelInfo, field_54, 0x54);
VALIDATE_OFFSET(CBaseModelInfo, field_56, 0x56);
VALIDATE_OFFSET(CBaseModelInfo, m_nAnimIndex, 0x58);
VALIDATE_OFFSET(CBaseModelInfo, field_5A, 0x5A);
VALIDATE_OFFSET(CBaseModelInfo, field_5B, 0x5B);
VALIDATE_OFFSET(CBaseModelInfo, field_5C, 0x5C);
VALIDATE_SIZE(CBaseModelInfo, 0x60);

class CModelInfo {
public:
    static CBaseModelInfo** ms_modelInfoPtrs;

public:
    static CBaseModelInfo* GetModelByHash(int32_t hash, uint32_t* indexOut);
};
VALIDATE_SIZE(CModelInfo, 0x1);

extern CModelInfo* ModelInfo;
