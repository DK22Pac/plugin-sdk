/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleStandStill.h"

CTaskSimpleStandStill::CTaskSimpleStandStill(int nTime, bool Looped, bool bUseAnimIdleStance, float fBlendData)
    : CTaskSimple(plugin::dummy) , m_timer(plugin::dummy) 
{
     plugin::CallMethod<0x62F310, CTaskSimpleStandStill*, int, bool, bool, float>
        (this, nTime, Looped, bUseAnimIdleStance, fBlendData);
}
