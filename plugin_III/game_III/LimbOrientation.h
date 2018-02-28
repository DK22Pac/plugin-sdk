/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct LimbOrientation {
    float m_fYaw;
    float m_fPitch;
};

VALIDATE_SIZE(LimbOrientation, 8);

struct LimbMovementInfo {
    float maxYaw;
    float minYaw;
    float yawD;
    float maxPitch;
    float minPitch;
    float pitchD;
};
VALIDATE_SIZE(LimbMovementInfo, 0x18);