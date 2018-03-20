/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleGangDriveBy.h"

CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(CEntity *pTargetEntity, const CVector *pVecTarget, float fAbortRange,
    char FrequencyPercentage, char nDrivebyStyle, bool bSeatRHS)   : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x6217D0, CTaskSimpleGangDriveBy*, CEntity *, const CVector *, float, char, char, bool>
        (this, pTargetEntity, pVecTarget, fAbortRange, FrequencyPercentage, nDrivebyStyle, bSeatRHS);
}
