/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

/* This class is used to control 2 sounds as one. There are 2 sounds
   created with PlayTwinLoopSound(), and one of them is playing when second
   is simply muted. When time m_dwTimeToSwapSounds is reached, these sounds
   are switched: second starts playing, first begins being muted.
   The time m_dwTimeToSwapSounds is calcualated as:
   CAEAudioUtility::GetRandomNumberInRange(m_wPlayTimeMin, m_wPlayTimeMax);
   Notice these sounds must be situated in same bank slot.
   m_pBaseAudio is a pointer to audio which created twin sound. For example,
   this could be CAEVehicleAudioEntity for playing skid sounds.              */

#include "PluginBase.h"
#include "CAEAudioEntity.h"

class PLUGIN_API CAETwinLoopSoundEntity : public CAEAudioEntity {
public:
    short           m_nBankSlotId;
    short           m_nSoundType[2];
private:
    char _pad1[2];
public:
    CAEAudioEntity *m_pBaseAudio;
    short field_88;
    short field_8A;
    short field_8C;
    short           m_nPlayTimeMin;
    short           m_nPlayTimeMax;
private:
    char _pad2[2];
public:
    unsigned int    m_nTimeToSwapSounds;
    bool            m_bPlayingFirstSound;
private:
    char _pad3;
public:
    short           m_anStartingPlayPercentage[2]; // 0 - 99 percentage
    short field_9E;
    CAESound       *m_apSounds[2];
};
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_nBankSlotId, 0x7C);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_nSoundType, 0x7E);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_pBaseAudio, 0x84);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, field_88, 0x88);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, field_8A, 0x8A);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, field_8C, 0x8C);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_nPlayTimeMin, 0x8E);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_nPlayTimeMax, 0x90);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_nTimeToSwapSounds, 0x94);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_bPlayingFirstSound, 0x98);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_anStartingPlayPercentage, 0x9A);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, field_9E, 0x9E);
VALIDATE_OFFSET(CAETwinLoopSoundEntity, m_apSounds, 0xA0);
VALIDATE_SIZE(CAETwinLoopSoundEntity, 0xA8);
