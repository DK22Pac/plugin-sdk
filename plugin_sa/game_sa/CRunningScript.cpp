/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CRunningScript.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned char(__thiscall **CRunningScript::CommandHandlerTable)(CRunningScript *_this,unsigned short commandID) = reinterpret_cast<unsigned char(__thiscall **)(CRunningScript *,unsigned short)>(GLOBAL_ADDRESS_BY_VERSION(0x8A6168, 0, 0, 0, 0, 0));

int addrof(CRunningScript::AddScriptToList) = ADDRESS_BY_VERSION(0x464C00, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::AddScriptToList) = GLOBAL_ADDRESS_BY_VERSION(0x464C00, 0, 0, 0, 0, 0);

void CRunningScript::AddScriptToList(CRunningScript **queuelist) {
    plugin::CallMethodDynGlobal<CRunningScript *, CRunningScript **>(gaddrof(CRunningScript::AddScriptToList), this, queuelist);
}

int addrof(CRunningScript::CarInAreaCheckCommand) = ADDRESS_BY_VERSION(0x488EC0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::CarInAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x488EC0, 0, 0, 0, 0, 0);

void CRunningScript::CarInAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::CarInAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::CharInAngledAreaCheckCommand) = ADDRESS_BY_VERSION(0x487F60, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::CharInAngledAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x487F60, 0, 0, 0, 0, 0);

void CRunningScript::CharInAngledAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::CharInAngledAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::CharInAreaCheckCommand) = ADDRESS_BY_VERSION(0x488B50, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::CharInAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x488B50, 0, 0, 0, 0, 0);

void CRunningScript::CharInAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::CharInAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::CollectNextParameterWithoutIncreasingPC) = ADDRESS_BY_VERSION(0x464250, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::CollectNextParameterWithoutIncreasingPC) = GLOBAL_ADDRESS_BY_VERSION(0x464250, 0, 0, 0, 0, 0);

tScriptParam CRunningScript::CollectNextParameterWithoutIncreasingPC() {
    return plugin::CallMethodAndReturnDynGlobal<tScriptParam, CRunningScript *>(gaddrof(CRunningScript::CollectNextParameterWithoutIncreasingPC), this);
}

int addrof(CRunningScript::CollectParameters) = ADDRESS_BY_VERSION(0x464080, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::CollectParameters) = GLOBAL_ADDRESS_BY_VERSION(0x464080, 0, 0, 0, 0, 0);

void CRunningScript::CollectParameters(short count) {
    plugin::CallMethodDynGlobal<CRunningScript *, short>(gaddrof(CRunningScript::CollectParameters), this, count);
}

int addrof(CRunningScript::DoDeatharrestCheck) = ADDRESS_BY_VERSION(0x485A50, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::DoDeatharrestCheck) = GLOBAL_ADDRESS_BY_VERSION(0x485A50, 0, 0, 0, 0, 0);

void CRunningScript::DoDeatharrestCheck() {
    plugin::CallMethodDynGlobal<CRunningScript *>(gaddrof(CRunningScript::DoDeatharrestCheck), this);
}

int addrof(CRunningScript::FlameInAngledAreaCheckCommand) = ADDRESS_BY_VERSION(0x488780, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::FlameInAngledAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x488780, 0, 0, 0, 0, 0);

void CRunningScript::FlameInAngledAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::FlameInAngledAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType) = ADDRESS_BY_VERSION(0x464F50, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType) = GLOBAL_ADDRESS_BY_VERSION(0x464F50, 0, 0, 0, 0, 0);

void CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType(ePedType pedType, int *pModelId) {
    plugin::CallMethodDynGlobal<CRunningScript *, ePedType, int *>(gaddrof(CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType), this, pedType, pModelId);
}

int addrof(CRunningScript::GetIndexOfGlobalVariable) = ADDRESS_BY_VERSION(0x464700, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetIndexOfGlobalVariable) = GLOBAL_ADDRESS_BY_VERSION(0x464700, 0, 0, 0, 0, 0);

