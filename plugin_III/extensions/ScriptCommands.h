/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "scripting\ScriptCommandNames.h"
#include "game_III\CRunningScript.h"
#include <vector>

namespace plugin {

namespace test {

enum ScriptCommandEndParameter {
    END_PARAMETER
};

class ScriptCode {
    unsigned char *data;
    unsigned int capacity;
    unsigned int size;

    struct VarToSet {
        unsigned int varIndex;
        unsigned int *pVar;

        VarToSet(unsigned int _varIndex, unsigned int *_pVar);
    };

    std::vector<VarToSet> varsToSet;
    unsigned short varIndexCounter;

public:
    ScriptCode(short commandId = -1);
    ~ScriptCode();
    void AddParameterDescription(unsigned char paramType);
    void AddBytes(unsigned char *bytes, unsigned int count);
    unsigned char *GetData();
    void SaveResultVariables(CRunningScript *script);
    void operator<<(char n);
    void operator<<(unsigned char n);
    void operator<<(short n);
    void operator<<(unsigned short n);
    void operator<<(int n);
    void operator<<(unsigned int n);
    void operator<<(float n);
    void operator<<(double n);
    void operator<<(ScriptCommandEndParameter);
    void operator<<(char *str);
    void operator<<(const char *str);
    void operator<<(float *p);
    void operator<<(int *p);
    void operator<<(unsigned int *p);

    template <typename T>
    void Pack(T value) {
        operator<<(value);
    }

    template <typename First, typename... Rest>
    void Pack(First firstValue, Rest... rest) {
        Pack(firstValue);
        Pack(rest...);
    }
};

template <unsigned int CommandId, typename... ArgTypes>
bool ScriptCommand(ArgTypes... args) {
    // create our 'script' object
    static CRunningScript script;
    memset(&script, 0, sizeof(CRunningScript));
    strcpy(script.m_szName, "PlSdkTmp");
    script.m_bDeathArrestCheckEnabled = true;
    script.m_bIsMission = script.m_bMissionCleanup = false;
    script.scriptType = 0;
    script.m_bNotFlag = (CommandId >> 15) & 1;
    // our script code
    ScriptCode code(CommandId);
    // for all arguments: add them to script code
    code.Pack(args...);
    *reinterpret_cast<int *>(&script.m_nIp) = reinterpret_cast<int>(code.GetData()) - reinterpret_cast<int>(CRunningScript::GetScriptSpaceBase());
    script.ProcessOneCommand();
    code.SaveResultVariables(&script);
    return script.m_nCondResult ? true : false;
};

};

};