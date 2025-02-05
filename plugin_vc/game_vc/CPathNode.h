/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CPathNode {
public:
    short m_wPathData1;
    short m_wPathData2;
    short m_wPosX;
    short m_wPosY;
    short m_wPosZ;
    char field_A[2];
    short field_C;
    char field_E[6];

public:
    CVector GetPosition() {
        return CVector(m_wPosX / 8.0f, m_wPosY / 8.0f, m_wPosZ / 8.0f);
    }

};

VALIDATE_SIZE(CPathNode, 0x14);