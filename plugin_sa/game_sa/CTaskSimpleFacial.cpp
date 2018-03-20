/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleFacial.h"

CTaskSimpleFacial::CTaskSimpleFacial(eFacialExpression nFacialExpress, int nDuration) 
    : CTaskSimple(plugin::dummy) , m_Timer(plugin::dummy)
{
    plugin::CallMethod<0x690C70, CTaskSimpleFacial*, eFacialExpression, int>(this, nFacialExpress, nDuration);
}