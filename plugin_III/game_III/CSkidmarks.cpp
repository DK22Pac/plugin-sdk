/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSkidmarks.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CSkidmark(&CSkidmarks::aSkidmarks)[32] = *reinterpret_cast<CSkidmark(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x723300, 0x723300, 0x733440));
PLUGIN_VARIABLE RwImVertexIndex(&SkidmarkIndexList)[96] = *reinterpret_cast<RwImVertexIndex(*)[96]>(GLOBAL_ADDRESS_BY_VERSION(0x649320, 0x649320, 0x659320));
PLUGIN_VARIABLE RwIm3DVertex(&SkidmarkVertices)[32] = *reinterpret_cast<RwIm3DVertex(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x6493E0, 0x6493E0, 0x6593E0));
PLUGIN_VARIABLE RwTexture *&gpSkidBloodTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x885B04, 0x885AB4, 0x895BF4));
PLUGIN_VARIABLE RwTexture *&gpSkidTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A40, 0x8E29F0, 0x8F2B30));
PLUGIN_VARIABLE RwTexture *&gpSkidMudTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2DC8, 0x8E2E7C, 0x8F2FBC));

int addrof(CSkidmarks::Clear) = ADDRESS_BY_VERSION(0x518130, 0x518360, 0x5182F0);
int gaddrof(CSkidmarks::Clear) = GLOBAL_ADDRESS_BY_VERSION(0x518130, 0x518360, 0x5182F0);

void CSkidmarks::Clear() {
    plugin::CallDynGlobal(gaddrof(CSkidmarks::Clear));
}

int addrof(CSkidmarks::Init) = ADDRESS_BY_VERSION(0x517D70, 0x517F80, 0x517F10);
int gaddrof(CSkidmarks::Init) = GLOBAL_ADDRESS_BY_VERSION(0x517D70, 0x517F80, 0x517F10);

void CSkidmarks::Init() {
    plugin::CallDynGlobal(gaddrof(CSkidmarks::Init));
}

int addrof(CSkidmarks::RegisterOne) = ADDRESS_BY_VERSION(0x5185C0, 0x5187F0, 0x518780);
int gaddrof(CSkidmarks::RegisterOne) = GLOBAL_ADDRESS_BY_VERSION(0x5185C0, 0x5187F0, 0x518780);

void CSkidmarks::RegisterOne(unsigned int id, CVector pos, float fwdX, float fwdY, bool *isMuddy, bool *isBloody) {
    plugin::CallDynGlobal<unsigned int, CVector, float, float, bool *, bool *>(gaddrof(CSkidmarks::RegisterOne), id, pos, fwdX, fwdY, isMuddy, isBloody);
}

int addrof(CSkidmarks::Render) = ADDRESS_BY_VERSION(0x5182E0, 0x518510, 0x5184A0);
int gaddrof(CSkidmarks::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5182E0, 0x518510, 0x5184A0);

void CSkidmarks::Render() {
    plugin::CallDynGlobal(gaddrof(CSkidmarks::Render));
}

int addrof(CSkidmarks::Shutdown) = ADDRESS_BY_VERSION(0x518100, 0x518310, 0x5182A0);
int gaddrof(CSkidmarks::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x518100, 0x518310, 0x5182A0);

void CSkidmarks::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CSkidmarks::Shutdown));
}

int addrof(CSkidmarks::Update) = ADDRESS_BY_VERSION(0x518200, 0x518430, 0x5183C0);
int gaddrof(CSkidmarks::Update) = GLOBAL_ADDRESS_BY_VERSION(0x518200, 0x518430, 0x5183C0);

void CSkidmarks::Update() {
    plugin::CallDynGlobal(gaddrof(CSkidmarks::Update));
}
