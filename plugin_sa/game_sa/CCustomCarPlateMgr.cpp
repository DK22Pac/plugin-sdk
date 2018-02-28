/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCustomCarPlateMgr.h"

RwTexture *&CCustomCarPlateMgr::pCharsetTex      = *(RwTexture **)0xC3EF5C;
RwTexture **CCustomCarPlateMgr::pPlatebackTexTab = (RwTexture **)0xC3EF60;
void **CCustomCarPlateMgr::pPalette1555Tab       = (void **)0xC3EF6C;
unsigned char *&CharsetLockedData                = *(unsigned char **)0xC3EF78;
RpMaterial *&CurrentLicensePlateMaterial         = *(RpMaterial **)0xC3EF7C;
char &CurrentLicensePlateType                    = *(char *)0xC3EF80;

// Converted from cdecl bool CCustomCarPlateMgr::Initialise(void) 0x6FD500
bool CCustomCarPlateMgr::Initialise() {
    return plugin::CallAndReturn<bool, 0x6FD500>();
}

// Converted from cdecl bool CCustomCarPlateMgr::GeneratePlateText(char *plateTextBuf,int length) 0x6FD5B0
bool CCustomCarPlateMgr::GeneratePlateText(char* plateTextBuf, int length) {
    return plugin::CallAndReturn<bool, 0x6FD5B0, char*, int>(plateTextBuf, length);
}

// Converted from cdecl bool CCustomCarPlateMgr::Shutdown(void) 0x6FD720
bool CCustomCarPlateMgr::Shutdown() {
    return plugin::CallAndReturn<bool, 0x6FD720>();
}

// Converted from cdecl uchar CCustomCarPlateMgr::GetMapRegionPlateDesign(void) 0x6FD7A0
unsigned char CCustomCarPlateMgr::GetMapRegionPlateDesign() {
    return plugin::CallAndReturn<unsigned char, 0x6FD7A0>();
}

// Converted from cdecl bool CCustomCarPlateMgr::LoadPlatecharsetDat(char const*filename,uchar *data,int,int) 0x6FDC00
bool CCustomCarPlateMgr::LoadPlatecharsetDat(char const* filename, unsigned char* data, int arg2, int arg3) {
    return plugin::CallAndReturn<bool, 0x6FDC00, char const*, unsigned char*, int, int>(filename, data, arg2, arg3);
}

// Converted from cdecl bool RenderLicenseplateTextToRaster(char* text, RwRaster* charsetRaster, void *palette, RwRaster* resultRaster) 0x6FDD70
bool RenderLicenseplateTextToRaster(char* text, RwRaster* charsetRaster, void* palette, RwRaster* resultRaster) {
    return plugin::CallAndReturn<bool, 0x6FDD70, char*, RwRaster*, void*, RwRaster*>(text, charsetRaster, palette, resultRaster);
}

// Converted from cdecl RpMaterial* CCustomCarPlateMgr::SetupMaterialPlatebackTexture(RpMaterial *material,uchar plateType) 0x6FDE50
RpMaterial* CCustomCarPlateMgr::SetupMaterialPlatebackTexture(RpMaterial* material, unsigned char plateType) {
    return plugin::CallAndReturn<RpMaterial*, 0x6FDE50, RpMaterial*, unsigned char>(material, plateType);
}

// Converted from cdecl RwTexture* CCustomCarPlateMgr::CreatePlateTexture(char *text,uchar plateType) 0x6FDEA0
RwTexture* CCustomCarPlateMgr::CreatePlateTexture(char* text, unsigned char plateType) {
    return plugin::CallAndReturn<RwTexture*, 0x6FDEA0, char*, unsigned char>(text, plateType);
}

// Converted from cdecl RpMaterial* MaterialUpgradeSetCarplateTextureCB(RpMaterial *material, void *data) 0x6FDF50
RpMaterial* MaterialUpgradeSetCarplateTextureCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x6FDF50, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpAtomic* AtomicUpgradeSetCarplateTextureCB(RpAtomic *atomic, void *data) 0x6FDFC0
RpAtomic* AtomicUpgradeSetCarplateTextureCB(RpAtomic* atomic, _IGNORED_ void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x6FDFC0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl bool CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(RpClump *clump,RpMaterial *plateMaterial,uchar plateType) 0x6FDFE0
bool CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(RpClump* clump, RpMaterial* plateMaterial, unsigned char plateType) {
    return plugin::CallAndReturn<bool, 0x6FDFE0, RpClump*, RpMaterial*, unsigned char>(clump, plateMaterial, plateType);
}

// Converted from cdecl RpMaterial* CCustomCarPlateMgr::SetupMaterialPlateTexture(RpMaterial *material,char *plateText,uchar plateType) 0x6FE020
RpMaterial* CCustomCarPlateMgr::SetupMaterialPlateTexture(RpMaterial* material, char* plateText, unsigned char plateType) {
    return plugin::CallAndReturn<RpMaterial*, 0x6FE020, RpMaterial*, char*, unsigned char>(material, plateText, plateType);
}

// Converted from cdecl RpMaterial* MaterialSetCarplateTextureCB(RpMaterial *material, void *data) 0x6FE060
RpMaterial* MaterialSetCarplateTextureCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x6FE060, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpAtomic* AtomicSetCarplateTextureCB(RpAtomic *atomic, void *data) 0x6FE0D0
RpAtomic* AtomicSetCarplateTextureCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x6FE0D0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpMaterial* CCustomCarPlateMgr::SetupClump(RpClump *clump,char *plateText,uchar plateType) 0x6FE0F0
RpMaterial* CCustomCarPlateMgr::SetupClump(RpClump* clump, char* plateText, unsigned char plateType) {
    return plugin::CallAndReturn<RpMaterial*, 0x6FE0F0, RpClump*, char*, unsigned char>(clump, plateText, plateType);
}

#ifdef _MSC_VER
// Converted from cdecl void GetCharacterPositionInCharSet(char c, uint &outColumn, uint &outRow) 0x6FD7C0
void GetCharacterPositionInCharSet(char c, unsigned int& outColumn, unsigned int& outRow) {
    __asm mov al, c
    __asm push outRow
    __asm push outColumn
    __asm mov ecx, 0x6FD7C0
    __asm call ecx
    __asm add esp, 8
}
#endif
