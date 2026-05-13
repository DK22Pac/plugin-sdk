/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"


class PLUGIN_API CTaskSimplePlayerOnFoot : public CTaskSimple {
protected:
    CTaskSimplePlayerOnFoot(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    int m_nAnimationBlockIndex;
    unsigned int m_nFrameCounter;
    int m_nTimer;
    int dword_14; // always 0
    int dword_18; // always 0

    CTaskSimplePlayerOnFoot();

};
VALIDATE_OFFSET(CTaskSimplePlayerOnFoot, m_nAnimationBlockIndex, 0x8);
VALIDATE_OFFSET(CTaskSimplePlayerOnFoot, m_nFrameCounter, 0xC);
VALIDATE_OFFSET(CTaskSimplePlayerOnFoot, m_nTimer, 0x10);
VALIDATE_OFFSET(CTaskSimplePlayerOnFoot, dword_14, 0x14);
VALIDATE_OFFSET(CTaskSimplePlayerOnFoot, dword_18, 0x18);
VALIDATE_SIZE(CTaskSimplePlayerOnFoot, 0x1C);
