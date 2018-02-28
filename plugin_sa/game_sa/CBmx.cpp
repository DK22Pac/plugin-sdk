/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBmx.h"

// Converted from thiscall void CBmx::CBmx(int modelIndex,uchar createdBy) 0x6BF820
CBmx::CBmx(int modelIndex, unsigned char createdBy) : CBike(plugin::dummy) {
    ((void(__thiscall *)(CBmx*, int, unsigned char))0x6BF820)(this, modelIndex, createdBy);
}

// Converted from cdecl void CBmx::LaunchBunnyHopCB(CAnimBlendAssociation *blendAssoc,void *data) 0x6C0390
void CBmx::LaunchBunnyHopCB(CAnimBlendAssociation* blendAssoc, void* data) {
    ((void(__cdecl *)(CAnimBlendAssociation*, void*))0x6C0390)(blendAssoc, data);
}

// Converted from thiscall void CBmx::GetFrameOffset(float &,float &) 0x6C0500
void CBmx::GetFrameOffset(float& arg0, float& arg1) {
    ((void(__thiscall *)(CBmx*, float&, float&))0x6C0500)(this, arg0, arg1);
}

// Converted from thiscall void CBmx::ProcessBunnyHop(void) 0x6C0590
void CBmx::ProcessBunnyHop() {
    ((void(__thiscall *)(CBmx*))0x6C0590)(this);
}