#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

enum eSoundEnvironment : unsigned __int16
{
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

#pragma pack(push, 1)
class PLUGIN_API CAESound
{
public:
	__int16               m_wBankSlotId;
	__int16               m_wSoundIdInSlot;
	class CAEAudioEntity *m_pBaseAudio;
	class CEntity        *m_pPhysicalEntity;
	unsigned __int32      m_dwEvent;
	float                 m_fMaxVolume;
	float                 m_fVolume;
	float                 m_fSoundDistance;
	float                 m_fSpeed;
	float field_20;
	CVector               m_vCurrPosn;
	CVector               m_vPrevPosn;
	__int32               m_dwLastFrameUpdate;
	int                   m_dwCurrTimeUpdate;
	int                   m_dwPrevTimeUpdate;
	float                 m_fCurrCamDist;
	float                 m_fPrevCamDist;
	float                 m_fTimeScale;
	__int8 field_54;
	__int8 field_55;
	union{
		unsigned __int16 m_wEnvironmentFlags;
		struct{
			unsigned __int16 m_bFrontEnd : 1;
			unsigned __int16 m_bUncancellable : 1;
			unsigned __int16 m_bRequestUpdates : 1;
			unsigned __int16 m_bPlayPhysically : 1;
			unsigned __int16 m_bUnpausable : 1;
			unsigned __int16 m_bStartPercentage : 1;
			unsigned __int16 m_bMusicMastered : 1;
			unsigned __int16 m_bLifespanTiedToPhysicalEntity : 1;
			unsigned __int16 m_bUndackable : 1;
			unsigned __int16 m_bUncompressable : 1;
			unsigned __int16 m_bRolledOff : 1;
			unsigned __int16 m_bSmoothDucking : 1;
			unsigned __int16 m_bForcedFront : 1;
		};
	};
	unsigned __int16      m_wIsUsed;
	__int16 field_5A;
	__int16               m_wCurrentPlayPosition;
	__int16 field_5E;
	float                 m_fFinalVolume;
	float                 m_fFrequency;
	__int16               m_wPlayingState;
	__int8 field_6A[2];
	float                 m_fSoundHeadRoom;
	__int16 field_70;
	__int16 field_72;
	
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
#pragma pack(pop)

VALIDATE_SIZE(CAESound, 0x74);