#pragma once

#include "plbase/PluginBase.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"

#pragma pack(push, 1)
class PLUGIN_API CPedVoice : public CAEAudioEntity
{
public:
	__int8 field_7C[20];
	__int8 field_90;
	__int8 field_91;
	__int16 m_wVoiceType;
	__int16 m_wVoiceID;
	__int16 m_wVoiceGender;
	__int8 field_98;
	__int8 m_bEnableVocalType;
	__int8 m_bMuted;
	__int8 m_nVocalEnableFlag;
	__int8 field_9C;
	__int8 field_9D;
	__int8 field_9E;
	__int8 field_9F;
	CAESound *m_pSound;
	__int16 field_A4;
	__int16 field_A6;
	__int16 field_A8;
	__int16 field_AA;
	float m_fVoiceVolume1;
	__int16 m_wVoiceVolume2;
	__int16 field_B2;
	__int32 field_B4[19];
};
#pragma pack(pop)

VALIDATE_SIZE(CPedVoice, 0x100);