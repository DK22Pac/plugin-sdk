/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDigitalClock.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CDigitalClock) = ADDRESS_BY_VERSION(0x500980, 0x500A60, 0x5009F0);
int ctor_gaddr(CDigitalClock) = GLOBAL_ADDRESS_BY_VERSION(0x500980, 0x500A60, 0x5009F0);

int addrof(CDigitalClock::Init) = ADDRESS_BY_VERSION(0x5004F0, 0x5005D0, 0x500560);
int gaddrof(CDigitalClock::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5004F0, 0x5005D0, 0x500560);

void CDigitalClock::Init(CVector pos, float sizeX, float sizeY, unsigned char red, unsigned char green, unsigned char blue, float drawDistance, float scale) {
    plugin::CallMethodDynGlobal<CDigitalClock *, CVector, float, float, unsigned char, unsigned char, unsigned char, float, float>(gaddrof(CDigitalClock::Init), this, pos, sizeX, sizeY, red, green, blue, drawDistance, scale);
}

int addrof(CDigitalClock::Render) = ADDRESS_BY_VERSION(0x5005F0, 0x5006D0, 0x500660);
int gaddrof(CDigitalClock::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5005F0, 0x5006D0, 0x500660);

void CDigitalClock::Render() {
    plugin::CallMethodDynGlobal<CDigitalClock *>(gaddrof(CDigitalClock::Render), this);
}

int addrof(CDigitalClock::Update) = ADDRESS_BY_VERSION(0x500550, 0x500630, 0x5005C0);
int gaddrof(CDigitalClock::Update) = GLOBAL_ADDRESS_BY_VERSION(0x500550, 0x500630, 0x5005C0);

void CDigitalClock::Update() {
    plugin::CallMethodDynGlobal<CDigitalClock *>(gaddrof(CDigitalClock::Update), this);
}

int addrof(CDigitalClock::GetString) = ADDRESS_BY_VERSION(0x4FF450, 0x4FF530, 0x4FF4C0);
int gaddrof(CDigitalClock::GetString) = GLOBAL_ADDRESS_BY_VERSION(0x4FF450, 0x4FF530, 0x4FF4C0);

char const *CDigitalClock::GetString() {
    return plugin::CallAndReturnDynGlobal<char const *>(gaddrof(CDigitalClock::GetString));
}