short CRunningScript::GetIndexOfGlobalVariable() {
    return plugin::CallMethodAndReturnDynGlobal<short, CRunningScript *>(gaddrof(CRunningScript::GetIndexOfGlobalVariable), this);
}

int addrof(CRunningScript::GetPadState) = ADDRESS_BY_VERSION(0x485B10, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetPadState) = GLOBAL_ADDRESS_BY_VERSION(0x485B10, 0, 0, 0, 0, 0);

short CRunningScript::GetPadState(unsigned short playerIndex, unsigned short buttonID) {
    return plugin::CallMethodAndReturnDynGlobal<short, CRunningScript *, unsigned short, unsigned short>(gaddrof(CRunningScript::GetPadState), this, playerIndex, buttonID);
}

int addrof(CRunningScript::GetPointerToLocalArrayElement) = ADDRESS_BY_VERSION(0x463CC0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetPointerToLocalArrayElement) = GLOBAL_ADDRESS_BY_VERSION(0x463CC0, 0, 0, 0, 0, 0);

void *CRunningScript::GetPointerToLocalArrayElement(int off, unsigned short idx, unsigned char mul) {
    return plugin::CallMethodAndReturnDynGlobal<void*,CRunningScript *, int, unsigned short, unsigned char>(gaddrof(CRunningScript::GetPointerToLocalArrayElement), this, off, idx, mul);
}

int addrof(CRunningScript::GetPointerToLocalVariable) = ADDRESS_BY_VERSION(0x463CA0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetPointerToLocalVariable) = GLOBAL_ADDRESS_BY_VERSION(0x463CA0, 0, 0, 0, 0, 0);

void *CRunningScript::GetPointerToLocalVariable(int varId) {
    return plugin::CallMethodAndReturnDynGlobal<void* ,CRunningScript *, int>(gaddrof(CRunningScript::GetPointerToLocalVariable), this, varId);
}

int addrof(CRunningScript::GetPointerToScriptVariable) = ADDRESS_BY_VERSION(0x464790, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GetPointerToScriptVariable) = GLOBAL_ADDRESS_BY_VERSION(0x464790, 0, 0, 0, 0, 0);

tScriptParam *CRunningScript::GetPointerToScriptVariable(unsigned char variableType) {
    return plugin::CallMethodAndReturnDynGlobal<tScriptParam *, CRunningScript *, unsigned char>(gaddrof(CRunningScript::GetPointerToScriptVariable), this, variableType);
}

int addrof(CRunningScript::GivePedScriptedTask) = ADDRESS_BY_VERSION(0x465C20, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::GivePedScriptedTask) = GLOBAL_ADDRESS_BY_VERSION(0x465C20, 0, 0, 0, 0, 0);

void CRunningScript::GivePedScriptedTask(int pedHandle, CTask *task, int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int, CTask *, int>(gaddrof(CRunningScript::GivePedScriptedTask), this, pedHandle, task, commandID);
}

int addrof(CRunningScript::Init) = ADDRESS_BY_VERSION(0x4648E0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4648E0, 0, 0, 0, 0, 0);

void CRunningScript::Init() {
    plugin::CallMethodDynGlobal<CRunningScript *>(gaddrof(CRunningScript::Init), this);
}

int addrof(CRunningScript::IsPedDead) = ADDRESS_BY_VERSION(0x464D70, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::IsPedDead) = GLOBAL_ADDRESS_BY_VERSION(0x464D70, 0, 0, 0, 0, 0);

bool CRunningScript::IsPedDead(CPed *pPed) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CRunningScript *, CPed *>(gaddrof(CRunningScript::IsPedDead), this, pPed);
}

int addrof(CRunningScript::LocateCarCommand) = ADDRESS_BY_VERSION(0x487A20, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateCarCommand) = GLOBAL_ADDRESS_BY_VERSION(0x487A20, 0, 0, 0, 0, 0);

