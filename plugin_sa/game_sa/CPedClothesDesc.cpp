/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CPedClothesDesc.h"


// Converted from thiscall void CPedClothesDesc::Initialise(void)	0x5A78F0 
void CPedClothesDesc::Initialise() {
    plugin::CallMethod<0x5A78F0, CPedClothesDesc *>(this);
}

// Converted from thiscall void CPedClothesDesc::SetModel(uint modelid ,int eClothesModelPart)	0x5A7910 
void CPedClothesDesc::SetModel(unsigned int modelid, int eClothesModelPart) {
    plugin::CallMethod<0x5A7910, CPedClothesDesc *, unsigned int, int>(this, modelid, eClothesModelPart);
}

// Converted from thiscall void CPedClothesDesc::SetModel(char const* model,int eClothesModelPart)	0x5A7920 
void CPedClothesDesc::SetModel(char const* model, int eClothesModelPart) {
    plugin::CallMethod<0x5A7920, CPedClothesDesc *, char const*, int>(this, model, eClothesModelPart);
}

// Converted from thiscall bool CPedClothesDesc::GetIsWearingBalaclava(void)	0x5A7950 
bool CPedClothesDesc::GetIsWearingBalaclava() {
    return plugin::CallMethodAndReturn<bool, 0x5A7950, CPedClothesDesc *>(this);
}

// Converted from thiscall bool CPedClothesDesc::HasVisibleNewHairCut(int arg1)	0x5A7970 
bool CPedClothesDesc::HasVisibleNewHairCut(int arg1) {
    return plugin::CallMethodAndReturn<bool, 0x5A7970, CPedClothesDesc *, int>(this, arg1);
}

// Converted from thiscall bool CPedClothesDesc::HasVisibleTattoo(void)	0x5A79D0 
bool CPedClothesDesc::HasVisibleTattoo() {
    return plugin::CallMethodAndReturn<bool, 0x5A79D0, CPedClothesDesc *>(this);
}

// Converted from thiscall void CPedClothesDesc::CPedClothesDesc(void)	0x5A8020 
CPedClothesDesc::CPedClothesDesc() {
    plugin::CallMethod<0x5A8020, CPedClothesDesc *>(this);
}

// Converted from thiscall void CPedClothesDesc::SetTextureAndModel(uint texture,uint model,int eClothesTexturePart)	0x5A8050 
void CPedClothesDesc::SetTextureAndModel(unsigned int texture, unsigned int model, int eClothesTexturePart) {
    plugin::CallMethod<0x5A8050, CPedClothesDesc *, unsigned int, unsigned int, int>(this, texture, model, eClothesTexturePart);
}

// Converted from thiscall void CPedClothesDesc::SetTextureAndModel(char const* texturename,char const* modelname, int eClothesTexturePart) 0x5A8080 
void CPedClothesDesc::SetTextureAndModel(char const* texturename, char const* modelname, int eClothesTexturePart) {
    plugin::CallMethod<0x5A8080, CPedClothesDesc *, char const*, char const*, int>(this, texturename, modelname, eClothesTexturePart);
}

