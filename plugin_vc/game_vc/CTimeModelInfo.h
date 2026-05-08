/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSimpleModelInfo.h"

class CTimeModelInfo : public CSimpleModelInfo {
public:
    unsigned int m_nStartHour;
    unsigned int m_nEndHour;
    CSimpleModelInfo *m_pPairedModel;
    
    void FindOtherTimeModel();
};
VALIDATE_OFFSET(CTimeModelInfo, m_nStartHour, 0x44);
VALIDATE_OFFSET(CTimeModelInfo, m_nEndHour, 0x48);
VALIDATE_OFFSET(CTimeModelInfo, m_pPairedModel, 0x4C);
VALIDATE_SIZE(CTimeModelInfo, 0x50);

struct TimeModelStore {
    unsigned int m_nCount;
    CTimeModelInfo m_sObject[385];

    ~TimeModelStore();
};
VALIDATE_OFFSET(TimeModelStore, m_nCount, 0x0);
VALIDATE_OFFSET(TimeModelStore, m_sObject, 0x4);
VALIDATE_SIZE(TimeModelStore, 0x7854);
