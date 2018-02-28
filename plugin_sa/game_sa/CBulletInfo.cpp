/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletInfo.h"

unsigned int MAX_BULLET_INFOS = 8;
CBulletInfo *aBulletInfos = (CBulletInfo *)0xC88740;
CVector &PlayerSniperBulletStart = *(CVector *)0xC888A0;
CVector &PlayerSniperBulletEnd = *(CVector *)0xC888AC;

// Converted from cdecl void CBulletInfo::Initialise(void) 0x735FD0
void CBulletInfo::Initialise() {
    plugin::Call<0x735FD0>();
}

// Converted from cdecl void CBulletInfo::Shutdown(void) 0x736000
void CBulletInfo::Shutdown() {
    plugin::Call<0x736000>();
}

// Converted from cdecl bool CBulletInfo::AddBullet(CEntity *creator,eWeaponType weaponType,CVector position,CVector velocity) 0x736010
bool CBulletInfo::AddBullet(CEntity* creator, eWeaponType weaponType, CVector position, CVector velocity) {
    return plugin::CallAndReturn<bool, 0x736010, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, position, velocity);
}

// Converted from cdecl void CBulletInfo::Update(void) 0x7360D0
void CBulletInfo::Update() {
    plugin::Call<0x7360D0>();
}