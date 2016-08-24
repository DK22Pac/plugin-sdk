#pragma once
#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

class FxPrtMult_c {
public:
    RwRGBAReal m_color;
    float m_fSize;
    float field_14;
    float m_fLife;

    FxPrtMult_c();
    FxPrtMult_c(float red, float green, float blue, float alpha, float size, float arg5, float lastFactor);
    void SetUp(float red, float green, float blue, float alpha, float size, float arg5, float lastFactor);
};

VALIDATE_SIZE(FxPrtMult_c, 0x1C);