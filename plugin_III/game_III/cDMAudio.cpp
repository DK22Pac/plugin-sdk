/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cDMAudio.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE cDMAudio &DMAudio = *reinterpret_cast<cDMAudio *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDBE, 0x95CF76, 0x96D0B6));

int dtor_addr(cDMAudio) = ADDRESS_BY_VERSION(0x57CED0, 0x57D220, 0x57D120);
int dtor_gaddr(cDMAudio) = GLOBAL_ADDRESS_BY_VERSION(0x57CED0, 0x57D220, 0x57D120);

int addrof(cDMAudio::ChangeMusicMode) = ADDRESS_BY_VERSION(0x57CCF0, 0x57D040, 0x57CF40);
int gaddrof(cDMAudio::ChangeMusicMode) = GLOBAL_ADDRESS_BY_VERSION(0x57CCF0, 0x57D040, 0x57CF40);

void cDMAudio::ChangeMusicMode(unsigned char mode) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::ChangeMusicMode), this, mode);
}

int addrof(cDMAudio::CheckForAnAudioFileOnCD) = ADDRESS_BY_VERSION(0x57CA70, 0x57CDC0, 0x57CCC0);
int gaddrof(cDMAudio::CheckForAnAudioFileOnCD) = GLOBAL_ADDRESS_BY_VERSION(0x57CA70, 0x57CDC0, 0x57CCC0);

bool cDMAudio::CheckForAnAudioFileOnCD() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cDMAudio *>(gaddrof(cDMAudio::CheckForAnAudioFileOnCD), this);
}

int addrof(cDMAudio::ClearMissionAudio) = ADDRESS_BY_VERSION(0x57CE20, 0x57D170, 0x57D070);
int gaddrof(cDMAudio::ClearMissionAudio) = GLOBAL_ADDRESS_BY_VERSION(0x57CE20, 0x57D170, 0x57D070);

void cDMAudio::ClearMissionAudio() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::ClearMissionAudio), this);
}

int addrof(cDMAudio::CreateEntity) = ADDRESS_BY_VERSION(0x57C7C0, 0x57CB10, 0x57CA10);
int gaddrof(cDMAudio::CreateEntity) = GLOBAL_ADDRESS_BY_VERSION(0x57C7C0, 0x57CB10, 0x57CA10);

int cDMAudio::CreateEntity(eAudioType type, void *data) {
    return plugin::CallMethodAndReturnDynGlobal<int, cDMAudio *, eAudioType, void *>(gaddrof(cDMAudio::CreateEntity), this, type, data);
}

int addrof(cDMAudio::CreateLoopingScriptObject) = ADDRESS_BY_VERSION(0x57CB00, 0x57CE50, 0x57CD50);
int gaddrof(cDMAudio::CreateLoopingScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57CB00, 0x57CE50, 0x57CD50);

int cDMAudio::CreateLoopingScriptObject(cAudioScriptObject *object) {
    return plugin::CallMethodAndReturnDynGlobal<int, cDMAudio *, cAudioScriptObject *>(gaddrof(cDMAudio::CreateLoopingScriptObject), this, object);
}

int addrof(cDMAudio::CreateOneShotScriptObject) = ADDRESS_BY_VERSION(0x57CB60, 0x57CEB0, 0x57CDB0);
int gaddrof(cDMAudio::CreateOneShotScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57CB60, 0x57CEB0, 0x57CDB0);

void cDMAudio::CreateOneShotScriptObject(cAudioScriptObject *object) {
    plugin::CallMethodDynGlobal<cDMAudio *, cAudioScriptObject *>(gaddrof(cDMAudio::CreateOneShotScriptObject), this, object);
}

int addrof(cDMAudio::DestroyAllGameCreatedEntities) = ADDRESS_BY_VERSION(0x57C870, 0x57CBC0, 0x57CAC0);
int gaddrof(cDMAudio::DestroyAllGameCreatedEntities) = GLOBAL_ADDRESS_BY_VERSION(0x57C870, 0x57CBC0, 0x57CAC0);

void cDMAudio::DestroyAllGameCreatedEntities() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::DestroyAllGameCreatedEntities), this);
}

