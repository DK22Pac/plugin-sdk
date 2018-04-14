/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskSimpleIKChain.h"

CTaskSimpleIKChain::CTaskSimpleIKChain(char* _IGNORED_ idString , int effectorBoneTag, RwV3d effectorVec, int pivotBoneTag,
    CEntity* pEntity, int offsetBoneTag, RwV3d offsetPos, float speed, int time, int blendTime) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x6339C0, CTaskSimpleIKChain*, char*, int, RwV3d, int, CEntity*, int, RwV3d, float, int, int>
        (this, idString, effectorBoneTag, effectorVec, pivotBoneTag, pEntity, offsetBoneTag, offsetPos, speed, time, blendTime);
}