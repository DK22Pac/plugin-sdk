/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShadows.h"

CPolyBunch *&CShadows::pEmptyBunchList = *(CPolyBunch **)0x8F435C;
unsigned short &CShadows::ShadowsStoredToBeRendered = *(unsigned short *)0x95CCEE;
CRegisteredShadow *CShadows::asShadowsStored = (CRegisteredShadow *)0x779058;
CPolyBunch *CShadows::aPolyBunches = (CPolyBunch *)0x86F4C8;
CStaticShadow *CShadows::aStaticShadows = (CStaticShadow *)0x773BE8;
CPermanentShadow *CShadows::aPermanentShadows = (CPermanentShadow *)0x712040;

// Converted from thiscall void CPermanentShadow::CPermanentShadow(void) 0x517900 
CPermanentShadow::CPermanentShadow() {
    plugin::CallMethod<0x517900, CPermanentShadow *>(this);
}

// Converted from thiscall void CStaticShadow::CStaticShadow(void) 0x517910 
CStaticShadow::CStaticShadow() {
    plugin::CallMethod<0x517910, CStaticShadow *>(this);
}

// Converted from thiscall void CStaticShadow::Free(void) 0x516E70
void CStaticShadow::Free() {
    plugin::CallMethod<0x516E70, CStaticShadow *>(this);
}

// Converted from thiscall void CPolyBunch::CPolyBunch(void) 0x517920 
CPolyBunch::CPolyBunch() {
    plugin::CallMethod<0x517920, CPolyBunch *>(this);
}

// Converted from thiscall void CRegisteredShadow::CRegisteredShadow(void) 0x517940 
CRegisteredShadow::CRegisteredShadow() {
    plugin::CallMethod<0x517940, CRegisteredShadow *>(this);
}
