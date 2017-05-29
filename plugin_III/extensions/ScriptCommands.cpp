/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "ScriptCommands.h"
#include "..\shared\Error.h"

using namespace plugin;
using namespace plugin::test;

ScriptCode::VarToSet::VarToSet(unsigned int _varIndex, unsigned int *_pVar) : varIndex(_varIndex), pVar(_pVar) {}

ScriptCode::ScriptCode(short commandId) {
    capacity = 32;
    data = new unsigned char[32];
    size = 0;
    if (commandId != -1) {
        AddBytes(reinterpret_cast<unsigned char *>(&commandId), 2);
    }
}

ScriptCode::~ScriptCode() {
    delete[] data;
}

void ScriptCode::AddParameterDescription(unsigned char paramType) {
    AddBytes(&paramType, 1);
}

void ScriptCode::AddBytes(unsigned char *bytes, unsigned int count) {
    unsigned int newSize = size + count;
    if (newSize > capacity) {
        while (newSize > capacity)
            capacity += 32;
        unsigned char *newData = new unsigned char[capacity];
        memcpy(newData, data, size);
        delete[] data;
        data = newData;
    }
    memcpy(&data[size], bytes, count);
    size = newSize;
}

unsigned char *ScriptCode::GetData() { return data; };

void ScriptCode::SaveResultVariables(CRunningScript *script) {
    for (auto &varToSet : varsToSet)
        *varToSet.pVar = script->m_aLVars[varToSet.varIndex].dwParam;
}

void ScriptCode::operator<<(char n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void ScriptCode::operator<<(unsigned char n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void ScriptCode::operator<<(short n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void ScriptCode::operator<<(unsigned short n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void ScriptCode::operator<<(int n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void ScriptCode::operator<<(unsigned int n) { AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void ScriptCode::operator<<(ScriptCommandEndParameter) { AddParameterDescription(SCM_ARGUMENT_TYPE_END_OF_ARGUMENTS); }

void ScriptCode::operator<<(float n) {
    AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_FLOAT);
    short s = n * 16;
    AddBytes(reinterpret_cast<unsigned char *>(&s), 2);
}

void ScriptCode::operator<<(double n) {
    AddParameterDescription(SCM_ARGUMENT_TYPE_STATIC_FLOAT);
    short s = static_cast<float>(n) * 16;
    AddBytes(reinterpret_cast<unsigned char *>(&s), 2);
}

void ScriptCode::operator<<(char *str) {
    static char tmpString[8];
    strncpy(tmpString, str, 7);
    tmpString[7] = '\0';
    AddBytes(reinterpret_cast<unsigned char *>(tmpString), 8);
}

void ScriptCode::operator<<(const char *str) {
    static char tmpString[8];
    strncpy(tmpString, str, 7);
    tmpString[7] = '\0';
    AddBytes(reinterpret_cast<unsigned char *>(const_cast<char *>(tmpString)), 8);
}

void ScriptCode::operator<<(float *p) {
    AddParameterDescription(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter > 15)
        Error("ScriptCode::operator<<(float *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<unsigned int *>(p));
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void ScriptCode::operator<<(int *p) {
    AddParameterDescription(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter > 15)
        Error("ScriptCode::operator<<(int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<unsigned int *>(p));
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void ScriptCode::operator<<(unsigned int *p) {
    AddParameterDescription(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter > 15)
        Error("ScriptCode::operator<<(unsigned int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<unsigned int *>(p));
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}