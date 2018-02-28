/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCredits.h"

int &CCredits::CreditsStartTime = *(int *)0xC6E978;
bool &CCredits::bCreditsGoing = *(bool *)0xC6E97C;

// Converted from cdecl void CCredits::Render(void) 0x53D5B0
void CCredits::Render() {
    plugin::Call<0x53D5B0>();
}

// Converted from cdecl void CCredits::PrintCreditText(float scaleX,float scaleY,ushort *text,uint &position,float currentOffset,bool highlighted) 0x5A8660
void CCredits::PrintCreditText(float scaleX, float scaleY, unsigned short* text, unsigned int& position, float currentOffset, bool highlighted) {
    plugin::Call<0x5A8660, float, float, unsigned short*, unsigned int&, float, bool>(scaleX, scaleY, text, position, currentOffset, highlighted);
}

// Converted from cdecl void CCredits::PrintCreditSpace(float spaceSize,uint &position) 0x5A87C0
void CCredits::PrintCreditSpace(float spaceSize, unsigned int& position) {
    plugin::Call<0x5A87C0, float, unsigned int&>(spaceSize, position);
}

// Converted from cdecl void CCredits::RenderCredits(void) 0x5A87F0
void CCredits::RenderCredits() {
    plugin::Call<0x5A87F0>();
}

// Converted from cdecl void CCredits::Start(void) 0x7170E0
void CCredits::Start() {
    plugin::Call<0x7170E0>();
}

// Converted from cdecl void CCredits::Stop(void) 0x717100
void CCredits::Stop() {
    plugin::Call<0x717100>();
}
