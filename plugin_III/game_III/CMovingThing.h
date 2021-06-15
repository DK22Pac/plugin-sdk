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

VALIDATE_SIZE(CMovingThing, 0x1C);

#include "meta/meta.CMovingThing.h"
