/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSpecialFX.h"

PLUGIN_SOURCE_FILE

int addrof(CSpecialFX::Init) = ADDRESS_BY_VERSION(0x5189E0, 0x518C10, 0x518BA0);
int gaddrof(CSpecialFX::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5189E0, 0x518C10, 0x518BA0);

void CSpecialFX::Init() {
    plugin::CallDynGlobal(gaddrof(CSpecialFX::Init));
}

int addrof(CSpecialFX::Render) = ADDRESS_BY_VERSION(0x518DC0, 0x518FF0, 0x518F80);
int gaddrof(CSpecialFX::Render) = GLOBAL_ADDRESS_BY_VERSION(0x518DC0, 0x518FF0, 0x518F80);

void CSpecialFX::Render() {
    plugin::CallDynGlobal(gaddrof(CSpecialFX::Render));
}

int addrof(CSpecialFX::Shutdown) = ADDRESS_BY_VERSION(0x518BE0, 0x518E10, 0x518DA0);
int gaddrof(CSpecialFX::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x518BE0, 0x518E10, 0x518DA0);

void CSpecialFX::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CSpecialFX::Shutdown));
}

int addrof(CSpecialFX::Update) = ADDRESS_BY_VERSION(0x518D40, 0x518F70, 0x518F00);
int gaddrof(CSpecialFX::Update) = GLOBAL_ADDRESS_BY_VERSION(0x518D40, 0x518F70, 0x518F00);

void CSpecialFX::Update() {
    plugin::CallDynGlobal(gaddrof(CSpecialFX::Update));
}

int addrof(LookForBatCB) = ADDRESS_BY_VERSION(0x518BF0, 0x518E20, 0x518DB0);
int gaddrof(LookForBatCB) = GLOBAL_ADDRESS_BY_VERSION(0x518BF0, 0x518E20, 0x518DB0);

RwObject *LookForBatCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(LookForBatCB), object, data);
}
