/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CPolyBunch {
public:
    CVector m_avecPosn[7];
    void *m_pNext;
    unsigned short m_wNumVerts;
    char m_aU[7];
    char m_aV[7];
};
VALIDATE_OFFSET(CPolyBunch, m_avecPosn, 0x0);
VALIDATE_OFFSET(CPolyBunch, m_pNext, 0x54);
VALIDATE_OFFSET(CPolyBunch, m_wNumVerts, 0x58);
VALIDATE_OFFSET(CPolyBunch, m_aU, 0x5A);
VALIDATE_OFFSET(CPolyBunch, m_aV, 0x61);
VALIDATE_SIZE(CPolyBunch, 0x68);