int addrof(cDMAudio::DestroyEntity) = ADDRESS_BY_VERSION(0x57C7F0, 0x57CB40, 0x57CA40);
int gaddrof(cDMAudio::DestroyEntity) = GLOBAL_ADDRESS_BY_VERSION(0x57C7F0, 0x57CB40, 0x57CA40);

void cDMAudio::DestroyEntity(int audioEntity) {
    plugin::CallMethodDynGlobal<cDMAudio *, int>(gaddrof(cDMAudio::DestroyEntity), this, audioEntity);
}

int addrof(cDMAudio::DestroyLoopingScriptObject) = ADDRESS_BY_VERSION(0x57CB40, 0x57CE90, 0x57CD90);
int gaddrof(cDMAudio::DestroyLoopingScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57CB40, 0x57CE90, 0x57CD90);

void cDMAudio::DestroyLoopingScriptObject(int audioEntity) {
    plugin::CallMethodDynGlobal<cDMAudio *, int>(gaddrof(cDMAudio::DestroyLoopingScriptObject), this, audioEntity);
}

int addrof(cDMAudio::Get3DProviderName) = ADDRESS_BY_VERSION(0x57C970, 0x57CCC0, 0x57CBC0);
int gaddrof(cDMAudio::Get3DProviderName) = GLOBAL_ADDRESS_BY_VERSION(0x57C970, 0x57CCC0, 0x57CBC0);

char *cDMAudio::Get3DProviderName(unsigned char id) {
    return plugin::CallMethodAndReturnDynGlobal<char *, cDMAudio *, unsigned char>(gaddrof(cDMAudio::Get3DProviderName), this, id);
}

int addrof(cDMAudio::GetCDAudioDriveLetter) = ADDRESS_BY_VERSION(0x57CA90, 0x57CDE0, 0x57CCE0);
int gaddrof(cDMAudio::GetCDAudioDriveLetter) = GLOBAL_ADDRESS_BY_VERSION(0x57CA90, 0x57CDE0, 0x57CCE0);

char cDMAudio::GetCDAudioDriveLetter() {
    return plugin::CallMethodAndReturnDynGlobal<char, cDMAudio *>(gaddrof(cDMAudio::GetCDAudioDriveLetter), this);
}

int addrof(cDMAudio::GetCurrent3DProviderIndex) = ADDRESS_BY_VERSION(0x57C990, 0x57CCE0, 0x57CBE0);
int gaddrof(cDMAudio::GetCurrent3DProviderIndex) = GLOBAL_ADDRESS_BY_VERSION(0x57C990, 0x57CCE0, 0x57CBE0);

char cDMAudio::GetCurrent3DProviderIndex() {
    return plugin::CallMethodAndReturnDynGlobal<char, cDMAudio *>(gaddrof(cDMAudio::GetCurrent3DProviderIndex), this);
}

int addrof(cDMAudio::GetMissionAudioLoadingStatus) = ADDRESS_BY_VERSION(0x57CD90, 0x57D0E0, 0x57CFE0);
int gaddrof(cDMAudio::GetMissionAudioLoadingStatus) = GLOBAL_ADDRESS_BY_VERSION(0x57CD90, 0x57D0E0, 0x57CFE0);

unsigned char cDMAudio::GetMissionAudioLoadingStatus() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cDMAudio *>(gaddrof(cDMAudio::GetMissionAudioLoadingStatus), this);
}

int addrof(cDMAudio::GetNum3DProvidersAvailable) = ADDRESS_BY_VERSION(0x57C950, 0x57CCA0, 0x57CBA0);
int gaddrof(cDMAudio::GetNum3DProvidersAvailable) = GLOBAL_ADDRESS_BY_VERSION(0x57C950, 0x57CCA0, 0x57CBA0);

unsigned char cDMAudio::GetNum3DProvidersAvailable() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cDMAudio *>(gaddrof(cDMAudio::GetNum3DProvidersAvailable), this);
}

int addrof(cDMAudio::GetRadioInCar) = ADDRESS_BY_VERSION(0x57CE40, 0x57D190, 0x57D090);
int gaddrof(cDMAudio::GetRadioInCar) = GLOBAL_ADDRESS_BY_VERSION(0x57CE40, 0x57D190, 0x57D090);

