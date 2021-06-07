/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CParticle.h"
#include "eParticleObjectType.h"
#include "tParticleType.h"
#include "CVector.h"
#include "CRGBA.h"
#include "RenderWare.h"
#include "CAudioHydrant.h"

class PLUGIN_API CParticleObject : public CPlaceable {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CParticleObject)

public:
    CParticleObject *m_pNext;
    CParticleObject *m_pPrev;
    CParticle *m_pParticle;
    unsigned int m_nRemoveTimer;
    eParticleObjectType m_eType;
    tParticleType m_eParticleType;
    unsigned char m_nNumEffectCycles;
    unsigned char m_nSkipFrames;
    unsigned short m_nFrameCounter;
    unsigned short m_nState;
    CVector m_vecTarget;
    float m_fRandVal;
    float m_fSize;
    CRGBA m_color;
    unsigned char m_bRemove;
    char m_nCreationChance;

    SUPPORTED_10EN_11EN_STEAM static CAudioHydrant(&ms_aAudioHydrants)[8]; // static CAudioHydrant ms_aAudioHydrants[8]
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *&pCloseListHead;
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *&pUnusedListHead;
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *&pFarListHead;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM void RemoveObject();
    SUPPORTED_10EN_11EN_STEAM void UpdateClose();
    SUPPORTED_10EN_11EN_STEAM void UpdateFar();

    SUPPORTED_10EN_11EN_STEAM static CParticleObject *AddObject(unsigned short type, CVector const &pos, unsigned char remove);
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *AddObject(unsigned short type, CVector const &pos, float size, unsigned char remove);
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *AddObject(unsigned short type, CVector const &pos, CVector const &target, float size, unsigned char remove);
    SUPPORTED_10EN_11EN_STEAM static CParticleObject *AddObject(unsigned short type, CVector const &pos, CVector const &target, float size, unsigned int lifeTime, RwRGBA const &color, unsigned char remove);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadParticle(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void MoveToList(CParticleObject **from, CParticleObject **to, CParticleObject *object);
    SUPPORTED_10EN_11EN_STEAM static void RemoveAllParticleObjects();
    SUPPORTED_10EN_11EN_STEAM static void SaveParticle(unsigned char *buffer, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM static void UpdateAll();
};

VTABLE_DESC(CParticleObject, 0x5F8030, 1);
VALIDATE_SIZE(CParticleObject, 0x88);

#include "meta/meta.CParticleObject.h"
