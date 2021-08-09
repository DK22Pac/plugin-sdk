/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CWindModifier {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CWindModifier)

public:
    CVector m_vecPos;
    int m_nType;
};

VALIDATE_SIZE(CWindModifier, 0x10);

class PLUGIN_API CWindModifiers {
public:
    SUPPORTED_10EN_11EN_STEAM static CWindModifier(&Array)[16]; // static CWindModifier Array[16]
    SUPPORTED_10EN_11EN_STEAM static int &Number;

    SUPPORTED_10EN_11EN_STEAM static bool FindWindModifier(CVector pos, float *x, float *y);
    SUPPORTED_10EN_11EN_STEAM static void RegisterOne(CVector pos, int type);
};

#include "meta/meta.CWindModifiers.h"