unsigned char cDMAudio::GetRadioInCar() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cDMAudio *>(gaddrof(cDMAudio::GetRadioInCar), this);
}

int addrof(cDMAudio::Initialise) = ADDRESS_BY_VERSION(0x57C760, 0x57CAB0, 0x57C9B0);
int gaddrof(cDMAudio::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x57C760, 0x57CAB0, 0x57C9B0);

void cDMAudio::Initialise() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::Initialise), this);
}

int addrof(cDMAudio::IsAudioInitialised) = ADDRESS_BY_VERSION(0x57CAB0, 0x57CE00, 0x57CD00);
int gaddrof(cDMAudio::IsAudioInitialised) = GLOBAL_ADDRESS_BY_VERSION(0x57CAB0, 0x57CE00, 0x57CD00);

bool cDMAudio::IsAudioInitialised() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cDMAudio *>(gaddrof(cDMAudio::IsAudioInitialised), this);
}

int addrof(cDMAudio::IsMP3RadioChannelAvailable) = ADDRESS_BY_VERSION(0x57C9F0, 0x57CD40, 0x57CC40);
int gaddrof(cDMAudio::IsMP3RadioChannelAvailable) = GLOBAL_ADDRESS_BY_VERSION(0x57C9F0, 0x57CD40, 0x57CC40);

bool cDMAudio::IsMP3RadioChannelAvailable() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cDMAudio *>(gaddrof(cDMAudio::IsMP3RadioChannelAvailable), this);
}

int addrof(cDMAudio::IsMissionAudioSampleFinished) = ADDRESS_BY_VERSION(0x57CE00, 0x57D150, 0x57D050);
int gaddrof(cDMAudio::IsMissionAudioSampleFinished) = GLOBAL_ADDRESS_BY_VERSION(0x57CE00, 0x57D150, 0x57D050);

bool cDMAudio::IsMissionAudioSampleFinished() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cDMAudio *>(gaddrof(cDMAudio::IsMissionAudioSampleFinished), this);
}

int addrof(cDMAudio::PlayFrontEndSound) = ADDRESS_BY_VERSION(0x57CC20, 0x57CF70, 0x57CE70);
int gaddrof(cDMAudio::PlayFrontEndSound) = GLOBAL_ADDRESS_BY_VERSION(0x57CC20, 0x57CF70, 0x57CE70);

void cDMAudio::PlayFrontEndSound(unsigned short frontend, unsigned int volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned short, unsigned int>(gaddrof(cDMAudio::PlayFrontEndSound), this, frontend, volume);
}

int addrof(cDMAudio::PlayFrontEndTrack) = ADDRESS_BY_VERSION(0x57CC80, 0x57CFD0, 0x57CED0);
int gaddrof(cDMAudio::PlayFrontEndTrack) = GLOBAL_ADDRESS_BY_VERSION(0x57CC80, 0x57CFD0, 0x57CED0);

void cDMAudio::PlayFrontEndTrack(unsigned char track, unsigned char frontendFlag) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char, unsigned char>(gaddrof(cDMAudio::PlayFrontEndTrack), this, track, frontendFlag);
}

int addrof(cDMAudio::PlayLoadedMissionAudio) = ADDRESS_BY_VERSION(0x57CDE0, 0x57D130, 0x57D030);
int gaddrof(cDMAudio::PlayLoadedMissionAudio) = GLOBAL_ADDRESS_BY_VERSION(0x57CDE0, 0x57D130, 0x57D030);

void cDMAudio::PlayLoadedMissionAudio() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::PlayLoadedMissionAudio), this);
}

int addrof(cDMAudio::PlayOneShot) = ADDRESS_BY_VERSION(0x57C840, 0x57CB90, 0x57CA90);
int gaddrof(cDMAudio::PlayOneShot) = GLOBAL_ADDRESS_BY_VERSION(0x57C840, 0x57CB90, 0x57CA90);

void cDMAudio::PlayOneShot(int audioEntity, unsigned short oneShot, float volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, int, unsigned short, float>(gaddrof(cDMAudio::PlayOneShot), this, audioEntity, oneShot, volume);
}

