/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPickup.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned short(&AmmoForWeapon)[20] = *reinterpret_cast<unsigned short(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x5ED8D4, 0x5ED8D4, 0x5FA8D4));
PLUGIN_VARIABLE unsigned short(&AmmoForWeapon_OnStreet)[20] = *reinterpret_cast<unsigned short(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x5ED8FC, 0x5ED8FC, 0x5FA8FC));
PLUGIN_VARIABLE unsigned short(&CostOfWeapon)[20] = *reinterpret_cast<unsigned short(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x5ED924, 0x5ED924, 0x5FA924));

int ctor_addr(CPickup) = ADDRESS_BY_VERSION(0x4340E0, 0x4340E0, 0x4340E0);
int ctor_gaddr(CPickup) = GLOBAL_ADDRESS_BY_VERSION(0x4340E0, 0x4340E0, 0x4340E0);

int addrof(CPickup::GiveUsAPickUpObject) = ADDRESS_BY_VERSION(0x433BA0, 0x433BA0, 0x433BA0);
int gaddrof(CPickup::GiveUsAPickUpObject) = GLOBAL_ADDRESS_BY_VERSION(0x433BA0, 0x433BA0, 0x433BA0);

CObject *CPickup::GiveUsAPickUpObject(int handle) {
    return plugin::CallMethodAndReturnDynGlobal<CObject *, CPickup *, int>(gaddrof(CPickup::GiveUsAPickUpObject), this, handle);
}

int addrof(CPickup::Update) = ADDRESS_BY_VERSION(0x430860, 0x430860, 0x430860);
int gaddrof(CPickup::Update) = GLOBAL_ADDRESS_BY_VERSION(0x430860, 0x430860, 0x430860);

bool CPickup::Update(CPlayerPed *player, CVehicle *vehicle, int playerId) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPickup *, CPlayerPed *, CVehicle *, int>(gaddrof(CPickup::Update), this, player, vehicle, playerId);
}
