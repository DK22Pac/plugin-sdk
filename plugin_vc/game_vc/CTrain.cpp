/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTrain.h"

// Converted from thiscall void CTrain::AddPassenger(CPed * ped) 0x5B2C60 
void CTrain::AddPassenger(CPed* ped) {
    plugin::CallMethod<0x5B2C60, CTrain *, CPed*>(this, ped);
}

// Converted from thiscall void CTrain::CTrain(int modelIndex, uchar createdBy) 0x5B2D00
CTrain::CTrain(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x5B2D00, CTrain *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CTrain::InitTrains(void) 0x5B2CA0
void CTrain::InitTrains() {
    plugin::Call<0x5B2CA0>();
}

// Converted from cdecl void CTrain::Shutdown(void) 0x5B2C90
void CTrain::Shutdown() {
    plugin::Call<0x5B2C90>();
}

// Converted from cdecl void CTrain::UpdateTrains(void) 0x5B2C80
void CTrain::UpdateTrains() {
    plugin::Call<0x5B2C80>();
}