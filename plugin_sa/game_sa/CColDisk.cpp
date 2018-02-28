/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColDisk.h"

// Converted from thiscall void CColDisk::Set(float startRadius,CVector const&start,CVector const&end,float endRadius,uchar material,uchar pieceType,uchar lighting) 0x40FD50
void CColDisk::Set(float startRadius, CVector const& start, CVector const& end, float endRadius, unsigned char material, unsigned char pieceType, unsigned char lighting) {
    plugin::CallMethod<0x40FD50, CColDisk *, float, CVector const&, CVector const&, float, unsigned char, unsigned char, unsigned char>(this, startRadius, start, end, endRadius, material, pieceType, lighting);
}