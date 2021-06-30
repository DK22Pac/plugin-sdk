/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eAudioType.h"
#include "eCrimeType.h"
#include "cAudioScriptObject.h"
#include "CEntity.h"

class PLUGIN_API cDMAudio {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(cDMAudio)
public:

    SUPPORTED_10EN_11EN_STEAM void ChangeMusicMode(unsigned char mode);
    SUPPORTED_10EN_11EN_STEAM bool CheckForAnAudioFileOnCD();
    SUPPORTED_10EN_11EN_STEAM void ClearMissionAudio();
    SUPPORTED_10EN_11EN_STEAM int CreateEntity(eAudioType type, void *data);
    SUPPORTED_10EN_11EN_STEAM int CreateLoopingScriptObject(cAudioScriptObject *object);
    SUPPORTED_10EN_11EN_STEAM void CreateOneShotScriptObject(cAudioScriptObject *object);
    SUPPORTED_10EN_11EN_STEAM void DestroyAllGameCreatedEntities();
    SUPPORTED_10EN_11EN_STEAM void DestroyEntity(int audioEntity);
    SUPPORTED_10EN_11EN_STEAM void DestroyLoopingScriptObject(int audioEntity);
    SUPPORTED_10EN_11EN_STEAM char *Get3DProviderName(unsigned char id);
    SUPPORTED_10EN_11EN_STEAM char GetCDAudioDriveLetter();
    SUPPORTED_10EN_11EN_STEAM char GetCurrent3DProviderIndex();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetMissionAudioLoadingStatus();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetNum3DProvidersAvailable();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetRadioInCar();
    SUPPORTED_10EN_11EN_STEAM void Initialise();
    SUPPORTED_10EN_11EN_STEAM bool IsAudioInitialised();
    SUPPORTED_10EN_11EN_STEAM bool IsMP3RadioChannelAvailable();
    SUPPORTED_10EN_11EN_STEAM bool IsMissionAudioSampleFinished();
    SUPPORTED_10EN_11EN_STEAM void PlayFrontEndSound(unsigned short frontend, unsigned int volume);
    SUPPORTED_10EN_11EN_STEAM void PlayFrontEndTrack(unsigned char track, unsigned char frontendFlag);
    SUPPORTED_10EN_11EN_STEAM void PlayLoadedMissionAudio();
    SUPPORTED_10EN_11EN_STEAM void PlayOneShot(int audioEntity, unsigned short oneShot, float volume);
    SUPPORTED_10EN_11EN_STEAM void PlayPreloadedCutSceneMusic();
    SUPPORTED_10EN_11EN_STEAM void PlayRadioAnnouncement(unsigned char announcement);
    SUPPORTED_10EN_11EN_STEAM void PlaySuspectLastSeen(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void PreloadCutSceneMusic(unsigned char track);
    SUPPORTED_10EN_11EN_STEAM void PreloadMissionAudio(char *name);
    SUPPORTED_10EN_11EN_STEAM void ReacquireDigitalHandle();
    SUPPORTED_10EN_11EN_STEAM void ReleaseDigitalHandle();
    SUPPORTED_10EN_11EN_STEAM void ReportCollision(CEntity *entityA, CEntity *entityB, unsigned char surfaceTypeA, unsigned char surfaceTypeB, float collisionPower, float velocity);
    SUPPORTED_10EN_11EN_STEAM void ReportCrime(eCrimeType crime, CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM void ResetTimers(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void Service();
    SUPPORTED_10EN_11EN_STEAM char SetCurrent3DProvider(unsigned char which);
    SUPPORTED_10EN_11EN_STEAM void SetDynamicAcousticModelingStatus(unsigned char status);
    SUPPORTED_10EN_11EN_STEAM void SetEffectsFadeVol(unsigned char volume);
    SUPPORTED_10EN_11EN_STEAM void SetEffectsMasterVolume(unsigned char volume);
    SUPPORTED_10EN_11EN_STEAM void SetEntityStatus(int audioEntity, unsigned char status);
    SUPPORTED_10EN_11EN_STEAM void SetMissionAudioLocation(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetMusicFadeVol(unsigned char volume);
    SUPPORTED_10EN_11EN_STEAM void SetMusicMasterVolume(unsigned char volume);
    SUPPORTED_10EN_11EN_STEAM void SetRadioChannel(unsigned char radio, int pos);
    SUPPORTED_10EN_11EN_STEAM void SetRadioInCar(unsigned int radio);
    SUPPORTED_10EN_11EN_STEAM void SetSpeakerConfig(int config);
    SUPPORTED_10EN_11EN_STEAM void StopCutSceneMusic();
    SUPPORTED_10EN_11EN_STEAM void StopFrontEndTrack();
    SUPPORTED_10EN_11EN_STEAM void Terminate();
};

SUPPORTED_10EN_11EN_STEAM extern cDMAudio &DMAudio;

#include "meta/meta.cDMAudio.h"
