/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamScriptInstruction.h"

CCamScriptInstruction& CamScript = *gpatternt(CCamScriptInstruction, "B9 ? ? ? ? E8 ? ? ? ? 84 C0 75 10 6A 01", 1);

void CCamScriptInstruction::SetInstruction(CCamScriptInstruction* instruction) {
    plugin::CallMethodDyn(gpattern("E8 ? ? ? ? 85 C0 74 07 8B C8 E9 ? ? ? ? 56"), this, instruction);
}

CCamScriptInstruction::~CCamScriptInstruction() {
    plugin::CallMethodDyn(gpattern("F6 44 24 ? ? 56 8B F1 C7 06 ? ? ? ? 74 09 56 E8 ? ? ? ? 83 C4 04 8B C6 5E C2 04 00 CC 56 8B F1 C7 06 ? ? ? ? E8 ? ? ? ? F6 44 24 ? ? 74 09"), this, 0);
}

void CCamScriptInstruction_SetCamBehindPed::Process() {
    plugin::CallMethodDyn(gpattern("51 56 57 B9 ? ? ? ? E8 ? ? ? ? 6A 01"), this);
}

void CCamScriptInstruction_SetCamInFrontPed::Process() {
    plugin::CallMethodDyn(gpattern("56 6A 00 6A 01 B9"), this);
}

void CCamScriptInstruction_EnableDebugCam::Process() {
    plugin::CallMethodDyn(gpattern("56 57 8B 3D ? ? ? ? 6A 00 6A 27"), this);
}

void CCamScriptInstruction_CamProcess::Process() {
    plugin::CallMethodDyn(gpattern("FF 71 08 B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 07 8B C8 E9 ? ? ? ? C3 CC CC CC CC CC CC CC 6A 01"), this);
}

void CCamScriptInstruction_DestroyAllCams::Process() {
    plugin::CallMethodDyn(gpattern("6A 01 B9 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? C3"), this);
}

void CCamScriptInstruction_SetPosTargetEntity::Process() {
    plugin::CallMethodDyn(gpattern("56 8B F1 B9 ? ? ? ? FF 76 08 E8 ? ? ? ? 85 C0 74 0A"), this);
}
