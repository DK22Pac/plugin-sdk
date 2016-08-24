#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

class FxPlane_c {
public:
    RwV3d m_vecNormal;
    float m_fDistance;
};

VALIDATE_SIZE(FxPlane_c, 0x10);