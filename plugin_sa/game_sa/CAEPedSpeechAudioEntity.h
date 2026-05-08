/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"

enum eAudioPedType {
    PED_TYPE_GEN = 0,
    PED_TYPE_EMG = 1,
    PED_TYPE_PLAYER = 2,
    PED_TYPE_GANG = 3,
    PED_TYPE_GFD = 4,
    PED_TYPE_SPC = 5
};

class CPed;

class CAEPedSpeechAudioEntity : public CAEAudioEntity {
public:
	char field_7C[20];
	char field_90;
	char field_91;
	short m_nVoiceType; // see eAudioPedType
	short m_nVoiceID;
	short m_nVoiceGender;
	char field_98;
	bool m_bEnableVocalType;
	bool m_bMuted;
	char m_nVocalEnableFlag;
	char field_9C;
	char field_9D;
	char field_9E;
	char field_9F;
	CAESound *m_pSound;
	short field_A4;
	short field_A6;
	short field_A8;
	short field_AA;
	float m_fVoiceVolume;
	short m_nCurrentPhraseId;
	short field_B2;
	int field_B4[19];

	void Initialise(CPed* ped);
};
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_90, 0x90);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_91, 0x91);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_nVoiceType, 0x92);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_nVoiceID, 0x94);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_nVoiceGender, 0x96);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_98, 0x98);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_bEnableVocalType, 0x99);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_bMuted, 0x9A);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_nVocalEnableFlag, 0x9B);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_9C, 0x9C);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_9D, 0x9D);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_9E, 0x9E);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_9F, 0x9F);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_pSound, 0xA0);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_A4, 0xA4);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_A6, 0xA6);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_A8, 0xA8);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_AA, 0xAA);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_fVoiceVolume, 0xAC);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, m_nCurrentPhraseId, 0xB0);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_B2, 0xB2);
VALIDATE_OFFSET(CAEPedSpeechAudioEntity, field_B4, 0xB4);
VALIDATE_SIZE(CAEPedSpeechAudioEntity, 0x100);