/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColLine.h"

// Converted from thiscall void CColLine::CColLine(CVector const& start, CVector const& end) 0x410940
CColLine::CColLine(CVector const& start, CVector const& end) {
    plugin::CallMethod<0x410940, CColLine *, CVector const&, CVector const&>(this, start, end);
}