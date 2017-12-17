/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMotionBlurStreaks.h"

unsigned int MAX_NUM_MOTIONBLUR_STREAKS = 4;

CRegisteredMotionBlurStreak *CMotionBlurStreaks::aStreaks = (CRegisteredMotionBlurStreak *)0x880A00;

// Converted from thiscall void CMotionBlurStreaks::CMotionBlurStreaks(void) 0x51C350
CMotionBlurStreaks::CMotionBlurStreaks() {
    plugin::CallMethod<0x51C350, CMotionBlurStreaks *>(this);
}

// Converted from cdecl void CMotionBlurStreaks::Init(void) 0x519330 
void CMotionBlurStreaks::Init() {
    plugin::Call<0x519330>();
}

// Converted from cdecl void CMotionBlurStreaks::RegisterStreak(uint id, uchar red, uchar green, uchar blue, CVector leftPoint, CVector rightPoint) 0x519460
void CMotionBlurStreaks::RegisterStreak(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, CVector leftPoint, CVector rightPoint) {
    plugin::Call<0x519460, unsigned int, unsigned char, unsigned char, unsigned char, CVector, CVector>(id, red, green, blue, leftPoint, rightPoint);
}

// Converted from cdecl void CMotionBlurStreaks::Render(void) 0x519390 
void CMotionBlurStreaks::Render() {
    plugin::Call<0x519390>();
}

// Converted from cdecl void CMotionBlurStreaks::Update(void) 0x519360 
void CMotionBlurStreaks::Update() {
    plugin::Call<0x519360>();
}
