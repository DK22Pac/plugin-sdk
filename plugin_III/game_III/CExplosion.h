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
VALIDATE_OFFSET(CExplosion, m_nType, 0x0);
VALIDATE_OFFSET(CExplosion, m_vecPosition, 0x4);
VALIDATE_OFFSET(CExplosion, m_fRadius, 0x10);
VALIDATE_OFFSET(CExplosion, m_fPropagationRate, 0x14);
VALIDATE_OFFSET(CExplosion, m_pCreator, 0x18);
VALIDATE_OFFSET(CExplosion, m_pVictim, 0x1C);
VALIDATE_OFFSET(CExplosion, m_nExpireTime, 0x20);
VALIDATE_OFFSET(CExplosion, m_bIsActive, 0x24);
VALIDATE_OFFSET(CExplosion, m_nActiveCounter, 0x25);
VALIDATE_OFFSET(CExplosion, field_26, 0x26);
VALIDATE_OFFSET(CExplosion, field_27, 0x27);
VALIDATE_OFFSET(CExplosion, m_nCreatedTime, 0x28);
VALIDATE_OFFSET(CExplosion, m_nParticlesExpireTime, 0x2C);
VALIDATE_OFFSET(CExplosion, m_fVisibleDistance, 0x30);
VALIDATE_OFFSET(CExplosion, m_nFuelTimer, 0x34);
VALIDATE_OFFSET(CExplosion, m_fGroundZ, 0x38);
VALIDATE_SIZE(CExplosion, 0x3C);

extern CExplosion *gaExplosion; // [48]
