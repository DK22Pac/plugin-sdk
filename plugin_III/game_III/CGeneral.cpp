/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

PLUGIN_SOURCE_FILE

int addrof(CGeneral::GetATanOfXY) = ADDRESS_BY_VERSION(0x48CC30, 0x48CD30, 0x48CCC0);
int gaddrof(CGeneral::GetATanOfXY) = GLOBAL_ADDRESS_BY_VERSION(0x48CC30, 0x48CD30, 0x48CCC0);

float CGeneral::GetATanOfXY(float x, float y) {
    return plugin::CallAndReturnDynGlobal<float, float, float>(gaddrof(CGeneral::GetATanOfXY), x, y);
}

int addrof(CGeneral::GetAngleBetweenPoints) = ADDRESS_BY_VERSION(0x48CA30, 0x48CB30, 0x48CAC0);
int gaddrof(CGeneral::GetAngleBetweenPoints) = GLOBAL_ADDRESS_BY_VERSION(0x48CA30, 0x48CB30, 0x48CAC0);

float CGeneral::GetAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDynGlobal<float, float, float, float, float>(gaddrof(CGeneral::GetAngleBetweenPoints), x1, y1, x2, y2);
}

int addrof(CGeneral::GetNodeHeadingFromVector) = ADDRESS_BY_VERSION(0x48CE40, 0x48CF40, 0x48CED0);
int gaddrof(CGeneral::GetNodeHeadingFromVector) = GLOBAL_ADDRESS_BY_VERSION(0x48CE40, 0x48CF40, 0x48CED0);

int CGeneral::GetNodeHeadingFromVector(float x, float y) {
    return plugin::CallAndReturnDynGlobal<int, float, float>(gaddrof(CGeneral::GetNodeHeadingFromVector), x, y);
}

int addrof(CGeneral::GetRadianAngleBetweenPoints) = ADDRESS_BY_VERSION(0x48CA50, 0x48CB50, 0x48CAE0);
int gaddrof(CGeneral::GetRadianAngleBetweenPoints) = GLOBAL_ADDRESS_BY_VERSION(0x48CA50, 0x48CB50, 0x48CAE0);

float CGeneral::GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDynGlobal<float, float, float, float, float>(gaddrof(CGeneral::GetRadianAngleBetweenPoints), x1, y1, x2, y2);
}

int addrof(CGeneral::LimitAngle) = ADDRESS_BY_VERSION(0x48CB40, 0x48CC40, 0x48CBD0);
int gaddrof(CGeneral::LimitAngle) = GLOBAL_ADDRESS_BY_VERSION(0x48CB40, 0x48CC40, 0x48CBD0);

float CGeneral::LimitAngle(float angle) {
    return plugin::CallAndReturnDynGlobal<float, float>(gaddrof(CGeneral::LimitAngle), angle);
}

int addrof(CGeneral::LimitRadianAngle) = ADDRESS_BY_VERSION(0x48CB90, 0x48CC90, 0x48CC20);
int gaddrof(CGeneral::LimitRadianAngle) = GLOBAL_ADDRESS_BY_VERSION(0x48CB90, 0x48CC90, 0x48CC20);

float CGeneral::LimitRadianAngle(float angle) {
    return plugin::CallAndReturnDynGlobal<float, float>(gaddrof(CGeneral::LimitRadianAngle), angle);
}

int32_t CGeneral::GetRandomNumber() {
    return plugin::CallAndReturn<int32_t, 0x54A4B0>();
}

int32_t CGeneral::GetRandomNumberInRange(int32_t a, int32_t b) {
    return plugin::CallAndReturn<int32_t, 0x54A4C0>(a, b);
}

float CGeneral::GetRandomNumberInRange(float a, float b) {
    return plugin::CallAndReturn<float, 0x54A520>(a, b);
}