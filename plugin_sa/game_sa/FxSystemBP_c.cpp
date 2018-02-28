/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "FxSystemBP_c.h"

// Converted from thiscall void FxSystemBP_c::FxSystemBP_c(void) 0x4AA0D0
FxSystemBP_c::FxSystemBP_c() {
    ((void(__thiscall *)(FxSystemBP_c*))0x4AA0D0)(this);
}

// Converted from thiscall void FxSystemBP_c::~FxSystemBP_c() 0x4AA0F0
FxSystemBP_c::~FxSystemBP_c() {
    ((void(__thiscall *)(FxSystemBP_c*))0x4AA0F0)(this);
}

// Converted from cdecl void* FxSystemBP_c::operator new(uint size) 0x4AA100
void* FxSystemBP_c::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x4AA100)(size);
}

// Converted from thiscall void FxSystemBP_c::Unload(void) 0x4AA120
void FxSystemBP_c::Unload() {
    ((void(__thiscall *)(FxSystemBP_c*))0x4AA120)(this);
}

// Converted from thiscall uint FxSystemBP_c::Update(float) 0x4AA130
unsigned int FxSystemBP_c::Update(float arg0) {
    return ((unsigned int(__thiscall *)(FxSystemBP_c*, float))0x4AA130)(this, arg0);
}

// Converted from thiscall void FxSystemBP_c::Render(RwCamera *camera,float,uchar) 0x4AA160
void FxSystemBP_c::Render(RwCamera* camera, float arg1, unsigned char arg2) {
    ((void(__thiscall *)(FxSystemBP_c*, RwCamera*, float, unsigned char))0x4AA160)(this, camera, arg1, arg2);
}

// Converted from thiscall bool FxSystemBP_c::FreePrtFromSystem(FxSystem_c *system) 0x4AA1B0
bool FxSystemBP_c::FreePrtFromSystem(FxSystem_c* system) {
    return ((bool(__thiscall *)(FxSystemBP_c*, FxSystem_c*))0x4AA1B0)(this, system);
}

// Converted from thiscall FxSphere_c* FxSystemBP_c::GetBoundingSphere(void) 0x4AA1F0
FxSphere_c* FxSystemBP_c::GetBoundingSphere() {
    return ((FxSphere_c* (__thiscall *)(FxSystemBP_c*))0x4AA1F0)(this);
}

// Converted from thiscall void FxSystemBP_c::SetBoundingSphere(RwV3d *center,float radius) 0x4AA200
void FxSystemBP_c::SetBoundingSphere(RwV3d* center, float radius) {
    ((void(__thiscall *)(FxSystemBP_c*, RwV3d*, float))0x4AA200)(this, center, radius);
}

// Converted from thiscall void FxSystemBP_c::Load(char *filename,int file,int version) 0x5C05F0
void FxSystemBP_c::Load(char* filename, int file, int version) {
    ((void(__thiscall *)(FxSystemBP_c*, char*, int, int))0x5C05F0)(this, filename, file, version);
}