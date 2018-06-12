/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedGroupIntelligence.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPedGroupIntelligence) = ADDRESS_BY_VERSION(0x5F7250, 0, 0, 0, 0, 0);
int ctor_gaddr(CPedGroupIntelligence) = GLOBAL_ADDRESS_BY_VERSION(0x5F7250, 0, 0, 0, 0, 0);

int dtor_addr(CPedGroupIntelligence) = ADDRESS_BY_VERSION(0x5F7350, 0, 0, 0, 0, 0);
int dtor_gaddr(CPedGroupIntelligence) = GLOBAL_ADDRESS_BY_VERSION(0x5F7350, 0, 0, 0, 0, 0);

int addrof(CPedGroupIntelligence::AddEvent) = ADDRESS_BY_VERSION(0x5F7470, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::AddEvent) = GLOBAL_ADDRESS_BY_VERSION(0x5F7470, 0, 0, 0, 0, 0);

bool CPedGroupIntelligence::AddEvent(CEvent *event) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupIntelligence *, CEvent *>(gaddrof(CPedGroupIntelligence::AddEvent), this, event);
}

int addrof(CPedGroupIntelligence::ComputeDefaultTasks) = ADDRESS_BY_VERSION(0x5F88D0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::ComputeDefaultTasks) = GLOBAL_ADDRESS_BY_VERSION(0x5F88D0, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ComputeDefaultTasks(CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPed *>(gaddrof(CPedGroupIntelligence::ComputeDefaultTasks), this, ped);
}

int addrof(CPedGroupIntelligence::ComputeEventResponseTasks) = ADDRESS_BY_VERSION(0x5FC440, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::ComputeEventResponseTasks) = GLOBAL_ADDRESS_BY_VERSION(0x5FC440, 0, 0, 0, 0, 0);

void *CPedGroupIntelligence::ComputeEventResponseTasks() {
    return plugin::CallMethodAndReturnDynGlobal<void *, CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::ComputeEventResponseTasks), this);
}

int addrof(CPedGroupIntelligence::ComputeScriptCommandTasks) = ADDRESS_BY_VERSION(0x5F7800, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::ComputeScriptCommandTasks) = GLOBAL_ADDRESS_BY_VERSION(0x5F7800, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ComputeScriptCommandTasks() {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::ComputeScriptCommandTasks), this);
}

int addrof(CPedGroupIntelligence::FlushTasks) = ADDRESS_BY_VERSION(0x5F79C0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::FlushTasks) = GLOBAL_ADDRESS_BY_VERSION(0x5F79C0, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::FlushTasks(CPedTaskPair *taskpair, CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPedTaskPair *, CPed *>(gaddrof(CPedGroupIntelligence::FlushTasks), this, taskpair, ped);
}

int addrof(CPedGroupIntelligence::GetTask) = ADDRESS_BY_VERSION(0x5F7660, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::GetTask) = GLOBAL_ADDRESS_BY_VERSION(0x5F7660, 0, 0, 0, 0, 0);

CTask *CPedGroupIntelligence::GetTask(CPed *ped, CPedTaskPair const *taskpair) {
    return plugin::CallMethodAndReturnDynGlobal<CTask *, CPedGroupIntelligence *, CPed *, CPedTaskPair const *>(gaddrof(CPedGroupIntelligence::GetTask), this, ped, taskpair);
}

int addrof(CPedGroupIntelligence::GetTaskDefault) = ADDRESS_BY_VERSION(0x5F86C0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::GetTaskDefault) = GLOBAL_ADDRESS_BY_VERSION(0x5F86C0, 0, 0, 0, 0, 0);

CTask *CPedGroupIntelligence::GetTaskDefault(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<CTask *, CPedGroupIntelligence *, CPed *>(gaddrof(CPedGroupIntelligence::GetTaskDefault), this, ped);
}

int addrof(CPedGroupIntelligence::GetTaskScriptCommand) = ADDRESS_BY_VERSION(0x5F8690, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::GetTaskScriptCommand) = GLOBAL_ADDRESS_BY_VERSION(0x5F8690, 0, 0, 0, 0, 0);

CTask *CPedGroupIntelligence::GetTaskScriptCommand(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<CTask *, CPedGroupIntelligence *, CPed *>(gaddrof(CPedGroupIntelligence::GetTaskScriptCommand), this, ped);
}

int addrof(CPedGroupIntelligence::GetTaskSecondary) = ADDRESS_BY_VERSION(0x5F8620, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::GetTaskSecondary) = GLOBAL_ADDRESS_BY_VERSION(0x5F8620, 0, 0, 0, 0, 0);

CTask *CPedGroupIntelligence::GetTaskSecondary(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<CTask *, CPedGroupIntelligence *, CPed *>(gaddrof(CPedGroupIntelligence::GetTaskSecondary), this, ped);
}

int addrof(CPedGroupIntelligence::GetTaskSecondarySlot) = ADDRESS_BY_VERSION(0x5F8650, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::GetTaskSecondarySlot) = GLOBAL_ADDRESS_BY_VERSION(0x5F8650, 0, 0, 0, 0, 0);

signed int CPedGroupIntelligence::GetTaskSecondarySlot(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<signed int, CPedGroupIntelligence *, CPed *>(gaddrof(CPedGroupIntelligence::GetTaskSecondarySlot), this, ped);
}

int addrof(CPedGroupIntelligence::IsCurrentEventValid) = ADDRESS_BY_VERSION(0x5F77A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::IsCurrentEventValid) = GLOBAL_ADDRESS_BY_VERSION(0x5F77A0, 0, 0, 0, 0, 0);

bool CPedGroupIntelligence::IsCurrentEventValid() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::IsCurrentEventValid), this);
}

