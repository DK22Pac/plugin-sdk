/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarker.h"

// Converted from thiscall bool C3dMarker::AddMarker(uint id,ushort type,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate) 0x722230
bool C3dMarker::AddMarker(unsigned int id, unsigned short type, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate) {
    return plugin::CallMethodAndReturn<bool, 0x722230, C3dMarker *, unsigned int, unsigned short, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(this, id, type, size, red, green, blue, alpha, pulsePeriod, pulseFraction, rotateRate);
}

// Converted from thiscall void C3dMarker::DeleteMarkerObject(void) 0x722390
void C3dMarker::DeleteMarkerObject() {
    plugin::CallMethod<0x722390, C3dMarker *>(this);
}

// Converted from thiscall bool C3dMarker::IsZCoordinateUpToDate(void) 0x7226A0
bool C3dMarker::IsZCoordinateUpToDate() {
    return plugin::CallMethodAndReturn<bool, 0x7226A0, C3dMarker *>(this);
}

// Converted from thiscall void C3dMarker::Render(void) 0x7223D0
void C3dMarker::Render() {
    plugin::CallMethod<0x7223D0, C3dMarker *>(this);
}

// Converted from thiscall void C3dMarker::SetZCoordinateIfNotUpToDate(float coordinate) 0x724E10
void C3dMarker::SetZCoordinateIfNotUpToDate(float coordinate) {
    plugin::CallMethod<0x724E10, C3dMarker *, float>(this, coordinate);
}

// Converted from thiscall void C3dMarker::UpdateZCoordinate(CVector,float) 0x724D40
void C3dMarker::UpdateZCoordinate(CVector arg0, float arg1) {
    plugin::CallMethod<0x724D40, C3dMarker *, CVector, float>(this, arg0, arg1);
}