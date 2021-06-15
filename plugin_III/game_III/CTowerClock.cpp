/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTowerClock.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwIm3DVertex(&TempV)[4] = *reinterpret_cast<RwIm3DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x727F50, 0x727F50, 0x738090));

int ctor_addr(CTowerClock) = ADDRESS_BY_VERSION(0x500990, 0x500A70, 0x500A00);
int ctor_gaddr(CTowerClock) = GLOBAL_ADDRESS_BY_VERSION(0x500990, 0x500A70, 0x500A00);

int addrof(CTowerClock::Init) = ADDRESS_BY_VERSION(0x5000D0, 0x5001B0, 0x500140);
int gaddrof(CTowerClock::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5000D0, 0x5001B0, 0x500140);

void CTowerClock::Init(CVector pos, float sizeX, float sizeY, unsigned char red, unsigned char green, unsigned char blue, float drawDistance, float scale) {
    plugin::CallMethodDynGlobal<CTowerClock *, CVector, float, float, unsigned char, unsigned char, unsigned char, float, float>(gaddrof(CTowerClock::Init), this, pos, sizeX, sizeY, red, green, blue, drawDistance, scale);
}

int addrof(CTowerClock::Render) = ADDRESS_BY_VERSION(0x5001D0, 0x5002B0, 0x500240);
int gaddrof(CTowerClock::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5001D0, 0x5002B0, 0x500240);

void CTowerClock::Render() {
    plugin::CallMethodDynGlobal<CTowerClock *>(gaddrof(CTowerClock::Render), this);
}

int addrof(CTowerClock::Update) = ADDRESS_BY_VERSION(0x500130, 0x500210, 0x5001A0);
int gaddrof(CTowerClock::Update) = GLOBAL_ADDRESS_BY_VERSION(0x500130, 0x500210, 0x5001A0);

void CTowerClock::Update() {
    plugin::CallMethodDynGlobal<CTowerClock *>(gaddrof(CTowerClock::Update), this);
}