int addrof(CPedGroupIntelligence::IsGroupResponding) = ADDRESS_BY_VERSION(0x5F7760, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::IsGroupResponding) = GLOBAL_ADDRESS_BY_VERSION(0x5F7760, 0, 0, 0, 0, 0);

bool CPedGroupIntelligence::IsGroupResponding() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::IsGroupResponding), this);
}

int addrof(CPedGroupIntelligence::Process) = ADDRESS_BY_VERSION(0x5FC4A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::Process) = GLOBAL_ADDRESS_BY_VERSION(0x5FC4A0, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::Process() {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::Process), this);
}

int addrof(CPedGroupIntelligence::ProcessIgnorePlayerGroup) = ADDRESS_BY_VERSION(0x5F87A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::ProcessIgnorePlayerGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5F87A0, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ProcessIgnorePlayerGroup() {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::ProcessIgnorePlayerGroup), this);
}

int addrof(CPedGroupIntelligence::ReportAllBarScriptTasksFinished) = ADDRESS_BY_VERSION(0x5F8780, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::ReportAllBarScriptTasksFinished) = GLOBAL_ADDRESS_BY_VERSION(0x5F8780, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ReportAllBarScriptTasksFinished() {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(gaddrof(CPedGroupIntelligence::ReportAllBarScriptTasksFinished), this);
}

int addrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)(CPedTaskPair *)) = ADDRESS_BY_VERSION(0x5F7730, 0, 0, 0, 0, 0);
int gaddrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)(CPedTaskPair *)) = GLOBAL_ADDRESS_BY_VERSION(0x5F7730, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ReportAllTasksFinished(CPedTaskPair *taskpair) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPedTaskPair *>(gaddrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)(CPedTaskPair *)), this, taskpair);
}

int addrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)()) = ADDRESS_BY_VERSION(0x5F8750, 0, 0, 0, 0, 0);
int gaddrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x5F8750, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::ReportAllTasksFinished() {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *>(gaddrof_o(CPedGroupIntelligence::ReportAllTasksFinished, void (CPedGroupIntelligence::*)()), this);
}

int addrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *, CPedTaskPair *)) = ADDRESS_BY_VERSION(0x5F76C0, 0, 0, 0, 0, 0);
int gaddrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *, CPedTaskPair *)) = GLOBAL_ADDRESS_BY_VERSION(0x5F76C0, 0, 0, 0, 0, 0);

bool CPedGroupIntelligence::ReportFinishedTask(CPed const *ped, CTask const *task, CPedTaskPair *taskpair) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupIntelligence *, CPed const *, CTask const *, CPedTaskPair *>(gaddrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *, CPedTaskPair *)), this, ped, task, taskpair);
}

int addrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *)) = ADDRESS_BY_VERSION(0x5F86F0, 0, 0, 0, 0, 0);
int gaddrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5F86F0, 0, 0, 0, 0, 0);

bool CPedGroupIntelligence::ReportFinishedTask(CPed const *ped, CTask const *task) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupIntelligence *, CPed const *, CTask const *>(gaddrof_o(CPedGroupIntelligence::ReportFinishedTask, bool (CPedGroupIntelligence::*)(CPed const *, CTask const *)), this, ped, task);
}

