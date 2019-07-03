/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioManager.h"

cAudioManager &gAudioManager = *(cAudioManager *)0x880FC0;

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
