/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CSimpleModelInfo.h"

class CTimeModelInfo : public CSimpleModelInfo {
public:
    unsigned int m_nStartHour;
    unsigned int m_nEndHour;
    CSimpleModelInfo *m_pPairedModel;
    
    void FindOtherTimeModel();
};

VALIDATE_SIZE(CTimeModelInfo, 0x50);