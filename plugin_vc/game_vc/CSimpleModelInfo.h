/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBaseModelInfo.h"

class CSimpleModelInfo : public CBaseModelInfo {
public:
    RpAtomic         *m_apAtomics[2];
    union {
        CSimpleModelInfo *m_pLodModelInfo;
        int m_nWeaponType;
    };
    float         m_afLodDistances[2];
    float         m_fLodModelDistance;
    unsigned char m_nNumAtomics;
    unsigned char m_nVisibility; // 0 - invisible, 255 - fully visible
    struct {
        unsigned short nMainAtomic : 2;
        unsigned short bIsRoad : 1;
        unsigned short b04 : 1; // bDamagable?
        unsigned short bIsBigBuilding : 1;
        unsigned short bDoNotFade : 1;
        unsigned short bDrawLast : 1;
        unsigned short bAdditiveRender : 1;
        unsigned short bIsSubway : 1;
        unsigned short bIgnoreLighting : 1;
        unsigned short bNoZbufferWrite : 1;
        unsigned short bDoNotReceiveShadows : 1;
        unsigned short bIgnoreDrawDistance : 1;
        unsigned short nGlassType : 2;
    } m_nFlags;

    //vtable

    void SetAtomic(int atomicIndex, RpAtomic* atomic);

    //funcs

    RpAtomic* GetAtomicFromDistance(float distance);
    float GetLargestLodDistance();
    RpAtomic* GetLastAtomic(float distance);
    float GetLodDistance(int lodIndex);
    void Init();
    void SetLodDistances(float* distances);
    void SetupBigBuilding(int minLineIndex, int maxLineIndex);
};

VALIDATE_SIZE(CSimpleModelInfo, 0x44);

struct SimpleModelStore {
    unsigned int m_nCount;
    CSimpleModelInfo m_sObject[3885];

    ~SimpleModelStore();
};
