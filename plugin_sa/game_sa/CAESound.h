/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

enum PLUGIN_API eSoundEnvironment : unsigned short {
    SOUND_FRONT_END = 1,
    SOUND_UNCANCELLABLE = 2,
    SOUND_REQUEST_UPDATES = 4,
    SOUND_PLAY_PHYSICALLY = 8,
    SOUND_UNPAUSABLE = 16,
    SOUND_START_PERCENTAGE = 32,
    SOUND_MUSIC_MASTERED = 64,
    SOUND_LIFESPAN_TIED_TO_PHYSICAL_ENTITY = 128,
    SOUND_UNDUCKABLE = 256,
    SOUND_UNCOMPRESSABLE = 512,
    SOUND_ROLLED_OFF = 1024,
    SOUND_SMOOTH_DUCKING = 2048,
    SOUND_FORCED_FRONT = 4096
};

class PLUGIN_API CAESound {
public:
    short                 m_nBankSlotId;
    short                 m_nSoundIdInSlot;
    class CAEAudioEntity *m_pBaseAudio;
    class CEntity        *m_pPhysicalEntity;
    unsigned int          m_nEvent;
    float                 m_fMaxVolume;
    float                 m_fVolume;
    float                 m_fSoundDistance;
    float                 m_fSpeed;
    float field_20;
    CVector               m_vecCurrPosn;
    CVector               m_vecPrevPosn;
    int                   m_nLastFrameUpdate;
    int                   m_nCurrTimeUpdate;
    int                   m_nPrevTimeUpdate;
    float                 m_fCurrCamDist;
    float                 m_fPrevCamDist;
    float                 m_fTimeScale;
    char field_54;
    char field_55;
    union {
        unsigned short m_nEnvironmentFlags;
        struct {
            unsigned short m_bFrontEnd : 1;
            unsigned short m_bUncancellable : 1;
            unsigned short m_bRequestUpdates : 1;
            unsigned short m_bPlayPhysically : 1;
            unsigned short m_bUnpausable : 1;
            unsigned short m_bStartPercentage : 1;
            unsigned short m_bMusicMastered : 1;
            unsigned short m_bLifespanTiedToPhysicalEntity : 1;
            unsigned short m_bUndackable : 1;
            unsigned short m_bUncompressable : 1;
            unsigned short m_bRolledOff : 1;
            unsigned short m_bSmoothDucking : 1;
            unsigned short m_bForcedFront : 1;
        };
    };
    unsigned short        m_nIsUsed;
    short field_5A;
    short                 m_nCurrentPlayPosition;
    short field_5E;
    float                 m_fFinalVolume;
    float                 m_fFrequency;
    short                 m_nPlayingState;
    char field_6A[2];
    float                 m_fSoundHeadRoom;
    short m_nSoundLength;
    short field_72;

    CAESound();
    CAESound(CAESound& sound);
    CAESound(short bankSlotId, short sfxId, CAEAudioEntity *baseAudio, CVector posn, float volume,
        float maxDistance, float speed, float timeScale, unsigned char arg9,
        unsigned short environmentFlags, float arg11);
    ~CAESound();
    void operator=(CAESound& sound);
    void UnregisterWithPhysicalEntity();
    void StopSound();
    bool GetUncancellable();
    bool GetFrontEnd();
    bool GetRequestUpdates();
    bool GetUnpausable();
    bool GetPlayPhysically();
    bool GetStartPercentage();
    bool GetMusicMastered();
    bool GetLifespanTiedToPhysicalEntity();
    bool GetUnduckable();
    bool GetUncompressable();
    bool GetRolledOff();
    bool GetSmoothDucking();
    bool GetForcedFront();
    void SetIndividualEnvironment(unsigned short environment, unsigned short state);
    void UpdatePlayTime(short arg1, short arg2, short arg3);
    void GetRelativePosition(CVector *outPosn);
    void CalculateFrequency();
    void UpdateFrequency();
    float GetRelativePlaybackFrequencyWithDoppler();
    float GetSlowMoFrequencyScalingFactor();
    void NewVPSLentry();
    void RegisterWithPhysicalEntity(CEntity *entity);
    void StopSoundAndForget();
    void SetPosition(CVector posn);
    void CalculateVolume();
    void Initialise(short bankSlotId, short sfxId, CAEAudioEntity *baseAudio, CVector posn,
        float volume, float maxDistance, float speed, float timeScale, unsigned char arg9,
        unsigned short environmentFlags, float arg11, short currPlayPosn);
    void UpdateParameters(short arg1);
};
VALIDATE_OFFSET(CAESound, m_nBankSlotId, 0x0);
VALIDATE_OFFSET(CAESound, m_nSoundIdInSlot, 0x2);
VALIDATE_OFFSET(CAESound, m_pBaseAudio, 0x4);
VALIDATE_OFFSET(CAESound, m_pPhysicalEntity, 0x8);
VALIDATE_OFFSET(CAESound, m_nEvent, 0xC);
VALIDATE_OFFSET(CAESound, m_fMaxVolume, 0x10);
VALIDATE_OFFSET(CAESound, m_fVolume, 0x14);
VALIDATE_OFFSET(CAESound, m_fSoundDistance, 0x18);
VALIDATE_OFFSET(CAESound, m_fSpeed, 0x1C);
VALIDATE_OFFSET(CAESound, field_20, 0x20);
VALIDATE_OFFSET(CAESound, m_vecCurrPosn, 0x24);
VALIDATE_OFFSET(CAESound, m_vecPrevPosn, 0x30);
VALIDATE_OFFSET(CAESound, m_nLastFrameUpdate, 0x3C);
VALIDATE_OFFSET(CAESound, m_nCurrTimeUpdate, 0x40);
VALIDATE_OFFSET(CAESound, m_nPrevTimeUpdate, 0x44);
VALIDATE_OFFSET(CAESound, m_fCurrCamDist, 0x48);
VALIDATE_OFFSET(CAESound, m_fPrevCamDist, 0x4C);
VALIDATE_OFFSET(CAESound, m_fTimeScale, 0x50);
VALIDATE_OFFSET(CAESound, field_54, 0x54);
VALIDATE_OFFSET(CAESound, field_55, 0x55);
VALIDATE_OFFSET(CAESound, m_nEnvironmentFlags, 0x56);
VALIDATE_OFFSET(CAESound, m_nIsUsed, 0x58);
VALIDATE_OFFSET(CAESound, field_5A, 0x5A);
VALIDATE_OFFSET(CAESound, m_nCurrentPlayPosition, 0x5C);
VALIDATE_OFFSET(CAESound, field_5E, 0x5E);
VALIDATE_OFFSET(CAESound, m_fFinalVolume, 0x60);
VALIDATE_OFFSET(CAESound, m_fFrequency, 0x64);
VALIDATE_OFFSET(CAESound, m_nPlayingState, 0x68);
VALIDATE_OFFSET(CAESound, field_6A, 0x6A);
VALIDATE_OFFSET(CAESound, m_fSoundHeadRoom, 0x6C);
VALIDATE_OFFSET(CAESound, m_nSoundLength, 0x70);
VALIDATE_OFFSET(CAESound, field_72, 0x72);
VALIDATE_SIZE(CAESound, 0x74);
