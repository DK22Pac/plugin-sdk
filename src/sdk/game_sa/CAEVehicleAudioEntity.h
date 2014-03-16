#pragma once

#include <plugin/plugin.h>
#include "CAEAudioEntity.h"
#include "cTransmission.h"
#include "CAETwinLoopSoundEntity.h"

#pragma pack(push, 1)
class PLUGIN_API cVehicleParams
{
public:
	UInt32            m_dwVehicleSubclass;
	UInt32            m_dwVehicleClass;
	Int8 field_8;
	Int8 pad1[3];
	Int32 field_C;
	class CVehicle   *m_pVehicle;
	cTransmission    *m_pTransmission;
	UInt32            m_dwModelType;
	Float             m_fVelocity;
	Int16             m_wGasState;
	Int16             m_wBreakState;
	Float             m_fVelocityAbsolute;
	Float             m_fZVelocity;
	Float             m_fVelocityPercentage;
	Int32 field_30;
	Float field_34;
	Int8              m_nCurrentGear;
	Bool              m_bHandbrakeOn;
	Int8 pad2[2];
	Float             m_fVelocityChangingPercentage;
	Float             m_fWheelSpinForAudio;
	UInt16            m_wNumberOfGears;
	UInt8             m_nWheelsOnGround;
	Int8 field_47;
	Int32 field_48;
};
#pragma pack(pop)

VALIDATE_SIZE(cVehicleParams, 0x4C);

#pragma pack(push, 4)
struct PLUGIN_API tVehicleSound
{
	UInt32    m_dwIndex;
	CAESound *m_pSound;
};
#pragma pack(pop)

VALIDATE_SIZE(tVehicleSound, 0x8);

#pragma pack(push, 1)
struct PLUGIN_API tVehicleAudioSettings
{
	Int8  m_nVehicleSoundType;
	Int8 field_1;
	Int16 m_wEngineOnSoundBankId;
	Int16 m_wEngineOffSoundBankId;
	Int8  m_nStereo;
	Int8 field_7;
	Int32 field_8;
	Int32 field_C;
	Int8  m_bHornTon;
	Int8 field_11[3];
	Float m_fHornHigh;
	Int8  m_nDoorSound;
	Int8 field_19;
	Int8  m_nRadioNum;
	Int8  m_nRadioType;
	Int8 field_1C;
	Int8 field_1D[3];
	Float m_fHornVolumeDelta;
};
#pragma pack(pop)

VALIDATE_SIZE(tVehicleAudioSettings, 0x24);

#pragma pack(push, 1)
class PLUGIN_API CAEVehicleAudioEntity : public CAEAudioEntity
{
public:
	Int16 field_7C;
	Int8 field_7E[2];
	tVehicleAudioSettings   m_settings;
	Bool                    m_bEnabled;
	Bool                    m_bPlayerDriver;
	Bool                    m_bPlayerPassenger;
	Bool                    m_bVehicleRadioPaused;
	Bool                    m_bSoundsStopped;
	Int8                    m_nEngineState;
	Int8 field_AA;
	Int8 field_AB;
	Int32 field_AC;
	Bool                    m_bInhibitAccForLowSpeed;
	Int8 field_B1;
	Int16                   m_wRainDropCounter;
	Int16 field_B4;
	Int8 gap_B6[2];
	Int32 field_B8;
	Int8 field_BC;
	Bool                    m_bDisableHeliEngineSounds;
	Int8 field_BE;
	Bool                    m_bSirenOrAlarmPlaying;
	Bool                    m_bHornPlaying;
	Int8 gap_C1[3];
	Float                   m_fSirenVolume;
	Bool                    m_bModelWithSiren;
	Int8 gap_C9[3];
	UInt32                  m_dwBoatHitWaveLastPlayedTime;
	UInt32                  m_dwTimeToInhibitAcc;
	UInt32                  m_dwTimeToInhibitCrz;
	Float                   m_fGeneralVehicleSoundVolume;
	Int16                   m_wEngineDecelerateSoundBankId;
	Int16                   m_wEngineAccelerateSoundBankId;
	Int16                   m_wEngineBankSlotId;
	Int16 field_E2;
	tVehicleSound           m_aEngineSounds[12];
	Int32 field_144;
	Int16 field_148;
	Int16 field_14A;
	Int16 field_14C;
	Int16 field_14E;
	Int32 field_150;
	Int16 field_154;
	Int16                   m_wSkidSoundType;
	CAESound *field_158;
	Int16                   m_wRoadNoiseSoundType;
	Int8 gap_15E[2];
	CAESound               *m_pRoadNoiseSound;
	Int16                   m_wFlatTyreSoundType;
	Int8 gap_166[2];
	CAESound               *m_pFlatTyreSound;
	Int16                   m_wReverseGearSoundType;
	Int8 gap_16E[2];
	CAESound               *m_pReverseGearSound;
	Int8 gap_174[4];
	CAESound               *m_pHornTonSound;
	CAESound               *m_pSirenSound;
	CAESound               *m_pPoliceSirenSound;
	CAETwinLoopSoundEntity  m_skidSound;
	Float field_22C;
	Float field_230;
	Float field_234;
	Float field_238;
	Float field_23C;
	Int32 field_240;
	Bool                    m_bNitroSoundPresent;
	Int8 field_245[3];
	Float field_248;
};
#pragma pack(pop)

VALIDATE_SIZE(CAEVehicleAudioEntity, 0x24C);