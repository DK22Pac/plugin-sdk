/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPhysical.h"
#include "CAmmoData.h"

class CObject : public CPhysical {
public:
    uint8_t field_1[64];
    float m_fScale;
    uint8_t field_68[8];
    CAmmoData* m_pAmmoData;
    uint8_t field_194[192];
};

VALIDATE_SIZE(CObject, 0x320);
