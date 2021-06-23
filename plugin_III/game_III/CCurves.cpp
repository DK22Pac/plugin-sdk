/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCurves.h"

PLUGIN_SOURCE_FILE

int addrof(CCurves::CalcCurvePoint) = ADDRESS_BY_VERSION(0x4204D0, 0x4204D0, 0x4204D0);
int gaddrof(CCurves::CalcCurvePoint) = GLOBAL_ADDRESS_BY_VERSION(0x4204D0, 0x4204D0, 0x4204D0);

void CCurves::CalcCurvePoint(CVector *pPos1, CVector *pPos2, CVector *pDir1, CVector *pDir2, float between, int timeOnCurve, CVector *pOutPos, CVector *pOutDir) {
    plugin::CallDynGlobal<CVector *, CVector *, CVector *, CVector *, float, int, CVector *, CVector *>(gaddrof(CCurves::CalcCurvePoint), pPos1, pPos2, pDir1, pDir2, between, timeOnCurve, pOutPos, pOutDir);
}

int addrof(CCurves::CalcSpeedScaleFactor) = ADDRESS_BY_VERSION(0x420410, 0x420410, 0x420410);
int gaddrof(CCurves::CalcSpeedScaleFactor) = GLOBAL_ADDRESS_BY_VERSION(0x420410, 0x420410, 0x420410);

float CCurves::CalcSpeedScaleFactor(CVector *pPoint1, CVector *pPoint2, float dir1X, float dir1Y, float dir2X, float dir2Y) {
    return plugin::CallAndReturnDynGlobal<float, CVector *, CVector *, float, float, float, float>(gaddrof(CCurves::CalcSpeedScaleFactor), pPoint1, pPoint2, dir1X, dir1Y, dir2X, dir2Y);
}
