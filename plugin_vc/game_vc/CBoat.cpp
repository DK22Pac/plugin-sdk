/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

float &CBoat::WAKE_LIFETIME = *(float *)0x69AE68;
float &CBoat::MIN_WAKE_INTERVAL = *(float *)0x69AE64;

// Converted from thiscall void CBoat::AddWakePoint(CVector posn) 0x59F580
void CBoat::AddWakePoint(CVector posn) {
    plugin::CallMethod<0x59F580, CBoat *, CVector>(this, posn);
}

// Converted from thiscall void CBoat::ApplyWaterResistance(void) 0x59FB30
void CBoat::ApplyWaterResistance() {
    plugin::CallMethod<0x59FB30, CBoat *>(this);
}

// Converted from thiscall void CBoat::CBoat(int modelIndex, uchar createdBy) 0x5A6470
CBoat::CBoat(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x5A6470, CBoat *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from thiscall void CBoat::DoDriveByShootings(void) 0x5C9540
void CBoat::DoDriveByShootings() {
    plugin::CallMethod<0x5C9540, CBoat *>(this);
}

// Converted from cdecl void CBoat::FillBoatList(void) 0x59F360
void CBoat::FillBoatList() {
    plugin::Call<0x59F360>();
}

// Converted from thiscall void CBoat::PruneWakeTrail(void) 0x59F6F0
void CBoat::PruneWakeTrail() {
    plugin::CallMethod<0x59F6F0, CBoat *>(this);
}