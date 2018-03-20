/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexPlayHandSignalAnim.h"

// Converted from thiscall void CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(AnimationId animationId, float blendFactor) 0x61B2B0
CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(AnimationId animationId, float blendFactor) : CTaskComplex(plugin::dummy) {
    ((void(__thiscall *)(CTaskComplexPlayHandSignalAnim*, AnimationId, float))0x61B2B0)(this, animationId, blendFactor);
}

// Converted from thiscall CTask* CTaskComplexPlayHandSignalAnim::CreateSubTask(int taskType) 0x61B2F0
CTask* CTaskComplexPlayHandSignalAnim::CreateSubTask(int taskType) {
    return ((CTask* (__thiscall *)(CTaskComplexPlayHandSignalAnim*, int))0x61B2F0)(this, taskType);
}

// Converted from thiscall int CTaskComplexPlayHandSignalAnim::GetAnimIdForPed(CPed *ped) 0x61B460
int CTaskComplexPlayHandSignalAnim::GetAnimIdForPed(CPed* ped) {
    return ((int(__thiscall *)(CTaskComplexPlayHandSignalAnim*, CPed*))0x61B460)(this, ped);
}
