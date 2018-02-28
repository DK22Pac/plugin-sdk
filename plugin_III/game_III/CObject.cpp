/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CObject.h"

// Converted from thiscall void CObject::CObject(CDummyObject *dummyObject) 0x4BAD50
CObject::CObject(CDummyObject* dummyObject) : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4BAD50, CObject *, CDummyObject*>(this, dummyObject);
}

// Converted from thiscall void CObject::CObject(int,bool) 0x4BACE0 
CObject::CObject(int arg0, bool arg1) : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4BACE0, CObject *, int, bool>(this, arg0, arg1);
}

// Converted from thiscall void CObject::CObject(void) 0x4BABD0 
CObject::CObject() : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x4BABD0, CObject *>(this);
}

// Converted from thiscall bool CObject::CanBeDeleted(void) 0x4BB010 
bool CObject::CanBeDeleted() {
    return plugin::CallMethodAndReturn<bool, 0x4BB010, CObject *>(this);
}

// Converted from cdecl void CObject::DeleteAllMissionObjects(void) 0x4BBE60 
void CObject::DeleteAllMissionObjects() {
    plugin::Call<0x4BBE60>();
}

// Converted from cdecl void CObject::DeleteAllTempObjects(void) 0x4BBDF0 
void CObject::DeleteAllTempObjects() {
    plugin::Call<0x4BBDF0>();
}

// Converted from cdecl void CObject::DeleteAllTempObjectsInArea(CVector point, float radius) 0x4BBED0
void CObject::DeleteAllTempObjectsInArea(CVector point, float radius) {
    plugin::Call<0x4BBED0, CVector, float>(point, radius);
}

// Converted from thiscall void CObject::Init(void) 0x4BAEC0 
void CObject::Init() {
    plugin::CallMethod<0x4BAEC0, CObject *>(this);
}

// Converted from thiscall void CObject::ObjectDamage(float damage) 0x4BB240
void CObject::ObjectDamage(float damage) {
    plugin::CallMethod<0x4BB240, CObject *, float>(this, damage);
}

// Converted from thiscall void CObject::RefModelInfo(int modelIndex) 0x4BBD80
void CObject::RefModelInfo(int modelIndex) {
    plugin::CallMethod<0x4BBD80, CObject *, int>(this, modelIndex);
}

// Converted from cdecl void CObject::operator delete(void *data) 0x4BAEA0
void CObject::operator delete(void* data) {
    plugin::Call<0x4BAEA0, void*>(data);
}

// Converted from cdecl void* CObject::operator new(uint size) 0x4BAE70
void* CObject::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x4BAE70, unsigned int>(size);
}

// Converted from cdecl void* CObject::operator new(uint size,int) 0x4BAE80
void* CObject::operator new(unsigned int size, int arg1) {
    return plugin::CallAndReturn<void*, 0x4BAE80, unsigned int, int>(size, arg1);
}
