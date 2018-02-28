/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClouds.h"

// Converted from cdecl void CClouds::Init(void) 0x540FB0
void CClouds::Init() {
    plugin::Call<0x540FB0>();
}

// Converted from cdecl void CClouds::Render(void) 0x53FC50
void CClouds::Render() {
    plugin::Call<0x53FC50>();
}

// Converted from cdecl void CClouds::RenderBackground(short,short,short,short,short,short,short) 0x53F650
void CClouds::RenderBackground(short arg0, short arg1, short arg2, short arg3, short arg4, short arg5, short arg6) {
    plugin::Call<0x53F650, short, short, short, short, short, short, short>(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from cdecl void CClouds::RenderHorizon(void) 0x53F380
void CClouds::RenderHorizon() {
    plugin::Call<0x53F380>();
}

// Converted from cdecl void CClouds::Shutdown(void) 0x540F40
void CClouds::Shutdown() {
    plugin::Call<0x540F40>();
}

// Converted from cdecl void CClouds::Update(void) 0x540E90
void CClouds::Update() {
    plugin::Call<0x540E90>();
}