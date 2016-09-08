/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

typedef int AnimationId;

class PLUGIN_API CTaskComplexPlayHandSignalAnim : public CTaskComplex {
public:
    int   m_animationId;
    float m_fBlendFactor;
    unsigned char m_bLeftHandLoaded : 1;
    unsigned char m_bRightHandLoaded : 1;
    unsigned char m_bAnimationLoaded : 1;
    unsigned char m_bUseFatHands : 1;
    unsigned char _pad[3];

    CTaskComplexPlayHandSignalAnim(AnimationId animationId, float blendFactor);
    CTask* CreateSubTask(int taskType);
    int GetAnimIdForPed(CPed* ped);
};

VALIDATE_SIZE(CTaskComplexPlayHandSignalAnim, 0x18);