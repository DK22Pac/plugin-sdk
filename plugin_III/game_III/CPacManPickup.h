/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

enum PLUGIN_API ePacManPickupType : unsigned char {
    PACMAN_NONE = 0,
    PACMAN_SCRAMBLE = 1,
    PACMAN_RACE = 2
};

class PLUGIN_API CPacManPickup {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPacManPickup)

public:
    CVector m_vecPos;
    CObject *m_pObject;
    unsigned char m_nType; //!< see ePacManPickupType

    SUPPORTED_10EN_11EN_STEAM void Update();
};

VALIDATE_SIZE(CPacManPickup, 0x14);

#include "meta/meta.CPacManPickup.h"
