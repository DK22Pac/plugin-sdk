/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct PLUGIN_API CStuckCarCheckData {
    int m_nVehicleIndex;
    CVector m_vecPos;
    int m_nLastCheck;
    float m_fRadius;
    unsigned int m_nStuckTime;
    bool m_bIsStuck;
};

class PLUGIN_API CStuckCarCheck {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CStuckCarCheck)

public:
    CStuckCarCheckData m_aCars[6];

    SUPPORTED_10EN_11EN_STEAM void AddCarToCheck(int id, float radius, unsigned int time);
    SUPPORTED_10EN_11EN_STEAM bool HasCarBeenStuckForAWhile(int id);
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM void RemoveCarFromCheck(int id);
};

VALIDATE_SIZE(CStuckCarCheckData, 0x20);
VALIDATE_SIZE(CStuckCarCheck, 0xC0);

#include "meta/meta.CStuckCarCheck.h"
