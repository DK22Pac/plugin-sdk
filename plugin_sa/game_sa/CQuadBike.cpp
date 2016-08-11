#include "CQuadBike.h"

bool& bDoQuadDamping          = *(bool *)0x8D3450;
float& QUAD_HBSTEER_ANIM_MULT = *(float *)0x8D3454;
CVector& vecQuadResistance    = *(CVector *)0x8D3458;

// Converted from thiscall void CQuadBike::CQuadBike(int modelIndex,uchar createdBy) 0x6CE370
CQuadBike::CQuadBike(int modelIndex, unsigned char createdBy) : CAutomobile(plugin::dummy) {
    ((void(__thiscall *)(CQuadBike*, int, unsigned char))0x6CE370)(this, modelIndex, createdBy);
}