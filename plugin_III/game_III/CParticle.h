/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "tParticleType.h"
#include "tParticleSystemData.h"
#include "CMatrix.h"
class CEntity;

class PLUGIN_API CParticle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CParticle)

public:
    CVector m_vecPosition;
    CVector m_vecDirection;
    CVector m_vecScreenPosition;
    int m_nTimeWhenWillBeDestroyed;
    int m_nTimeWhenColorWillBeChanged;
    float m_fZCoord;
    CVector m_vecParticleMovementOffset;
    short m_nCurrentZRotation;
    unsigned short m_nZRotationTimer;
    float m_fCurrentZRadius;
    unsigned short m_nZRadiusTimer;
    float m_fSize;
    float m_fExpansionRate;
    unsigned short m_nFadeToBlackTimer;
    unsigned short m_nFadeAlphaTimer;
    unsigned char m_nColorIntensity;
    unsigned char m_nAlpha;
    unsigned short m_nCurrentFrame;
    short m_nAnimationSpeedTimer;
    short m_nRotationStep;
    short m_nRotation;
    RwRGBA m_color;
    CParticle *m_pNext;

    SUPPORTED_10EN_11EN_STEAM static float(&ms_afRandTable)[20]; // static float ms_afRandTable[20]
    SUPPORTED_10EN_11EN_STEAM static float(&m_CosTable)[1024]; // static float m_CosTable[1024]
    SUPPORTED_10EN_11EN_STEAM static float(&m_SinTable)[1024]; // static float m_SinTable[1024]
    SUPPORTED_10EN_11EN_STEAM static CParticle *&m_pUnusedListHead;

    SUPPORTED_10EN_11EN_STEAM static void AddJetExplosion(CVector const &pos, float power, float size);
    SUPPORTED_10EN_11EN_STEAM static CParticle *AddParticle(tParticleType type, CVector const &pos, CVector const &direction, CEntity *entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static CParticle *AddParticle(tParticleType type, CVector const &pos, CVector const &direction, CEntity *entity, float size, RwRGBA const &color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan);
    SUPPORTED_10EN_11EN_STEAM static void AddYardieDoorSmoke(CVector const &pos, CMatrix const &matrix);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void ReloadConfig();
    SUPPORTED_10EN_11EN_STEAM static void RemovePSystem(tParticleType type);
    SUPPORTED_10EN_11EN_STEAM static void RemoveParticle(CParticle *particle, CParticle *previousParticle, tParticleSystemData *particleSystem);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CParticle(&gParticleArray)[1000]; // CParticle gParticleArray[1000]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpFlame1Tex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpFlame1Raster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpFlame5Tex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpFlame5Raster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpSmokeTex)[5]; // RwTexture *gpSmokeTex[5]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpSmokeRaster)[5]; // RwRaster *gpSmokeRaster[5]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpSmoke2Tex)[5]; // RwTexture *gpSmoke2Tex[5]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpSmoke2Raster)[5]; // RwRaster *gpSmoke2Raster[5]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpGunFlashTex)[4]; // RwTexture *gpGunFlashTex[4]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpGunFlashRaster)[4]; // RwRaster *gpGunFlashRaster[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpBloodTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpBloodRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpPointlightTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpRubberTex)[5]; // RwTexture *gpRubberTex[5]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpRubberRaster)[5]; // RwRaster *gpRubberRaster[5]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpRainSplashTex)[5]; // RwTexture *gpRainSplashTex[5]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpRainSplashRaster)[5]; // RwRaster *gpRainSplashRaster[5]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpWatersprayTex)[3]; // RwTexture *gpWatersprayTex[3]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpWatersprayRaster)[3]; // RwRaster *gpWatersprayRaster[3]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpCarSplashTex)[4]; // RwTexture *gpCarSplashTex[4]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpCarSplashRaster)[4]; // RwRaster *gpCarSplashRaster[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpRainDropSmallTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpRainDropSmallRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpRainSplashupTex)[2]; // RwTexture *gpRainSplashupTex[2]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpRainSplashupRaster)[2]; // RwRaster *gpRainSplashupRaster[2]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpLeafTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpLeafRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpGungeTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpGungeRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpExplosionMediumTex)[6]; // RwTexture *gpExplosionMediumTex[6]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpExplosionMediumRaster)[6]; // RwRaster *gpExplosionMediumRaster[6]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpCloudTex1;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpCloudRaster1;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpCloudTex4;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpCloudRaster4;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpBloodSmallTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpBloodSmallRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpBulletHitTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpBulletHitRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpCollisionSmokeTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpCollisionSmokeRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpCarDebrisTex)[4]; // RwTexture *gpCarDebrisTex[4]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpCarDebrisRaster)[4]; // RwRaster *gpCarDebrisRaster[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpBirdfrontTex)[4]; // RwTexture *gpBirdfrontTex[4]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpBirdfrontRaster)[4]; // RwRaster *gpBirdfrontRaster[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpGunShellTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpGunShellRaster;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpWakeOldTex;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpWakeOldRaster;
SUPPORTED_10EN_11EN_STEAM extern RwRaster *(&gpRainDropRaster)[4]; // RwRaster *gpRainDropRaster[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpRainDropTex)[4]; // RwTexture *gpRainDropTex[4]
SUPPORTED_10EN_11EN_STEAM extern RwRaster *&gpPointlightRaster;

VALIDATE_SIZE(CParticle, 0x68);

#include "meta/meta.CParticle.h"
