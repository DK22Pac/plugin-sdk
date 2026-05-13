/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEAudioEntity.h"
#include "cTransmission.h"
#include "CAETwinLoopSoundEntity.h"
#include "eRadioID.h"

enum eVehicleSoundType : char
{
    VEHICLE_SOUND_CAR = 0x0,
    VEHICLE_SOUND_MOTORCYCLE = 0x1,
    VEHICLE_SOUND_BICYCLE = 0x2,
    VEHICLE_SOUND_BOAT = 0x3,
    VEHICLE_SOUND_HELI = 0x4,
    VEHICLE_SOUND_PLANE = 0x5,
    VEHICLE_SOUND_NON_VEH = 0x6,
    VEHICLE_SOUND_USED_BY_NONE_VEH = 0x7,
    VEHICLE_SOUND_TRAIN = 0x8,
    VEHICLE_SOUND_TRAILER = 0x9,
    VEHICLE_SOUND_SPECIAL = 0xA,
};

enum eRadioType : char
{
    RADIO_CIVILIAN = 0x0,
    RADIO_SPECIAL = 0x1,
    RADIO_UNKNOWN = 0x2,
    RADIO_EMERGENCY = 0x3,
    RADIO_DISABLED = -1,
};

struct PLUGIN_API tEngineDummySlot {
    short m_nBankId;
    short m_nUsageCount;
};
VALIDATE_OFFSET(tEngineDummySlot, m_nBankId, 0x0);
VALIDATE_OFFSET(tEngineDummySlot, m_nUsageCount, 0x2);
VALIDATE_SIZE(tEngineDummySlot, 0x4);

class PLUGIN_API cVehicleParams {
public:
    unsigned int    m_nVehicleSubclass;
    unsigned int    m_nVehicleClass;
    char field_8;
    char pad1[3];
    int field_C;
    class CVehicle       *m_pVehicle;
    cTransmission  *m_pTransmission;
    unsigned int    m_nModelType;
    float           m_fVelocity;
    short           m_nGasState;
    short           m_nBreakState;
    float           m_fVelocityAbsolute;
    float           m_fZVelocity;
    float           m_fVelocityPercentage;
    int field_30;
    float field_34;
    char            m_nCurrentGear;
    bool            m_bHandbrakeOn;
    char pad2[2];
    float           m_fVelocityChangingPercentage;
    float           m_fWheelSpinForAudio;
    unsigned short  m_nNumberOfGears;
    unsigned char   m_nWheelsOnGround;
    char field_47;
    int field_48;
};
VALIDATE_OFFSET(cVehicleParams, m_nVehicleSubclass, 0x0);
VALIDATE_OFFSET(cVehicleParams, m_nVehicleClass, 0x4);
VALIDATE_OFFSET(cVehicleParams, field_8, 0x8);
VALIDATE_OFFSET(cVehicleParams, pad1, 0x9);
VALIDATE_OFFSET(cVehicleParams, field_C, 0xC);
VALIDATE_OFFSET(cVehicleParams, m_pVehicle, 0x10);
VALIDATE_OFFSET(cVehicleParams, m_pTransmission, 0x14);
VALIDATE_OFFSET(cVehicleParams, m_nModelType, 0x18);
VALIDATE_OFFSET(cVehicleParams, m_fVelocity, 0x1C);
VALIDATE_OFFSET(cVehicleParams, m_nGasState, 0x20);
VALIDATE_OFFSET(cVehicleParams, m_nBreakState, 0x22);
VALIDATE_OFFSET(cVehicleParams, m_fVelocityAbsolute, 0x24);
VALIDATE_OFFSET(cVehicleParams, m_fZVelocity, 0x28);
VALIDATE_OFFSET(cVehicleParams, m_fVelocityPercentage, 0x2C);
VALIDATE_OFFSET(cVehicleParams, field_30, 0x30);
VALIDATE_OFFSET(cVehicleParams, field_34, 0x34);
VALIDATE_OFFSET(cVehicleParams, m_nCurrentGear, 0x38);
VALIDATE_OFFSET(cVehicleParams, m_bHandbrakeOn, 0x39);
VALIDATE_OFFSET(cVehicleParams, pad2, 0x3A);
VALIDATE_OFFSET(cVehicleParams, m_fVelocityChangingPercentage, 0x3C);
VALIDATE_OFFSET(cVehicleParams, m_fWheelSpinForAudio, 0x40);
VALIDATE_OFFSET(cVehicleParams, m_nNumberOfGears, 0x44);
VALIDATE_OFFSET(cVehicleParams, m_nWheelsOnGround, 0x46);
VALIDATE_OFFSET(cVehicleParams, field_47, 0x47);
VALIDATE_OFFSET(cVehicleParams, field_48, 0x48);
VALIDATE_SIZE(cVehicleParams, 0x4C);

