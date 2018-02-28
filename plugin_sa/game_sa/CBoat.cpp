/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

CBoat **CBoat::apFrameWakeGeneratingBoats = (CBoat **)0xC27994;
float &CBoat::MAX_WAKE_LENGTH   = *(float *)0x8D3938;
float &CBoat::MIN_WAKE_INTERVAL = *(float *)0x8D393C;
float &CBoat::WAKE_LIFETIME     = *(float *)0x8D3940;
float &fShapeLength             = *(float *)0x8D3944;
float &fShapeTime               = *(float *)0x8D3948;
float &fRangeMult               = *(float *)0x8D394C;

// Converted from thiscall void CBoat::CBoat(int modelIndex, uchar createdBy) 0x6F2940
CBoat::CBoat(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    ((void(__thiscall *)(CBoat*, int, unsigned char))0x6F2940)(this, modelIndex, createdBy);
}

// Converted from cdecl RwObject* GetBoatAtomicObjectCB(RwObject *object,void *data) 0x6F00D0
RwObject* GetBoatAtomicObjectCB(RwObject* object, void* data) {
    return ((RwObject* (__cdecl *)(RwObject*, void*))0x6F00D0)(object, data);
}

// Converted from thiscall void CBoat::SetupModelNodes(void) 0x6F01A0
void CBoat::SetupModelNodes() {
    ((void(__thiscall *)(CBoat*))0x6F01A0)(this);
}

// Converted from thiscall void CBoat::DebugCode(void) 0x6F0D00
void CBoat::DebugCode() {
    ((void(__thiscall *)(CBoat*))0x6F0D00)(this);
}

// Converted from thiscall void CBoat::PrintThrustAndRudderInfo(void) 0x6F0D90
void CBoat::PrintThrustAndRudderInfo() {
    ((void(__thiscall *)(CBoat*))0x6F0D90)(this);
}

// Converted from thiscall void CBoat::ModifyHandlingValue(bool const&) 0x6F0DE0
void CBoat::ModifyHandlingValue(bool const& arg0) {
    ((void(__thiscall *)(CBoat*, bool const&))0x6F0DE0)(this, arg0);
}

// Converted from thiscall void CBoat::PruneWakeTrail(void) 0x6F0E20
void CBoat::PruneWakeTrail() {
    ((void(__thiscall *)(CBoat*))0x6F0E20)(this);
}

// Converted from cdecl bool CBoat::IsSectorAffectedByWake(CVector2D,float,CBoat**) 0x6F0E80
bool CBoat::IsSectorAffectedByWake(CVector2D arg0, float arg1, CBoat** arg2) {
    return ((bool(__cdecl *)(CVector2D, float, CBoat**))0x6F0E80)(arg0, arg1, arg2);
}

// Converted from cdecl float CBoat::IsVertexAffectedByWake(CVector,CBoat*,short,bool) 0x6F0F50
float CBoat::IsVertexAffectedByWake(CVector arg0, CBoat* arg1, short arg2, bool arg3) {
    return ((float(__cdecl *)(CVector, CBoat*, short, bool))0x6F0F50)(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CBoat::CheckForSkippingCalculations(void) 0x6F10C0
void CBoat::CheckForSkippingCalculations() {
    ((void(__cdecl *)())0x6F10C0)();
}

// Converted from thiscall void CBoat::AddWakePoint(CVector posn) 0x6F2550
void CBoat::AddWakePoint(CVector posn) {
    ((void(__thiscall *)(CBoat*, CVector))0x6F2550)(this, posn);
}

// Converted from cdecl void CBoat::FillBoatList(void) 0x6F2710
void CBoat::FillBoatList() {
    ((void(__cdecl *)())0x6F2710)();
}