/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCrane.h"

PLUGIN_SOURCE_FILE

int addrof(CCrane::RotateCarriedCarProperly) = ADDRESS_BY_VERSION(0x5A8310, 0x5A8330, 0x5A8140);
int gaddrof(CCrane::RotateCarriedCarProperly) = GLOBAL_ADDRESS_BY_VERSION(0x5A8310, 0x5A8330, 0x5A8140);

void CCrane::RotateCarriedCarProperly() {
    plugin::CallDynGlobal(gaddrof(CCrane::RotateCarriedCarProperly));
}

int addrof(CCrane::SetHookMatrix) = ADDRESS_BY_VERSION(0x5A7B00, 0x5A7B20, 0x5A7930);
int gaddrof(CCrane::SetHookMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x5A7B00, 0x5A7B20, 0x5A7930);

void CCrane::SetHookMatrix() {
    plugin::CallDynGlobal(gaddrof(CCrane::SetHookMatrix));
}

int addrof(CCrane::Update) = ADDRESS_BY_VERSION(0x5A8460, 0x5A8480, 0x5A8290);
int gaddrof(CCrane::Update) = GLOBAL_ADDRESS_BY_VERSION(0x5A8460, 0x5A8480, 0x5A8290);

void CCrane::Update() {
    plugin::CallDynGlobal(gaddrof(CCrane::Update));
}
