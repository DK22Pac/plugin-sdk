/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CCurves {
public:
    SUPPORTED_10EN_11EN_STEAM static void CalcCurvePoint(CVector *pPos1, CVector *pPos2, CVector *pDir1, CVector *pDir2, float between, int timeOnCurve, CVector *pOutPos, CVector *pOutDir);
    SUPPORTED_10EN_11EN_STEAM static float CalcSpeedScaleFactor(CVector *pPoint1, CVector *pPoint2, float dir1X, float dir1Y, float dir2X, float dir2Y);
};

#include "meta/meta.CCurves.h"