struct PLUGIN_API tVehicleSound {
    unsigned int  m_nIndex;
    CAESound     *m_pSound;
};
VALIDATE_OFFSET(tVehicleSound, m_nIndex, 0x0);
VALIDATE_OFFSET(tVehicleSound, m_pSound, 0x4);
VALIDATE_SIZE(tVehicleSound, 0x8);

struct PLUGIN_API tVehicleAudioSettings {
    eVehicleSoundType  m_nVehicleSoundType;
    char _pad;
    short m_nEngineOnSoundBankId;
    short m_nEngineOffSoundBankId;
    char  m_nBassSetting;   // m_nStereo
    char _pad1;
    float m_fBassEq;
    float field_C;
    char  m_bHornTon;   // sfx id
    char _pad2[3];
    float m_fHornHigh;
    char  m_nDoorSound;
    char field_19;
    eRadioID m_nRadioID;
    eRadioType m_nRadioType;
    char vehTypeForAudio;
    char _pad4[3];
    float m_fHornVolumeDelta;
};
VALIDATE_OFFSET(tVehicleAudioSettings, m_nVehicleSoundType, 0x0);
VALIDATE_OFFSET(tVehicleAudioSettings, _pad, 0x1);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nEngineOnSoundBankId, 0x2);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nEngineOffSoundBankId, 0x4);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nBassSetting, 0x6);
VALIDATE_OFFSET(tVehicleAudioSettings, _pad1, 0x7);
VALIDATE_OFFSET(tVehicleAudioSettings, m_fBassEq, 0x8);
VALIDATE_OFFSET(tVehicleAudioSettings, field_C, 0xC);
VALIDATE_OFFSET(tVehicleAudioSettings, m_bHornTon, 0x10);
VALIDATE_OFFSET(tVehicleAudioSettings, _pad2, 0x11);
VALIDATE_OFFSET(tVehicleAudioSettings, m_fHornHigh, 0x14);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nDoorSound, 0x18);
VALIDATE_OFFSET(tVehicleAudioSettings, field_19, 0x19);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nRadioID, 0x1A);
VALIDATE_OFFSET(tVehicleAudioSettings, m_nRadioType, 0x1B);
VALIDATE_OFFSET(tVehicleAudioSettings, vehTypeForAudio, 0x1C);
VALIDATE_OFFSET(tVehicleAudioSettings, _pad4, 0x1D);
VALIDATE_OFFSET(tVehicleAudioSettings, m_fHornVolumeDelta, 0x20);
VALIDATE_SIZE(tVehicleAudioSettings, 0x24);

class CPed;

class PLUGIN_API CAEVehicleAudioEntity : public CAEAudioEntity {
public:
    short field_7C;
    char field_7E[2];
    tVehicleAudioSettings   m_settings;
    bool                    m_bEnabled;
    bool                    m_bPlayerDriver;
    bool                    m_bPlayerPassenger;
    bool                    m_bVehicleRadioPaused;
    bool                    m_bSoundsStopped;
    char                    m_nEngineState;
    char field_AA;
    char field_AB;
    int field_AC;
    bool                    m_bInhibitAccForLowSpeed;
    char field_B1;
    short                   m_nRainDropCounter;
    short field_B4;
    char gap_B6[2];
    int field_B8;
    char field_BC;
    bool                    m_bDisableHeliEngineSounds;
    char field_BE;
    bool                    m_bSirenOrAlarmPlaying;
    bool                    m_bHornPlaying;
    char gap_C1[3];
    float                   m_fSirenVolume;
    bool                    m_bModelWithSiren;
    char gap_C9[3];
    unsigned int            m_nBoatHitWaveLastPlayedTime;
    unsigned int            m_nTimeToInhibitAcc;
    unsigned int            m_nTimeToInhibitCrz;
    float                   m_fGeneralVehicleSoundVolume;
    short                   m_nEngineDecelerateSoundBankId;
    short                   m_nEngineAccelerateSoundBankId;
    short                   m_nEngineBankSlotId;
    short field_E2;
    tVehicleSound           m_aEngineSounds[12];
    int field_144;
    short field_148;
    short field_14A;
    short field_14C;
    short field_14E;
    int field_150;
    short field_154;
    short                   m_nSkidSoundType;
    CAESound *field_158;
    short                   m_nRoadNoiseSoundType;
    char gap_15E[2];
    CAESound               *m_pRoadNoiseSound;
    short                   m_nFlatTyreSoundType;
    char gap_166[2];
    CAESound               *m_pFlatTyreSound;
    short                   m_nReverseGearSoundType;
    char gap_16E[2];
    CAESound               *m_pReverseGearSound;
    char gap_174[4];
    CAESound               *m_pHornTonSound;
    CAESound               *m_pSirenSound;
    CAESound               *m_pPoliceSirenSound;
    CAETwinLoopSoundEntity  m_skidSound;
    float field_22C;
    float field_230;
    float field_234;
    float field_238;
    float field_23C;
    int field_240;
    bool                    m_bNitroSoundPresent;
    char field_245[3];
    float field_248;

