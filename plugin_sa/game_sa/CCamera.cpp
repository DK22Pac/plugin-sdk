/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

CCamera &TheCamera = *(CCamera *)0xB6F028;

float& CCamera::m_fMouseAccelVertical = *(float *)0xB6EC18;
float& CCamera::m_fMouseAccelHorzntl = *(float *)0xB6EC1C;