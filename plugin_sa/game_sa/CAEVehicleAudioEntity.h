/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"
#include "cTransmission.h"
#include "CAETwinLoopSoundEntity.h"

#pragma pack(push, 1)
class PLUGIN_API cVehicleParams
{
public:
	uint32_t            m_dwVehicleSubclass;
	uint32_t            m_dwVehicleClass;
	int8_t field_8;
	int8_t pad1[3];
	int32_t field_C;
	class CVehicle   *m_pVehicle;
	cTransmission    *m_pTransmission;
	uint32_t            m_dwModelType;
	float             m_fVelocity;
	int16_t             m_wGasState;
	int16_t             m_wBreakState;
	float             m_fVelocityAbsolute;
	float             m_fZVelocity;
	float             m_fVelocityPercentage;
	int32_t field_30;
	float field_34;
	int8_t              m_nCurrentGear;
	Bool              m_bHandbrakeOn;
	int8_t pad2[2];
	float             m_fVelocityChangingPercentage;
	float             m_fWheelSpinForAudio;
	uint16_t            m_wNumberOfGears;
	uint8_t             m_nWheelsOnGround;
	int8_t field_47;
	int32_t field_48;
};
#pragma pack(pop)

VALIDATE_SIZE(cVehicleParams, 0x4C);

#pragma pack(push, 4)
struct PLUGIN_API tVehicleSound
{
	uint32_t    m_dwIndex;
	CAESound *m_pSound;
};
#pragma pack(pop)

VALIDATE_SIZE(tVehicleSound, 0x8);

#pragma pack(push, 1)
struct PLUGIN_API tVehicleAudioSettings
{
	int8_t  m_nVehicleSoundType;
	int8_t field_1;
	int16_t m_wEngineOnSoundBankId;
	int16_t m_wEngineOffSoundBankId;
	int8_t  m_nStereo;
	int8_t field_7;
	int32_t field_8;
	int32_t field_C;
	int8_t  m_bHornTon;
	int8_t field_11[3];
	float m_fHornHigh;
	int8_t  m_nDoorSound;
	int8_t field_19;
	int8_t  m_nRadioNum;
	int8_t  m_nRadioType;
	int8_t field_1C;
	int8_t field_1D[3];
	float m_fHornVolumeDelta;
};
#pragma pack(pop)

VALIDATE_SIZE(tVehicleAudioSettings, 0x24);

#pragma pack(push, 1)
class PLUGIN_API CAEVehicleAudioEntity : public CAEAudioEntity
{
public:
	int16_t field_7C;
	int8_t field_7E[2];
	tVehicleAudioSettings   m_settings;
	Bool                    m_bEnabled;
	Bool                    m_bPlayerDriver;
	Bool                    m_bPlayerPassenger;
	Bool                    m_bVehicleRadioPaused;
	Bool                    m_bSoundsStopped;
	int8_t                    m_nEngineState;
	int8_t field_AA;
	int8_t field_AB;
	int32_t field_AC;
	Bool                    m_bInhibitAccForLowSpeed;
	int8_t field_B1;
	int16_t                   m_wRainDropCounter;
	int16_t field_B4;
	int8_t gap_B6[2];
	int32_t field_B8;
	int8_t field_BC;
	Bool                    m_bDisableHeliEngineSounds;
	int8_t field_BE;
	Bool                    m_bSirenOrAlarmPlaying;
	Bool                    m_bHornPlaying;
	int8_t gap_C1[3];
	float                   m_fSirenVolume;
	Bool                    m_bModelWithSiren;
	int8_t gap_C9[3];
	uint32_t                  m_dwBoatHitWaveLastPlayedTime;
	uint32_t                  m_dwTimeToInhibitAcc;
	uint32_t                  m_dwTimeToInhibitCrz;
	float                   m_fGeneralVehicleSoundVolume;
	int16_t                   m_wEngineDecelerateSoundBankId;
	int16_t                   m_wEngineAccelerateSoundBankId;
	int16_t                   m_wEngineBankSlotId;
	int16_t field_E2;
	tVehicleSound           m_aEngineSounds[12];
	int32_t field_144;
	int16_t field_148;
	int16_t field_14A;
	int16_t field_14C;
	int16_t field_14E;
	int32_t field_150;
	int16_t field_154;
	int16_t                   m_wSkidSoundType;
	CAESound *field_158;
	int16_t                   m_wRoadNoiseSoundType;
	int8_t gap_15E[2];
	CAESound               *m_pRoadNoiseSound;
	int16_t                   m_wFlatTyreSoundType;
	int8_t gap_166[2];
	CAESound               *m_pFlatTyreSound;
	int16_t                   m_wReverseGearSoundType;
	int8_t gap_16E[2];
	CAESound               *m_pReverseGearSound;
	int8_t gap_174[4];
	CAESound               *m_pHornTonSound;
	CAESound               *m_pSirenSound;
	CAESound               *m_pPoliceSirenSound;
	CAETwinLoopSoundEntity  m_skidSound;
	float field_22C;
	float field_230;
	float field_234;
	float field_238;
	float field_23C;
	int32_t field_240;
	Bool                    m_bNitroSoundPresent;
	int8_t field_245[3];
	float field_248;
};
#pragma pack(pop)

VALIDATE_SIZE(CAEVehicleAudioEntity, 0x24C);