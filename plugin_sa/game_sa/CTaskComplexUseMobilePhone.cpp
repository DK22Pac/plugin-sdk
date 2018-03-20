/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexUseMobilePhone.h"

CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone(int nDuration)
    : CTaskComplex(plugin::dummy) , m_timer(plugin::dummy)
{
    plugin::CallMethod<0x6348A0, CTaskComplexUseMobilePhone*, int>(this, nDuration);
}

