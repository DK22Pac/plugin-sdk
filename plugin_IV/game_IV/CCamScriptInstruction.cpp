/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamScriptInstruction.h"
#include "Patch.h"

static CCamScriptInstruction* CamScriptAddr;
CCamScriptInstruction& CamScript = *(CCamScriptInstruction*)CamScriptAddr;

static uint32_t CCamScriptInstruction__SetInstructionAddr;
void CCamScriptInstruction::SetInstruction(CCamScriptInstruction* instruction) {
    plugin::CallMethodDyn(CCamScriptInstruction__SetInstructionAddr, this, instruction);
}

static uint32_t CCamScriptInstruction__dtorAddr;
CCamScriptInstruction::~CCamScriptInstruction() {
    plugin::CallMethodDyn(CCamScriptInstruction__dtorAddr, this, 0);
}

static uint32_t CCamScriptInstruction_SetCamBehindPed__ProcessAddr;
void CCamScriptInstruction_SetCamBehindPed::Process() {
    plugin::CallMethodDyn(CCamScriptInstruction_SetCamBehindPed__ProcessAddr, this);
}

static uint32_t CCamScriptInstruction_SetCamInFrontPed__ProcessAddr;
void CCamScriptInstruction_SetCamInFrontPed::Process() {
    plugin::CallMethodDyn(CCamScriptInstruction_SetCamInFrontPed__ProcessAddr, this);
}

static uint32_t CCamScriptInstruction_EnableDebugCam__ProcessAddr;
void CCamScriptInstruction_EnableDebugCam::Process() {
    plugin::CallMethodDyn(CCamScriptInstruction_EnableDebugCam__ProcessAddr, this);
}

static uint32_t CCamScriptInstruction_CamProcess__ProcessAddr;
void CCamScriptInstruction_CamProcess::Process() {
    plugin::CallMethodDyn(CCamScriptInstruction_CamProcess__ProcessAddr, this);
}

template<>
void plugin::InitPatterns<CCamScriptInstruction>() {
    CamScriptAddr = (CCamScriptInstruction*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? 84 C0 75 10 6A 01", 1));

    CCamScriptInstruction__SetInstructionAddr = plugin::GetPattern("E8 ? ? ? ? 85 C0 74 07 8B C8 E9 ? ? ? ? 56", 0);

    CCamScriptInstruction__dtorAddr = plugin::GetPattern("F6 44 24 ? ? 56 8B F1 C7 06 ? ? ? ? 74 09 56 E8 ? ? ? ? 83 C4 04 8B C6 5E C2 04 00 CC 56 8B F1 C7 06 ? ? ? ? E8 ? ? ? ? F6 44 24 ? ? 74 09", 0);

    CCamScriptInstruction_SetCamBehindPed__ProcessAddr = plugin::GetPattern("51 56 57 B9 ? ? ? ? E8 ? ? ? ? 6A 01", 0);
    CCamScriptInstruction_SetCamInFrontPed__ProcessAddr = plugin::GetPattern("56 6A 00 6A 01 B9", 0);
    CCamScriptInstruction_EnableDebugCam__ProcessAddr = plugin::GetPattern("56 57 8B 3D ? ? ? ? 6A 00 6A 27", 0);
    CCamScriptInstruction_CamProcess__ProcessAddr = plugin::GetPattern("FF 71 08 B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 07 8B C8 E9 ? ? ? ? C3 CC CC CC CC CC CC CC 6A 01", 0);
}
