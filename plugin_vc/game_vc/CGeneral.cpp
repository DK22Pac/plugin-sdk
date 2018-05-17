/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

PLUGIN_SOURCE_FILE

int addrof(CGeneral::GetATanOfXY) = ADDRESS_BY_VERSION(0x4A55E0, 0x4A5600, 0x4A54B0);
int gaddrof(CGeneral::GetATanOfXY) = GLOBAL_ADDRESS_BY_VERSION(0x4A55E0, 0x4A5600, 0x4A54B0);

float CGeneral::GetATanOfXY(float x, float y) {
    return plugin::CallAndReturnDynGlobal<float, float, float>(gaddrof(CGeneral::GetATanOfXY), x, y);
}

int addrof(CGeneral::GetAngleBetweenPoints) = ADDRESS_BY_VERSION(0x4A59D0, 0x4A59F0, 0x4A58A0);
int gaddrof(CGeneral::GetAngleBetweenPoints) = GLOBAL_ADDRESS_BY_VERSION(0x4A59D0, 0x4A59F0, 0x4A58A0);

float CGeneral::GetAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDynGlobal<float, float, float, float, float>(gaddrof(CGeneral::GetAngleBetweenPoints), x1, y1, x2, y2);
}

int addrof(CGeneral::GetNodeHeadingFromVector) = ADDRESS_BY_VERSION(0x4A5450, 0x4A5470, 0x4A5320);
int gaddrof(CGeneral::GetNodeHeadingFromVector) = GLOBAL_ADDRESS_BY_VERSION(0x4A5450, 0x4A5470, 0x4A5320);

int CGeneral::GetNodeHeadingFromVector(float x, float y) {
    return plugin::CallAndReturnDynGlobal<int, float, float>(gaddrof(CGeneral::GetNodeHeadingFromVector), x, y);
}

int addrof(CGeneral::GetRadianAngleBetweenPoints) = ADDRESS_BY_VERSION(0x4A58E0, 0x4A5900, 0x4A57B0);
int gaddrof(CGeneral::GetRadianAngleBetweenPoints) = GLOBAL_ADDRESS_BY_VERSION(0x4A58E0, 0x4A5900, 0x4A57B0);

float CGeneral::GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDynGlobal<float, float, float, float, float>(gaddrof(CGeneral::GetRadianAngleBetweenPoints), x1, y1, x2, y2);
}

int addrof(CGeneral::LimitAngle) = ADDRESS_BY_VERSION(0x4A5890, 0x4A58B0, 0x4A5760);
int gaddrof(CGeneral::LimitAngle) = GLOBAL_ADDRESS_BY_VERSION(0x4A5890, 0x4A58B0, 0x4A5760);

float CGeneral::LimitAngle(float angle) {
    return plugin::CallAndReturnDynGlobal<float, float>(gaddrof(CGeneral::LimitAngle), angle);
}

int addrof(CGeneral::LimitRadianAngle) = ADDRESS_BY_VERSION(0x4A57F0, 0x4A5810, 0x4A56C0);
int gaddrof(CGeneral::LimitRadianAngle) = GLOBAL_ADDRESS_BY_VERSION(0x4A57F0, 0x4A5810, 0x4A56C0);

float CGeneral::LimitRadianAngle(float angle) {
    return plugin::CallAndReturnDynGlobal<float, float>(gaddrof(CGeneral::LimitRadianAngle), angle);
}

int addrof(CGeneral::SolveQuadratic) = ADDRESS_BY_VERSION(0x4A53D0, 0x4A53F0, 0x4A52A0);
int gaddrof(CGeneral::SolveQuadratic) = GLOBAL_ADDRESS_BY_VERSION(0x4A53D0, 0x4A53F0, 0x4A52A0);

unsigned char CGeneral::SolveQuadratic(float a, float b, float c, float &x1, float &x2) {
    return plugin::CallAndReturnDynGlobal<unsigned char, float, float, float, float &, float &>(gaddrof(CGeneral::SolveQuadratic), a, b, c, x1, x2);
}
