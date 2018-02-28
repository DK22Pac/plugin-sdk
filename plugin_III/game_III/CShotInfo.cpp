/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShotInfo.h"

float *CShotInfo::ms_afRandTable = (float *)0x6E9878;
CShotInfo *aShotInfo = (CShotInfo *)0x64F0D0;

// Converted from cdecl bool CShotInfo::AddShot(CEntity *creator,eWeaponType weaponType,CVector origin,CVector target) 0x55BD70
bool CShotInfo::AddShot(CEntity* creator, eWeaponType weaponType, CVector origin, CVector target) {
    return plugin::CallAndReturn<bool, 0x55BD70, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, origin, target);
}

// Converted from thiscall void CShotInfo::CShotInfo(void) 0x55C2C0
CShotInfo::CShotInfo() {
    plugin::CallMethod<0x55C2C0, CShotInfo *>(this);
}

// Converted from cdecl void CShotInfo::Initialise(void) 0x55BC60
void CShotInfo::Initialise() {
    plugin::Call<0x55BC60>();
}

// Converted from cdecl void CShotInfo::Shutdown(void) 0x55BD50
void CShotInfo::Shutdown() {
    plugin::Call<0x55BD50>();
}

// Converted from cdecl void CShotInfo::Update(void) 0x55BFF0
void CShotInfo::Update() {
    plugin::Call<0x55BFF0>();
}
