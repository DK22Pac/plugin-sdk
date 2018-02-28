/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COctTree.h"

bool &COctTree::ms_bFailed = *(bool *)0xBC12DC;
unsigned int &COctTree::ms_level = *(unsigned int *)0xBC12E0;
CPool<COctTree> &COctTree::ms_octTreePool = *(CPool<COctTree> *)0xBC12E4;
COctTree *&gpTmpOctTree = *(COctTree **)0xBC12D8;

COctTree::~COctTree() {
    empty();
}

// Converted from bool COctTree::InsertTree(uchar colorRed, uchar colorGreen, uchar colorBlue) 0x5A75B0
bool COctTree::InsertTree(unsigned char colorRed, unsigned char colorGreen, unsigned char colorBlue) {
    return plugin::CallVirtualMethodAndReturn<bool, 0, COctTree *, unsigned char, unsigned char, unsigned char>(this, colorRed, colorGreen, colorBlue);
}

// Converted from void COctTree::FillPalette(uchar *colors) 0x5A70F0
void COctTree::FillPalette(unsigned char* colors) {
    plugin::CallVirtualMethod<1, COctTree *, unsigned char*>(this, colors);
}

// Converted from thiscall void COctTree::COctTree(void) 0x5A6DB0
COctTree::COctTree() {
    plugin::CallMethod<0x5A6DB0, COctTree *>(this);
}

// Converted from thiscall uint COctTree::FindNearestColour(uchar colorRed, uchar colorGreen, uchar colorBlue) 0x5A71E0
unsigned int COctTree::FindNearestColour(unsigned char colorRed, unsigned char colorGreen, unsigned char colorBlue) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A71E0, COctTree *, unsigned char, unsigned char, unsigned char>(this, colorRed, colorGreen, colorBlue);
}

// Converted from thiscall void COctTree::InitPool(void *data, int dataSize) 0x5A7460
void COctTree::InitPool(void* data, int dataSize) {
    plugin::CallMethod<0x5A7460, COctTree *, void*, int>(this, data, dataSize);
}

// Converted from thiscall uint COctTree::NoOfChildren(void) 0x5A6DE0
unsigned int COctTree::NoOfChildren() {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A6DE0, COctTree *>(this);
}

// Converted from thiscall void COctTree::ReduceTree(void) 0x5A7040
void COctTree::ReduceTree() {
    plugin::CallMethod<0x5A7040, COctTree *>(this);
}

// Converted from thiscall void COctTree::RemoveChildren(void) 0x5A74F0
void COctTree::RemoveChildren() {
    plugin::CallMethod<0x5A74F0, COctTree *>(this);
}

// Converted from thiscall void COctTree::ShutdownPool(void) 0x5A6F70
void COctTree::ShutdownPool() {
    plugin::CallMethod<0x5A6F70, COctTree *>(this);
}

// Converted from thiscall void COctTree::empty(void) 0x5A6FC0
void COctTree::empty() {
    plugin::CallMethod<0x5A6FC0, COctTree *>(this);
}

// Converted from cdecl void COctTree::operator delete(void *data) 0x5A7420
void COctTree::operator delete(void* data) {
    plugin::Call<0x5A7420, void*>(data);
}

// Converted from cdecl void* COctTree::operator new(uint size) 0x5A7410
void* COctTree::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x5A7410, unsigned int>(size);
}