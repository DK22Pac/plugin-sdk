/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheckpoints.h"

unsigned int MAX_NUM_CHECKPOINTS = 32;

unsigned int &CCheckpoints::NumActiveCPts = *(unsigned int *)0xC7C6D4;
CCheckpoint *CCheckpoints::m_aCheckPtArray = (CCheckpoint *)0xC7F158;

// Converted from cdecl void CCheckpoints::DeleteCP(uint id,ushort type) 0x722FC0
void CCheckpoints::DeleteCP(unsigned int id, unsigned short type) {
    plugin::Call<0x722FC0, unsigned int, unsigned short>(id, type);
}

// Converted from cdecl void CCheckpoints::Init(void) 0x722880
void CCheckpoints::Init() {
    plugin::Call<0x722880>();
}

// Converted from cdecl CCheckpoint* CCheckpoints::PlaceMarker(uint id,ushort type,CVector &posn,CVector &direction,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate) 0x722C40
CCheckpoint* CCheckpoints::PlaceMarker(unsigned int id, unsigned short type, CVector& posn, CVector& direction, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate) {
    return plugin::CallAndReturn<CCheckpoint*, 0x722C40, unsigned int, unsigned short, CVector&, CVector&, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(id, type, posn, direction, size, red, green, blue, alpha, pulsePeriod, pulseFraction, rotateRate);
}

// Converted from cdecl void CCheckpoints::Render(void) 0x726060
void CCheckpoints::Render() {
    plugin::Call<0x726060>();
}

// Converted from cdecl void CCheckpoints::SetHeading(uint id,float angle) 0x722970
void CCheckpoints::SetHeading(unsigned int id, float angle) {
    plugin::Call<0x722970, unsigned int, float>(id, angle);
}

// Converted from cdecl void CCheckpoints::Shutdown(void) 0x7228F0
void CCheckpoints::Shutdown() {
    plugin::Call<0x7228F0>();
}

// Converted from cdecl void CCheckpoints::Update(void) 0x7229C0
void CCheckpoints::Update() {
    plugin::Call<0x7229C0>();
}

// Converted from cdecl void CCheckpoints::UpdatePos(uint id,CVector &posn) 0x722900
void CCheckpoints::UpdatePos(unsigned int id, CVector& posn) {
    plugin::Call<0x722900, unsigned int, CVector&>(id, posn);
}