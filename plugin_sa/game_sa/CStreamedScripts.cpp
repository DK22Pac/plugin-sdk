/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreamedScripts.h"

PLUGIN_SOURCE_FILE

int addrof(CStreamedScripts::FindStreamedScript) = ADDRESS_BY_VERSION(0x470740, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::FindStreamedScript) = GLOBAL_ADDRESS_BY_VERSION(0x470740, 0, 0, 0, 0, 0);

signed int CStreamedScripts::FindStreamedScript(char const *scriptname) {
    return plugin::CallMethodAndReturnDynGlobal<signed int, CStreamedScripts *, char const *>(gaddrof(CStreamedScripts::FindStreamedScript), this, scriptname);
}

int addrof(CStreamedScripts::FindStreamedScriptQuiet) = ADDRESS_BY_VERSION(0x4706F0, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::FindStreamedScriptQuiet) = GLOBAL_ADDRESS_BY_VERSION(0x4706F0, 0, 0, 0, 0, 0);

signed int CStreamedScripts::FindStreamedScriptQuiet(char const *scriptName) {
    return plugin::CallMethodAndReturnDynGlobal<signed int, CStreamedScripts *, char const *>(gaddrof(CStreamedScripts::FindStreamedScriptQuiet), this, scriptName);
}

int addrof(CStreamedScripts::GetProperIndexFromIndexUsedByScript) = ADDRESS_BY_VERSION(0x470810, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::GetProperIndexFromIndexUsedByScript) = GLOBAL_ADDRESS_BY_VERSION(0x470810, 0, 0, 0, 0, 0);

signed short CStreamedScripts::GetProperIndexFromIndexUsedByScript(short scmIndex) {
    return plugin::CallMethodAndReturnDynGlobal<signed short, CStreamedScripts *, short>(gaddrof(CStreamedScripts::GetProperIndexFromIndexUsedByScript), this, scmIndex);
}

int addrof(CStreamedScripts::GetStreamedScriptFilename) = ADDRESS_BY_VERSION(0x470900, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::GetStreamedScriptFilename) = GLOBAL_ADDRESS_BY_VERSION(0x470900, 0, 0, 0, 0, 0);

char const *CStreamedScripts::GetStreamedScriptFilename(unsigned short index) {
    return plugin::CallMethodAndReturnDynGlobal<char const *, CStreamedScripts *, unsigned short>(gaddrof(CStreamedScripts::GetStreamedScriptFilename), this, index);
}

int addrof(CStreamedScripts::GetStreamedScriptWithThisStartAddress) = ADDRESS_BY_VERSION(0x470910, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::GetStreamedScriptWithThisStartAddress) = GLOBAL_ADDRESS_BY_VERSION(0x470910, 0, 0, 0, 0, 0);

unsigned short CStreamedScripts::GetStreamedScriptWithThisStartAddress(unsigned char *dataPtr) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned short, CStreamedScripts *, unsigned char *>(gaddrof(CStreamedScripts::GetStreamedScriptWithThisStartAddress), this, dataPtr);
}

int addrof(CStreamedScripts::Initialise) = ADDRESS_BY_VERSION(0x470660, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x470660, 0, 0, 0, 0, 0);

void CStreamedScripts::Initialise() {
    plugin::CallMethodDynGlobal<CStreamedScripts *>(gaddrof(CStreamedScripts::Initialise), this);
}

int addrof(CStreamedScripts::LoadStreamedScript) = ADDRESS_BY_VERSION(0x470840, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::LoadStreamedScript) = GLOBAL_ADDRESS_BY_VERSION(0x470840, 0, 0, 0, 0, 0);

void CStreamedScripts::LoadStreamedScript(RwStream *stream, int index) {
    plugin::CallMethodDynGlobal<CStreamedScripts *, RwStream *, int>(gaddrof(CStreamedScripts::LoadStreamedScript), this, stream, index);
}

int addrof(CStreamedScripts::ReInitialise) = ADDRESS_BY_VERSION(0x4706A0, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::ReInitialise) = GLOBAL_ADDRESS_BY_VERSION(0x4706A0, 0, 0, 0, 0, 0);

void CStreamedScripts::ReInitialise() {
    plugin::CallMethodDynGlobal<CStreamedScripts *>(gaddrof(CStreamedScripts::ReInitialise), this);
}

int addrof(CStreamedScripts::ReadStreamedScriptData) = ADDRESS_BY_VERSION(0x470750, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::ReadStreamedScriptData) = GLOBAL_ADDRESS_BY_VERSION(0x470750, 0, 0, 0, 0, 0);

void CStreamedScripts::ReadStreamedScriptData() {
    plugin::CallMethodDynGlobal<CStreamedScripts *>(gaddrof(CStreamedScripts::ReadStreamedScriptData), this);
}

int addrof(CStreamedScripts::RegisterScript) = ADDRESS_BY_VERSION(0x4706C0, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::RegisterScript) = GLOBAL_ADDRESS_BY_VERSION(0x4706C0, 0, 0, 0, 0, 0);

int CStreamedScripts::RegisterScript(char const *scriptName) {
    return plugin::CallMethodAndReturnDynGlobal<int, CStreamedScripts *, char const *>(gaddrof(CStreamedScripts::RegisterScript), this, scriptName);
}

int addrof(CStreamedScripts::RemoveStreamedScriptFromMemory) = ADDRESS_BY_VERSION(0x4708E0, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::RemoveStreamedScriptFromMemory) = GLOBAL_ADDRESS_BY_VERSION(0x4708E0, 0, 0, 0, 0, 0);

void CStreamedScripts::RemoveStreamedScriptFromMemory(int index) {
    plugin::CallMethodDynGlobal<CStreamedScripts *, int>(gaddrof(CStreamedScripts::RemoveStreamedScriptFromMemory), this, index);
}

int addrof(CStreamedScripts::StartNewStreamedScript) = ADDRESS_BY_VERSION(0x470890, 0, 0, 0, 0, 0);
int gaddrof(CStreamedScripts::StartNewStreamedScript) = GLOBAL_ADDRESS_BY_VERSION(0x470890, 0, 0, 0, 0, 0);

CRunningScript *CStreamedScripts::StartNewStreamedScript(int index) {
    return plugin::CallMethodAndReturnDynGlobal<CRunningScript *, CStreamedScripts *, int>(gaddrof(CStreamedScripts::StartNewStreamedScript), this, index);
}
