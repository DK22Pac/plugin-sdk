/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrainDoor.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CTrainDoor) = ADDRESS_BY_VERSION(0x54E430, 0x54E570, 0x54E520);
int ctor_gaddr(CTrainDoor) = GLOBAL_ADDRESS_BY_VERSION(0x54E430, 0x54E570, 0x54E520);

int addrof(CTrainDoor::IsClosed) = ADDRESS_BY_VERSION(0x5460F0, 0x5462F0, 0x5462A0);
int gaddrof(CTrainDoor::IsClosed) = GLOBAL_ADDRESS_BY_VERSION(0x5460F0, 0x5462F0, 0x5462A0);

bool CTrainDoor::IsClosed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CTrainDoor *>(gaddrof(CTrainDoor::IsClosed), this);
}

int addrof(CTrainDoor::IsFullyOpen) = ADDRESS_BY_VERSION(0x546120, 0x546320, 0x5462D0);
int gaddrof(CTrainDoor::IsFullyOpen) = GLOBAL_ADDRESS_BY_VERSION(0x546120, 0x546320, 0x5462D0);

bool CTrainDoor::IsFullyOpen() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CTrainDoor *>(gaddrof(CTrainDoor::IsFullyOpen), this);
}

int addrof(CTrainDoor::Open) = ADDRESS_BY_VERSION(0x546200, 0x546400, 0x5463B0);
int gaddrof(CTrainDoor::Open) = GLOBAL_ADDRESS_BY_VERSION(0x546200, 0x546400, 0x5463B0);

void CTrainDoor::Open(float angle) {
    plugin::CallMethodDynGlobal<CTrainDoor *, float>(gaddrof(CTrainDoor::Open), this, angle);
}

int addrof(CTrainDoor::RetTranslationWhenClosed) = ADDRESS_BY_VERSION(0x546180, 0x546380, 0x546330);
int gaddrof(CTrainDoor::RetTranslationWhenClosed) = GLOBAL_ADDRESS_BY_VERSION(0x546180, 0x546380, 0x546330);

float CTrainDoor::RetTranslationWhenClosed() {
    return plugin::CallMethodAndReturnDynGlobal<float, CTrainDoor *>(gaddrof(CTrainDoor::RetTranslationWhenClosed), this);
}

int addrof(CTrainDoor::RetTranslationWhenOpen) = ADDRESS_BY_VERSION(0x5461C0, 0x5463C0, 0x546370);
int gaddrof(CTrainDoor::RetTranslationWhenOpen) = GLOBAL_ADDRESS_BY_VERSION(0x5461C0, 0x5463C0, 0x546370);

float CTrainDoor::RetTranslationWhenOpen() {
    return plugin::CallMethodAndReturnDynGlobal<float, CTrainDoor *>(gaddrof(CTrainDoor::RetTranslationWhenOpen), this);
}
