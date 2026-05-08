/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRect.h"

class PLUGIN_API IplDef {
public:
    CRect m_boundBox;
    char  m_szName[16];
private:
    short _pad20;
public:
    short m_nMinBuildingId;
    short m_nMaxBuildingId;
    short m_nMinDummyId;
    short m_nMaxDummyId;
    short m_nRelatedIpl; // entity arrays index
    bool  m_bInterior;
    char field_2D;
    bool  m_bLoadRequest;
    bool  m_bDisableDynamicStreaming;
    char field_30;
    char field_31;
private:
    char _pad32[2];
public:
};
VALIDATE_OFFSET(IplDef, m_boundBox, 0x0);
VALIDATE_OFFSET(IplDef, m_szName, 0x10);
VALIDATE_OFFSET(IplDef, m_nMinBuildingId, 0x22);
VALIDATE_OFFSET(IplDef, m_nMaxBuildingId, 0x24);
VALIDATE_OFFSET(IplDef, m_nMinDummyId, 0x26);
VALIDATE_OFFSET(IplDef, m_nMaxDummyId, 0x28);
VALIDATE_OFFSET(IplDef, m_nRelatedIpl, 0x2A);
VALIDATE_OFFSET(IplDef, m_bInterior, 0x2C);
VALIDATE_OFFSET(IplDef, field_2D, 0x2D);
VALIDATE_OFFSET(IplDef, m_bLoadRequest, 0x2E);
VALIDATE_OFFSET(IplDef, m_bDisableDynamicStreaming, 0x2F);
VALIDATE_OFFSET(IplDef, field_30, 0x30);
VALIDATE_OFFSET(IplDef, field_31, 0x31);
VALIDATE_SIZE(IplDef, 0x34);