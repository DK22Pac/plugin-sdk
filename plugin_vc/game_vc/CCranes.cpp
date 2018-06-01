/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCranes.h"

PLUGIN_SOURCE_FILE

int addrof(CCranes::AddThisOneCrane) = ADDRESS_BY_VERSION(0x5A93C0, 0x5A93E0, 0x5A91F0);
int gaddrof(CCranes::AddThisOneCrane) = GLOBAL_ADDRESS_BY_VERSION(0x5A93C0, 0x5A93E0, 0x5A91F0);

int CCranes::AddThisOneCrane(CEntity *pEnity) {
    return plugin::CallAndReturnDynGlobal<int, CEntity *>(gaddrof(CCranes::AddThisOneCrane), pEnity);
}

int addrof(CCranes::DoesMilitaryCraneHaveThisOneAlready) = ADDRESS_BY_VERSION(0x5A7F90, 0x5A7FB0, 0x5A7DC0);
int gaddrof(CCranes::DoesMilitaryCraneHaveThisOneAlready) = GLOBAL_ADDRESS_BY_VERSION(0x5A7F90, 0x5A7FB0, 0x5A7DC0);

bool CCranes::DoesMilitaryCraneHaveThisOneAlready(unsigned short arg1) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned short>(gaddrof(CCranes::DoesMilitaryCraneHaveThisOneAlready), arg1);
}

int addrof(CCranes::InitCranes) = ADDRESS_BY_VERSION(0x5A94B0, 0x5A94D0, 0x5A92E0);
int gaddrof(CCranes::InitCranes) = GLOBAL_ADDRESS_BY_VERSION(0x5A94B0, 0x5A94D0, 0x5A92E0);

void CCranes::InitCranes() {
    plugin::CallDynGlobal(gaddrof(CCranes::InitCranes));
}

int addrof(CCranes::IsThisCarBeingCarriedByAnyCrane) = ADDRESS_BY_VERSION(0x5A7AB0, 0x5A7AD0, 0x5A78E0);
int gaddrof(CCranes::IsThisCarBeingCarriedByAnyCrane) = GLOBAL_ADDRESS_BY_VERSION(0x5A7AB0, 0x5A7AD0, 0x5A78E0);

bool CCranes::IsThisCarBeingCarriedByAnyCrane(CVehicle *pVehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCranes::IsThisCarBeingCarriedByAnyCrane), pVehicle);
}

int addrof(CCranes::IsThisCarBeingTargettedByAnyCrane) = ADDRESS_BY_VERSION(0x5A7A80, 0x5A7AA0, 0x5A78B0);
int gaddrof(CCranes::IsThisCarBeingTargettedByAnyCrane) = GLOBAL_ADDRESS_BY_VERSION(0x5A7A80, 0x5A7AA0, 0x5A78B0);

bool CCranes::IsThisCarBeingTargettedByAnyCrane(CVehicle *pVehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCranes::IsThisCarBeingTargettedByAnyCrane), pVehicle);
}

int addrof(CCranes::RegisterCarForMilitaryCrane) = ADDRESS_BY_VERSION(0x5A7EF0, 0x5A7F10, 0x5A7D20);
int gaddrof(CCranes::RegisterCarForMilitaryCrane) = GLOBAL_ADDRESS_BY_VERSION(0x5A7EF0, 0x5A7F10, 0x5A7D20);

void CCranes::RegisterCarForMilitaryCrane(unsigned short arg1) {
    plugin::CallDynGlobal<unsigned short>(gaddrof(CCranes::RegisterCarForMilitaryCrane), arg1);
}

int addrof(CCranes::UpdateCranes) = ADDRESS_BY_VERSION(0x5A92E0, 0x5A9300, 0x5A9110);
int gaddrof(CCranes::UpdateCranes) = GLOBAL_ADDRESS_BY_VERSION(0x5A92E0, 0x5A9300, 0x5A9110);

void CCranes::UpdateCranes() {
    plugin::CallDynGlobal(gaddrof(CCranes::UpdateCranes));
}
