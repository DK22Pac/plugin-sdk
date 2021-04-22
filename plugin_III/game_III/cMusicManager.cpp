/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cMusicManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE char &cMusicManager::nFramesSinceCutsceneEnded = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x650B88, 0x650B88, 0x660B90));
PLUGIN_VARIABLE float &cMusicManager::fVol = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x650B94, 0x650B94, 0x660B9C));
PLUGIN_VARIABLE char &cMusicManager::cCheck = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x650B99, 0x650B99, 0x660BA1));
PLUGIN_VARIABLE wchar_t *&cMusicManager::pCurrentStation = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x650B9C, 0x650B9C, 0x660BA4));
PLUGIN_VARIABLE unsigned char &cMusicManager::cDisplay = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x650BA1, 0x650BA1, 0x660BA9));
PLUGIN_VARIABLE bool &bHasStarted = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x650B7C, 0x650B7C, 0x660B84));
PLUGIN_VARIABLE int &gNumRetunePresses = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x650B80, 0x650B80, 0x660B88));
PLUGIN_VARIABLE int &gRetuneCounter = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x650B84, 0x650B84, 0x660B8C));
PLUGIN_VARIABLE bool &bRadioOff = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x650B89, 0x650B89, 0x660B91));
PLUGIN_VARIABLE cMusicManager &gMusicManager = *reinterpret_cast<cMusicManager *>(GLOBAL_ADDRESS_BY_VERSION(0x8F3964, 0x8F3A18, 0x903B58));

int ctor_addr(cMusicManager) = ADDRESS_BY_VERSION(0x57CEE0, 0x57D230, 0x57D130);
int ctor_gaddr(cMusicManager) = GLOBAL_ADDRESS_BY_VERSION(0x57CEE0, 0x57D230, 0x57D130);

int addrof(cMusicManager::ChangeMusicMode) = ADDRESS_BY_VERSION(0x57D310, 0x57D660, 0x57D560);
int gaddrof(cMusicManager::ChangeMusicMode) = GLOBAL_ADDRESS_BY_VERSION(0x57D310, 0x57D660, 0x57D560);

void cMusicManager::ChangeMusicMode(unsigned char mode) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char>(gaddrof(cMusicManager::ChangeMusicMode), this, mode);
}

int addrof(cMusicManager::ChangeRadioChannel) = ADDRESS_BY_VERSION(0x57E130, 0x57E480, 0x57E380);
int gaddrof(cMusicManager::ChangeRadioChannel) = GLOBAL_ADDRESS_BY_VERSION(0x57E130, 0x57E480, 0x57E380);

bool cMusicManager::ChangeRadioChannel() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cMusicManager *>(gaddrof(cMusicManager::ChangeRadioChannel), this);
}

int addrof(cMusicManager::ComputeAmbienceVol) = ADDRESS_BY_VERSION(0x57DEA0, 0x57E1F0, 0x57E0F0);
int gaddrof(cMusicManager::ComputeAmbienceVol) = GLOBAL_ADDRESS_BY_VERSION(0x57DEA0, 0x57E1F0, 0x57E0F0);

void cMusicManager::ComputeAmbienceVol(unsigned char reset, unsigned char &outVolume) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char, unsigned char &>(gaddrof(cMusicManager::ComputeAmbienceVol), this, reset, outVolume);
}

int addrof(cMusicManager::DisplayRadioStationName) = ADDRESS_BY_VERSION(0x57E6D0, 0x57EA20, 0x57E920);
int gaddrof(cMusicManager::DisplayRadioStationName) = GLOBAL_ADDRESS_BY_VERSION(0x57E6D0, 0x57EA20, 0x57E920);

void cMusicManager::DisplayRadioStationName() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::DisplayRadioStationName), this);
}

int addrof(cMusicManager::GetCarTuning) = ADDRESS_BY_VERSION(0x57E530, 0x57E880, 0x57E780);
int gaddrof(cMusicManager::GetCarTuning) = GLOBAL_ADDRESS_BY_VERSION(0x57E530, 0x57E880, 0x57E780);

unsigned char cMusicManager::GetCarTuning() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cMusicManager *>(gaddrof(cMusicManager::GetCarTuning), this);
}

int addrof(cMusicManager::GetNextCarTuning) = ADDRESS_BY_VERSION(0x57E5A0, 0x57E8F0, 0x57E7F0);
int gaddrof(cMusicManager::GetNextCarTuning) = GLOBAL_ADDRESS_BY_VERSION(0x57E5A0, 0x57E8F0, 0x57E7F0);

unsigned char cMusicManager::GetNextCarTuning() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cMusicManager *>(gaddrof(cMusicManager::GetNextCarTuning), this);
}

int addrof(cMusicManager::GetRadioInCar) = ADDRESS_BY_VERSION(0x57D1D0, 0x57D520, 0x57D420);
int gaddrof(cMusicManager::GetRadioInCar) = GLOBAL_ADDRESS_BY_VERSION(0x57D1D0, 0x57D520, 0x57D420);

