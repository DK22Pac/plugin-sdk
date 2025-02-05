/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRunningScript.h"
#include "CTheScripts.h"

// Converted from thiscall void CRunningScript::Init(void) 0x4386C0
void CRunningScript::Init() {
    plugin::CallMethod<0x4386C0, CRunningScript *>(this);
}

// Converted from thiscall char CRunningScript::ProcessOneCommand(void) 0x439500
char CRunningScript::ProcessOneCommand() {
    return plugin::CallMethodAndReturn<char, 0x439500, CRunningScript *>(this);
}

// Converted from thiscall void CRunningScript::CollectParameters(uint *,short count) 0x4382E0
void CRunningScript::CollectParameters(unsigned int* arg0, short count) {
    plugin::CallMethod<0x4382E0, CRunningScript *, unsigned int*, short>(this, arg0, count);
}

void CRunningScript::StoreParameters(unsigned int* arg0, short count) {
    plugin::CallMethod<0x4385A0, CRunningScript*, unsigned int*, short>(this, arg0, count);
}

// Converted from thiscall void CRunningScript::UpdateCompareFlag(uchar flag) 0x44FD90
void CRunningScript::UpdateCompareFlag(unsigned char flag) {
    plugin::CallMethod<0x44FD90, CRunningScript *, unsigned char>(this, flag);
}

void CRunningScript::Process() {
    plugin::CallMethod<0x439440, CRunningScript*>(this);
}

void CRunningScript::DoDeathArrestCheck() {
    plugin::CallMethod<0x452A30, CRunningScript*>(this);
}

unsigned char *CRunningScript::GetScriptSpaceBase() {
    return CTheScripts::ScriptSpace;
}