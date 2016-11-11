/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CBaseModelInfo.h"

#pragma pack(push, 4)
class CTimeModelInfo : public CBaseModelInfo {
public:
    char gap28[36];
    int dword4C; 
    
    void FindOtherTimeModel();
};
#pragma pack(pop)

VALIDATE_SIZE(CTimeModelInfo, 0x50);