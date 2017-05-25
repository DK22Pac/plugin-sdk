/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "scripting\ScriptCommandNames.h"
#include "game_sa\CRunningScript.h"
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
        bool isString;
        unsigned int varIndex;
        union {
            unsigned int *pVar;
            char *str;
        };

        VarToSet(unsigned int _varIndex, char *_str);
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
    void operator<<(char(*p)[16]);

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
    script.Init();
    script.IsCustom = script.missionFlag = script.MissionCleanUpFlag = false;
    script.notFlag = (CommandId >> 15) & 1;
    // our script code
    ScriptCode code(CommandId);
    // for all arguments: add them to script code
    code.Pack(args...);
    script.baseIP = script.curIP = code.GetData();
    script.ProcessOneCommand();
    code.SaveResultVariables(&script);
    return script.condResult ? true : false;
};

};

};