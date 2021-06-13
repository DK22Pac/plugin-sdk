/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CQuaternion.h"

PLUGIN_SOURCE_FILE

int addrof(CQuaternion::Get) = ADDRESS_BY_VERSION(0x4BA0D0, 0x4BA1C0, 0x4BA150);
int gaddrof(CQuaternion::Get) = GLOBAL_ADDRESS_BY_VERSION(0x4BA0D0, 0x4BA1C0, 0x4BA150);

void CQuaternion::Get(RwMatrix *matrix) {
    plugin::CallMethodDynGlobal<CQuaternion *, RwMatrix *>(gaddrof(CQuaternion::Get), this, matrix);
}

int addrof(CQuaternion::Slerp) = ADDRESS_BY_VERSION(0x4BA1C0, 0x4BA2B0, 0x4BA240);
int gaddrof(CQuaternion::Slerp) = GLOBAL_ADDRESS_BY_VERSION(0x4BA1C0, 0x4BA2B0, 0x4BA240);

void CQuaternion::Slerp(CQuaternion const &from, CQuaternion const &to, float halftheta, float sintheta_inv, float t) {
    plugin::CallMethodDynGlobal<CQuaternion *, CQuaternion const &, CQuaternion const &, float, float, float>(gaddrof(CQuaternion::Slerp), this, from, to, halftheta, sintheta_inv, t);
}