void CRunningScript::LocateCarCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateCarCommand), this, commandID);
}

int addrof(CRunningScript::LocateCharCarCommand) = ADDRESS_BY_VERSION(0x487420, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateCharCarCommand) = GLOBAL_ADDRESS_BY_VERSION(0x487420, 0, 0, 0, 0, 0);

void CRunningScript::LocateCharCarCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateCharCarCommand), this, commandID);
}

int addrof(CRunningScript::LocateCharCharCommand) = ADDRESS_BY_VERSION(0x4870F0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateCharCharCommand) = GLOBAL_ADDRESS_BY_VERSION(0x4870F0, 0, 0, 0, 0, 0);

void CRunningScript::LocateCharCharCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateCharCharCommand), this, commandID);
}

int addrof(CRunningScript::LocateCharCommand) = ADDRESS_BY_VERSION(0x486D80, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateCharCommand) = GLOBAL_ADDRESS_BY_VERSION(0x486D80, 0, 0, 0, 0, 0);

void CRunningScript::LocateCharCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateCharCommand), this, commandID);
}

int addrof(CRunningScript::LocateCharObjectCommand) = ADDRESS_BY_VERSION(0x487720, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateCharObjectCommand) = GLOBAL_ADDRESS_BY_VERSION(0x487720, 0, 0, 0, 0, 0);

void CRunningScript::LocateCharObjectCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateCharObjectCommand), this, commandID);
}

int addrof(CRunningScript::LocateObjectCommand) = ADDRESS_BY_VERSION(0x487D10, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::LocateObjectCommand) = GLOBAL_ADDRESS_BY_VERSION(0x487D10, 0, 0, 0, 0, 0);

void CRunningScript::LocateObjectCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::LocateObjectCommand), this, commandID);
}

int addrof(CRunningScript::ObjectInAngledAreaCheckCommand) = ADDRESS_BY_VERSION(0x4883F0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ObjectInAngledAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x4883F0, 0, 0, 0, 0, 0);

void CRunningScript::ObjectInAngledAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::ObjectInAngledAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::ObjectInAreaCheckCommand) = ADDRESS_BY_VERSION(0x489150, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ObjectInAreaCheckCommand) = GLOBAL_ADDRESS_BY_VERSION(0x489150, 0, 0, 0, 0, 0);

void CRunningScript::ObjectInAreaCheckCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::ObjectInAreaCheckCommand), this, commandID);
}

int addrof(CRunningScript::PlayAnimScriptCommand) = ADDRESS_BY_VERSION(0x470150, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::PlayAnimScriptCommand) = GLOBAL_ADDRESS_BY_VERSION(0x470150, 0, 0, 0, 0, 0);

void CRunningScript::PlayAnimScriptCommand(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::PlayAnimScriptCommand), this, commandID);
}

int addrof(CRunningScript::Process) = ADDRESS_BY_VERSION(0x469F00, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::Process) = GLOBAL_ADDRESS_BY_VERSION(0x469F00, 0, 0, 0, 0, 0);

void CRunningScript::Process() {
    plugin::CallMethodDynGlobal<CRunningScript *>(gaddrof(CRunningScript::Process), this);
}

int addrof(CRunningScript::ProcessCommands0To99) = ADDRESS_BY_VERSION(0x465E60, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands0To99) = GLOBAL_ADDRESS_BY_VERSION(0x465E60, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands0To99(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands0To99), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1000To1099) = ADDRESS_BY_VERSION(0x489500, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1000To1099) = GLOBAL_ADDRESS_BY_VERSION(0x489500, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1000To1099(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1000To1099), this, commandID);
}

