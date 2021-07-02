/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CFallingGlassPane.h"
#include "CEntity.h"

class PLUGIN_API CGlass {
public:
    SUPPORTED_10EN_11EN_STEAM static CFallingGlassPane(&aGlassPanes)[45]; // static CFallingGlassPane aGlassPanes[45]
    SUPPORTED_10EN_11EN_STEAM static CEntity *(&apEntitiesToBeRendered)[32]; // static CEntity *apEntitiesToBeRendered[32]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &NumGlassEntities;

    SUPPORTED_10EN_11EN_STEAM static void AskForObjectToBeRenderedInGlass(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static int CalcAlphaWithNormal(CVector *normal);
    SUPPORTED_10EN_11EN_STEAM static CFallingGlassPane *FindFreePane();
    SUPPORTED_10EN_11EN_STEAM static void GeneratePanesForWindow(unsigned int type, CVector pos, CVector at, CVector right, CVector speed, CVector point, float moveSpeed, bool cracked, bool explosion);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RenderEntityInGlass(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static void RenderHiLightPolys();
    SUPPORTED_10EN_11EN_STEAM static void RenderReflectionPolys();
    SUPPORTED_10EN_11EN_STEAM static void RenderShatteredPolys();
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void WasGlassHitByBullet(CEntity *entity, CVector point);
    SUPPORTED_10EN_11EN_STEAM static void WindowRespondsToCollision(CEntity *entity, float amount, CVector speed, CVector point, bool explosion);
    SUPPORTED_10EN_11EN_STEAM static void WindowRespondsToExplosion(CEntity *entity, CVector point);
    SUPPORTED_10EN_11EN_STEAM static void WindowRespondsToSoftCollision(CEntity *entity, float amount);
};

#include "meta/meta.CGlass.h"
