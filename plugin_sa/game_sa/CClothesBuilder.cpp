/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CClothesBuilder.h"

// Converted from cdecl void CClothesBuilder::BlendTextures(RwTexture *texture,RwTexture *texture,RwTexture *texture,float factorA,float factorB,float factorC,int arg7,RwTexture *texture) 0x5A5BC0 
void CClothesBuilder::BlendTextures(RwTexture* texture1, RwTexture* texture2, RwTexture* texture3, float factorA, float factorB, float factorC, int arg7, RwTexture* texture4) {
    plugin::Call<0x5A5BC0, RwTexture*, RwTexture*, RwTexture*, float, float, float, int, RwTexture*>(texture1, texture2, texture3, factorA, factorB, factorC, arg7, texture4);
}

// Converted from cdecl void CClothesBuilder::BlendTextures(RwTexture *texture,RwTexture *texture,RwTexture *texture,float factorA,float factorB,float factorC) 0x5A59C0 
void CClothesBuilder::BlendTextures(RwTexture* texture1, RwTexture* texture2, RwTexture* texture3, float factorA, float factorB, float factorC) {
    plugin::Call<0x5A59C0, RwTexture*, RwTexture*, RwTexture*, float, float, float>(texture1, texture2, texture3, factorA, factorB, factorC);
}

// Converted from cdecl void CClothesBuilder::BlendTextures(RwTexture *texture,RwTexture *texture,float arg3,float arg4) 0x5A5820 
void CClothesBuilder::BlendTextures(RwTexture* texture1, RwTexture* texture2, float arg3, float arg4) {
    plugin::Call<0x5A5820, RwTexture*, RwTexture*, float, float>(texture1, texture2, arg3, arg4);
}

// Converted from cdecl void CClothesBuilder::BuildBoneIndexConversionTable(uchar *arg1,RpHAnimHierarchy *arg2,int arg3)	0x5A56E0 
void CClothesBuilder::BuildBoneIndexConversionTable(unsigned char* arg1, RpHAnimHierarchy* arg2, int arg3) {
    plugin::Call<0x5A56E0, unsigned char*, RpHAnimHierarchy*, int>(arg1, arg2, arg3);
}

