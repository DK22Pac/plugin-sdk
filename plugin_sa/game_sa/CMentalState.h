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
VALIDATE_OFFSET(CMentalState, m_AngerAtPlayer, 0x0);
VALIDATE_OFFSET(CMentalState, m_LastAngerAtPlayer, 0x1);
VALIDATE_OFFSET(CMentalState, m_AngerTimer, 0x4);
VALIDATE_OFFSET(CMentalState, m_pedHealth, 0x10);
VALIDATE_OFFSET(CMentalState, m_oldPedHealth, 0x11);
VALIDATE_OFFSET(CMentalState, m_vehicleHealth, 0x12);
VALIDATE_OFFSET(CMentalState, m_oldVehicleHealth, 0x13);
VALIDATE_SIZE(CMentalState, 0x14);
