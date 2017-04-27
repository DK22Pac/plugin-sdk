/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

CBoat **CBoat::apFrameWakeGeneratingBoats = (CBoat **)0x8620E0;
float &CBoat::WAKE_LIFETIME = *(float *)0x600CCC;
float &CBoat::MIN_WAKE_INTERVAL = *(float *)0x600CC8;
float &fShapeLength = *(float *)0x600E78;
float &fShapeTime = *(float *)0x600E7C;
float &fRangeMult = *(float *)0x600E80;

// Converted from thiscall void CBoat::AddWakePoint(CVector posn) 0x542140
void CBoat::AddWakePoint(CVector posn) {
    plugin::CallMethod<0x542140, CBoat *, CVector>(this, posn);
}

// Converted from thiscall void CBoat::ApplyWaterResistance(void) 0x541A30 
void CBoat::ApplyWaterResistance() {
    plugin::CallMethod<0x541A30, CBoat *>(this);
}

// Converted from thiscall void CBoat::CBoat(int modelIndex, uchar createdBy) 0x53E3E0
CBoat::CBoat(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x53E3E0, CBoat *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CBoat::FillBoatList(void) 0x542250
void CBoat::FillBoatList() {
    plugin::Call<0x542250>();
}

// Converted from cdecl bool CBoat::IsSectorAffectedByWake(CVector2D,float,CBoat**) 0x542370
bool CBoat::IsSectorAffectedByWake(CVector2D arg0, float arg1, CBoat** arg2) {
    return plugin::CallAndReturn<bool, 0x542370, CVector2D, float, CBoat**>(arg0, arg1, arg2);
}

// Converted from cdecl float CBoat::IsVertexAffectedByWake(CVector,CBoat*) 0x5424A0
float CBoat::IsVertexAffectedByWake(CVector arg0, CBoat* arg1) {
    return plugin::CallAndReturn<float, 0x5424A0, CVector, CBoat*>(arg0, arg1);
}

// Converted from thiscall void CBoat::PruneWakeTrail(void) 0x5420D0 
void CBoat::PruneWakeTrail() {
    plugin::CallMethod<0x5420D0, CBoat *>(this);
}

// Converted from thiscall void CBoat::SetupModelNodes(void) 0x53E7D0 
void CBoat::SetupModelNodes() {
    plugin::CallMethod<0x53E7D0, CBoat *>(this);
}

// Converted from cdecl RwObject* GetBoatAtomicObjectCB(RwObject *object,void *data) 0x53E3C0
RwObject* GetBoatAtomicObjectCB(RwObject* object, void* data) {
    return ((RwObject* (__cdecl *)(RwObject*, void*))0x53E3C0)(object, data);
}