int addrof(CRunningScript::ProcessCommands100To199) = ADDRESS_BY_VERSION(0x466DE0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands100To199) = GLOBAL_ADDRESS_BY_VERSION(0x466DE0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands100To199(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands100To199), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1100To1199) = ADDRESS_BY_VERSION(0x48A320, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1100To1199) = GLOBAL_ADDRESS_BY_VERSION(0x48A320, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1100To1199(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1100To1199), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1200To1299) = ADDRESS_BY_VERSION(0x48B590, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1200To1299) = GLOBAL_ADDRESS_BY_VERSION(0x48B590, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1200To1299(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1200To1299), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1300To1399) = ADDRESS_BY_VERSION(0x48CDD0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1300To1399) = GLOBAL_ADDRESS_BY_VERSION(0x48CDD0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1300To1399(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1300To1399), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1400To1499) = ADDRESS_BY_VERSION(0x48EAA0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1400To1499) = GLOBAL_ADDRESS_BY_VERSION(0x48EAA0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1400To1499(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1400To1499), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1500To1599) = ADDRESS_BY_VERSION(0x490DB0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1500To1599) = GLOBAL_ADDRESS_BY_VERSION(0x490DB0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1500To1599(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1500To1599), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1600To1699) = ADDRESS_BY_VERSION(0x493FE0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1600To1699) = GLOBAL_ADDRESS_BY_VERSION(0x493FE0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1600To1699(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1600To1699), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1700To1799) = ADDRESS_BY_VERSION(0x496E00, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1700To1799) = GLOBAL_ADDRESS_BY_VERSION(0x496E00, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1700To1799(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1700To1799), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1800To1899) = ADDRESS_BY_VERSION(0x46D050, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1800To1899) = GLOBAL_ADDRESS_BY_VERSION(0x46D050, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1800To1899(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1800To1899), this, commandID);
}

int addrof(CRunningScript::ProcessCommands1900To1999) = ADDRESS_BY_VERSION(0x46B460, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands1900To1999) = GLOBAL_ADDRESS_BY_VERSION(0x46B460, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands1900To1999(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands1900To1999), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2000To2099) = ADDRESS_BY_VERSION(0x472310, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2000To2099) = GLOBAL_ADDRESS_BY_VERSION(0x472310, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2000To2099(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2000To2099), this, commandID);
}

int addrof(CRunningScript::ProcessCommands200To299) = ADDRESS_BY_VERSION(0x469390, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands200To299) = GLOBAL_ADDRESS_BY_VERSION(0x469390, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands200To299(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands200To299), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2100To2199) = ADDRESS_BY_VERSION(0x470A90, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2100To2199) = GLOBAL_ADDRESS_BY_VERSION(0x470A90, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2100To2199(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2100To2199), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2200To2299) = ADDRESS_BY_VERSION(0x474900, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2200To2299) = GLOBAL_ADDRESS_BY_VERSION(0x474900, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2200To2299(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2200To2299), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2300To2399) = ADDRESS_BY_VERSION(0x4762D0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2300To2399) = GLOBAL_ADDRESS_BY_VERSION(0x4762D0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2300To2399(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2300To2399), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2400To2499) = ADDRESS_BY_VERSION(0x478000, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2400To2499) = GLOBAL_ADDRESS_BY_VERSION(0x478000, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2400To2499(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2400To2499), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2500To2599) = ADDRESS_BY_VERSION(0x47A760, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2500To2599) = GLOBAL_ADDRESS_BY_VERSION(0x47A760, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2500To2599(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2500To2599), this, commandID);
}

int addrof(CRunningScript::ProcessCommands2600To2699) = ADDRESS_BY_VERSION(0x479DA0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands2600To2699) = GLOBAL_ADDRESS_BY_VERSION(0x479DA0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands2600To2699(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands2600To2699), this, commandID);
}

int addrof(CRunningScript::ProcessCommands300To399) = ADDRESS_BY_VERSION(0x47C100, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands300To399) = GLOBAL_ADDRESS_BY_VERSION(0x47C100, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands300To399(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands300To399), this, commandID);
}

