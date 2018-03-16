/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CObject.h"

unsigned char& CObject::nNoTempObjects = *(unsigned char*)0xA10A64;

// Converted from thiscall void CObject::CObject(CDummyObject * dummyObject) 0x4E40F0 
CObject::CObject(CDummyObject* dummyObject) : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4E40F0, CObject *, CDummyObject*>(this, dummyObject);
}

// Converted from thiscall void CObject::CObject(int,bool) 0x4E41B0 
CObject::CObject(int arg0, bool arg1) : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4E41B0, CObject *, int, bool>(this, arg0, arg1);
}

// Converted from thiscall void CObject::CObject(void) 0x4E4220 
CObject::CObject() : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4E4220, CObject *>(this);
}

// Converted from thiscall bool CObject::CanBeDeleted(void) 0x4E3E20 
bool CObject::CanBeDeleted() {
    return plugin::CallMethodAndReturn<bool, 0x4E3E20, CObject *>(this);
}

// Converted from cdecl void CObject::DeleteAllMissionObjects(void) 0x4E0820
void CObject::DeleteAllMissionObjects() {
    plugin::Call<0x4E0820>();
}

// Converted from cdecl void CObject::DeleteAllTempObjects(void) 0x4E08A0
void CObject::DeleteAllTempObjects() {
    plugin::Call<0x4E08A0>();
}

// Converted from cdecl void CObject::DeleteAllTempObjectsInArea(CVector point, float radius) 0x4E0720
void CObject::DeleteAllTempObjectsInArea(CVector point, float radius) {
    plugin::Call<0x4E0720, CVector, float>(point, radius);
}

// Converted from thiscall void CObject::Init(void) 0x4E3E50 
void CObject::Init() {
    plugin::CallMethod<0x4E3E50, CObject *>(this);
}

// Converted from thiscall void CObject::ObjectDamage(float damage) 0x4E0990
void CObject::ObjectDamage(float damage) {
    plugin::CallMethod<0x4E0990, CObject *, float>(this, damage);
}

// Converted from thiscall void CObject::RefModelInfo(int modelIndex) 0x4E0970
void CObject::RefModelInfo(int modelIndex) {
    plugin::CallMethod<0x4E0970, CObject *, int>(this, modelIndex);
}

// Converted from cdecl void CObject::operator delete(void * data) 0x4E4030
void CObject::operator delete(void* data) {
    plugin::Call<0x4E4030, void*>(data);
}

// Converted from cdecl void* CObject::operator new(uint size) 0x4E4070
void* CObject::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x4E4070, unsigned int>(size);
}

// Converted from cdecl void CObject::operator new(uint size, int) 0x4E4050
void* CObject::operator new(unsigned int size, int arg1) {
    return plugin::CallAndReturn<void*, 0x4E4050, unsigned int, int>(size, arg1);
}