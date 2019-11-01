/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTraces.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBulletTrace(&CBulletTraces::aTraces)[16] = *reinterpret_cast<CBulletTrace(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x8118D0, 0x8118D8, 0));

int addrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, float, unsigned int, unsigned char)) = ADDRESS_BY_VERSION(0x573910, 0x573930, 0);
int gaddrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, float, unsigned int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x573910, 0x573930, 0);

void CBulletTraces::AddTrace(CVector *origin, CVector *target, float radius, unsigned int time, unsigned char transparency) {
    plugin::CallDynGlobal<CVector *, CVector *, float, unsigned int, unsigned char>(gaddrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, float, unsigned int, unsigned char)), origin, target, radius, time, transparency);
}

int addrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, int, CEntity *)) = ADDRESS_BY_VERSION(0x573D40, 0x573D60, 0);
int gaddrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, int, CEntity *)) = GLOBAL_ADDRESS_BY_VERSION(0x573D40, 0x573D60, 0);

void CBulletTraces::AddTrace(CVector *origin, CVector *target, int weaponType, CEntity *entity) {
    plugin::CallDynGlobal<CVector *, CVector *, int, CEntity *>(gaddrof_o(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, int, CEntity *)), origin, target, weaponType, entity);
}

int addrof(CBulletTraces::Init) = ADDRESS_BY_VERSION(0x573E80, 0x573EA0, 0);
int gaddrof(CBulletTraces::Init) = GLOBAL_ADDRESS_BY_VERSION(0x573E80, 0x573EA0, 0);

void CBulletTraces::Init() {
    plugin::CallDynGlobal(gaddrof(CBulletTraces::Init));
}

int addrof(CBulletTraces::Render) = ADDRESS_BY_VERSION(0x5729F0, 0x572A10, 0);
int gaddrof(CBulletTraces::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5729F0, 0x572A10, 0);

void CBulletTraces::Render() {
    plugin::CallDynGlobal(gaddrof(CBulletTraces::Render));
}
