/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"

#pragma pack(push, 1)
class PLUGIN_API CWeaponAudio : public CAEAudioEntity
{
public:
	__int8 field_7C;
	__int8 field_7D;
	__int8 field_7E;
	__int8 field_7F;
	__int8 field_80;
	__int8 field_81[3];
	__int32 field_84;
	__int32 field_88;
	__int32 field_8C;
	__int32 field_90;
	__int32 m_dwTimeChainsaw;
	__int32 m_dwTimeLastFired;
	CAESound *m_pSounds;
	__int8 m_bActive;
	__int8 field_A1[3];
	class CPed *m_pPed;
};
#pragma pack(pop)

VALIDATE_SIZE(CWeaponAudio, 0xA8);