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
#include "eWeaponType.h"

class CPhysical;
class CPed;

class PLUGIN_API CAEWeaponAudioEntity : public CAEAudioEntity {
public:
	char m_bPlayedMiniGunFireSound;
	char field_7D;
	char field_7E;
	char field_7F;
	char m_nChainsawSoundState;
	char field_81[3];
	int m_dwFlameThrowerLastPlayedTime;
	int m_dwSpraycanLastPlayedTime;
	int m_dwExtinguisherLastPlayedTime;
	int m_dwMiniGunFireSoundPlayedTime;
	int m_dwTimeChainsaw;
	int m_dwTimeLastFired;
	CAESound *m_pSounds;
	char m_bActive;
	char field_A1[3];
	CPed* m_pPed;

	CAEWeaponAudioEntity();
	void WeaponReload(eWeaponType weaptype, CPhysical* entity, int AudioEventId);
	void WeaponFire(eWeaponType weaptype, CPhysical* entity, int AudioEventId);
	void Terminate();
	void StopFlameThrowerIdleGasLoop();
	void Reset();
	void ReportStealthKill(eWeaponType weaptype, CPhysical* entity, int AudioEventId);
	void ReportChainsawEvent(CPhysical* entity, int AudioEventId);
	void PlayWeaponLoopSound(CPhysical* arg0, short sfxId, int AudioEventId, float audability, float speed, int finalEvent);
	void PlayMiniGunStopSound(CPhysical* entity);
	void PlayMiniGunFireSounds(CPhysical* entity, int AudioEventId);
	void PlayGunSounds(CPhysical* entity, short emptySfxId, short farSfxId2, short highPitchSfxId3, short lowPitchSfxId4, short echoSfxId5, int nAudioEventId, float volumeChange, float speed1, float speed2);
	void PlayGoggleSound(short sfxId, int AudioEventId);
	void PlayFlameThrowerSounds(CPhysical* entity, short sfx1, short sfx2, int AudioEventId, float audability, float speed);
	void PlayFlameThrowerIdleGasLoop(CPhysical* entity);
	void PlayChainsawStopSound(CPhysical* entity);
	void PlayCameraSound(CPhysical* entity, int AudioEventId, float audability);
	void Initialise();

};
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_bPlayedMiniGunFireSound, 0x7C);
VALIDATE_OFFSET(CAEWeaponAudioEntity, field_7D, 0x7D);
VALIDATE_OFFSET(CAEWeaponAudioEntity, field_7E, 0x7E);
VALIDATE_OFFSET(CAEWeaponAudioEntity, field_7F, 0x7F);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_nChainsawSoundState, 0x80);
VALIDATE_OFFSET(CAEWeaponAudioEntity, field_81, 0x81);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwFlameThrowerLastPlayedTime, 0x84);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwSpraycanLastPlayedTime, 0x88);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwExtinguisherLastPlayedTime, 0x8C);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwMiniGunFireSoundPlayedTime, 0x90);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwTimeChainsaw, 0x94);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_dwTimeLastFired, 0x98);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_pSounds, 0x9C);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_bActive, 0xA0);
VALIDATE_OFFSET(CAEWeaponAudioEntity, field_A1, 0xA1);
VALIDATE_OFFSET(CAEWeaponAudioEntity, m_pPed, 0xA4);
VALIDATE_SIZE(CAEWeaponAudioEntity, 0xA8);
