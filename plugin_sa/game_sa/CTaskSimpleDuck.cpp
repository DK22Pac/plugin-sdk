/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleDuck.h"

CTaskSimpleDuck::CTaskSimpleDuck(eDuckControlTypes DuckControlType, unsigned short nLengthOfDuck, short nUseShotsWhizzingEvents) 
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x691FC0, CTaskSimpleDuck*, eDuckControlTypes, unsigned short, short>(this, DuckControlType, nLengthOfDuck, nUseShotsWhizzingEvents);
}
