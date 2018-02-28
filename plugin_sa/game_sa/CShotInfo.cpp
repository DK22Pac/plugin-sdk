/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShotInfo.h"

float *CShotInfo::ms_afRandTable = (float *)0xC89628;
unsigned int MAX_SHOT_INFOS = 100;
CShotInfo *aShotInfos = (CShotInfo *)0xC89690;

// Converted from cdecl void CShotInfo::Initialise(void) 0x739B60
void CShotInfo::Initialise() {
    plugin::Call<0x739B60>();
}

// Converted from cdecl void CShotInfo::Shutdown(void) 0x739C20
void CShotInfo::Shutdown() {
    plugin::Call<0x739C20>();
}

// Converted from cdecl bool CShotInfo::AddShot(CEntity *creator,eWeaponType weaponType,CVector origin,CVector target) 0x739C30
bool CShotInfo::AddShot(CEntity* creator, eWeaponType weaponType, CVector origin, CVector target) {
    return plugin::CallAndReturn<bool, 0x739C30, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, origin, target);
}

// Converted from cdecl bool CShotInfo::GetFlameThrowerShotPosn(uchar shotId,CVector *outPosn) 0x739DE0
bool CShotInfo::GetFlameThrowerShotPosn(unsigned char shotId, CVector* outPosn) {
    return plugin::CallAndReturn<bool, 0x739DE0, unsigned char, CVector*>(shotId, outPosn);
}

// Converted from cdecl void CShotInfo::Update(void) 0x739E60
void CShotInfo::Update() {
    plugin::Call<0x739E60>();
}