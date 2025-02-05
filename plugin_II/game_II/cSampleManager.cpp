/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "cSampleManager.h"

cSampleManager& SampleManager = *(cSampleManager*)0x66C950;

void cSampleManager::PlayVocal(int stream, int vocal, bool append) {
    plugin::CallMethod<0x4B70C0, cSampleManager*, int, int, bool>(this, stream, vocal, append);
}

void cSampleManager::CloseStream(int stream) {
    plugin::CallMethod<0x4B6860, cSampleManager*, int>(this, stream);
}

void cSampleManager::SetStreamVolume(int stream, unsigned char volume) {
    plugin::CallMethod<0x4B6890, cSampleManager*, int, unsigned char>(this, stream, volume);
}

void cSampleManager::PlaySample(int sample) {
    plugin::CallMethod<0x4B69B0, cSampleManager*, int>(this, sample);
}

void cSampleManager::SetSampleVolume(unsigned char vol) {
    plugin::CallMethod<0x4B6990, cSampleManager*, unsigned char>(this, vol);
}

void cSampleManager::PlayFrontendTrack(unsigned int id) {
    plugin::CallMethod<0x4B6700, cSampleManager*, unsigned char>(this, id);
}

void cSampleManager::StopFrontendTrack() {
    plugin::CallMethod<0x4B67B0, cSampleManager*>(this);
}

bool cSampleManager::IsFrontendTrackPlaying() {
    return plugin::CallMethodAndReturn<bool, 0x4B66A0, cSampleManager*>(this);
}

bool cSampleManager::IsSampleNotPlaying() {
    return plugin::CallMethodAndReturn<bool, 0x4B6A40, cSampleManager*>(this);
}