    SUPPORTED_10US static CPed *&s_pPlayerAttachedForRadio;
    SUPPORTED_10US static CPed *&s_pPlayerDriver;
    SUPPORTED_10US static bool &s_HelicoptorsDisabled;
    SUPPORTED_10US static short &s_NextDummyEngineSlot;
    SUPPORTED_10US static tVehicleAudioSettings *&s_pVehicleAudioSettingsForRadio;
    SUPPORTED_10US static tEngineDummySlot(&s_DummyEngineSlots)[10]; // static tEngineDummySlot s_DummyEngineSlots[10]
};
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_7E, 0x7E);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_settings, 0x80);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bEnabled, 0xA4);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bPlayerDriver, 0xA5);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bPlayerPassenger, 0xA6);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bVehicleRadioPaused, 0xA7);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bSoundsStopped, 0xA8);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nEngineState, 0xA9);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_AA, 0xAA);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_AB, 0xAB);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_AC, 0xAC);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bInhibitAccForLowSpeed, 0xB0);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_B1, 0xB1);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nRainDropCounter, 0xB2);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_B4, 0xB4);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_B6, 0xB6);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_B8, 0xB8);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_BC, 0xBC);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bDisableHeliEngineSounds, 0xBD);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_BE, 0xBE);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bSirenOrAlarmPlaying, 0xBF);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bHornPlaying, 0xC0);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_C1, 0xC1);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_fSirenVolume, 0xC4);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bModelWithSiren, 0xC8);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_C9, 0xC9);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nBoatHitWaveLastPlayedTime, 0xCC);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nTimeToInhibitAcc, 0xD0);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nTimeToInhibitCrz, 0xD4);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_fGeneralVehicleSoundVolume, 0xD8);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nEngineDecelerateSoundBankId, 0xDC);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nEngineAccelerateSoundBankId, 0xDE);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nEngineBankSlotId, 0xE0);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_E2, 0xE2);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_aEngineSounds, 0xE4);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_144, 0x144);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_148, 0x148);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_14A, 0x14A);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_14C, 0x14C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_14E, 0x14E);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_150, 0x150);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_154, 0x154);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nSkidSoundType, 0x156);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_158, 0x158);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nRoadNoiseSoundType, 0x15C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_15E, 0x15E);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pRoadNoiseSound, 0x160);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nFlatTyreSoundType, 0x164);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_166, 0x166);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pFlatTyreSound, 0x168);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_nReverseGearSoundType, 0x16C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_16E, 0x16E);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pReverseGearSound, 0x170);
VALIDATE_OFFSET(CAEVehicleAudioEntity, gap_174, 0x174);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pHornTonSound, 0x178);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pSirenSound, 0x17C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_pPoliceSirenSound, 0x180);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_skidSound, 0x184);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_22C, 0x22C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_230, 0x230);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_234, 0x234);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_238, 0x238);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_23C, 0x23C);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_240, 0x240);
VALIDATE_OFFSET(CAEVehicleAudioEntity, m_bNitroSoundPresent, 0x244);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_245, 0x245);
VALIDATE_OFFSET(CAEVehicleAudioEntity, field_248, 0x248);
VALIDATE_SIZE(CAEVehicleAudioEntity, 0x24C);

// indexes = (Vehicles modelid - 400)
SUPPORTED_10US extern tVehicleAudioSettings const(&gVehicleAudioSettings)[232]; // tVehicleAudioSettings gVehicleAudioSettings[232]
