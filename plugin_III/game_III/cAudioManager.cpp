/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioManager.h"

cAudioManager &AudioManager = *(cAudioManager *)0x880FC0;

tVehicleSampleData* aVehicleSettings = (tVehicleSampleData*)0x606204;

const uint32_t* gOneShotCol = (const uint32_t*)0x604BD0;

// Converted from thiscall void cAudioManager::cAudioManager(void) 0x579AB0 
cAudioManager::cAudioManager() {
    plugin::CallMethod<0x579AB0, cAudioManager *>(this);
}

// Converted from thiscall void cAudioManager::~cAudioManager() 0x57A0A0 
cAudioManager::~cAudioManager() {
    plugin::CallMethod<0x57A0A0, cAudioManager *>(this);
}

// Converted from thiscall bool cAudioManager::UsesSiren(uint index) 0x56C3C0
bool cAudioManager::UsesSiren(unsigned int index) {
    return plugin::CallMethodAndReturn<bool, 0x56C3C0, cAudioManager *, unsigned int>(this, index);
}

// Converted from thiscall bool cAudioManager::UsesSirenSwitching(uint index) 0x56C3F0
bool cAudioManager::UsesSirenSwitching(unsigned int index) {
    return plugin::CallMethodAndReturn<bool, 0x56C3F0, cAudioManager *, unsigned int>(this, index);
}

void cAudioManager::PlayerJustGotInCar() {
    plugin::CallMethod<0x56AD10, cAudioManager*>(this);
}

void cAudioManager::PlayerJustLeftCar() {
    plugin::CallMethod<0x56AD20, cAudioManager*>(this);
}

void cAudioManager::UpdateGasPedalAudio(CVehicle* vehicle) {
    plugin::CallMethod<0x56AC80, cAudioManager*>(this, vehicle);
}

bool cAudioManager::ProcessVehicleRoadNoise(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56A230, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessWetRoadNoise(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56A440, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessVehicleSkidding(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56BCB0, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessVehicleHorn(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56C200, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessVehicleSirenOrAlarm(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56C420, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessCarBombTick(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56CC20, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessEngineDamage(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56CAF0, cAudioManager*>(this, params);
}

bool cAudioManager::ProcessVehicleEngine(cVehicleParams* params) {
    return plugin::CallMethodAndReturn<bool, 0x56A610, cAudioManager*>(this, params);
}

void cAudioManager::ProcessVehicleOneShots(cVehicleParams* params) {
    plugin::CallMethod<0x56CD40, cAudioManager*>(this, params);
}

void cAudioManager::CalculateDistance(bool* done, float distance) {
    plugin::CallMethod<0x5697A0>(this, done, distance);
}

uint8_t cAudioManager::ComputeVolume(uint8_t emittingVolume, float maxDistance, float distance) {
    return plugin::CallMethodAndReturn<uint8_t, 0x57ABB0>(this, emittingVolume, maxDistance, distance);
}

void cAudioManager::AddSampleToRequestedQueue() {
    plugin::CallMethod<0x57B070>(this);
}

void cAudioManager::AddPlayerCarSample(uint8_t vol, uint32_t freq, uint32_t sample, uint8_t bank, uint8_t counter, bool loop) {
    plugin::CallMethod<0x56AD30>(this, vol, freq, sample, bank, counter, loop);
}

void cAudioManager::TranslateEntity(CVector* in, CVector* out) {
    plugin::CallMethod<0x57AC60>(this, in, out);
}

int32_t cAudioManager::ComputePan(float dist, CVector* vec) {
    return plugin::CallMethodAndReturn<int32_t, 0x57AD20>(this, dist, vec);
}

void cAudioManager::SetUpOneShotCollisionSound(cAudioCollision* col) {
    plugin::CallMethod<0x5689D0>(this, col);
}

float cAudioManager::GetCollisionOneShotRatio(uint32_t a, float b) {
    return plugin::CallMethodAndReturn<float, 0x569060>(this, a, b);
}
