/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntity.h"
#include "CPortalTracker.h"
#include "Rage.h"

class CDynamicEntity : public CEntity {
public:
    uint8_t pad6[8];
    uint32_t* m_pAnim;
    uint8_t pad7[148];
};

VALIDATE_SIZE(CDynamicEntity, 0x110);