int addrof(CRunningScript::ProcessCommands400To499) = ADDRESS_BY_VERSION(0x47D210, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands400To499) = GLOBAL_ADDRESS_BY_VERSION(0x47D210, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands400To499(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands400To499), this, commandID);
}

int addrof(CRunningScript::ProcessCommands500To599) = ADDRESS_BY_VERSION(0x47E090, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands500To599) = GLOBAL_ADDRESS_BY_VERSION(0x47E090, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands500To599(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands500To599), this, commandID);
}

int addrof(CRunningScript::ProcessCommands600To699) = ADDRESS_BY_VERSION(0x47F370, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands600To699) = GLOBAL_ADDRESS_BY_VERSION(0x47F370, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands600To699(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands600To699), this, commandID);
}

int addrof(CRunningScript::ProcessCommands700To799) = ADDRESS_BY_VERSION(0x47FA30, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands700To799) = GLOBAL_ADDRESS_BY_VERSION(0x47FA30, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands700To799(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands700To799), this, commandID);
}

int addrof(CRunningScript::ProcessCommands800To899) = ADDRESS_BY_VERSION(0x481300, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands800To899) = GLOBAL_ADDRESS_BY_VERSION(0x481300, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands800To899(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands800To899), this, commandID);
}

int addrof(CRunningScript::ProcessCommands900To999) = ADDRESS_BY_VERSION(0x483BD0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessCommands900To999) = GLOBAL_ADDRESS_BY_VERSION(0x483BD0, 0, 0, 0, 0, 0);

char CRunningScript::ProcessCommands900To999(int commandID) {
    return plugin::CallMethodAndReturnDynGlobal<char, CRunningScript *, int>(gaddrof(CRunningScript::ProcessCommands900To999), this, commandID);
}

int addrof(CRunningScript::ProcessOneCommand) = ADDRESS_BY_VERSION(0x469EB0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ProcessOneCommand) = GLOBAL_ADDRESS_BY_VERSION(0x469EB0, 0, 0, 0, 0, 0);

void CRunningScript::ProcessOneCommand() {
    plugin::CallMethodDynGlobal<CRunningScript *>(gaddrof(CRunningScript::ProcessOneCommand), this);
}

int addrof(CRunningScript::ReadArrayInformation) = ADDRESS_BY_VERSION(0x463CF0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ReadArrayInformation) = GLOBAL_ADDRESS_BY_VERSION(0x463CF0, 0, 0, 0, 0, 0);

void CRunningScript::ReadArrayInformation(int move, unsigned short *pOffset, int *pIdx) {
    plugin::CallMethodDynGlobal<CRunningScript *, int, unsigned short *, int *>(gaddrof(CRunningScript::ReadArrayInformation), this, move, pOffset, pIdx);
}

int addrof(CRunningScript::ReadParametersForNewlyStartedScript) = ADDRESS_BY_VERSION(0x464500, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ReadParametersForNewlyStartedScript) = GLOBAL_ADDRESS_BY_VERSION(0x464500, 0, 0, 0, 0, 0);

void CRunningScript::ReadParametersForNewlyStartedScript(CRunningScript *pNewScript) {
    plugin::CallMethodDynGlobal<CRunningScript *, CRunningScript *>(gaddrof(CRunningScript::ReadParametersForNewlyStartedScript), this, pNewScript);
}

int addrof(CRunningScript::ReadTextLabelFromScript) = ADDRESS_BY_VERSION(0x463D50, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ReadTextLabelFromScript) = GLOBAL_ADDRESS_BY_VERSION(0x463D50, 0, 0, 0, 0, 0);

void CRunningScript::ReadTextLabelFromScript(char *pBuffer, unsigned char nBufferLength) {
    plugin::CallMethodDynGlobal<CRunningScript *, char *, unsigned char>(gaddrof(CRunningScript::ReadTextLabelFromScript), this, pBuffer, nBufferLength);
}

