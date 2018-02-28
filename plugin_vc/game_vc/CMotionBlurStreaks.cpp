/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMotionBlurStreaks.h"

unsigned int MAX_NUM_MOTIONBLUR_STREAKS = 4;

CRegisteredMotionBlurStreak *CMotionBlurStreaks::aStreaks = (CRegisteredMotionBlurStreak *)0x94D798;

// Converted from cdecl void CMotionBlurStreaks::RegisterStreak(uint id, uchar red, uchar green, uchar blue, CVector leftPoint, CVector rightPoint) 0x572800
void CMotionBlurStreaks::RegisterStreak(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, CVector leftPoint, CVector rightPoint) {
    plugin::Call<0x572800, unsigned int, unsigned char, unsigned char, unsigned char, CVector, CVector>(id, red, green, blue, leftPoint, rightPoint);
}

// Converted from cdecl void CMotionBlurStreaks::Render(void) 0x572920 
void CMotionBlurStreaks::Render() {
    plugin::Call<0x572920>();
}
