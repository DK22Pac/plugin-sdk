/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "cHandlingDataMgr.h"

cHandlingDataMgr& gHandlingDataMgr = *(cHandlingDataMgr*)0x978E58;

// Converted from thiscall void cHandlingDataMgr::cHandlingDataMgr(void) 0x5ABDC0
cHandlingDataMgr::cHandlingDataMgr() {
    plugin::CallMethod<0x5ABDC0, cHandlingDataMgr *>(this);
}

// Converted from thiscall void cHandlingDataMgr::ConvertDataToGameUnits(tHandlingData *handling) 0x5ABAA0
void cHandlingDataMgr::ConvertDataToGameUnits(tHandlingData* handling) {
    plugin::CallMethod<0x5ABAA0, cHandlingDataMgr *, tHandlingData*>(this, handling);
}

// Converted from thiscall int cHandlingDataMgr::FindExactWord(char *line,char *nameTable,int entrySize,int entryCount) 0x5ABD30
int cHandlingDataMgr::FindExactWord(char* line, char* nameTable, int entrySize, int entryCount) {
    return plugin::CallMethodAndReturn<int, 0x5ABD30, cHandlingDataMgr *, char*, char*, int, int>(this, line, nameTable, entrySize, entryCount);
}

// Converted from thiscall tBoatHandlingData* cHandlingDataMgr::GetBoatPointer(uchar handlingId) 0x5ABA40
tBoatHandlingData* cHandlingDataMgr::GetBoatPointer(unsigned char handlingId) {
    return plugin::CallMethodAndReturn<tBoatHandlingData*, 0x5ABA40, cHandlingDataMgr *, unsigned char>(this, handlingId);
}

// Converted from thiscall tFlyingHandlingData* cHandlingDataMgr::GetFlyingPointer(uchar handlingId) 0x5ABA70
tFlyingHandlingData* cHandlingDataMgr::GetFlyingPointer(unsigned char handlingId) {
    return plugin::CallMethodAndReturn<tFlyingHandlingData*, 0x5ABA70, cHandlingDataMgr *, unsigned char>(this, handlingId);
}

// Converted from thiscall int cHandlingDataMgr::GetHandlingId(char const* name) 0x5ABCC0
int cHandlingDataMgr::GetHandlingId(char const* name) {
    return plugin::CallMethodAndReturn<int, 0x5ABCC0, cHandlingDataMgr *, char const*>(this, name);
}

// Converted from thiscall void cHandlingDataMgr::Initialise(void) 0x5ABA10 
void cHandlingDataMgr::Initialise() {
    plugin::CallMethod<0x5ABA10, cHandlingDataMgr *>(this);
}

// Converted from thiscall void cHandlingDataMgr::LoadHandlingData(void) 0x5AAE20 
void cHandlingDataMgr::LoadHandlingData() {
    plugin::CallMethod<0x5AAE20, cHandlingDataMgr *>(this);
}
