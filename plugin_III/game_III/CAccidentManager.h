/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"

class PLUGIN_API CAccidentManager {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAccidentManager)

public:
    CAccident m_aAccidents[20];

    SUPPORTED_10EN_11EN_STEAM unsigned short CountActiveAccidents();
    SUPPORTED_10EN_11EN_STEAM CAccident *FindNearestAccident(CVector pos, float *distance);
    SUPPORTED_10EN_11EN_STEAM CAccident *GetNextFreeAccident();
    SUPPORTED_10EN_11EN_STEAM void ReportAccident(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM bool UnattendedAccidents();
    SUPPORTED_10EN_11EN_STEAM void Update();
    SUPPORTED_10EN_11EN_STEAM bool WorkToDoForMedics();
};

SUPPORTED_10EN_11EN_STEAM extern CAccidentManager &gAccidentManager;

VALIDATE_SIZE(CAccidentManager, 0xF0);

#include "meta/meta.CAccidentManager.h"
