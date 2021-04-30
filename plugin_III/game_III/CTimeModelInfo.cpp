/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimeModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CTimeModelInfo) = ADDRESS_BY_VERSION(0x50C0A0, 0x50C190, 0x50C120);
int ctor_gaddr(CTimeModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C0A0, 0x50C190, 0x50C120);

int dtor_addr(CTimeModelInfo) = ADDRESS_BY_VERSION(0x50C080, 0x50C170, 0x50C100);
int dtor_gaddr(CTimeModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C080, 0x50C170, 0x50C100);

int del_dtor_addr(CTimeModelInfo) = ADDRESS_BY_VERSION(0x50C210, 0x50C300, 0x50C290);
int del_dtor_gaddr(CTimeModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C210, 0x50C300, 0x50C290);

int addrof(CTimeModelInfo::FindOtherTimeModel) = ADDRESS_BY_VERSION(0x517C80, 0x517E90, 0x517E20);
int gaddrof(CTimeModelInfo::FindOtherTimeModel) = GLOBAL_ADDRESS_BY_VERSION(0x517C80, 0x517E90, 0x517E20);

CTimeModelInfo *CTimeModelInfo::FindOtherTimeModel() {
    return plugin::CallMethodAndReturnDynGlobal<CTimeModelInfo *, CTimeModelInfo *>(gaddrof(CTimeModelInfo::FindOtherTimeModel), this);
}
