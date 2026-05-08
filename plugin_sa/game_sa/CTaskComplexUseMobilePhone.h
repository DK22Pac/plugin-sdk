/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"

class PLUGIN_API CTaskComplexUseMobilePhone : public CTaskComplex {
protected:
    CTaskComplexUseMobilePhone(plugin::dummy_func_t a) : CTaskComplex(a) , m_timer(a) {}
public:
    int m_nDuration;
    CTaskTimer m_timer;
    bool m_bIsAborting;
    bool m_bQuit;

    CTaskComplexUseMobilePhone(int nDuration);
};
VALIDATE_OFFSET(CTaskComplexUseMobilePhone, m_nDuration, 0xC);
VALIDATE_OFFSET(CTaskComplexUseMobilePhone, m_timer, 0x10);
VALIDATE_OFFSET(CTaskComplexUseMobilePhone, m_bIsAborting, 0x1C);
VALIDATE_OFFSET(CTaskComplexUseMobilePhone, m_bQuit, 0x1D);
VALIDATE_SIZE(CTaskComplexUseMobilePhone, 0x20);

