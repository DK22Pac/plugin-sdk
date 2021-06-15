/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CScrollBar.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CScrollBar) = ADDRESS_BY_VERSION(0x5009A0, 0x500A80, 0x500A10);
int ctor_gaddr(CScrollBar) = GLOBAL_ADDRESS_BY_VERSION(0x5009A0, 0x500A80, 0x500A10);

int addrof(CScrollBar::Init) = ADDRESS_BY_VERSION(0x4FF610, 0x4FF6F0, 0x4FF680);
int gaddrof(CScrollBar::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4FF610, 0x4FF6F0, 0x4FF680);

void CScrollBar::Init(CVector pos, unsigned char type, float sizeX, float sizeY, float sizeZ, unsigned char red, unsigned char green, unsigned char blue, float scale) {
    plugin::CallMethodDynGlobal<CScrollBar *, CVector, unsigned char, float, float, float, unsigned char, unsigned char, unsigned char, float>(gaddrof(CScrollBar::Init), this, pos, type, sizeX, sizeY, sizeZ, red, green, blue, scale);
}

int addrof(CScrollBar::Render) = ADDRESS_BY_VERSION(0x4FFCE0, 0x4FFDC0, 0x4FFD50);
int gaddrof(CScrollBar::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4FFCE0, 0x4FFDC0, 0x4FFD50);

void CScrollBar::Render() {
    plugin::CallMethodDynGlobal<CScrollBar *>(gaddrof(CScrollBar::Render), this);
}

int addrof(CScrollBar::Update) = ADDRESS_BY_VERSION(0x4FF6E0, 0x4FF7C0, 0x4FF750);
int gaddrof(CScrollBar::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4FF6E0, 0x4FF7C0, 0x4FF750);

void CScrollBar::Update() {
    plugin::CallMethodDynGlobal<CScrollBar *>(gaddrof(CScrollBar::Update), this);
}

int addrof(CScrollBar::GetBridgeString) = ADDRESS_BY_VERSION(0x4FF390, 0x4FF470, 0x4FF400);
int gaddrof(CScrollBar::GetBridgeString) = GLOBAL_ADDRESS_BY_VERSION(0x4FF390, 0x4FF470, 0x4FF400);

char const *CScrollBar::GetBridgeString() {
    return plugin::CallAndReturnDynGlobal<char const *>(gaddrof(CScrollBar::GetBridgeString));
}

int addrof(CScrollBar::GetTunnelString) = ADDRESS_BY_VERSION(0x4FF360, 0x4FF440, 0x4FF3D0);
int gaddrof(CScrollBar::GetTunnelString) = GLOBAL_ADDRESS_BY_VERSION(0x4FF360, 0x4FF440, 0x4FF3D0);

char const *CScrollBar::GetTunnelString() {
    return plugin::CallAndReturnDynGlobal<char const *>(gaddrof(CScrollBar::GetTunnelString));
}
