/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"

class CBulletTrace {
public:
    CVector m_vecOrigin;
    CVector m_vecTarget;
    bool m_bExist;
    char m_nTimeCounter;
    char m_nIntensity;
private:
    char _pad1B;
public:
    
    //funcs
    CBulletTrace();
    void Update();
};

VALIDATE_SIZE(CBulletTrace, 0x1C);
