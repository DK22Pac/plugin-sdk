/*
    Plugin-SDK (Grand Theft Auto) header file
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

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"

#pragma pack(push, 1)
class PLUGIN_API CAETwinLoopSoundEntity : public CAEAudioEntity
{
	__int16 m_wBankSlotId;
	__int16 m_wSoundType[2];
	__int8 pad1[2];
	CAEAudioEntity *m_pBaseAudio;
	__int16 field_88;
	__int16 field_8A;
	__int16 field_8C;
	__int16 m_wPlayTimeMin;
	__int16 m_wPlayTimeMax;
	__int8 pad2[2];
	unsigned __int32 m_dwTimeToSwapSounds;
	bool m_bPlayingFirstSound;
	__int8 pad3;
	__int16 m_wStartingPlayPercentage[2]; // 0 - 99 percentage
	__int16 field_9E;
	CAESound *m_apSounds[2];
};
#pragma pack(pop)

VALIDATE_SIZE(CAETwinLoopSoundEntity, 0xA8);