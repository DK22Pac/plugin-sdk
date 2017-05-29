/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"

enum eScriptArgumentType {
    SCM_ARGUMENT_TYPE_END_OF_ARGUMENTS,
    SCM_ARGUMENT_TYPE_STATIC_INT_32BITS,
    SCM_ARGUMENT_TYPE_GLOBAL_NUMBER_VARIABLE,
    SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE,
    SCM_ARGUMENT_TYPE_STATIC_INT_8BITS,
    SCM_ARGUMENT_TYPE_STATIC_INT_16BITS,
    SCM_ARGUMENT_TYPE_STATIC_FLOAT,
};

union tScriptVariable {
    unsigned int dwParam;
    int nParam;
    float fParam;
    void *pParam;
    char *szParam;
};

VALIDATE_SIZE(tScriptVariable, 0x4);

class PLUGIN_API CRunningScript {
public:
    CRunningScript *m_pNext;
    CRunningScript *m_pPrev;
    char m_szName[8];
    unsigned int m_nIp;
    unsigned int m_anGosubAddr[6];
    unsigned short m_nCurrentGosub;
    unsigned short scriptType;
    tScriptVariable m_aLVars[16];
    int m_nTimerA;
    int m_nTimerB;
    bool m_bIsActive;
    unsigned char m_nCondResult;
    bool m_bIsMission;
    bool m_bAwake;
    int m_nWakeTime;
    unsigned short m_nIfOp;
    bool m_bNotFlag;
    bool m_bDeathArrestCheckEnabled;
    bool m_bWastedOrBusted;
    bool m_bMissionCleanup;
private:
    char _pad86[2];
public:

    void Init();
    char ProcessOneCommand();

    static unsigned char *GetScriptSpaceBase();
};

VALIDATE_SIZE(CRunningScript, 0x88);