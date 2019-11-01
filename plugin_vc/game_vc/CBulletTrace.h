/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CBulletTrace {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBulletTrace)

public:
    CVector m_vecOrigin;
    CVector m_vecTarget;
    bool m_bExist;
private:
    char _pad19[3];
public:
    unsigned int m_nCreationTime;
    unsigned int m_nLifeTime;
    float m_fRadius;
    unsigned char m_nTransparency;
private:
    char _pad29[3];
public:
};

VALIDATE_SIZE(CBulletTrace, 0x2C);

#include "meta/meta.CBulletTrace.h"
