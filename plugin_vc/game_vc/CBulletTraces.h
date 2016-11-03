/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CVector.h"
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CBulletTrace
{
public:
    CVector m_vStart;
    CVector m_vEnd;
    unsigned __int8 m_bExist;
    unsigned __int32 m_dwCreationTime;
    unsigned __int32 m_dwLifeTime;
    float m_fRadius;
    unsigned __int8 m_nTransparency;
};
#pragma pack(pop)

VALIDATE_SIZE(CBulletTrace, 0x2C);

#define MAX_BULLETTRACES 16

class PLUGIN_API CBulletTraces
{
public:
    
    static void AddTrace(CVector* start, CVector* end, float radius, unsigned int time, unsigned char transparency);
    static void AddTrace(CVector* start, CVector* end, int weaponType, CEntity* entity);
    static void Init();
    static void Render();
};