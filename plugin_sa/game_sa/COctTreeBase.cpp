/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COctTreeBase.h"

// Converted from thiscall void COctTreeBase::COctTreeBase(void) 0x5A7570
COctTreeBase::COctTreeBase() : COctTree(plugin::dummy) {
    plugin::CallMethod<0x5A7570, COctTreeBase *>(this);
}

// Converted from thiscall void COctTreeBase::Init(int numBranches) 0x5A7260
void COctTreeBase::Init(int numBranches) {
    plugin::CallMethod<0x5A7260, COctTreeBase *, int>(this, numBranches);
}

// Converted from thiscall bool COctTreeBase::Insert(uchar colorRed, uchar colorGreen, uchar colorBlue) 0x5A7750
bool COctTreeBase::Insert(unsigned char colorRed, unsigned char colorGreen, unsigned char colorBlue) {
    return plugin::CallMethodAndReturn<bool, 0x5A7750, COctTreeBase *, unsigned char, unsigned char, unsigned char>(this, colorRed, colorGreen, colorBlue);
}

// Converted from thiscall void COctTreeBase::ReduceBranches(int newBranchesCount) 0x5A7840
void COctTreeBase::ReduceBranches(int newBranchesCount) {
    plugin::CallMethod<0x5A7840, COctTreeBase *, int>(this, newBranchesCount);
}