// Converted from cdecl void CClothesBuilder::ConstructGeometryAndSkinArrays(RpHAnimHierarchy *arg1,RpGeometry **arg2,RwMatrixWeights **arg3,uint **arg4,uint,RpGeometry **arg5,RpMaterial **arg6)	0x5A6530 
void CClothesBuilder::ConstructGeometryAndSkinArrays(RpHAnimHierarchy* arg1, RpGeometry** arg2, RwMatrixWeights** arg3, unsigned int** arg4, unsigned int arg5, RpGeometry** arg6, RpMaterial** arg7) {
    plugin::Call<0x5A6530, RpHAnimHierarchy*, RpGeometry**, RwMatrixWeights**, unsigned int**, unsigned int, RpGeometry**, RpMaterial**>(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CClothesBuilder::ConstructGeometryArray(RpGeometry **arg1,uint *arg2,float arg3,float arg4,float arg5)	0x5A55A0 
void CClothesBuilder::ConstructGeometryArray(RpGeometry** arg1, unsigned int* arg2, float arg3, float arg4, float arg5) {
    plugin::Call<0x5A55A0, RpGeometry**, unsigned int*, float, float, float>(arg1, arg2, arg3, arg4, arg5);
}

// Converted from cdecl void CClothesBuilder::ConstructTextures(RwTexDictionary *dict,uint *hashes,float factorA,float factorB,float factorC)	0x5A6040 
void CClothesBuilder::ConstructTextures(RwTexDictionary* dict, unsigned int* hashes, float factorA, float factorB, float factorC) {
    plugin::Call<0x5A6040, RwTexDictionary*, unsigned int*, float, float, float>(dict, hashes, factorA, factorB, factorC);
}

// Converted from cdecl RwTexture* CClothesBuilder::CopyTexture(RwTexture *texture)	0x5A5730 
RwTexture* CClothesBuilder::CopyTexture(RwTexture* texture) {
    return plugin::CallAndReturn<RwTexture*, 0x5A5730, RwTexture*>(texture);
}

// Converted from cdecl RwClump* CClothesBuilder::CreateSkinnedClump(RpClump *clump ,RwTexDictionary *dict,CPedClothesDesc &newclothes,CPedClothesDesc const*oldclothes,bool bCutscenePlayer)	0x5A69D0 
RpClump* CClothesBuilder::CreateSkinnedClump(RpClump* clump, RwTexDictionary* dict, CPedClothesDesc& newclothes, CPedClothesDesc const* oldclothes, bool bCutscenePlayer) {
    return plugin::CallAndReturn<RpClump*, 0x5A69D0, RpClump*, RwTexDictionary*, CPedClothesDesc&, CPedClothesDesc const*, bool>(clump, dict, newclothes, oldclothes, bCutscenePlayer);
}

// Converted from cdecl void CClothesBuilder::DestroySkinArrays(RwMatrixWeights *arg1,uint *arg2)	0x5A56C0 
void CClothesBuilder::DestroySkinArrays(RwMatrixWeights* arg1, unsigned int* arg2) {
    plugin::Call<0x5A56C0, RwMatrixWeights*, unsigned int*>(arg1, arg2);
}

// Converted from cdecl int CClothesBuilder::FindNearestColour(RwRGBA *color)	0x5A5F40 
int CClothesBuilder::FindNearestColour(RwRGBA* color) {
    return plugin::CallAndReturn<int, 0x5A5F40, RwRGBA*>(color);
}

// Converted from cdecl void CClothesBuilder::InitPaletteOctTree(int numColors)	0x5A5EB0 
void CClothesBuilder::InitPaletteOctTree(int numColors) {
    plugin::Call<0x5A5EB0, int>(numColors);
}

// Converted from cdecl void CClothesBuilder::LoadCdDirectory(void)	0x5A4190 
void CClothesBuilder::LoadCdDirectory() {
    plugin::Call<0x5A4190>();
}

// Converted from cdecl void CClothesBuilder::PlaceTextureOnTopOfTexture(RwTexture *texture1,RwTexture *texture2)	0x5A57B0 
void CClothesBuilder::PlaceTextureOnTopOfTexture(RwTexture* texture1, RwTexture* texture2) {
    plugin::Call<0x5A57B0, RwTexture*, RwTexture*>(texture1, texture2);
}

// Converted from cdecl void CClothesBuilder::PreprocessClothesDesc(CPedClothesDesc &arg1,bool arg2)	0x5A44C0 
void CClothesBuilder::PreprocessClothesDesc(CPedClothesDesc& arg1, bool arg2) {
    plugin::Call<0x5A44C0, CPedClothesDesc&, bool>(arg1, arg2);
}

// Converted from cdecl void CClothesBuilder::ReducePaletteSize(RwTexture *texture,int numColorsToReduce)	0x5A6870 
void CClothesBuilder::ReducePaletteSize(RwTexture* texture, int numColorsToReduce) {
    plugin::Call<0x5A6870, RwTexture*, int>(texture, numColorsToReduce);
}

// Converted from cdecl void CClothesBuilder::ReleaseGeometry(int numToRelease)	0x5A47B0 
void CClothesBuilder::ReleaseGeometry(int numToRelease) {
    plugin::Call<0x5A47B0, int>(numToRelease);
}

// Converted from thiscall void CClothesBuilder::RequestGeometry(int modelid,uint crc)	0x5A41C0 
void CClothesBuilder::RequestGeometry(int modelid, unsigned int crc) {
    plugin::CallMethod<0x5A41C0, CClothesBuilder *, int, unsigned int>(this, modelid, crc);
}

// Converted from cdecl void CClothesBuilder::StoreBoneArray(RpClump *clump,int arg2)	0x5A48B0 
void CClothesBuilder::StoreBoneArray(RpClump* clump, int arg2) {
    plugin::Call<0x5A48B0, RpClump*, int>(clump, arg2);
}

// Converted from cdecl RpGeometry* CClothesBuilder::BlendGeometry(RpClump *clump, char const *arg2, char const *arg3, char const *arg4, float arg5, float arg6, float arg7)	0x5A4940 
RpGeometry* CClothesBuilder::BlendGeometry(RpClump* clump, char const* arg2, char const* arg3, char const* arg4, float arg5, float arg6, float arg7) {
    return plugin::CallAndReturn<RpGeometry*, 0x5A4940, RpClump*, char const*, char const*, char const*, float, float, float>(clump, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl RpGeometry* CClothesBuilder::BlendGeometry(RpClump *clump, char const *arg2, char const *arg3, float arg4, float arg5)	0x5A4F10 
RpGeometry* CClothesBuilder::BlendGeometry(RpClump* clump, char const* arg2, char const* arg3, float arg4, float arg5) {
    return plugin::CallAndReturn<RpGeometry*, 0x5A4F10, RpClump*, char const*, char const*, float, float>(clump, arg2, arg3, arg4, arg5);
}

// Converted from cdecl RpGeometry* CClothesBuilder::CopyGeometry(RpClump *clump, char const *arg2, char const *arg3)	0x5A5340 
RpGeometry* CClothesBuilder::CopyGeometry(RpClump* clump, char const* arg2, char const* arg3) {
    return plugin::CallAndReturn<RpGeometry*, 0x5A5340, RpClump*, char const*, char const*>(clump, arg2, arg3);
}

// Converted from cdecl void CClothesBuilder::ShutdownPaletteOctTree(void)	0x5A5EE0 
void CClothesBuilder::ShutdownPaletteOctTree() {
    plugin::Call<0x5A5EE0>();
}

// Converted from cdecl void CClothesBuilder::ReducePaletteOctTree(int numColorsToReduce)	0x5A5EF0 
void CClothesBuilder::ReducePaletteOctTree(int numColorsToReduce) {
    plugin::Call<0x5A5EF0, int>(numColorsToReduce);
}

// Converted from cdecl bool CClothesBuilder::AddColour(RwRGBA *color)	0x5A5F00 
bool CClothesBuilder::AddColour(RwRGBA* color) {
    return plugin::CallAndReturn<bool, 0x5A5F00, RwRGBA*>(color);
}

// Converted from cdecl void CClothesBuilder::FillPalette(RwRGBA *color)	0x5A5F30	0x5A5F70 
void CClothesBuilder::FillPalette(RwRGBA* color) {
    plugin::Call<0x5A5F30, RwRGBA*>(color);
}