int addrof(CPedGroupIntelligence::SetDefaultTask) = ADDRESS_BY_VERSION(0x5F8580, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetDefaultTask) = GLOBAL_ADDRESS_BY_VERSION(0x5F8580, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetDefaultTask(CPed *ped, CTask const *task) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPed *, CTask const *>(gaddrof(CPedGroupIntelligence::SetDefaultTask), this, ped, task);
}

int addrof(CPedGroupIntelligence::SetDefaultTaskAllocator) = ADDRESS_BY_VERSION(0x5FB280, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetDefaultTaskAllocator) = GLOBAL_ADDRESS_BY_VERSION(0x5FB280, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetDefaultTaskAllocator(CPedGroupDefaultTaskAllocator const *PedGroupDefaultTaskAllocator) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPedGroupDefaultTaskAllocator const *>(gaddrof(CPedGroupIntelligence::SetDefaultTaskAllocator), this, PedGroupDefaultTaskAllocator);
}

int addrof(CPedGroupIntelligence::SetDefaultTaskAllocatorType) = ADDRESS_BY_VERSION(0x5FBB70, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetDefaultTaskAllocatorType) = GLOBAL_ADDRESS_BY_VERSION(0x5FBB70, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetDefaultTaskAllocatorType(int nPedGroupTaskAllocator) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, int>(gaddrof(CPedGroupIntelligence::SetDefaultTaskAllocatorType), this, nPedGroupTaskAllocator);
}

int addrof(CPedGroupIntelligence::SetEventResponseTask) = ADDRESS_BY_VERSION(0x5F8510, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetEventResponseTask) = GLOBAL_ADDRESS_BY_VERSION(0x5F8510, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetEventResponseTask(CPed *ped, bool arg3, CTask const *task1, bool arg5, CTask const *task2, int arg7) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPed *, bool, CTask const *, bool, CTask const *, int>(gaddrof(CPedGroupIntelligence::SetEventResponseTask), this, ped, arg3, task1, arg5, task2, arg7);
}

int addrof(CPedGroupIntelligence::SetEventResponseTaskAllocator) = ADDRESS_BY_VERSION(0x5F7440, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetEventResponseTaskAllocator) = GLOBAL_ADDRESS_BY_VERSION(0x5F7440, 0, 0, 0, 0, 0);

int CPedGroupIntelligence::SetEventResponseTaskAllocator(int a2) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPedGroupIntelligence *, int>(gaddrof(CPedGroupIntelligence::SetEventResponseTaskAllocator), this, a2);
}

int addrof(CPedGroupIntelligence::SetGroupDecisionMakerType) = ADDRESS_BY_VERSION(0x5F7340, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetGroupDecisionMakerType) = GLOBAL_ADDRESS_BY_VERSION(0x5F7340, 0, 0, 0, 0, 0);

int CPedGroupIntelligence::SetGroupDecisionMakerType(int a2) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPedGroupIntelligence *, int>(gaddrof(CPedGroupIntelligence::SetGroupDecisionMakerType), this, a2);
}

int addrof(CPedGroupIntelligence::SetPrimaryTaskAllocator) = ADDRESS_BY_VERSION(0x5F7410, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetPrimaryTaskAllocator) = GLOBAL_ADDRESS_BY_VERSION(0x5F7410, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetPrimaryTaskAllocator(CTaskAllocator *taskAllocator) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CTaskAllocator *>(gaddrof(CPedGroupIntelligence::SetPrimaryTaskAllocator), this, taskAllocator);
}

int addrof(CPedGroupIntelligence::SetScriptCommandTask) = ADDRESS_BY_VERSION(0x5F8560, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetScriptCommandTask) = GLOBAL_ADDRESS_BY_VERSION(0x5F8560, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetScriptCommandTask(CPed *ped, CTask const *task) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPed *, CTask const *>(gaddrof(CPedGroupIntelligence::SetScriptCommandTask), this, ped, task);
}

int addrof(CPedGroupIntelligence::SetTask) = ADDRESS_BY_VERSION(0x5F7540, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupIntelligence::SetTask) = GLOBAL_ADDRESS_BY_VERSION(0x5F7540, 0, 0, 0, 0, 0);

void CPedGroupIntelligence::SetTask(CPed *ped, CTask const *task, CPedTaskPair *taskpair, int arg5, bool arg6) {
    plugin::CallMethodDynGlobal<CPedGroupIntelligence *, CPed *, CTask const *, CPedTaskPair *, int, bool>(gaddrof(CPedGroupIntelligence::SetTask), this, ped, task, taskpair, arg5, arg6);
}
