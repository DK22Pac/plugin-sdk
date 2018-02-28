/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredCorona.h"

void CRegisteredCorona::Update()
{
    ((void(__thiscall *)(CRegisteredCorona *))0x4F8C40)(this);
}

// Converted from thiscall void CRegisteredCorona::CRegisteredCorona(void) 0x4FADE0
CRegisteredCorona::CRegisteredCorona() {
    plugin::CallMethod<0x4FADE0, CRegisteredCorona *>(this);
}
