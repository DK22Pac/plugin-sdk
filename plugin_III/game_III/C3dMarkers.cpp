/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarkers.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE C3dMarker(&C3dMarkers::m_aMarkerArray)[32] = *reinterpret_cast<C3dMarker(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x72D408, 0x72D408, 0));
PLUGIN_VARIABLE RpClump *(&C3dMarkers::m_pRpClumpArray)[5] = *reinterpret_cast<RpClump *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x8E2888, 0x8E2838, 0));
PLUGIN_VARIABLE unsigned int &C3dMarkers::NumActiveMarkers = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2A08, 0x8F2ABC, 0));

int addrof(C3dMarkers::Init) = ADDRESS_BY_VERSION(0x51B2B0, 0x51B4E0, 0);
int gaddrof(C3dMarkers::Init) = GLOBAL_ADDRESS_BY_VERSION(0x51B2B0, 0x51B4E0, 0);

void C3dMarkers::Init() {
    plugin::CallDynGlobal(gaddrof(C3dMarkers::Init));
}

int addrof(C3dMarkers::PlaceMarker) = ADDRESS_BY_VERSION(0x51B480, 0x51B6B0, 0);
int gaddrof(C3dMarkers::PlaceMarker) = GLOBAL_ADDRESS_BY_VERSION(0x51B480, 0x51B6B0, 0);

void C3dMarkers::PlaceMarker(unsigned int nId, unsigned short nType, CVector &point, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate) {
    plugin::CallDynGlobal<unsigned int, unsigned short, CVector &, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(gaddrof(C3dMarkers::PlaceMarker), nId, nType, point, fSize, bRed, bGreen, bBlue, bAlpha, nPulsePeriod, fPulseFraction, nRotateRate);
}

int addrof(C3dMarkers::PlaceMarkerSet) = ADDRESS_BY_VERSION(0x51BB80, 0x51BDB0, 0);
int gaddrof(C3dMarkers::PlaceMarkerSet) = GLOBAL_ADDRESS_BY_VERSION(0x51BB80, 0x51BDB0, 0);

void C3dMarkers::PlaceMarkerSet(unsigned int nId, unsigned short nType, CVector &point, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate) {
    plugin::CallDynGlobal<unsigned int, unsigned short, CVector &, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(gaddrof(C3dMarkers::PlaceMarkerSet), nId, nType, point, fSize, bRed, bGreen, bBlue, bAlpha, nPulsePeriod, fPulseFraction, nRotateRate);
}

int addrof(C3dMarkers::Render) = ADDRESS_BY_VERSION(0x51B400, 0x51B630, 0);
int gaddrof(C3dMarkers::Render) = GLOBAL_ADDRESS_BY_VERSION(0x51B400, 0x51B630, 0);

void C3dMarkers::Render() {
    plugin::CallDynGlobal(gaddrof(C3dMarkers::Render));
}

int addrof(C3dMarkers::Shutdown) = ADDRESS_BY_VERSION(0x51B3B0, 0x51B5E0, 0);
int gaddrof(C3dMarkers::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x51B3B0, 0x51B5E0, 0);

void C3dMarkers::Shutdown() {
    plugin::CallDynGlobal(gaddrof(C3dMarkers::Shutdown));
}
