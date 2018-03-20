/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexProstituteSolicit.h"

// Converted from thiscall void CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(CPed *pClient) 0x661A60
CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(CPed* pClient) : CTaskComplex(plugin::dummy) {
    plugin::CallMethod<0x661A60, CTaskComplexProstituteSolicit *, CPed*>(this, pClient);
}

// Converted from thiscall CTask* CTaskComplexProstituteSolicit::CreateSubTask(int taskId,CPed *pProstitute) 0x666360
CTask* CTaskComplexProstituteSolicit::CreateSubTask(int taskId, CPed* pProstitute) {
    return plugin::CallMethodAndReturn<CTask*, 0x666360, CTaskComplexProstituteSolicit *, int, CPed*>(this, taskId, pProstitute);
}

// Converted from cdecl void CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void) 0x661D30
void CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute() {
    plugin::Call<0x661D30>();
}

// Converted from cdecl bool CTaskComplexProstituteSolicit::IsTaskValid(CPed *pProstitute,CPed *pClient) 0x661BB0
bool CTaskComplexProstituteSolicit::IsTaskValid(CPed* pProstitute, CPed* pClient) {
    return plugin::CallAndReturn<bool, 0x661BB0, CPed*, CPed*>(pProstitute, pClient);
}
