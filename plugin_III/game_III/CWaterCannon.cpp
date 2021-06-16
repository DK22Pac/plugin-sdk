/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWaterCannon.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwImVertexIndex(&WaterCannonIndexList)[12] = *reinterpret_cast<RwImVertexIndex(*)[12]>(GLOBAL_ADDRESS_BY_VERSION(0x64C518, 0x64C518, 0x65C518));
PLUGIN_VARIABLE RwIm3DVertex(&WaterCannonVertices)[4] = *reinterpret_cast<RwIm3DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x64C530, 0x64C530, 0x65C530));

int ctor_addr(CWaterCannon) = ADDRESS_BY_VERSION(0x522B60, 0x522DA0, 0x522D30);
int ctor_gaddr(CWaterCannon) = GLOBAL_ADDRESS_BY_VERSION(0x522B60, 0x522DA0, 0x522D30);

int addrof(CWaterCannon::Init) = ADDRESS_BY_VERSION(0x521A30, 0x521C70, 0x521C00);
int gaddrof(CWaterCannon::Init) = GLOBAL_ADDRESS_BY_VERSION(0x521A30, 0x521C70, 0x521C00);

void CWaterCannon::Init() {
    plugin::CallMethodDynGlobal<CWaterCannon *>(gaddrof(CWaterCannon::Init), this);
}

int addrof(CWaterCannon::PushPeds) = ADDRESS_BY_VERSION(0x5220B0, 0x5222F0, 0x522280);
int gaddrof(CWaterCannon::PushPeds) = GLOBAL_ADDRESS_BY_VERSION(0x5220B0, 0x5222F0, 0x522280);

void CWaterCannon::PushPeds() {
    plugin::CallMethodDynGlobal<CWaterCannon *>(gaddrof(CWaterCannon::PushPeds), this);
}

int addrof(CWaterCannon::Render) = ADDRESS_BY_VERSION(0x521D30, 0x521F70, 0x521F00);
int gaddrof(CWaterCannon::Render) = GLOBAL_ADDRESS_BY_VERSION(0x521D30, 0x521F70, 0x521F00);

void CWaterCannon::Render() {
    plugin::CallMethodDynGlobal<CWaterCannon *>(gaddrof(CWaterCannon::Render), this);
}

int addrof(CWaterCannon::Update_NewInput) = ADDRESS_BY_VERSION(0x521CC0, 0x521F00, 0x521E90);
int gaddrof(CWaterCannon::Update_NewInput) = GLOBAL_ADDRESS_BY_VERSION(0x521CC0, 0x521F00, 0x521E90);

void CWaterCannon::Update_NewInput(CVector *pos, CVector *dir) {
    plugin::CallMethodDynGlobal<CWaterCannon *, CVector *, CVector *>(gaddrof(CWaterCannon::Update_NewInput), this, pos, dir);
}

int addrof(CWaterCannon::Update_OncePerFrame) = ADDRESS_BY_VERSION(0x521B80, 0x521DC0, 0x521D50);
int gaddrof(CWaterCannon::Update_OncePerFrame) = GLOBAL_ADDRESS_BY_VERSION(0x521B80, 0x521DC0, 0x521D50);

void CWaterCannon::Update_OncePerFrame(short index) {
    plugin::CallMethodDynGlobal<CWaterCannon *, short>(gaddrof(CWaterCannon::Update_OncePerFrame), this, index);
}
