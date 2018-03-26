/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleTriggerLookAt.h"

CTaskSimpleTriggerLookAt::CTaskSimpleTriggerLookAt(CEntity* pEntity, int time, int offsetBoneTag, RwV3d offsetPos,
    bool bUseTorso, float speed, int blendTime, int priority) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x6202C0, CTaskSimpleTriggerLookAt*, CEntity*, int, int, RwV3d, bool, float, int, int>
        (this, pEntity, time, offsetBoneTag, offsetPos, bUseTorso, speed, blendTime, priority);
}

