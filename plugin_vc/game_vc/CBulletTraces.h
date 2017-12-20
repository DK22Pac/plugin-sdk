/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CVector.h"
#include "CEntity.h"

#pragma pack(push, 4)
class CBulletTrace {
public:
    CVector m_vStart;
    CVector m_vEnd;
    bool m_bExist;
    unsigned int m_nCreationTime;
    unsigned int m_nLifeTime;
    float m_fRadius;
    unsigned char m_nTransparency;

    CBulletTrace();
};
#pragma pack(pop)

VALIDATE_SIZE(CBulletTrace, 0x2C);

#define MAX_BULLETTRACES 16

class CBulletTraces {
public:
    static CBulletTrace *aTraces; // static CBulletTrace aTraces[16]

    //funcs
    static void AddTrace(CVector* start, CVector* end, float radius, unsigned int time, unsigned char transparency);
    static void AddTrace(CVector* start, CVector* end, int weaponType, CEntity* entity);
    static void Init();
    static void Render();
};
