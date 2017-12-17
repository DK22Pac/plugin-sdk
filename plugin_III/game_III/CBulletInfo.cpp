/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletInfo.h"

unsigned int MAX_BULLET_INFOS = 100;
CBulletInfo *aBulletInfos = (CBulletInfo *)0x64D0D8;

// Converted from cdecl void CBulletInfo::AddBullet(CEntity *creator, eWeaponType weaponType, CVector position, CVector velocity) 0x558470
void CBulletInfo::AddBullet(CEntity* creator, eWeaponType weaponType, CVector position, CVector velocity) {
    plugin::Call<0x558470, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, position, velocity);
}

// Converted from thiscall void CBulletInfo::CBulletInfo(void) 0x559020 
CBulletInfo::CBulletInfo() {
    plugin::CallMethod<0x559020, CBulletInfo *>(this);
}

// Converted from cdecl void CBulletInfo::Initialise(void) 0x558220 
void CBulletInfo::Initialise() {
    plugin::Call<0x558220>();
}

// Converted from cdecl void CBulletInfo::Shutdown(void) 0x558450 
void CBulletInfo::Shutdown() {
    plugin::Call<0x558450>();
}

// Converted from cdecl bool CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) 0x558D40 
bool CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) {
    return plugin::CallAndReturn<bool, 0x558D40, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CBulletInfo::Update(void) 0x558550 
void CBulletInfo::Update() {
    plugin::Call<0x558550>();
}
