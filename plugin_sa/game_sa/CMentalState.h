/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskTimer.h"

class PLUGIN_API CMentalState {
public:
    unsigned char m_AngerAtPlayer;
    unsigned char m_LastAngerAtPlayer;

    CTaskTimer m_AngerTimer;

    unsigned char m_pedHealth;
    unsigned char m_oldPedHealth;

    unsigned char m_vehicleHealth;
    unsigned char m_oldVehicleHealth;

public:
    CMentalState() = default;
    ~CMentalState() = default;

    void IncrementAnger(int anger);
    void Process();
};
VALIDATE_SIZE(CMentalState, 0x14);
