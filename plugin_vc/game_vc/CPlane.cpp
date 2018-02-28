/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

// Converted from thiscall void CPlane::CPlane(int modelIndex, uchar createdBy) 0x5B2B50
CPlane::CPlane(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x5B2B50, CPlane *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CPlane::InitPlanes(void) 0x5B21E0
void CPlane::InitPlanes() {
    plugin::Call<0x5B21E0>();
}

// Converted from cdecl bool CPlane::Load(void) 0x5AFAD0
bool CPlane::Load() {
    return plugin::CallAndReturn<bool, 0x5AFAD0>();
}

// Converted from cdecl void CPlane::LoadPath(char const*, int &, float &, bool) 0x5B1FF0
void CPlane::LoadPath(char const* arg0, int& arg1, float& arg2, bool arg3) {
    plugin::Call<0x5B1FF0, char const*, int&, float&, bool>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl bool CPlane::Save(void) 0x5AFB80
bool CPlane::Save() {
    return plugin::CallAndReturn<bool, 0x5AFB80>();
}

// Converted from cdecl void CPlane::Shutdown(void) 0x5B2160
void CPlane::Shutdown() {
    plugin::Call<0x5B2160>();
}

// Converted from cdecl bool CPlane::TestRocketCollision(CVector *) 0x5AFC90
bool CPlane::TestRocketCollision(CVector* arg0) {
    return plugin::CallAndReturn<bool, 0x5AFC90, CVector*>(arg0);
}

// Converted from cdecl void CPlane::UpdatePlanes(void) 0x5B19D0
void CPlane::UpdatePlanes() {
    plugin::Call<0x5B19D0>();
}
