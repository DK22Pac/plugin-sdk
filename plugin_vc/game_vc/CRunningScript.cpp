/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRunningScript.h"
#include "CTheScripts.h"

// Converted from thiscall void CRunningScript::Init(void) 0x450CF0
void CRunningScript::Init() {
    plugin::CallMethod<0x450CF0, CRunningScript *>(this);
}

// Converted from thiscall char CRunningScript::ProcessOneCommand(void) 0x44FBE0
char CRunningScript::ProcessOneCommand() {
    return plugin::CallMethodAndReturn<char, 0x44FBE0, CRunningScript *>(this);
}

unsigned char *CRunningScript::GetScriptSpaceBase() {
    return CTheScripts::ScriptSpace;
}