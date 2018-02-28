/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletInfo.h"

unsigned int MAX_BULLET_INFOS = 100;
CBulletInfo *aBulletInfos = (CBulletInfo *)0x77FB58;

// Converted from cdecl void CBulletInfo::AddBullet(CEntity *creator, eWeaponType weaponType, CVector position, CVector velocity) 0x5C47C0
void CBulletInfo::AddBullet(CEntity* creator, eWeaponType weaponType, CVector position, CVector velocity) {
    plugin::Call<0x5C47C0, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, position, velocity);
}

// Converted from thiscall void CBulletInfo::CBulletInfo(void) 0x5C4B10 
CBulletInfo::CBulletInfo() {
    plugin::CallMethod<0x5C4B10, CBulletInfo *>(this);
}

// Converted from cdecl void CBulletInfo::Initialise(void) 0x5C48C0 
void CBulletInfo::Initialise() {
    plugin::Call<0x5C48C0>();
}

// Converted from cdecl void CBulletInfo::Shutdown(void) 0x5C48A0 
void CBulletInfo::Shutdown() {
    plugin::Call<0x5C48A0>();
}

// Converted from cdecl void CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) 0x5C3B20 
void CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x5C3B20, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CBulletInfo::Update(void) 0x5C3DE0 
void CBulletInfo::Update() {
    plugin::Call<0x5C3DE0>();
}
