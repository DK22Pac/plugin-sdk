/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CTaskTimer.h"

class PLUGIN_API CTaskSimpleStandStill : public CTaskSimple {
protected:
    CTaskSimpleStandStill(plugin::dummy_func_t a) : CTaskSimple(a),m_timer(a) {}
public:
    int m_nTime;
    CTaskTimer m_timer;
    bool m_bLooped;
    bool m_bUseAnimIdleStance;
private:
    char _pad[2];
public:
    float m_fBlendData;


	CTaskSimpleStandStill(int nTime, bool Looped, bool bUseAnimIdleStance, float fBlendData);
};
VALIDATE_OFFSET(CTaskSimpleStandStill, m_nTime, 0x8);
VALIDATE_OFFSET(CTaskSimpleStandStill, m_timer, 0xC);
VALIDATE_OFFSET(CTaskSimpleStandStill, m_bLooped, 0x18);
VALIDATE_OFFSET(CTaskSimpleStandStill, m_bUseAnimIdleStance, 0x19);
VALIDATE_OFFSET(CTaskSimpleStandStill, m_fBlendData, 0x1C);
VALIDATE_SIZE(CTaskSimpleStandStill, 0x20);