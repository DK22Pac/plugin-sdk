/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCranes.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CCrane(&CCranes::aCranes)[8] = *reinterpret_cast<CCrane(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x6FA4E0, 0x6FA4E0, 0x70A620));
PLUGIN_VARIABLE int &CCranes::NumCranes = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E28AC, 0x8E285C, 0x8F299C));
PLUGIN_VARIABLE unsigned int &CCranes::CarsCollectedMilitaryCrane = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6248, 0x8F6400, 0x906540));

int addrof(CCranes::ActivateCrane) = ADDRESS_BY_VERSION(0x543650, 0x543890, 0x543840);
int gaddrof(CCranes::ActivateCrane) = GLOBAL_ADDRESS_BY_VERSION(0x543650, 0x543890, 0x543840);

void CCranes::ActivateCrane(float infX, float supX, float infY, float supY, float dropOffX, float dropOffY, float dropOffZ, float heading, bool isCrusher, bool isMilitary, float posX, float posY) {
    plugin::CallDynGlobal<float, float, float, float, float, float, float, float, bool, bool, float, float>(gaddrof(CCranes::ActivateCrane), infX, supX, infY, supY, dropOffX, dropOffY, dropOffZ, heading, isCrusher, isMilitary, posX, posY);
}

int addrof(CCranes::AddThisOneCrane) = ADDRESS_BY_VERSION(0x543440, 0x543680, 0x543630);
int gaddrof(CCranes::AddThisOneCrane) = GLOBAL_ADDRESS_BY_VERSION(0x543440, 0x543680, 0x543630);

void CCranes::AddThisOneCrane(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CCranes::AddThisOneCrane), entity);
}

int addrof(CCranes::DeActivateCrane) = ADDRESS_BY_VERSION(0x543890, 0x543AD0, 0x543A80);
int gaddrof(CCranes::DeActivateCrane) = GLOBAL_ADDRESS_BY_VERSION(0x543890, 0x543AD0, 0x543A80);

void CCranes::DeActivateCrane(float x, float y) {
    plugin::CallDynGlobal<float, float>(gaddrof(CCranes::DeActivateCrane), x, y);
}

int addrof(CCranes::DoesMilitaryCraneHaveThisOneAlready) = ADDRESS_BY_VERSION(0x544B00, 0x544D40, 0x544CF0);
int gaddrof(CCranes::DoesMilitaryCraneHaveThisOneAlready) = GLOBAL_ADDRESS_BY_VERSION(0x544B00, 0x544D40, 0x544CF0);

bool CCranes::DoesMilitaryCraneHaveThisOneAlready(unsigned int vehicleModelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int>(gaddrof(CCranes::DoesMilitaryCraneHaveThisOneAlready), vehicleModelIndex);
}

int addrof(CCranes::HaveAllCarsBeenCollectedByMilitaryCrane) = ADDRESS_BY_VERSION(0x544BE0, 0x544E20, 0x544DD0);
int gaddrof(CCranes::HaveAllCarsBeenCollectedByMilitaryCrane) = GLOBAL_ADDRESS_BY_VERSION(0x544BE0, 0x544E20, 0x544DD0);

bool CCranes::HaveAllCarsBeenCollectedByMilitaryCrane() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CCranes::HaveAllCarsBeenCollectedByMilitaryCrane));
}

int addrof(CCranes::InitCranes) = ADDRESS_BY_VERSION(0x543360, 0x5435A0, 0x543550);
int gaddrof(CCranes::InitCranes) = GLOBAL_ADDRESS_BY_VERSION(0x543360, 0x5435A0, 0x543550);

void CCranes::InitCranes() {
    plugin::CallDynGlobal(gaddrof(CCranes::InitCranes));
}

int addrof(CCranes::IsThisCarBeingCarriedByAnyCrane) = ADDRESS_BY_VERSION(0x545190, 0x5453D0, 0x545380);
int gaddrof(CCranes::IsThisCarBeingCarriedByAnyCrane) = GLOBAL_ADDRESS_BY_VERSION(0x545190, 0x5453D0, 0x545380);

bool CCranes::IsThisCarBeingCarriedByAnyCrane(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCranes::IsThisCarBeingCarriedByAnyCrane), vehicle);
}

int addrof(CCranes::IsThisCarBeingTargettedByAnyCrane) = ADDRESS_BY_VERSION(0x5451E0, 0x545420, 0x5453D0);
int gaddrof(CCranes::IsThisCarBeingTargettedByAnyCrane) = GLOBAL_ADDRESS_BY_VERSION(0x5451E0, 0x545420, 0x5453D0);

bool CCranes::IsThisCarBeingTargettedByAnyCrane(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCranes::IsThisCarBeingTargettedByAnyCrane), vehicle);
}

int addrof(CCranes::IsThisCarPickedUp) = ADDRESS_BY_VERSION(0x543940, 0x543B80, 0x543B30);
int gaddrof(CCranes::IsThisCarPickedUp) = GLOBAL_ADDRESS_BY_VERSION(0x543940, 0x543B80, 0x543B30);

bool CCranes::IsThisCarPickedUp(float x, float y, CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, float, float, CVehicle *>(gaddrof(CCranes::IsThisCarPickedUp), x, y, vehicle);
}

int addrof(CCranes::RegisterCarForMilitaryCrane) = ADDRESS_BY_VERSION(0x544B80, 0x544DC0, 0x544D70);
int gaddrof(CCranes::RegisterCarForMilitaryCrane) = GLOBAL_ADDRESS_BY_VERSION(0x544B80, 0x544DC0, 0x544D70);

void CCranes::RegisterCarForMilitaryCrane(unsigned int vehicleModelIndex) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CCranes::RegisterCarForMilitaryCrane), vehicleModelIndex);
}

int addrof(CCranes::Save) = ADDRESS_BY_VERSION(0x545210, 0x545450, 0x545400);
int gaddrof(CCranes::Save) = GLOBAL_ADDRESS_BY_VERSION(0x545210, 0x545450, 0x545400);

void CCranes::Save(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CCranes::Save), buf, size);
}

int addrof(CCranes::UpdateCranes) = ADDRESS_BY_VERSION(0x5439E0, 0x543C20, 0x543BD0);
int gaddrof(CCranes::UpdateCranes) = GLOBAL_ADDRESS_BY_VERSION(0x5439E0, 0x543C20, 0x543BD0);

void CCranes::UpdateCranes() {
    plugin::CallDynGlobal(gaddrof(CCranes::UpdateCranes));
}

int addrof(CranesLoad) = ADDRESS_BY_VERSION(0x5454D0, 0x5456E0, 0x545690);
int gaddrof(CranesLoad) = GLOBAL_ADDRESS_BY_VERSION(0x5454D0, 0x5456E0, 0x545690);

void CranesLoad(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CranesLoad), buf, size);
}