int addrof(cDMAudio::PlayPreloadedCutSceneMusic) = ADDRESS_BY_VERSION(0x57CD30, 0x57D080, 0x57CF80);
int gaddrof(cDMAudio::PlayPreloadedCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57CD30, 0x57D080, 0x57CF80);

void cDMAudio::PlayPreloadedCutSceneMusic() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::PlayPreloadedCutSceneMusic), this);
}

int addrof(cDMAudio::PlayRadioAnnouncement) = ADDRESS_BY_VERSION(0x57CC60, 0x57CFB0, 0x57CEB0);
int gaddrof(cDMAudio::PlayRadioAnnouncement) = GLOBAL_ADDRESS_BY_VERSION(0x57CC60, 0x57CFB0, 0x57CEB0);

void cDMAudio::PlayRadioAnnouncement(unsigned char announcement) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::PlayRadioAnnouncement), this, announcement);
}

int addrof(cDMAudio::PlaySuspectLastSeen) = ADDRESS_BY_VERSION(0x57CBB0, 0x57CF00, 0x57CE00);
int gaddrof(cDMAudio::PlaySuspectLastSeen) = GLOBAL_ADDRESS_BY_VERSION(0x57CBB0, 0x57CF00, 0x57CE00);

void cDMAudio::PlaySuspectLastSeen(float x, float y, float z) {
    plugin::CallMethodDynGlobal<cDMAudio *, float, float, float>(gaddrof(cDMAudio::PlaySuspectLastSeen), this, x, y, z);
}

int addrof(cDMAudio::PreloadCutSceneMusic) = ADDRESS_BY_VERSION(0x57CD10, 0x57D060, 0x57CF60);
int gaddrof(cDMAudio::PreloadCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57CD10, 0x57D060, 0x57CF60);

void cDMAudio::PreloadCutSceneMusic(unsigned char track) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::PreloadCutSceneMusic), this, track);
}

int addrof(cDMAudio::PreloadMissionAudio) = ADDRESS_BY_VERSION(0x57CD70, 0x57D0C0, 0x57CFC0);
int gaddrof(cDMAudio::PreloadMissionAudio) = GLOBAL_ADDRESS_BY_VERSION(0x57CD70, 0x57D0C0, 0x57CFC0);

void cDMAudio::PreloadMissionAudio(char *name) {
    plugin::CallMethodDynGlobal<cDMAudio *, char *>(gaddrof(cDMAudio::PreloadMissionAudio), this, name);
}

int addrof(cDMAudio::ReacquireDigitalHandle) = ADDRESS_BY_VERSION(0x57CA30, 0x57CD80, 0x57CC80);
int gaddrof(cDMAudio::ReacquireDigitalHandle) = GLOBAL_ADDRESS_BY_VERSION(0x57CA30, 0x57CD80, 0x57CC80);

void cDMAudio::ReacquireDigitalHandle() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::ReacquireDigitalHandle), this);
}

int addrof(cDMAudio::ReleaseDigitalHandle) = ADDRESS_BY_VERSION(0x57CA10, 0x57CD60, 0x57CC60);
int gaddrof(cDMAudio::ReleaseDigitalHandle) = GLOBAL_ADDRESS_BY_VERSION(0x57CA10, 0x57CD60, 0x57CC60);

void cDMAudio::ReleaseDigitalHandle() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::ReleaseDigitalHandle), this);
}

int addrof(cDMAudio::ReportCollision) = ADDRESS_BY_VERSION(0x57CBE0, 0x57CF30, 0x57CE30);
int gaddrof(cDMAudio::ReportCollision) = GLOBAL_ADDRESS_BY_VERSION(0x57CBE0, 0x57CF30, 0x57CE30);

void cDMAudio::ReportCollision(CEntity *entityA, CEntity *entityB, unsigned char surfaceTypeA, unsigned char surfaceTypeB, float collisionPower, float velocity) {
    plugin::CallMethodDynGlobal<cDMAudio *, CEntity *, CEntity *, unsigned char, unsigned char, float, float>(gaddrof(cDMAudio::ReportCollision), this, entityA, entityB, surfaceTypeA, surfaceTypeB, collisionPower, velocity);
}

