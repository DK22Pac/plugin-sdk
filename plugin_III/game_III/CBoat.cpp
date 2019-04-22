/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

CBoat **CBoat::apFrameWakeGeneratingBoats = (CBoat **)0x8620E0;
float &CBoat::WAKE_LIFETIME = *(float *)0x600CCC;
float &CBoat::MIN_WAKE_INTERVAL = *(float *)0x600CC8;
float &CBoat::MAX_WAKE_LENGTH = *(float *)0x600CC4;
float &fShapeLength = *(float *)0x600E78;
float &fShapeTime = *(float *)0x600E7C;
float &fRangeMult = *(float *)0x600E80;
RxObjSpace3DVertex *KeepWaterOutVertices = (RxObjSpace3DVertex *)0x64CEAC;
unsigned short &KeepWaterOutIndices = *(unsigned short *)0x64CEA0;

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

// Converted from cdecl bool CBoat::IsSectorAffectedByWake(CVector2D point,float wakeLength,CBoat** boat) 0x542370
bool CBoat::IsSectorAffectedByWake(CVector2D point, float wakeLength, CBoat** boat) {
    return plugin::CallAndReturn<bool, 0x542370, CVector2D, float, CBoat**>(point, wakeLength, boat);
}

// Converted from cdecl float CBoat::IsVertexAffectedByWake(CVector point,CBoat* boat) 0x5424A0
float CBoat::IsVertexAffectedByWake(CVector point, CBoat* boat) {
    return plugin::CallAndReturn<float, 0x5424A0, CVector, CBoat*>(point, boat);
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