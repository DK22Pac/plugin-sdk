/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

class CSimpleTransform {
public:
    rage::Vector3 m_vPosn;
    float m_fHeading;

public:
    void UpdateMatrix(rage::Matrix44* matrix);
};

VALIDATE_SIZE(CSimpleTransform, 0x10);
