#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

class FxBox_c {
public:
    float m_fCornerA_x;
    float m_fCornerB_x;
    float m_fCornerA_y;
    float m_fCornerB_y;
    float m_fCornerA_z;
    float m_fCornerB_z;

    inline FxBox_c() {
        m_fCornerA_x = m_fCornerA_y = m_fCornerA_z = 999999.0f;
        m_fCornerB_x = m_fCornerB_y = m_fCornerB_z = -999999.0f;
    }
};

VALIDATE_SIZE(FxBox_c, 0x18);