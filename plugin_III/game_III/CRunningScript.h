/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eScriptCommands.h"

enum eScriptParameterType {
    SCRIPTPARAM_END_OF_ARGUMENTS,
    SCRIPTPARAM_STATIC_INT_32BITS,
    SCRIPTPARAM_GLOBAL_NUMBER_VARIABLE,
    SCRIPTPARAM_LOCAL_NUMBER_VARIABLE,
    SCRIPTPARAM_STATIC_INT_8BITS,
    SCRIPTPARAM_STATIC_INT_16BITS,
    SCRIPTPARAM_STATIC_FLOAT,
};

union tScriptParam {
    unsigned int uParam;
    int iParam;
    float fParam;
    void *pParam;
    char *szParam;
};

VALIDATE_SIZE(tScriptParam, 0x4);

class PLUGIN_API CRunningScript {
public:
    CRunningScript *m_pNext;
    CRunningScript *m_pPrev;
    char            m_szName[8];
    unsigned int    m_nIp;
    int             m_anStack[6];
    unsigned short  m_nSP;
private:
    char _pad2E[2];
public:
    tScriptParam    m_aLocalVars[16];
    int             m_anTimers[2];
    bool            m_bCondResult;
    bool            m_bUseMissionCleanup;
    bool            m_bIsActive;
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
    void CollectParameters(unsigned int* arg0, short count);
    void StoreParameters(unsigned int* arg0, short count);
    void UpdateCompareFlag(unsigned char flag);
    void Process();
    void DoDeathArrestCheck();

    static unsigned char *GetScriptSpaceBase();
};

VALIDATE_SIZE(CRunningScript, 0x88);
