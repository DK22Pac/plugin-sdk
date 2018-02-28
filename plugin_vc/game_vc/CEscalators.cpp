/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CEscalators.h"

int &CEscalators::NumEscalators = *(int*)0x9786A4;

// Converted from thiscall void CEscalators::AddOne(CVector const&,CVector const&,CVector const&,CVector const&,bool) 0x54B0A0
void CEscalators::AddOne(CVector const& arg0, CVector const& arg1, CVector const& arg2, CVector const& arg3, bool arg4) {
    plugin::CallMethod<0x54B0A0, CEscalators *, CVector const&, CVector const&, CVector const&, CVector const&, bool>(this, arg0, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CEscalators::Init(void) 0x54B460 
void CEscalators::Init() {
    plugin::Call<0x54B460>();
}

// Converted from cdecl void CEscalators::Shutdown(void) 0x54B3A0 
void CEscalators::Shutdown() {
    plugin::Call<0x54B3A0>();
}

// Converted from thiscall void CEscalators::Update(void) 0x54A9B0
void CEscalators::Update() {
    plugin::CallMethod<0x54A9B0, CEscalators *>(this);
}