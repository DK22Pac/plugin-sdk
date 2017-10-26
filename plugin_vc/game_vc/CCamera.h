#pragma once
#include "CPlaceable.h"

class CCamera : CPlaceable {
public:
    float Find3rdPersonQuickAimPitch();
};

extern CCamera &TheCamera;