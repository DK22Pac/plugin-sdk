/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexSunbathe.h"

CTaskComplexSunbathe::CTaskComplexSunbathe(CObject* pTowel, bool bStartStanding)
    : CTaskComplex(plugin::dummy) , m_BathingTimer(plugin::dummy)
{
    plugin::CallMethod<0x631F80, CTaskComplexSunbathe*, CObject*, bool>(this, pTowel, bStartStanding);
}

