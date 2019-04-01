/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexSequence.h"

CTaskComplexSequence::CTaskComplexSequence() : CTaskComplex(plugin::dummy) 
{
    plugin::CallMethod<0x632BD0, CTaskComplexSequence *>(this);
}


CTaskComplexSequence::~CTaskComplexSequence()
{
    plugin::CallMethod<0x6389F0, CTaskComplexSequence *>(this);
}

bool CTaskComplexSequence::AddTask(CTask * pTask)
{
    return plugin::CallMethodAndReturn<bool, 0x632D10, CTaskComplexSequence *, CTask *>(this, pTask);
}