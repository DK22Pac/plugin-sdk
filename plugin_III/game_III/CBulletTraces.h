/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

#pragma pack(push, 4)
class CBulletTrace {
public:
    CVector m_vecOrigin;
    CVector m_vecTarget;
    bool m_bExist;
    char m_nTimeCounter;
    char m_nIntensity;

    CBulletTrace();
    void Update();
};
#pragma pack(pop)

VALIDATE_SIZE(CBulletTrace, 0x1C);

class CBulletTraces {
public:
    static CBulletTrace *aTraces; // [16]

    static void Update();
    static void Render();
    static void Init();
    static void AddTrace(CVector* origin, CVector* target);
};
