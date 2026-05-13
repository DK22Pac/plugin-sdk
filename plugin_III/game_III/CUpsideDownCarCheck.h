/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API UpsideDownCarsData {
    int m_nVehicleIndex;
    unsigned int m_nUpsideDownTimer;
};
VALIDATE_OFFSET(UpsideDownCarsData, m_nVehicleIndex, 0x0);
VALIDATE_OFFSET(UpsideDownCarsData, m_nUpsideDownTimer, 0x4);
VALIDATE_SIZE(UpsideDownCarsData, 0x8);

class PLUGIN_API CUpsideDownCarCheck {
public:
    UpsideDownCarsData m_aCars[6];

    SUPPORTED_10EN_11EN_STEAM void AddCarToCheck(int id);
    SUPPORTED_10EN_11EN_STEAM bool AreAnyCarsUpsideDown();
    SUPPORTED_10EN_11EN_STEAM bool HasCarBeenUpsideDownForAWhile(int id);
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM bool IsCarUpsideDown(int id);
    SUPPORTED_10EN_11EN_STEAM void RemoveCarFromCheck(int id);
    SUPPORTED_10EN_11EN_STEAM void UpdateTimers();
};
VALIDATE_OFFSET(CUpsideDownCarCheck, m_aCars, 0x0);
VALIDATE_SIZE(CUpsideDownCarCheck, 0x30);

#include "meta/meta.CUpsideDownCarCheck.h"
