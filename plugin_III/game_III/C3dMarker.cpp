/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarker.h"

PLUGIN_SOURCE_FILE

int ctor_addr(C3dMarker) = ADDRESS_BY_VERSION(0x51C320, 0x51C550, 0x51C4E0);
int ctor_gaddr(C3dMarker) = GLOBAL_ADDRESS_BY_VERSION(0x51C320, 0x51C550, 0x51C4E0);

int dtor_addr(C3dMarker) = ADDRESS_BY_VERSION(0x51C310, 0x51C540, 0x51C4D0);
int dtor_gaddr(C3dMarker) = GLOBAL_ADDRESS_BY_VERSION(0x51C310, 0x51C540, 0x51C4D0);

int addrof(C3dMarker::AddMarker) = ADDRESS_BY_VERSION(0x51B070, 0x51B2A0, 0x51B230);
int gaddrof(C3dMarker::AddMarker) = GLOBAL_ADDRESS_BY_VERSION(0x51B070, 0x51B2A0, 0x51B230);

void C3dMarker::AddMarker(unsigned int nId, unsigned short nType, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate) {
    plugin::CallMethodDynGlobal<C3dMarker *, unsigned int, unsigned short, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(gaddrof(C3dMarker::AddMarker), this, nId, nType, fSize, bRed, bGreen, bBlue, bAlpha, nPulsePeriod, fPulseFraction, nRotateRate);
}

int addrof(C3dMarker::DeleteMarkerObject) = ADDRESS_BY_VERSION(0x51B170, 0x51B3A0, 0x51B330);
int gaddrof(C3dMarker::DeleteMarkerObject) = GLOBAL_ADDRESS_BY_VERSION(0x51B170, 0x51B3A0, 0x51B330);

void C3dMarker::DeleteMarkerObject() {
    plugin::CallMethodDynGlobal<C3dMarker *>(gaddrof(C3dMarker::DeleteMarkerObject), this);
}

int addrof(C3dMarker::Render) = ADDRESS_BY_VERSION(0x51B1B0, 0x51B3E0, 0x51B370);
int gaddrof(C3dMarker::Render) = GLOBAL_ADDRESS_BY_VERSION(0x51B1B0, 0x51B3E0, 0x51B370);

void C3dMarker::Render() {
    plugin::CallMethodDynGlobal<C3dMarker *>(gaddrof(C3dMarker::Render), this);
}

int addrof(MarkerAtomicCB) = ADDRESS_BY_VERSION(0x51B060, 0x51B290, 0x51B220);
int gaddrof(MarkerAtomicCB) = GLOBAL_ADDRESS_BY_VERSION(0x51B060, 0x51B290, 0x51B220);

RpAtomic *MarkerAtomicCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(MarkerAtomicCB), atomic, data);
}
