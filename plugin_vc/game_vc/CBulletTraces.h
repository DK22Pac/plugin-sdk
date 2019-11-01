/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CEntity.h"
#include "CBulletTrace.h"

class PLUGIN_API CBulletTraces {
public:
    SUPPORTED_10EN_11EN static CBulletTrace(&aTraces)[16]; // static CBulletTrace aTraces[16]

    SUPPORTED_10EN_11EN static void AddTrace(CVector *origin, CVector *target, float radius, unsigned int time, unsigned char transparency);
    SUPPORTED_10EN_11EN static void AddTrace(CVector *origin, CVector *target, int weaponType, CEntity *entity);
    SUPPORTED_10EN_11EN static void Init();
    SUPPORTED_10EN_11EN static void Render();
};

#include "meta/meta.CBulletTraces.h"
