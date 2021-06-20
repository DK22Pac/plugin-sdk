/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShotInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&CShotInfo::ms_afRandTable)[20] = *reinterpret_cast<float(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x6E9878, 0x6E9878, 0x6F99B8));
PLUGIN_VARIABLE CShotInfo(&gaShotInfo)[100] = *reinterpret_cast<CShotInfo(*)[100]>(GLOBAL_ADDRESS_BY_VERSION(0x64F0D0, 0x64F0D0, 0x65F0D8));

int ctor_addr(CShotInfo) = ADDRESS_BY_VERSION(0x55C2C0, 0x55C3F0, 0x55C3A0);
int ctor_gaddr(CShotInfo) = GLOBAL_ADDRESS_BY_VERSION(0x55C2C0, 0x55C3F0, 0x55C3A0);

int addrof(CShotInfo::AddShot) = ADDRESS_BY_VERSION(0x55BD70, 0x55BEA0, 0x55BE50);
int gaddrof(CShotInfo::AddShot) = GLOBAL_ADDRESS_BY_VERSION(0x55BD70, 0x55BEA0, 0x55BE50);

bool CShotInfo::AddShot(CEntity *sourceEntity, eWeaponType weaponType, CVector startPos, CVector endPos) {
    return plugin::CallAndReturnDynGlobal<bool, CEntity *, eWeaponType, CVector, CVector>(gaddrof(CShotInfo::AddShot), sourceEntity, weaponType, startPos, endPos);
}

int addrof(CShotInfo::Initialise) = ADDRESS_BY_VERSION(0x55BC60, 0x55BD90, 0x55BD40);
int gaddrof(CShotInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x55BC60, 0x55BD90, 0x55BD40);

void CShotInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CShotInfo::Initialise));
}

int addrof(CShotInfo::Shutdown) = ADDRESS_BY_VERSION(0x55BD50, 0x55BE80, 0x55BE30);
int gaddrof(CShotInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x55BD50, 0x55BE80, 0x55BE30);

void CShotInfo::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CShotInfo::Shutdown));
}

int addrof(CShotInfo::Update) = ADDRESS_BY_VERSION(0x55BFF0, 0x55C120, 0x55C0D0);
int gaddrof(CShotInfo::Update) = GLOBAL_ADDRESS_BY_VERSION(0x55BFF0, 0x55C120, 0x55C0D0);

void CShotInfo::Update() {
    plugin::CallDynGlobal(gaddrof(CShotInfo::Update));
}