int addrof(cDMAudio::ReportCrime) = ADDRESS_BY_VERSION(0x57CAD0, 0x57CE20, 0x57CD20);
int gaddrof(cDMAudio::ReportCrime) = GLOBAL_ADDRESS_BY_VERSION(0x57CAD0, 0x57CE20, 0x57CD20);

void cDMAudio::ReportCrime(eCrimeType crime, CVector const &pos) {
    plugin::CallMethodDynGlobal<cDMAudio *, eCrimeType, CVector const &>(gaddrof(cDMAudio::ReportCrime), this, crime, pos);
}

int addrof(cDMAudio::ResetTimers) = ADDRESS_BY_VERSION(0x57CCD0, 0x57D020, 0x57CF20);
int gaddrof(cDMAudio::ResetTimers) = GLOBAL_ADDRESS_BY_VERSION(0x57CCD0, 0x57D020, 0x57CF20);

void cDMAudio::ResetTimers(unsigned int time) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned int>(gaddrof(cDMAudio::ResetTimers), this, time);
}

int addrof(cDMAudio::Service) = ADDRESS_BY_VERSION(0x57C7A0, 0x57CAF0, 0x57C9F0);
int gaddrof(cDMAudio::Service) = GLOBAL_ADDRESS_BY_VERSION(0x57C7A0, 0x57CAF0, 0x57C9F0);

void cDMAudio::Service() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::Service), this);
}

int addrof(cDMAudio::SetCurrent3DProvider) = ADDRESS_BY_VERSION(0x57C9B0, 0x57CD00, 0x57CC00);
int gaddrof(cDMAudio::SetCurrent3DProvider) = GLOBAL_ADDRESS_BY_VERSION(0x57C9B0, 0x57CD00, 0x57CC00);

char cDMAudio::SetCurrent3DProvider(unsigned char which) {
    return plugin::CallMethodAndReturnDynGlobal<char, cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetCurrent3DProvider), this, which);
}

int addrof(cDMAudio::SetDynamicAcousticModelingStatus) = ADDRESS_BY_VERSION(0x57CA50, 0x57CDA0, 0x57CCA0);
int gaddrof(cDMAudio::SetDynamicAcousticModelingStatus) = GLOBAL_ADDRESS_BY_VERSION(0x57CA50, 0x57CDA0, 0x57CCA0);

void cDMAudio::SetDynamicAcousticModelingStatus(unsigned char status) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetDynamicAcousticModelingStatus), this, status);
}

int addrof(cDMAudio::SetEffectsFadeVol) = ADDRESS_BY_VERSION(0x57C8F0, 0x57CC40, 0x57CB40);
int gaddrof(cDMAudio::SetEffectsFadeVol) = GLOBAL_ADDRESS_BY_VERSION(0x57C8F0, 0x57CC40, 0x57CB40);

void cDMAudio::SetEffectsFadeVol(unsigned char volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetEffectsFadeVol), this, volume);
}

int addrof(cDMAudio::SetEffectsMasterVolume) = ADDRESS_BY_VERSION(0x57C890, 0x57CBE0, 0x57CAE0);
int gaddrof(cDMAudio::SetEffectsMasterVolume) = GLOBAL_ADDRESS_BY_VERSION(0x57C890, 0x57CBE0, 0x57CAE0);

void cDMAudio::SetEffectsMasterVolume(unsigned char volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetEffectsMasterVolume), this, volume);
}

int addrof(cDMAudio::SetEntityStatus) = ADDRESS_BY_VERSION(0x57C810, 0x57CB60, 0x57CA60);
int gaddrof(cDMAudio::SetEntityStatus) = GLOBAL_ADDRESS_BY_VERSION(0x57C810, 0x57CB60, 0x57CA60);

void cDMAudio::SetEntityStatus(int audioEntity, unsigned char status) {
    plugin::CallMethodDynGlobal<cDMAudio *, int, unsigned char>(gaddrof(cDMAudio::SetEntityStatus), this, audioEntity, status);
}

int addrof(cDMAudio::SetMissionAudioLocation) = ADDRESS_BY_VERSION(0x57CDB0, 0x57D100, 0x57D000);
int gaddrof(cDMAudio::SetMissionAudioLocation) = GLOBAL_ADDRESS_BY_VERSION(0x57CDB0, 0x57D100, 0x57D000);

