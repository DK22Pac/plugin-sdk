/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CCurrentVehicle {
public:
    class CVehicle *m_pCurrentVehicle;

    //funcs

    CCurrentVehicle();
    void Display();
    void Init();
    void Process();
};

VALIDATE_SIZE(CCurrentVehicle, 0x04);