unsigned char cMusicManager::GetRadioInCar() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, cMusicManager *>(gaddrof(cMusicManager::GetRadioInCar), this);
}

int addrof(cMusicManager::GetTrackStartPos) = ADDRESS_BY_VERSION(0x57E450, 0x57E7A0, 0x57E6A0);
int gaddrof(cMusicManager::GetTrackStartPos) = GLOBAL_ADDRESS_BY_VERSION(0x57E450, 0x57E7A0, 0x57E6A0);

unsigned int cMusicManager::GetTrackStartPos(unsigned char track) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, cMusicManager *, unsigned char>(gaddrof(cMusicManager::GetTrackStartPos), this, track);
}

int addrof(cMusicManager::Initialise) = ADDRESS_BY_VERSION(0x57CF70, 0x57D2C0, 0x57D1C0);
int gaddrof(cMusicManager::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x57CF70, 0x57D2C0, 0x57D1C0);

void cMusicManager::Initialise() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::Initialise), this);
}

int addrof(cMusicManager::PlayAnnouncement) = ADDRESS_BY_VERSION(0x57E430, 0x57E780, 0x57E680);
int gaddrof(cMusicManager::PlayAnnouncement) = GLOBAL_ADDRESS_BY_VERSION(0x57E430, 0x57E780, 0x57E680);

void cMusicManager::PlayAnnouncement(unsigned char announcement) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char>(gaddrof(cMusicManager::PlayAnnouncement), this, announcement);
}

int addrof(cMusicManager::PlayFrontEndTrack) = ADDRESS_BY_VERSION(0x57E2E0, 0x57E630, 0x57E530);
int gaddrof(cMusicManager::PlayFrontEndTrack) = GLOBAL_ADDRESS_BY_VERSION(0x57E2E0, 0x57E630, 0x57E530);

void cMusicManager::PlayFrontEndTrack(unsigned char track, unsigned char bPlayInFrontend) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char, unsigned char>(gaddrof(cMusicManager::PlayFrontEndTrack), this, track, bPlayInFrontend);
}

int addrof(cMusicManager::PlayPreloadedCutSceneMusic) = ADDRESS_BY_VERSION(0x57E290, 0x57E5E0, 0x57E4E0);
int gaddrof(cMusicManager::PlayPreloadedCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57E290, 0x57E5E0, 0x57E4E0);

void cMusicManager::PlayPreloadedCutSceneMusic() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::PlayPreloadedCutSceneMusic), this);
}

int addrof(cMusicManager::PlayerInCar) = ADDRESS_BY_VERSION(0x57E4B0, 0x57E800, 0x57E700);
int gaddrof(cMusicManager::PlayerInCar) = GLOBAL_ADDRESS_BY_VERSION(0x57E4B0, 0x57E800, 0x57E700);

bool cMusicManager::PlayerInCar() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cMusicManager *>(gaddrof(cMusicManager::PlayerInCar), this);
}

int addrof(cMusicManager::PreloadCutSceneMusic) = ADDRESS_BY_VERSION(0x57E210, 0x57E560, 0x57E460);
int gaddrof(cMusicManager::PreloadCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57E210, 0x57E560, 0x57E460);

void cMusicManager::PreloadCutSceneMusic(unsigned char sound) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char>(gaddrof(cMusicManager::PreloadCutSceneMusic), this, sound);
}

int addrof(cMusicManager::ResetMusicAfterReload) = ADDRESS_BY_VERSION(0x57CF30, 0x57D280, 0x57D180);
int gaddrof(cMusicManager::ResetMusicAfterReload) = GLOBAL_ADDRESS_BY_VERSION(0x57CF30, 0x57D280, 0x57D180);

void cMusicManager::ResetMusicAfterReload() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::ResetMusicAfterReload), this);
}

int addrof(cMusicManager::ResetTimers) = ADDRESS_BY_VERSION(0x57D420, 0x57D770, 0x57D670);
int gaddrof(cMusicManager::ResetTimers) = GLOBAL_ADDRESS_BY_VERSION(0x57D420, 0x57D770, 0x57D670);

void cMusicManager::ResetTimers(unsigned int time) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned int>(gaddrof(cMusicManager::ResetTimers), this, time);
}

int addrof(cMusicManager::Service) = ADDRESS_BY_VERSION(0x57D440, 0x57D790, 0x57D690);
int gaddrof(cMusicManager::Service) = GLOBAL_ADDRESS_BY_VERSION(0x57D440, 0x57D790, 0x57D690);

void cMusicManager::Service() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::Service), this);
}

int addrof(cMusicManager::ServiceAmbience) = ADDRESS_BY_VERSION(0x57DCB0, 0x57E000, 0x57DF00);
int gaddrof(cMusicManager::ServiceAmbience) = GLOBAL_ADDRESS_BY_VERSION(0x57DCB0, 0x57E000, 0x57DF00);

