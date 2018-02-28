/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CQuadTreeNode.h"

// Converted from thiscall void CQuadTreeNode::AddItem(void *item,CRect const&rect) 0x552CD0
void CQuadTreeNode::AddItem(void* item, CRect const& rect) {
    plugin::CallMethod<0x552CD0, CQuadTreeNode *, void*, CRect const&>(this, item, rect);
}

// Converted from thiscall void CQuadTreeNode::CQuadTreeNode(CRect const&rect,int startLevel) 0x552830
CQuadTreeNode::CQuadTreeNode(CRect const& rect, int startLevel) {
    plugin::CallMethod<0x552830, CQuadTreeNode *, CRect const&, int>(this, rect, startLevel);
}

// Converted from thiscall void CQuadTreeNode::DeleteItem(void *item) 0x552A40
void CQuadTreeNode::DeleteItem(void* item) {
    plugin::CallMethod<0x552A40, CQuadTreeNode *, void*>(this, item);
}

// Converted from thiscall void CQuadTreeNode::DeleteItem(void *item,CRect const&rect) 0x552A90
void CQuadTreeNode::DeleteItem(void* item, CRect const& rect) {
    plugin::CallMethod<0x552A90, CQuadTreeNode *, void*, CRect const&>(this, item, rect);
}

// Converted from thiscall int CQuadTreeNode::FindSector(CRect const&rect) 0x5525A0
int CQuadTreeNode::FindSector(CRect const& rect) {
    return plugin::CallMethodAndReturn<int, 0x5525A0, CQuadTreeNode *, CRect const&>(this, rect);
}

// Converted from thiscall int CQuadTreeNode::FindSector(CVector2D const&posn) 0x552640
int CQuadTreeNode::FindSector(CVector2D const& posn) {
    return plugin::CallMethodAndReturn<int, 0x552640, CQuadTreeNode *, CVector2D const&>(this, posn);
}

// Converted from thiscall void CQuadTreeNode::ForAllMatching(CRect const&rect,void *callback) 0x552980
void CQuadTreeNode::ForAllMatching(CRect const& rect, void(*callback)(CRect const&, void *)) {
    plugin::CallMethod<0x552980, CQuadTreeNode *, CRect const&, void(*)(CRect const&, void *)>(this, rect, callback);
}

// Converted from thiscall void CQuadTreeNode::ForAllMatching(CVector2D const&posn,void *callback) 0x5529F0
void CQuadTreeNode::ForAllMatching(CVector2D const& posn, void(*callback)(CVector2D const&, void *)) {
    plugin::CallMethod<0x5529F0, CQuadTreeNode *, CVector2D const&, void(*)(CVector2D const&, void *)>(this, posn, callback);
}

// Converted from thiscall void CQuadTreeNode::GetAll(CPtrListSingleLink &list) 0x552870
void CQuadTreeNode::GetAll(CPtrListSingleLink& list) {
    plugin::CallMethod<0x552870, CQuadTreeNode *, CPtrListSingleLink&>(this, list);
}

// Converted from thiscall void CQuadTreeNode::GetAllMatching(CRect const&rect,CPtrListSingleLink &list) 0x5528C0
void CQuadTreeNode::GetAllMatching(CRect const& rect, CPtrListSingleLink& list) {
    plugin::CallMethod<0x5528C0, CQuadTreeNode *, CRect const&, CPtrListSingleLink&>(this, rect, list);
}

// Converted from thiscall void CQuadTreeNode::GetAllMatching(CVector2D const&posn,CPtrListSingleLink &list) 0x552930
void CQuadTreeNode::GetAllMatching(CVector2D const& posn, CPtrListSingleLink& list) {
    plugin::CallMethod<0x552930, CQuadTreeNode *, CVector2D const&, CPtrListSingleLink&>(this, posn, list);
}

// Converted from thiscall bool CQuadTreeNode::InSector(CRect const&rect,int sector) 0x5526A0
bool CQuadTreeNode::InSector(CRect const& rect, int sector) {
    return plugin::CallMethodAndReturn<bool, 0x5526A0, CQuadTreeNode *, CRect const&, int>(this, rect, sector);
}

// Converted from thiscall void CQuadTreeNode::InitPool(void) 0x552C00
void CQuadTreeNode::InitPool() {
    plugin::CallMethod<0x552C00, CQuadTreeNode *>(this);
}

// Converted from cdecl void CQuadTreeNode::operator delete(void *data) 0x552C90
void CQuadTreeNode::operator delete(void* data) {
    plugin::Call<0x552C90, void*>(data);
}

// Converted from cdecl void* CQuadTreeNode::operator new(uint size) 0x552C80
void* CQuadTreeNode::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x552C80, unsigned int>(size);
}

// Converted from thiscall void CQuadTreeNode::~CQuadTreeNode() 0x552520
CQuadTreeNode::~CQuadTreeNode() {
    plugin::CallMethod<0x552520, CQuadTreeNode *>(this);
}