/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class PLUGIN_API CMovingThing {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMovingThing)

public:
    CMovingThing *m_pNext;
    CMovingThing *m_pPrev;
    short m_nType;
    short m_nHidden;
    CVector m_vecPosition;
    CEntity *m_pEntity;

    SUPPORTED_10EN_11EN_STEAM void AddToList(CMovingThing *pThing);
    SUPPORTED_10EN_11EN_STEAM void RemoveFromList();
    SUPPORTED_10EN_11EN_STEAM void Update();
};
VALIDATE_OFFSET(CMovingThing, m_pNext, 0x0);
VALIDATE_OFFSET(CMovingThing, m_pPrev, 0x4);
VALIDATE_OFFSET(CMovingThing, m_nType, 0x8);
VALIDATE_OFFSET(CMovingThing, m_nHidden, 0xA);
VALIDATE_OFFSET(CMovingThing, m_vecPosition, 0xC);
VALIDATE_OFFSET(CMovingThing, m_pEntity, 0x18);
VALIDATE_SIZE(CMovingThing, 0x1C);

#include "meta/meta.CMovingThing.h"
