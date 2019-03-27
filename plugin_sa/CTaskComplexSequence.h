/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"

class CTaskComplexSequence : public CTaskComplex {
protected:
    CTaskComplexSequence(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    CTaskComplexSequence();
    ~CTaskComplexSequence();
    bool AddTask(CTask *pTask);
};