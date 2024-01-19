/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPedFactory.h"

class CControlledByInfo {
public:
    uint8_t m_playerIndex;
    uint8_t m_isPlayer;
    uint8_t field_3;

public:
    CControlledByInfo() = default;

};

class CPedFactoryNY : CPedFactory {
private:
    static CPedFactoryNY*& ms_pInstance;

public:
    CPed* CreatePed(CControlledByInfo const* info, int32_t modelIndex, rage::Matrix44* matrix, bool arg4, bool arg5) {
        return plugin::CallVirtualMethodAndReturn<CPed*, 5>(this, info, modelIndex, matrix, arg4, arg5);
    }

public:
    static CPedFactoryNY* GetInstance() {
        return ms_pInstance;
    }
};

