/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CBulletTrace.h"

class CBulletTraces {
public:
    static CBulletTrace *aTraces; // static CBulletTrace aTraces[16]

    //funcs
    static void Update();
    static void Render();
    static void Init();
    static void AddTrace(CVector* origin, CVector* target);
};

extern unsigned int MAX_NUM_BULLETTRACES; // default 16
