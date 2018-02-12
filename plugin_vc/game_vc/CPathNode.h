/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

class CPathNode {
public:
    short m_wPathData1;
    short m_wPathData2;
    short m_wPosX;
    short m_wPosY;
    short m_wPosZ;
    char field_A[10];
};

VALIDATE_SIZE(CPathNode, 0x14);