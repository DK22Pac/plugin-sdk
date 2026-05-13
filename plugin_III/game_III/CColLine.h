/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CColLine {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CColLine)

public:
    CVector m_vecStart;
    int field_C;
    CVector m_vecEnd;
    int field_1C;

    SUPPORTED_10EN_11EN_STEAM void Set(CVector const &start, CVector const &end);
};
VALIDATE_OFFSET(CColLine, m_vecStart, 0x0);
VALIDATE_OFFSET(CColLine, field_C, 0xC);
VALIDATE_OFFSET(CColLine, m_vecEnd, 0x10);
VALIDATE_OFFSET(CColLine, field_1C, 0x1C);
VALIDATE_SIZE(CColLine, 0x20);

#include "meta/meta.CColLine.h"
