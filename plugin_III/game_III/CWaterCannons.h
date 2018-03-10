/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class CWaterCannon {
public:
    CEntity *m_pCreator;
    short m_nSectionsCount;
    unsigned int m_nCreationTime;
    CVector m_avecPosition[16];
    CVector m_avecMoveSpeed[16];
    unsigned char m_anSectionState[16];

    // functions
    CWaterCannon();
    void Init();
    void PushPeds();
    void Render();
    void Update_NewInput(CVector* posn, CVector* moveSpeed);
    void Update_OncePerFrame(short index);
};

VALIDATE_SIZE(CWaterCannon, 0x19C);

extern RxObjSpace3DVertex *WaterCannonVertices; // [4]
extern unsigned short &WaterCannonIndexList; // [12]

class CWaterCannons {
public:
    // static variables
    static CWaterCannon *aCannons; // [3]

    // static functions
    static void Init();
    static void Render();
    static void Update();
    static void UpdateOne(unsigned int index, CVector* posn, CVector* moveSpeed);
};
