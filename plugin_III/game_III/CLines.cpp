/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CLines.h"

// Converted from cdecl void CLines::RenderLineWithClipping(float x1,float y1,float z1,float x2,float y2,float z2,uint,uint) 0x50A3B0
void CLines::RenderLineWithClipping(float x1, float y1, float z1, float x2, float y2, float z2, unsigned int arg6, unsigned int arg7) {
    plugin::Call<0x50A3B0, float, float, float, float, float, float, unsigned int, unsigned int>(x1, y1, z1, x2, y2, z2, arg6, arg7);
}
