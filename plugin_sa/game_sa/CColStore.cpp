/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColStore.h"

CVector& CColStore::ms_vecCollisionNeeded = *(CVector*)0x965580;
bool& CColStore::ms_bCollisionNeeded = *(bool*)0x965558;
int CColStore::ms_nRequiredCollisionArea = *(int*)0x965554;

CColPool*& CColStore::ms_pColPool = *(CColPool**)0x965560;
CQuadTreeNode*& CColStore::ms_pQuadTree = *(CQuadTreeNode**)0x96555C;

void CColStore::Initialise() {
    plugin::Call<0x4113F0>();
}

void CColStore::Shutdown() {
    plugin::Call<0x4114D0>();
}

int CColStore::AddColSlot(const char* name) {
    return plugin::CallAndReturn<int, 0x411140, const char*>(name);
}

void CColStore::AddCollisionNeededAtPosn(const CVector& pos) {
    plugin::Call<0x4103A0, const CVector&>(pos);
}

void CColStore::AddRef(int colNum) {
    plugin::Call<0x4107A0, int>(colNum);
}

void CColStore::BoundingBoxesPostProcess() {
    plugin::Call<0x410EC0>();
}

void CColStore::EnsureCollisionIsInMemory(const CVector& pos) {
    plugin::Call<0x410AD0, const CVector&>(pos);
}

CRect* CColStore::GetBoundingBox(int colSlot) {
    return plugin::CallAndReturn<CRect*, 0x410800, int>(colSlot);
}

void CColStore::IncludeModelIndex(int colSlot, int modelId) {
    plugin::Call<0x410820, int, int>(colSlot, modelId);
}

bool CColStore::HasCollisionLoaded(const CVector& pos, int areaCode) {
    return plugin::CallAndReturn<bool, 0x410CE0, const CVector&, int>(pos, areaCode);
}

void CColStore::LoadAllBoundingBoxes() {
    plugin::Call<0x4113D0>();
}

void CColStore::LoadAllCollision() {
    plugin::Call<0x410E60>();
}

void CColStore::LoadCol(int colSlot, const char* filename) {
    plugin::Call<0x410690, int, const char*>(colSlot, filename);
}

bool CColStore::LoadCol(int colSlot, unsigned char* data, int dataSize) {
    return plugin::CallAndReturn<bool, 0x4106D0, int, unsigned char*, int>(colSlot, data, dataSize);
}

void CColStore::LoadCollision(const CVector& pos, bool bIgnorePlayerVeh) {
    plugin::Call<0x410860, const CVector&, bool>(pos, bIgnorePlayerVeh);
}

void CColStore::RemoveAllCollision() {
    plugin::Call<0x410E00>();
}

void CColStore::RemoveCol(int colSlot) {
    plugin::Call<0x410730, int>(colSlot);
}

void CColStore::RemoveColSlot(int colSlot) {
    plugin::Call<0x411330, int>(colSlot);
}

void CColStore::RemoveRef(int colNum) {
    plugin::Call<0x4107D0, int>(colNum);
}

void CColStore::RequestCollision(const CVector& pos, int areaCode) {
    plugin::Call<0x410C00, const CVector&, int>(pos, areaCode);
}

void CColStore::SetCollisionRequired(const CVector& pos, int areaCode) {
    plugin::Call<0x4104E0, const CVector&, int>(pos, areaCode);
}

