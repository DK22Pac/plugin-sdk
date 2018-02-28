/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrailer.h"

float& CTrailer::m_fTrailerSuspensionForce = *(float *)0x8D3464;
float& CTrailer::m_fTrailerDampingForce    = *(float *)0x8D3468;
float& TRAILER_TOWED_MINRATIO              = *(float *)0x8D346C;
float& RELINK_TRAILER_DIFF_LIMIT_XY        = *(float *)0x8D3470;
float& RELINK_TRAILER_DIFF_LIMIT_Z         = *(float *)0x8D3474;

// Converted from thiscall void CTrailer::CTrailer(int modelIndex,uchar createdBy) 0x6D03A0
CTrailer::CTrailer(int modelIndex, unsigned char createdBy) : CAutomobile(plugin::dummy) {
    ((void(__thiscall *)(CTrailer*, int, unsigned char))0x6D03A0)(this, modelIndex, createdBy);
}

// Converted from thiscall void CTrailer::ScanForTowLink(void) 0x6CF030
void CTrailer::ScanForTowLink() {
    ((void(__thiscall *)(CTrailer*))0x6CF030)(this);
}