void cDMAudio::SetMissionAudioLocation(float x, float y, float z) {
    plugin::CallMethodDynGlobal<cDMAudio *, float, float, float>(gaddrof(cDMAudio::SetMissionAudioLocation), this, x, y, z);
}

int addrof(cDMAudio::SetMusicFadeVol) = ADDRESS_BY_VERSION(0x57C920, 0x57CC70, 0x57CB70);
int gaddrof(cDMAudio::SetMusicFadeVol) = GLOBAL_ADDRESS_BY_VERSION(0x57C920, 0x57CC70, 0x57CB70);

void cDMAudio::SetMusicFadeVol(unsigned char volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetMusicFadeVol), this, volume);
}

int addrof(cDMAudio::SetMusicMasterVolume) = ADDRESS_BY_VERSION(0x57C8C0, 0x57CC10, 0x57CB10);
int gaddrof(cDMAudio::SetMusicMasterVolume) = GLOBAL_ADDRESS_BY_VERSION(0x57C8C0, 0x57CC10, 0x57CB10);

void cDMAudio::SetMusicMasterVolume(unsigned char volume) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char>(gaddrof(cDMAudio::SetMusicMasterVolume), this, volume);
}

int addrof(cDMAudio::SetRadioChannel) = ADDRESS_BY_VERSION(0x57CE80, 0x57D1D0, 0x57D0D0);
int gaddrof(cDMAudio::SetRadioChannel) = GLOBAL_ADDRESS_BY_VERSION(0x57CE80, 0x57D1D0, 0x57D0D0);

void cDMAudio::SetRadioChannel(unsigned char radio, int pos) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned char, int>(gaddrof(cDMAudio::SetRadioChannel), this, radio, pos);
}

int addrof(cDMAudio::SetRadioInCar) = ADDRESS_BY_VERSION(0x57CE60, 0x57D1B0, 0x57D0B0);
int gaddrof(cDMAudio::SetRadioInCar) = GLOBAL_ADDRESS_BY_VERSION(0x57CE60, 0x57D1B0, 0x57D0B0);

void cDMAudio::SetRadioInCar(unsigned int radio) {
    plugin::CallMethodDynGlobal<cDMAudio *, unsigned int>(gaddrof(cDMAudio::SetRadioInCar), this, radio);
}

int addrof(cDMAudio::SetSpeakerConfig) = ADDRESS_BY_VERSION(0x57C9D0, 0x57CD20, 0x57CC20);
int gaddrof(cDMAudio::SetSpeakerConfig) = GLOBAL_ADDRESS_BY_VERSION(0x57C9D0, 0x57CD20, 0x57CC20);

void cDMAudio::SetSpeakerConfig(int config) {
    plugin::CallMethodDynGlobal<cDMAudio *, int>(gaddrof(cDMAudio::SetSpeakerConfig), this, config);
}

int addrof(cDMAudio::StopCutSceneMusic) = ADDRESS_BY_VERSION(0x57CD50, 0x57D0A0, 0x57CFA0);
int gaddrof(cDMAudio::StopCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57CD50, 0x57D0A0, 0x57CFA0);

void cDMAudio::StopCutSceneMusic() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::StopCutSceneMusic), this);
}

int addrof(cDMAudio::StopFrontEndTrack) = ADDRESS_BY_VERSION(0x57CCB0, 0x57D000, 0x57CF00);
int gaddrof(cDMAudio::StopFrontEndTrack) = GLOBAL_ADDRESS_BY_VERSION(0x57CCB0, 0x57D000, 0x57CF00);

void cDMAudio::StopFrontEndTrack() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::StopFrontEndTrack), this);
}

int addrof(cDMAudio::Terminate) = ADDRESS_BY_VERSION(0x57C780, 0x57CAD0, 0x57C9D0);
int gaddrof(cDMAudio::Terminate) = GLOBAL_ADDRESS_BY_VERSION(0x57C780, 0x57CAD0, 0x57C9D0);

void cDMAudio::Terminate() {
    plugin::CallMethodDynGlobal<cDMAudio *>(gaddrof(cDMAudio::Terminate), this);
}
