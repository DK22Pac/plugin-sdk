/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexSeekEntityMove.h"

CTaskComplexSeekEntityMove::CTaskComplexSeekEntityMove(CEntity* entity,
    uint32_t time, uint32_t scanInterval,
    float maxEntityDist2D, float moveStateRadius, float followNodeThresholdHeightChange,
    bool playTiredAnim, bool faceEntityWhenDone)
{
    plugin::CallMethod<0x46AC10, CTaskComplexSeekEntityMove*, CEntity*, uint32_t, uint32_t, float, float, float, bool, bool>
        (this, entity, time, scanInterval, maxEntityDist2D, moveStateRadius, followNodeThresholdHeightChange, playTiredAnim, faceEntityWhenDone);
}