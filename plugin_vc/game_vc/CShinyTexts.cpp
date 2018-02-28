/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShinyTexts.h"

unsigned int MAX_SHINYTEXTS = 32;

CRegisteredShinyText *CShinyTexts::aShinyTexts = (CRegisteredShinyText *)0x94A218;
unsigned int &CShinyTexts::NumShinyTexts = *(unsigned int *)0x978618;

// Converted from thiscall void CRegisteredShinyText::CRegisteredShinyText(void) 0x575130
CRegisteredShinyText::CRegisteredShinyText() {
    plugin::CallMethod<0x575130, CRegisteredShinyText *>(this);
}

// Converted from cdecl void CShinyTexts::Render(void) 0x571240 
void CShinyTexts::Render() {
    plugin::Call<0x571240>();
}
