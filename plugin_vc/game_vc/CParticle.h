/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"
#include "tParticleSystemData.h"
#include "tParticleType.h"
#include "CEntity.h"

class PLUGIN_API CParticle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CParticle)

public:
    CVector m_vecPosition;
    CVector m_vecDirection;
    int m_nTimeWhenWillBeDestroyed;
    int m_nTimeWhenColorWillBeChanged;
    float m_fZCoord;
    CVector m_vecParticleMovementOffset;
    short m_nCurrentZRotation;
    short m_nZRotationTimer;
    float m_fCurrentZRadius;
    short m_nZRadiusTimer;
    unsigned char m_nFadeToBlackIntensity;
    unsigned char m_nFadeAlphaIntensity;
    float m_fSize;
    float m_fExpansionRate;
    short m_nFadeToBlackFadeAmount;
    short m_nFadeAlphaFadeAmount;
    short field_48;
    short m_nRotationSpeed;
    short m_nRotation;
    unsigned char m_nCurrentFrame;
    RwRGBA m_color;
private:
    char _pad53;
public:
    CParticle *m_pNext;

    SUPPORTED_10EN_11EN_STEAM static float(&ms_afRandTable)[20]; // static float ms_afRandTable[20]
    SUPPORTED_10EN_11EN_STEAM static float(&m_CosTable)[1024]; // static float m_CosTable[1024]
    SUPPORTED_10EN_11EN_STEAM static float(&m_SinTable)[1024]; // static float m_SinTable[1024]
    SUPPORTED_10EN_11EN_STEAM static CParticle *&m_pUnusedListHead;

    SUPPORTED_10EN_11EN_STEAM static void AddJetExplosion(CVector const &posn, float power, float size);
    SUPPORTED_10EN_11EN_STEAM static CParticle *AddParticle(tParticleType particleType, CVector const &posn, CVector const &direction, CEntity *entity, float size, RwRGBA const *color, int rotationSpeed, int rotation, int startFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static CParticle *AddParticle(tParticleType particleType, CVector const &posn, CVector const &direction, CEntity *entity, float size, int rotationSpeed, int rotation, int startFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static void AddParticlesAlongLine(tParticleType particleType, CVector const *lineStart, CVector const *lineEnd, CVector const &direction, float step, CEntity *entity, float size, int rotationSpeed, int rotation, int startFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static void HandleShipsAtHorizonStuff();
    SUPPORTED_10EN_11EN_STEAM static void HandleShootableBirdsStuff(CEntity *entity, CVector const &posn);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void ReloadConfig();
    SUPPORTED_10EN_11EN_STEAM static void RemovePSystem(tParticleType particleType);
    SUPPORTED_10EN_11EN_STEAM static void RemoveParticle(CParticle *particle, CParticle *previousParticle, tParticleSystemData *particleSystsem);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};
VALIDATE_OFFSET(CParticle, m_vecPosition, 0x0);
VALIDATE_OFFSET(CParticle, m_vecDirection, 0xC);
VALIDATE_OFFSET(CParticle, m_nTimeWhenWillBeDestroyed, 0x18);
VALIDATE_OFFSET(CParticle, m_nTimeWhenColorWillBeChanged, 0x1C);
VALIDATE_OFFSET(CParticle, m_fZCoord, 0x20);
VALIDATE_OFFSET(CParticle, m_vecParticleMovementOffset, 0x24);
VALIDATE_OFFSET(CParticle, m_nCurrentZRotation, 0x30);
VALIDATE_OFFSET(CParticle, m_nZRotationTimer, 0x32);
VALIDATE_OFFSET(CParticle, m_fCurrentZRadius, 0x34);
VALIDATE_OFFSET(CParticle, m_nZRadiusTimer, 0x38);
VALIDATE_OFFSET(CParticle, m_nFadeToBlackIntensity, 0x3A);
VALIDATE_OFFSET(CParticle, m_nFadeAlphaIntensity, 0x3B);
VALIDATE_OFFSET(CParticle, m_fSize, 0x3C);
VALIDATE_OFFSET(CParticle, m_fExpansionRate, 0x40);
VALIDATE_OFFSET(CParticle, m_nFadeToBlackFadeAmount, 0x44);
VALIDATE_OFFSET(CParticle, m_nFadeAlphaFadeAmount, 0x46);
VALIDATE_OFFSET(CParticle, field_48, 0x48);
VALIDATE_OFFSET(CParticle, m_nRotationSpeed, 0x4A);
VALIDATE_OFFSET(CParticle, m_nRotation, 0x4C);
VALIDATE_OFFSET(CParticle, m_nCurrentFrame, 0x4E);
VALIDATE_OFFSET(CParticle, m_color, 0x4F);
VALIDATE_OFFSET(CParticle, m_pNext, 0x54);
VALIDATE_SIZE(CParticle, 0x58);

SUPPORTED_10EN_11EN_STEAM extern int &nParticleCreationInterval;
SUPPORTED_10EN_11EN_STEAM extern float &PARTICLE_WIND_TEST_SCALE;
SUPPORTED_10EN_11EN_STEAM extern float &fParticleScaleLimit;
SUPPORTED_10EN_11EN_STEAM extern char *&ParticleFilename;
SUPPORTED_10EN_11EN_STEAM extern CParticle(&gParticles)[750]; // CParticle gParticles[750]
SUPPORTED_10EN_11EN_STEAM extern unsigned int &numWaterDropOnScreen;

VALIDATE_SIZE(CParticle, 0x58);

#include "meta/meta.CParticle.h"