void cMusicManager::ServiceAmbience() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::ServiceAmbience), this);
}

int addrof(cMusicManager::ServiceAnnouncement) = ADDRESS_BY_VERSION(0x57DFC0, 0x57E310, 0x57E210);
int gaddrof(cMusicManager::ServiceAnnouncement) = GLOBAL_ADDRESS_BY_VERSION(0x57DFC0, 0x57E310, 0x57E210);

bool cMusicManager::ServiceAnnouncement() {
    return plugin::CallMethodAndReturnDynGlobal<bool, cMusicManager *>(gaddrof(cMusicManager::ServiceAnnouncement), this);
}

int addrof(cMusicManager::ServiceFrontEndMode) = ADDRESS_BY_VERSION(0x57D530, 0x57D880, 0x57D780);
int gaddrof(cMusicManager::ServiceFrontEndMode) = GLOBAL_ADDRESS_BY_VERSION(0x57D530, 0x57D880, 0x57D780);

void cMusicManager::ServiceFrontEndMode() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::ServiceFrontEndMode), this);
}

int addrof(cMusicManager::ServiceGameMode) = ADDRESS_BY_VERSION(0x57D690, 0x57D9E0, 0x57D8E0);
int gaddrof(cMusicManager::ServiceGameMode) = GLOBAL_ADDRESS_BY_VERSION(0x57D690, 0x57D9E0, 0x57D8E0);

void cMusicManager::ServiceGameMode() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::ServiceGameMode), this);
}

int addrof(cMusicManager::ServiceTrack) = ADDRESS_BY_VERSION(0x57E100, 0x57E450, 0x57E350);
int gaddrof(cMusicManager::ServiceTrack) = GLOBAL_ADDRESS_BY_VERSION(0x57E100, 0x57E450, 0x57E350);

void cMusicManager::ServiceTrack() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::ServiceTrack), this);
}

int addrof(cMusicManager::SetRadioChannelByScript) = ADDRESS_BY_VERSION(0x57D180, 0x57D4D0, 0x57D3D0);
int gaddrof(cMusicManager::SetRadioChannelByScript) = GLOBAL_ADDRESS_BY_VERSION(0x57D180, 0x57D4D0, 0x57D3D0);

void cMusicManager::SetRadioChannelByScript(unsigned char station, int position) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned char, int>(gaddrof(cMusicManager::SetRadioChannelByScript), this, station, position);
}

int addrof(cMusicManager::SetRadioInCar) = ADDRESS_BY_VERSION(0x57D2C0, 0x57D610, 0x57D510);
int gaddrof(cMusicManager::SetRadioInCar) = GLOBAL_ADDRESS_BY_VERSION(0x57D2C0, 0x57D610, 0x57D510);

void cMusicManager::SetRadioInCar(unsigned int radioStation) {
    plugin::CallMethodDynGlobal<cMusicManager *, unsigned int>(gaddrof(cMusicManager::SetRadioInCar), this, radioStation);
}

int addrof(cMusicManager::StopCutSceneMusic) = ADDRESS_BY_VERSION(0x57E2B0, 0x57E600, 0x57E500);
int gaddrof(cMusicManager::StopCutSceneMusic) = GLOBAL_ADDRESS_BY_VERSION(0x57E2B0, 0x57E600, 0x57E500);

void cMusicManager::StopCutSceneMusic() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::StopCutSceneMusic), this);
}

int addrof(cMusicManager::StopFrontEndTrack) = ADDRESS_BY_VERSION(0x57E3D0, 0x57E720, 0x57E620);
int gaddrof(cMusicManager::StopFrontEndTrack) = GLOBAL_ADDRESS_BY_VERSION(0x57E3D0, 0x57E720, 0x57E620);

void cMusicManager::StopFrontEndTrack() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::StopFrontEndTrack), this);
}

int addrof(cMusicManager::Terminate) = ADDRESS_BY_VERSION(0x57D140, 0x57D490, 0x57D390);
int gaddrof(cMusicManager::Terminate) = GLOBAL_ADDRESS_BY_VERSION(0x57D140, 0x57D490, 0x57D390);

void cMusicManager::Terminate() {
    plugin::CallMethodDynGlobal<cMusicManager *>(gaddrof(cMusicManager::Terminate), this);
}

int addrof(cMusicManager::UsesPoliceRadio) = ADDRESS_BY_VERSION(0x57E6A0, 0x57E9F0, 0x57E8F0);
int gaddrof(cMusicManager::UsesPoliceRadio) = GLOBAL_ADDRESS_BY_VERSION(0x57E6A0, 0x57E9F0, 0x57E8F0);

bool cMusicManager::UsesPoliceRadio(CVehicle *vehicle) {
    return plugin::CallMethodAndReturnDynGlobal<bool, cMusicManager *, CVehicle *>(gaddrof(cMusicManager::UsesPoliceRadio), this, vehicle);
}
