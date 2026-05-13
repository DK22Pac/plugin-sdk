/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CColLine
{
public:
    CVector m_vStart;
    char gapC[4];
    CVector m_vEnd;
        
    CColLine(CVector const& start, CVector const& end);
};
VALIDATE_OFFSET(CColLine, m_vStart, 0x0);
VALIDATE_OFFSET(CColLine, gapC, 0xC);
VALIDATE_OFFSET(CColLine, m_vEnd, 0x10);
VALIDATE_SIZE(CColLine, 0x1C);