int addrof(CRunningScript::RemoveScriptFromList) = ADDRESS_BY_VERSION(0x464BD0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::RemoveScriptFromList) = GLOBAL_ADDRESS_BY_VERSION(0x464BD0, 0, 0, 0, 0, 0);

void CRunningScript::RemoveScriptFromList(CRunningScript **queuelist) {
    plugin::CallMethodDynGlobal<CRunningScript *, CRunningScript **>(gaddrof(CRunningScript::RemoveScriptFromList), this, queuelist);
}

int addrof(CRunningScript::ScriptTaskPickUpObject) = ADDRESS_BY_VERSION(0x46AF50, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ScriptTaskPickUpObject) = GLOBAL_ADDRESS_BY_VERSION(0x46AF50, 0, 0, 0, 0, 0);

void CRunningScript::ScriptTaskPickUpObject(int commandID) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::ScriptTaskPickUpObject), this, commandID);
}

int addrof(CRunningScript::SetCharCoordinates) = ADDRESS_BY_VERSION(0x464DC0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::SetCharCoordinates) = GLOBAL_ADDRESS_BY_VERSION(0x464DC0, 0, 0, 0, 0, 0);

void CRunningScript::SetCharCoordinates(CPed *pPed, float x_coord, float y_coord, float z_coord, bool bWarpGang, bool bOffset) {
    plugin::CallMethodDynGlobal<CRunningScript *, CPed *, float, float, float, bool, bool>(gaddrof(CRunningScript::SetCharCoordinates), this, pPed, x_coord, y_coord, z_coord, bWarpGang, bOffset);
}

int addrof(CRunningScript::ShutdownThisScript) = ADDRESS_BY_VERSION(0x465AA0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ShutdownThisScript) = GLOBAL_ADDRESS_BY_VERSION(0x465AA0, 0, 0, 0, 0, 0);

void CRunningScript::ShutdownThisScript() {
    plugin::CallMethodDynGlobal<CRunningScript *>(gaddrof(CRunningScript::ShutdownThisScript), this);
}

int addrof(CRunningScript::StoreParameters) = ADDRESS_BY_VERSION(0x464370, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::StoreParameters) = GLOBAL_ADDRESS_BY_VERSION(0x464370, 0, 0, 0, 0, 0);

void CRunningScript::StoreParameters(short count) {
    plugin::CallMethodDynGlobal<CRunningScript *, short>(gaddrof(CRunningScript::StoreParameters), this, count);
}

int addrof(CRunningScript::ThisIsAValidRandomPed) = ADDRESS_BY_VERSION(0x489490, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::ThisIsAValidRandomPed) = GLOBAL_ADDRESS_BY_VERSION(0x489490, 0, 0, 0, 0, 0);

bool CRunningScript::ThisIsAValidRandomPed(ePedType pedType, bool civilian, bool gang, bool criminal) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CRunningScript *, ePedType, bool, bool, bool>(gaddrof(CRunningScript::ThisIsAValidRandomPed), this, pedType, civilian, gang, criminal);
}

int addrof(CRunningScript::UpdateCompareFlag) = ADDRESS_BY_VERSION(0x4859D0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::UpdateCompareFlag) = GLOBAL_ADDRESS_BY_VERSION(0x4859D0, 0, 0, 0, 0, 0);

void CRunningScript::UpdateCompareFlag(bool state) {
    plugin::CallMethodDynGlobal<CRunningScript *, bool>(gaddrof(CRunningScript::UpdateCompareFlag), this, state);
}

int addrof(CRunningScript::UpdatePC) = ADDRESS_BY_VERSION(0x464DA0, 0, 0, 0, 0, 0);
int gaddrof(CRunningScript::UpdatePC) = GLOBAL_ADDRESS_BY_VERSION(0x464DA0, 0, 0, 0, 0, 0);

void CRunningScript::UpdatePC(int newIP) {
    plugin::CallMethodDynGlobal<CRunningScript *, int>(gaddrof(CRunningScript::UpdatePC), this, newIP);
}
