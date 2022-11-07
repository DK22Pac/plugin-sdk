/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarkers.h"

PLUGIN_SOURCE_FILE

C3dMarker *C3dMarkers::m_aMarkerArray = reinterpret_cast<C3dMarker *>(GLOBAL_ADDRESS_BY_VERSION(0x814018, 0x814020, 0x813020));

void C3dMarkers::PlaceMarkerSet(unsigned int id, unsigned short type, CVector& pos, float size, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned short pulsePeriod, float pulseFraction, short rotateRate) {
    plugin::Call<0x570270, unsigned int, unsigned short, CVector&, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(id, type, pos, size, r, g, b, a, pulsePeriod, pulseFraction, rotateRate);
}
