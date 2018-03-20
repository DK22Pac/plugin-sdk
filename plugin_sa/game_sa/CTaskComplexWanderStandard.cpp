/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexWanderStandard.h"

CTaskComplexWanderStandard::CTaskComplexWanderStandard(int MoveState, unsigned char Dir, bool bWanderSensibly) 
    : CTaskComplexWander(plugin::dummy) , m_TaskTimer(plugin::dummy)
{
    plugin::CallMethod<0x48E4F0, CTaskComplexWanderStandard*, int, unsigned char, bool>(this, MoveState, Dir, bWanderSensibly);
}
