/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVector.h"

class CBulletTrace {
public:
    CVector       m_vecStart;
    CVector       m_vecEnd;
    Bool          m_bExists;
private:
    char _pad19[3];
public:
    int           m_dwCreationTime;
    unsigned int  m_dwLifeTime;
    float         m_fRadius;
    unsigned char m_nTransparency;
private:
    char _pad29[3];
public:

    void Update();
};

VALIDATE_SIZE(CBulletTrace, 0x2C);