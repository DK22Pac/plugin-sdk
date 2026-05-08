/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CPointList {
public:
    unsigned int m_nCount;
    CVector m_avCoords[24];
    bool m_abUsedCoords[24];

    SUPPORTED_10US void Empty();
};
VALIDATE_OFFSET(CPointList, m_nCount, 0x0);
VALIDATE_OFFSET(CPointList, m_avCoords, 0x4);
VALIDATE_OFFSET(CPointList, m_abUsedCoords, 0x124);
VALIDATE_SIZE(CPointList, 0x13C);

#include "meta/meta.CPointList.h"
