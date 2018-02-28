/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "eExplosionType.h"

class CExplosion {
public:
    eExplosionType m_nType;
    CVector m_vecPosition;
    float m_fRadius;
    float m_fPropagationRate;
    CEntity *m_pCreator;
    CEntity *m_pVictim;
    int m_nExpireTime;
    bool m_bIsActive;
    unsigned char m_nActiveCounter;
    char field_26;
    char field_27;
    int m_nCreatedTime;
    int m_nParticlesExpireTime;
    float m_fVisibleDistance;
    int m_nFuelTimer;
    float m_fGroundZ;

    static bool AddExplosion(CEntity* victim, CEntity* creator, eExplosionType explosionType, CVector const& posn, unsigned int time);
    CExplosion();
    static unsigned char GetExplosionActiveCounter(unsigned char index);
    static CVector* GetExplosionPosition(unsigned char index);
    static eExplosionType GetExplosionType(unsigned char index);
    static void Initialise();
    static void RemoveAllExplosionsInArea(CVector posn, float radius);
    static void ResetExplosionActiveCounter(unsigned char index);
    static void Shutdown();
    static bool TestForExplosionInArea(eExplosionType explosionType, float x1, float y1, float z1, float x2, float y2, float z2);
    static void Update();
};

VALIDATE_SIZE(CExplosion, 0x3C);

extern CExplosion *gaExplosion; // [48]
