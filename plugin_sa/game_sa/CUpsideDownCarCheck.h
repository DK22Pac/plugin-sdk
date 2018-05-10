/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API CUpsideDownCarCheck {
public:

    struct {
        int m_nCarHandle;
        int field_4;
    } m_aUpsideDownCars[6];

    SUPPORTED_10US void AddCarToCheck(int carHandle);
    //! never used
    SUPPORTED_10US bool AreAnyCarsUpsideDown();
    SUPPORTED_10US char HasCarBeenUpsideDownForAWhile(int carHandle);
    SUPPORTED_10US void Init();
    SUPPORTED_10US void RemoveCarFromCheck(int carHandle);
    SUPPORTED_10US void UpdateTimers();

    SUPPORTED_10US static bool IsCarUpsideDown(CVehicle *pVehicle);
    SUPPORTED_10US static bool IsCarUpsideDown(int carhandle);
};
VALIDATE_SIZE(CUpsideDownCarCheck, 0x30);

#include "meta/meta.CUpsideDownCarCheck.h"
