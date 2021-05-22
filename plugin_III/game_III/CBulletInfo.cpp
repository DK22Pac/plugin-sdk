/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBulletInfo(&CBulletInfo::aBulletInfos)[100] = *reinterpret_cast<CBulletInfo(*)[100]>(GLOBAL_ADDRESS_BY_VERSION(0x64D0D8, 0x64D0D8, 0x65D0E0));
PLUGIN_VARIABLE CVector &PlayerSniperBulletStart = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x9414BC, 0x941674, 0x9517B4));
PLUGIN_VARIABLE CVector &PlayerSniperBulletEnd = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x9430C8, 0x943280, 0x9533C0));
PLUGIN_VARIABLE bool &bPlayerSniperBullet = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD81, 0x95CF39, 0x96D079));

int ctor_addr(CBulletInfo) = ADDRESS_BY_VERSION(0x559020, 0x559150, 0x559100);
int ctor_gaddr(CBulletInfo) = GLOBAL_ADDRESS_BY_VERSION(0x559020, 0x559150, 0x559100);

int addrof(CBulletInfo::AddBullet) = ADDRESS_BY_VERSION(0x558470, 0x5585A0, 0x558550);
int gaddrof(CBulletInfo::AddBullet) = GLOBAL_ADDRESS_BY_VERSION(0x558470, 0x5585A0, 0x558550);

void CBulletInfo::AddBullet(CEntity *pSource, eWeaponType type, CVector pos, CVector speed) {
    plugin::CallDynGlobal<CEntity *, eWeaponType, CVector, CVector>(gaddrof(CBulletInfo::AddBullet), pSource, type, pos, speed);
}

int addrof(CBulletInfo::Initialise) = ADDRESS_BY_VERSION(0x558220, 0x558350, 0x558300);
int gaddrof(CBulletInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x558220, 0x558350, 0x558300);

void CBulletInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CBulletInfo::Initialise));
}

int addrof(CBulletInfo::Shutdown) = ADDRESS_BY_VERSION(0x558450, 0x558580, 0x558530);
int gaddrof(CBulletInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x558450, 0x558580, 0x558530);

void CBulletInfo::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CBulletInfo::Shutdown));
}

int addrof(CBulletInfo::TestForSniperBullet) = ADDRESS_BY_VERSION(0x558D40, 0x558E70, 0x558E20);
int gaddrof(CBulletInfo::TestForSniperBullet) = GLOBAL_ADDRESS_BY_VERSION(0x558D40, 0x558E70, 0x558E20);

bool CBulletInfo::TestForSniperBullet(float x1, float x2, float y1, float y2, float z1, float z2) {
    return plugin::CallAndReturnDynGlobal<bool, float, float, float, float, float, float>(gaddrof(CBulletInfo::TestForSniperBullet), x1, x2, y1, y2, z1, z2);
}

int addrof(CBulletInfo::Update) = ADDRESS_BY_VERSION(0x558550, 0x558680, 0x558630);
int gaddrof(CBulletInfo::Update) = GLOBAL_ADDRESS_BY_VERSION(0x558550, 0x558680, 0x558630);

void CBulletInfo::Update() {
    plugin::CallDynGlobal(gaddrof(CBulletInfo::Update));
}
