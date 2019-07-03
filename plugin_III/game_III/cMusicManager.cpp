/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cMusicManager.h"

cMusicManager &gMusicManager = *(cMusicManager *)0x8F3964;

// Converted from thiscall void cMusicManager::~cMusicManager() 0x57CF20 
cMusicManager::~cMusicManager() {
    plugin::CallMethod<0x57CF20, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::cMusicManager(void) 0x57CEE0 
cMusicManager::cMusicManager() {
    plugin::CallMethod<0x57CEE0, cMusicManager *>(this);
}

// Converted from thiscall bool cMusicManager::UsesPoliceRadio(CVehicle *vehicle) 0x57E6A0
bool cMusicManager::UsesPoliceRadio(CVehicle* vehicle) {
    return plugin::CallMethodAndReturn<bool, 0x57E6A0, cMusicManager *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void cMusicManager::Terminate(void) 0x57D140 
void cMusicManager::Terminate() {
    plugin::CallMethod<0x57D140, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::StopFrontEndTrack(void) 0x57E3D0 
void cMusicManager::StopFrontEndTrack() {
    plugin::CallMethod<0x57E3D0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::StopCutSceneMusic(void) 0x57E2B0 
void cMusicManager::StopCutSceneMusic() {
    plugin::CallMethod<0x57E2B0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::SetRadioInCar(uint radioStation) 0x57D2C0
void cMusicManager::SetRadioInCar(unsigned int radioStation) {
    plugin::CallMethod<0x57D2C0, cMusicManager *, unsigned int>(this, radioStation);
}

// Converted from thiscall void cMusicManager::SetRadioChannelByScript(uchar station,int position) 0x57D180
void cMusicManager::SetRadioChannelByScript(unsigned char station, int position) {
    plugin::CallMethod<0x57D180, cMusicManager *, unsigned char, int>(this, station, position);
}

// Converted from thiscall void cMusicManager::ServiceTrack(void) 0x57E100 
void cMusicManager::ServiceTrack() {
    plugin::CallMethod<0x57E100, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ServiceGameMode(void) 0x57D690 
void cMusicManager::ServiceGameMode() {
    plugin::CallMethod<0x57D690, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ServiceFrontEndMode(void) 0x57D530 
void cMusicManager::ServiceFrontEndMode() {
    plugin::CallMethod<0x57D530, cMusicManager *>(this);
}

// Converted from thiscall bool cMusicManager::ServiceAnnouncement(void) 0x57DFC0 
bool cMusicManager::ServiceAnnouncement() {
    return plugin::CallMethodAndReturn<bool, 0x57DFC0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ServiceAmbience(void) 0x57DCB0 
void cMusicManager::ServiceAmbience() {
    plugin::CallMethod<0x57DCB0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::Service(void) 0x57D440 
void cMusicManager::Service() {
    plugin::CallMethod<0x57D440, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ResetTimers(uint time) 0x57D420
void cMusicManager::ResetTimers(unsigned int time) {
    plugin::CallMethod<0x57D420, cMusicManager *, unsigned int>(this, time);
}

// Converted from thiscall void cMusicManager::ResetMusicAfterReload(void) 0x57CF30 
void cMusicManager::ResetMusicAfterReload() {
    plugin::CallMethod<0x57CF30, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::PreloadCutSceneMusic(uchar sound) 0x57E210
void cMusicManager::PreloadCutSceneMusic(unsigned char sound) {
    plugin::CallMethod<0x57E210, cMusicManager *, unsigned char>(this, sound);
}

// Converted from thiscall bool cMusicManager::PlayerInCar(void) 0x57E4B0 
bool cMusicManager::PlayerInCar() {
    return plugin::CallMethodAndReturn<bool, 0x57E4B0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::PlayPreloadedCutSceneMusic(void) 0x57E290 
void cMusicManager::PlayPreloadedCutSceneMusic() {
    plugin::CallMethod<0x57E290, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::PlayFrontEndTrack(uchar sound,uchar) 0x57E2E0
void cMusicManager::PlayFrontEndTrack(unsigned char sound, unsigned char arg1) {
    plugin::CallMethod<0x57E2E0, cMusicManager *, unsigned char, unsigned char>(this, sound, arg1);
}

// Converted from thiscall void cMusicManager::PlayAnnouncement(uchar announcement) 0x57E430
void cMusicManager::PlayAnnouncement(unsigned char announcement) {
    plugin::CallMethod<0x57E430, cMusicManager *, unsigned char>(this, announcement);
}

// Converted from thiscall void cMusicManager::Initialise(void) 0x57CF70 
void cMusicManager::Initialise() {
    plugin::CallMethod<0x57CF70, cMusicManager *>(this);
}

// Converted from thiscall uint cMusicManager::GetTrackStartPos(uchar station) 0x57E450
unsigned int cMusicManager::GetTrackStartPos(unsigned char station) {
    return plugin::CallMethodAndReturn<unsigned int, 0x57E450, cMusicManager *, unsigned char>(this, station);
}

// Converted from thiscall uchar cMusicManager::GetRadioInCar(void) 0x57D1D0
unsigned char cMusicManager::GetRadioInCar() {
    return plugin::CallMethodAndReturn<unsigned char, 0x57D1D0, cMusicManager *>(this);
}

// Converted from thiscall uchar cMusicManager::GetNextCarTuning(void) 0x57E5A0
unsigned char cMusicManager::GetNextCarTuning() {
    return plugin::CallMethodAndReturn<unsigned char, 0x57E5A0, cMusicManager *>(this);
}

// Converted from thiscall uchar cMusicManager::GetCarTuning(void) 0x57E530
unsigned char cMusicManager::GetCarTuning() {
    return plugin::CallMethodAndReturn<unsigned char, 0x57E530, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::DisplayRadioStationName(void) 0x57E6D0 
void cMusicManager::DisplayRadioStationName() {
    plugin::CallMethod<0x57E6D0, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ComputeAmbienceVol(uchar,uchar &) 0x57DEA0 
void cMusicManager::ComputeAmbienceVol(unsigned char arg0, unsigned char& arg1) {
    plugin::CallMethod<0x57DEA0, cMusicManager *, unsigned char, unsigned char&>(this, arg0, arg1);
}

// Converted from thiscall bool cMusicManager::ChangeRadioChannel(void) 0x57E130 
bool cMusicManager::ChangeRadioChannel() {
    return plugin::CallMethodAndReturn<bool, 0x57E130, cMusicManager *>(this);
}

// Converted from thiscall void cMusicManager::ChangeMusicMode(uchar) 0x57D310 
void cMusicManager::ChangeMusicMode(unsigned char arg0) {
    plugin::CallMethod<0x57D310, cMusicManager *, unsigned char>(this, arg0);
}
