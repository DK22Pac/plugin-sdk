/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarker.h"

PLUGIN_SOURCE_FILE

int addrof(C3dMarker::AddMarker) = ADDRESS_BY_VERSION(0x570E90, 0x570EB0, 0x570D80);
int gaddrof(C3dMarker::AddMarker) = GLOBAL_ADDRESS_BY_VERSION(0x570E90, 0x570EB0, 0x570D80);

void C3dMarker::AddMarker(unsigned int nId, unsigned short nType, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned int nPulsePeriod, float fPulseFraction, unsigned short nRotateRate) {
    plugin::CallMethodDynGlobal<C3dMarker *, unsigned int, unsigned short, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned int, float, unsigned short>(gaddrof(C3dMarker::AddMarker), this, nId, nType, fSize, bRed, bGreen, bBlue, bAlpha, nPulsePeriod, fPulseFraction, nRotateRate);
}

int addrof(C3dMarker::Render) = ADDRESS_BY_VERSION(0x570DA0, 0x570DC0, 0x570C90);
int gaddrof(C3dMarker::Render) = GLOBAL_ADDRESS_BY_VERSION(0x570DA0, 0x570DC0, 0x570C90);

void C3dMarker::Render() {
    plugin::CallMethodDynGlobal<C3dMarker *>(gaddrof(C3dMarker::Render), this);
}
