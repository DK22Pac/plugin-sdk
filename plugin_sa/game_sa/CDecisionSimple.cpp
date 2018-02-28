/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDecisionSimple.h"

// Converted from thiscall void CDecisionSimple::Set(int *taskTypes,uchar *chances,int count) 0x600730
void CDecisionSimple::Set(int* taskTypes, unsigned char* chances, int count) {
    plugin::CallMethod<0x600730, CDecisionSimple *, int*, unsigned char*, int>(this, taskTypes, chances, count);
}

// Converted from thiscall void CDecisionSimple::MakeDecision(int taskType,short &outTaskType,int &outDecisionIndex) 0x6007A0
void CDecisionSimple::MakeDecision(int taskType, short& outTaskType, int& outDecisionIndex) {
    plugin::CallMethod<0x6007A0, CDecisionSimple *, int, short&, int&>(this, taskType, outTaskType, outDecisionIndex);
}

// Converted from thiscall void CDecisionSimple::SetDefault(void) 0x604220
void CDecisionSimple::SetDefault() {
    plugin::CallMethod<0x604220, CDecisionSimple *>(this);
}