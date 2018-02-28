/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CMatrix.h"
#include "tParticleType.h"
#include "tParticleSystemData.h"

class CEntity;

class CParticle {
public:
    CVector        m_vecPosition;
    CVector        m_vecDirection;
    CVector        m_vecScreenPosition;
    int            m_nTimeWhenWillBeDestroyed;
    int            m_nTimeWhenColorWillBeChanged;
    float          m_fZCoord;
    CVector        m_vecParticleMovementOffset;
    short          m_nCurrentZRotation;
    short          m_nZRotationTimer;
    float          m_fCurrentZRadius;
    short          m_nZRadiusTimer;
private:
    char _pad46[2];
public:
    float          m_fSize;
    float          m_fExpansionRate;
    short          m_nFadeToBlackTimer;
    short          m_nFadeAlphaTimer;
    unsigned char  m_nColorIntensity;
    unsigned char  m_nAlpha;
    unsigned short m_nCurrentFrame;
    short          m_nAnimationSpeedTimer;
    short          m_nRotationStep;
    short          m_nRotation;
    RwRGBA         m_color;
private:
    char _pad62[2];
public:
    CParticle *m_pNext;

    static void ReloadConfig();
    static void Initialise();
    static void Shutdown();
    static CParticle* AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    static CParticle* AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, RwRGBA const& color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    static void Update();
    static void Render();
    static void RemovePSystem(tParticleType particleType);
    static void RemoveParticle(CParticle* particle, CParticle* previousParticle, tParticleSystemData* particleSystem);
    static void AddJetExplosion(CVector const& posn, float power, float size);
    static void AddYardieDoorSmoke(CVector const& posn, CMatrix const& matrix);
};