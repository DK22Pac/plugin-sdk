/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreamingInfo.h"

PLUGIN_SOURCE_FILE

CStreamingInfo *&CStreamingInfo::ms_pArrayBase = *reinterpret_cast<CStreamingInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x9654B4, 0, 0, 0, 0, 0));

int addrof(CStreamingInfo::AddToList) = ADDRESS_BY_VERSION(0x407480, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::AddToList) = GLOBAL_ADDRESS_BY_VERSION(0x407480, 0, 0, 0, 0, 0);

void CStreamingInfo::AddToList(CStreamingInfo *listStart) {
    plugin::CallMethodDynGlobal<CStreamingInfo *, CStreamingInfo *>(gaddrof(CStreamingInfo::AddToList), this, listStart);
}

int addrof(CStreamingInfo::GetCdPosn) = ADDRESS_BY_VERSION(0x407570, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::GetCdPosn) = GLOBAL_ADDRESS_BY_VERSION(0x407570, 0, 0, 0, 0, 0);

unsigned int CStreamingInfo::GetCdPosn() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CStreamingInfo *>(gaddrof(CStreamingInfo::GetCdPosn), this);
}

int addrof(CStreamingInfo::GetCdPosnAndSize) = ADDRESS_BY_VERSION(0x4075A0, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::GetCdPosnAndSize) = GLOBAL_ADDRESS_BY_VERSION(0x4075A0, 0, 0, 0, 0, 0);

bool CStreamingInfo::GetCdPosnAndSize(unsigned int *CdPosn, unsigned int *CdSize) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStreamingInfo *, unsigned int *, unsigned int *>(gaddrof(CStreamingInfo::GetCdPosnAndSize), this, CdPosn, CdSize);
}

int addrof(CStreamingInfo::GetCdSize) = ADDRESS_BY_VERSION(0x407590, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::GetCdSize) = GLOBAL_ADDRESS_BY_VERSION(0x407590, 0, 0, 0, 0, 0);

unsigned int CStreamingInfo::GetCdSize() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CStreamingInfo *>(gaddrof(CStreamingInfo::GetCdSize), this);
}

int addrof(CStreamingInfo::GetNext) = ADDRESS_BY_VERSION(0x407520, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::GetNext) = GLOBAL_ADDRESS_BY_VERSION(0x407520, 0, 0, 0, 0, 0);

CStreamingInfo *CStreamingInfo::GetNext() {
    return plugin::CallMethodAndReturnDynGlobal<CStreamingInfo *, CStreamingInfo *>(gaddrof(CStreamingInfo::GetNext), this);
}

int addrof(CStreamingInfo::GetPrev) = ADDRESS_BY_VERSION(0x407540, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::GetPrev) = GLOBAL_ADDRESS_BY_VERSION(0x407540, 0, 0, 0, 0, 0);

CStreamingInfo *CStreamingInfo::GetPrev() {
    return plugin::CallMethodAndReturnDynGlobal<CStreamingInfo *, CStreamingInfo *>(gaddrof(CStreamingInfo::GetPrev), this);
}

int addrof(CStreamingInfo::InList) = ADDRESS_BY_VERSION(0x407560, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::InList) = GLOBAL_ADDRESS_BY_VERSION(0x407560, 0, 0, 0, 0, 0);

bool CStreamingInfo::InList() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStreamingInfo *>(gaddrof(CStreamingInfo::InList), this);
}

int addrof(CStreamingInfo::Init) = ADDRESS_BY_VERSION(0x407460, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::Init) = GLOBAL_ADDRESS_BY_VERSION(0x407460, 0, 0, 0, 0, 0);

void CStreamingInfo::Init() {
    plugin::CallMethodDynGlobal<CStreamingInfo *>(gaddrof(CStreamingInfo::Init), this);
}

int addrof(CStreamingInfo::RemoveFromList) = ADDRESS_BY_VERSION(0x4074E0, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::RemoveFromList) = GLOBAL_ADDRESS_BY_VERSION(0x4074E0, 0, 0, 0, 0, 0);

void CStreamingInfo::RemoveFromList() {
    plugin::CallMethodDynGlobal<CStreamingInfo *>(gaddrof(CStreamingInfo::RemoveFromList), this);
}

int addrof(CStreamingInfo::SetCdPosnAndSize) = ADDRESS_BY_VERSION(0x4075E0, 0, 0, 0, 0, 0);
int gaddrof(CStreamingInfo::SetCdPosnAndSize) = GLOBAL_ADDRESS_BY_VERSION(0x4075E0, 0, 0, 0, 0, 0);

void CStreamingInfo::SetCdPosnAndSize(unsigned int CdPosn, unsigned int CdSize) {
    plugin::CallMethodDynGlobal<CStreamingInfo *, unsigned int, unsigned int>(gaddrof(CStreamingInfo::SetCdPosnAndSize), this, CdPosn, CdSize);
}
