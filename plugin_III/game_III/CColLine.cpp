/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColLine.h"

// Converted from thiscall void CColLine::CColLine(CVector const& start, CVector const& end) 0x40B320
CColLine::CColLine(CVector const& start, CVector const& end) {
    plugin::CallMethod<0x40B320, CColLine *, CVector const&, CVector const&>(this, start, end);
}

// Converted from thiscall void CColLine::Set(CVector const& start, CVector const& end) 0x40B350
void CColLine::Set(CVector const& start, CVector const& end) {
    plugin::CallMethod<0x40B350, CColLine *, CVector const&, CVector const&>(this, start, end);
}