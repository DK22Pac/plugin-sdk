/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTimeCycle.h"

int &CTimeCycle::m_CurrentStoredValue            = *(int *)0x94057C;
int &CTimeCycle::m_FogReduction                  = *(int *)0x880FB8;
CVector &CTimeCycle::m_VectorToSun               = *(CVector *)0x665548;
float &CTimeCycle::m_fCurrentFarClip             = *(float *)0x8F5FD8;
float &CTimeCycle::m_fShadowDisplacementX        = *(float *)0x6F0748;
float &CTimeCycle::m_fShadowDisplacementY        = *(float *)0x6F0788;
float &CTimeCycle::m_fShadowFrontX               = *(float *)0x72CE90;
float &CTimeCycle::m_fShadowFrontY               = *(float *)0x72CE50;
float &CTimeCycle::m_fShadowSideX                = *(float *)0x87C708;
float &CTimeCycle::m_fShadowSideY                = *(float *)0x87C6C8;
int &CTimeCycle::m_nCurrentFogColourBlue         = *(int *)0x8F57EC;
int &CTimeCycle::m_nCurrentFogColourGreen        = *(int *)0x8E2A60;
int &CTimeCycle::m_nCurrentFogColourRed          = *(int *)0x940714;
short &CTimeCycle::m_nCurrentLightShadowStrength = *(short *)0x95CC66;
short &CTimeCycle::m_nCurrentShadowStrength      = *(short *)0x95CC76;
int &CTimeCycle::m_nCurrentSkyBottomBlue         = *(int *)0x8F625C;
int &CTimeCycle::m_nCurrentSkyBottomGreen        = *(int *)0x8F2BD0;
int &CTimeCycle::m_nCurrentSkyBottomRed          = *(int *)0x9414D0;
int &CTimeCycle::m_nCurrentSkyTopBlue            = *(int *)0x8F29B8;
int &CTimeCycle::m_nCurrentSkyTopGreen           = *(int *)0x943074;
int &CTimeCycle::m_nCurrentSkyTopRed             = *(int *)0x9403C0;

// Converted from cdecl void CTimeCycle::Initialise(void) 0x4ABAE0 
void CTimeCycle::Initialise() {
    plugin::Call<0x4ABAE0>();
}

// Converted from cdecl void CTimeCycle::Update(void) 0x4ABF40 
void CTimeCycle::Update() {
    plugin::Call<0x4ABF40>();
}
