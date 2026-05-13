/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "FxSystem_c.h"

class PLUGIN_API CFire {
public:
    struct {
        unsigned char bActive : 1;
        unsigned char bCreatedByScript : 1;
        unsigned char bMakesNoise : 1;
        unsigned char bBeingExtinguished : 1;
        unsigned char bFirstGeneration : 1;
    } m_nFlags;
private:
    char _pad0;
public:
    short m_nScriptReferenceIndex;
    CVector m_vecPosition;
    CEntity *m_pEntityTarget;
    CEntity *m_pEntityCreator;
    unsigned int m_nTimeToBurn;
    float m_fStrength;
    char m_nNumGenerationsAllowed;
    unsigned char m_nRemovalDist;
private:
    char _pad1[2];
public:
    FxSystem_c *m_pFxSystem;

    CFire();
    ~CFire();
    void Initialise();
    void CreateFxSysForStrength(RwV3d* point, RwMatrixTag* matrix);
    void Extinguish();
    void ProcessFire();
};
VALIDATE_OFFSET(CFire, m_nFlags, 0x0);
VALIDATE_OFFSET(CFire, m_nScriptReferenceIndex, 0x2);
VALIDATE_OFFSET(CFire, m_vecPosition, 0x4);
VALIDATE_OFFSET(CFire, m_pEntityTarget, 0x10);
VALIDATE_OFFSET(CFire, m_pEntityCreator, 0x14);
VALIDATE_OFFSET(CFire, m_nTimeToBurn, 0x18);
VALIDATE_OFFSET(CFire, m_fStrength, 0x1C);
VALIDATE_OFFSET(CFire, m_nNumGenerationsAllowed, 0x20);
VALIDATE_OFFSET(CFire, m_nRemovalDist, 0x21);
VALIDATE_OFFSET(CFire, m_pFxSystem, 0x24);
VALIDATE_SIZE(CFire, 0x28);