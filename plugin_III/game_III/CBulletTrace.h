/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CBulletTrace {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBulletTrace)

public:
    CVector m_vecOrigin;
    CVector m_vecTarget;
    bool m_bExist;
    char m_nTimeCounter;
    char m_nIntensity;
private:
    char _pad1B;
public:

    SUPPORTED_10EN_11EN_STEAM void Update();
};

VALIDATE_SIZE(CBulletTrace, 0x1C);

#include "meta/meta.CBulletTrace.h"
