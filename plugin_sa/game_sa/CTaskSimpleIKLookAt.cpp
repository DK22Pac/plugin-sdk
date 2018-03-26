/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleIKLookAt.h"

CTaskSimpleIKLookAt::CTaskSimpleIKLookAt(char* idString _IGNORED_, CEntity* pEntity, int time, int offsetBoneTag, RwV3d offsetPos,
    bool bUseTorso, float speed, int blendTime, int m_priority)
    : CTaskSimpleIKChain(plugin::dummy)
{
    plugin::CallMethod<0x633E00, CTaskSimpleIKLookAt*, char*, CEntity*, int, int, RwV3d, bool, float, int, int>
        (this, idString, pEntity, time, offsetBoneTag, offsetPos, bUseTorso, speed, blendTime, m_priority);
}