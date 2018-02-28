/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColModel.h"

// Converted from thiscall void CColModel::CColModel(void) 0x40FB60
CColModel::CColModel() : m_boundBox(plugin::dummy) {
    plugin::CallMethod<0x40FB60, CColModel *>(this);
}

// Converted from thiscall void CColModel::~CColModel() 0x40F700
CColModel::~CColModel() {
    plugin::CallMethod<0x40F700, CColModel *>(this);
}

// Converted from thiscall void CColModel::MakeMultipleAlloc(void) 0x40F740
void CColModel::MakeMultipleAlloc() {
    plugin::CallMethod<0x40F740, CColModel *>(this);
}

// Converted from thiscall CColModel& CColModel::operator=(CColModel const&colModel) 0x40F7C0
CColModel& CColModel::operator=(CColModel const& colModel) {
    return plugin::CallMethodAndReturn<CColModel&, 0x40F7C0, CColModel *, CColModel const&>(this, colModel);
}

// Converted from thiscall void CColModel::AllocateData(void) 0x40F810
void CColModel::AllocateData() {
    plugin::CallMethod<0x40F810, CColModel *>(this);
}

// Converted from thiscall void CColModel::AllocateData(int numSpheres, int numBoxes, int numLines, int numVertices, int numTriangles, bool disks) 0x40F870
void CColModel::AllocateData(int numSpheres, int numBoxes, int numLines, int numVertices, int numTriangles, bool disks) {
    plugin::CallMethod<0x40F870, CColModel *, int, int, int, int, int, bool>(this, numSpheres, numBoxes, numLines, numVertices, numTriangles, disks);
}

// Converted from thiscall void CColModel::AllocateData(int size) 0x40F9B0
void CColModel::AllocateData(int size) {
    plugin::CallMethod<0x40F9B0, CColModel *, int>(this, size);
}

// Converted from thiscall void CColModel::RemoveCollisionVolumes(void) 0x40F9E0
void CColModel::RemoveCollisionVolumes() {
    plugin::CallMethod<0x40F9E0, CColModel *>(this);
}

// Converted from thiscall void CColModel::CalculateTrianglePlanes(void) 0x40FA30
void CColModel::CalculateTrianglePlanes() {
    plugin::CallMethod<0x40FA30, CColModel *>(this);
}

// Converted from thiscall void CColModel::RemoveTrianglePlanes(void) 0x40FA40
void CColModel::RemoveTrianglePlanes() {
    plugin::CallMethod<0x40FA40, CColModel *>(this);
}

// Converted from cdecl void* CColModel::operator new(uint size) 0x40FC30
void* CColModel::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x40FC30, unsigned int>(size);
}

// Converted from cdecl void CColModel::operator delete(void *data) 0x40FC40
void CColModel::operator delete(void* data) {
    plugin::Call<0x40FC40, void*>(data);
}