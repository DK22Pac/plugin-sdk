/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"

class CColLine {
public:
    CVector m_vecStart;
    char field_C[4];
    CVector m_vecEnd;
    char field_1C[4];
        
    CColLine(CVector const& start, CVector const& end);
    void Set(CVector const& start, CVector const& end);
};

VALIDATE_SIZE(CColLine, 0x20);