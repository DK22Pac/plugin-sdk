/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "eScriptCommands.h"

enum eScriptArgumentType {
    SCRIPTARG_END_OF_ARGUMENTS,
    SCRIPTARG_STATIC_INT_32BITS,
    SCRIPTARG_GLOBAL_NUMBER_VARIABLE,
    SCRIPTARG_LOCAL_NUMBER_VARIABLE,
    SCRIPTARG_STATIC_INT_8BITS,
    SCRIPTARG_STATIC_INT_16BITS,
    SCRIPTARG_STATIC_FLOAT,
};

union tScriptVariable {
    unsigned int uParam;
    int iParam;
    float fParam;
    void *pParam;
    char *szParam;
};

VALIDATE_SIZE(tScriptVariable, 0x4);

class PLUGIN_API CRunningScript {
public:
    CRunningScript *m_pNext;
    CRunningScript *m_pPrev;
    char            m_szName[8];
    int             m_nIp;
    int             m_anStack[6];
    unsigned short  m_nSP;
private:
    char _pad2E[2];
public:
    tScriptVariable m_aLocalVars[16];
    int             m_anTimers[2];
    bool            m_bIsActive;
    bool            m_bCondResult;
    bool            m_bUseMissionCleanup;
    bool            m_bAwake;
    int             m_nWakeTime;
    unsigned short  m_nLogicalOp;
    bool            m_bNotFlag;
    bool            m_bWastedBustedCheck;
    bool            m_bWastedOrBusted;
    bool            m_bIsMission;
private:
    char _pad86[2];
public:

    void Init();
    char ProcessOneCommand();

    static unsigned char *GetScriptSpaceBase();
};

VALIDATE_SIZE(CRunningScript, 0x88);
