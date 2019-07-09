/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTraces.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBulletTrace(&CBulletTraces::aTraces)[16] = *reinterpret_cast<CBulletTrace(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x72B1B8, 0x72B1B8, 0x73B2F8));

int addrof(CBulletTraces::AddTrace) = ADDRESS_BY_VERSION(0x518E90, 0x5190C0, 0x519050);
int gaddrof(CBulletTraces::AddTrace) = GLOBAL_ADDRESS_BY_VERSION(0x518E90, 0x5190C0, 0x519050);

void CBulletTraces::AddTrace(CVector *origin, CVector *target) {
    plugin::CallDynGlobal<CVector *, CVector *>(gaddrof(CBulletTraces::AddTrace), origin, target);
}

int addrof(CBulletTraces::Init) = ADDRESS_BY_VERSION(0x518DE0, 0x519010, 0x518FA0);
int gaddrof(CBulletTraces::Init) = GLOBAL_ADDRESS_BY_VERSION(0x518DE0, 0x519010, 0x518FA0);

void CBulletTraces::Init() {
    plugin::CallDynGlobal(gaddrof(CBulletTraces::Init));
}

int addrof(CBulletTraces::Render) = ADDRESS_BY_VERSION(0x518F20, 0x519150, 0x5190E0);
int gaddrof(CBulletTraces::Render) = GLOBAL_ADDRESS_BY_VERSION(0x518F20, 0x519150, 0x5190E0);

void CBulletTraces::Render() {
    plugin::CallDynGlobal(gaddrof(CBulletTraces::Render));
}

int addrof(CBulletTraces::Update) = ADDRESS_BY_VERSION(0x519240, 0x519470, 0x519400);
int gaddrof(CBulletTraces::Update) = GLOBAL_ADDRESS_BY_VERSION(0x519240, 0x519470, 0x519400);

void CBulletTraces::Update() {
    plugin::CallDynGlobal(gaddrof(CBulletTraces::Update));
}
