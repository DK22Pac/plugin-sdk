/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCustomCarEnvMapPipeline.h"

int& CCustomCarEnvMapPipeline::ms_envMapPluginOffset = *(int*)0x8D12C4;
int& CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset = *(int*)0x8D12C8;
int& CCustomCarEnvMapPipeline::ms_specularMapPluginOffset = *(int*)0x8D12CC;
CustomEnvMapPipeMaterialData& CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData = *(CustomEnvMapPipeMaterialData*)0xC02D18;
RxPipeline*& CCustomCarEnvMapPipeline::ObjPipeline = *(RxPipeline**)0xC02D24;
CPool<CustomEnvMapPipeMaterialData> *&CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool = *(CPool<CustomEnvMapPipeMaterialData> **)0xC02D28;
CPool<CustomEnvMapPipeAtomicData> *&CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool = *(CPool<CustomEnvMapPipeAtomicData> **)0xC02D2C;
CPool<CustomSpecMapPipeMaterialData> *&CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool = *(CPool<CustomSpecMapPipeMaterialData> **)0xC02D30;


// Converted from cdecl int CCustomCarEnvMapPipeline::CustomPipeInstanceCB(int arg1,int arg2, int (__cdecl *callback)(int, int, int))	0x5D8490	
int CCustomCarEnvMapPipeline::CustomPipeInstanceCB(int arg1, int arg2, int(__cdecl *callback)(int, int, int)) {
	return plugin::CallAndReturn<int,0x5D8490, int, int, int(__cdecl *)(int, int, int)>(arg1, arg2, callback);
}

// Converted from cdecl void CCustomCarEnvMapPipeline::PreRenderUpdate(void)	0x5D8870	
void CCustomCarEnvMapPipeline::PreRenderUpdate() {
	plugin::Call<0x5D8870>();
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvMatConstructorCB(void *object,int offset)	0x5D8BD0	
void* CCustomCarEnvMapPipeline::pluginEnvMatConstructorCB(void* object, int offset) {
	return plugin::CallAndReturn<void*, 0x5D8BD0, void*, int>(object, offset);
}

// Converted from cdecl RwStream* CCustomCarEnvMapPipeline::pluginEnvMatStreamWriteCB(RwStream *stream, int length,void const* arg3 ,int arg4)	0x5D8CD0	
RwStream* CCustomCarEnvMapPipeline::pluginEnvMatStreamWriteCB(RwStream* stream, int length, void const* arg3, int arg4) {
	return plugin::CallAndReturn<RwStream*, 0x5D8CD0, RwStream*, int, void const*, int>(stream, length, arg3, arg4);
}

// Converted from cdecl int CCustomCarEnvMapPipeline::pluginEnvMatStreamGetSizeCB(void const* arg0)	0x5D8D10	
int CCustomCarEnvMapPipeline::pluginEnvMatStreamGetSizeCB(void const* arg0) {
	return plugin::CallAndReturn<int, 0x5D8D10, void const*>(arg0);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvAtmConstructorCB(void *object,int offset)	0x5D8D30	
void* CCustomCarEnvMapPipeline::pluginEnvAtmConstructorCB(void* object, int offset) {
	return plugin::CallAndReturn<void*, 0x5D8D30, void*, int>(object, offset);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginSpecMatConstructorCB(void *object)	0x5D8D40	
void* CCustomCarEnvMapPipeline::pluginSpecMatConstructorCB(void* object) {
	return plugin::CallAndReturn<void*, 0x5D8D40, void*>(object);
}

// Converted from cdecl RwStream* CCustomCarEnvMapPipeline::pluginSpecMatStreamWriteCB(RwStream *stream,int length,void const* object)	0x5D8D60	
RwStream* CCustomCarEnvMapPipeline::pluginSpecMatStreamWriteCB(RwStream* stream, int length, void const* object) {
	return plugin::CallAndReturn<RwStream*, 0x5D8D60, RwStream*, int, void const*>(stream, length, object);
}

// Converted from cdecl int CCustomCarEnvMapPipeline::pluginSpecMatStreamGetSizeCB(void)	0x5D8DD0	
signed int CCustomCarEnvMapPipeline::pluginSpecMatStreamGetSizeCB() {
	return plugin::CallAndReturn<signed int, 0x5D8DD0>();
}

// Converted from cdecl CustomEnvMapPipeMaterialData* CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData(CustomEnvMapPipeMaterialData **arg0)	0x5D9570	
CustomEnvMapPipeMaterialData* CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData(CustomEnvMapPipeMaterialData** arg0) {
	return plugin::CallAndReturn<CustomEnvMapPipeMaterialData*, 0x5D9570, CustomEnvMapPipeMaterialData**>(arg0);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvMatDestructorCB(void * object,int offset)	0x5D95B0	
void* CCustomCarEnvMapPipeline::pluginEnvMatDestructorCB(void* object, int offset) {
	return plugin::CallAndReturn<void*, 0x5D95B0, void*, int>(object, offset);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvMatCopyConstructorCB(void *object_dst,void const*object_src,int offset,int size)	0x5D9600	
void* CCustomCarEnvMapPipeline::pluginEnvMatCopyConstructorCB(void* object_dst, void const* object_src, int offset, int size) {
	return plugin::CallAndReturn<void*, 0x5D9600, void*, void const*, int, int>(object_dst, object_src, offset, size);
}

// Converted from cdecl RwStream* CCustomCarEnvMapPipeline::pluginEnvMatStreamReadCB(RwStream *stream,int length,void *object,int offset)	0x5D9660	
RwStream* CCustomCarEnvMapPipeline::pluginEnvMatStreamReadCB(RwStream* stream, int length, void* object, int offset) {
	return plugin::CallAndReturn<RwStream*, 0x5D9660, RwStream*, int, void*, int>(stream, length, object, offset);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvAtmDestructorCB(void *object,int offset)	0x5D9730	
void* CCustomCarEnvMapPipeline::pluginEnvAtmDestructorCB(void* object, int offset) {
	return plugin::CallAndReturn<void*, 0x5D9730, void*, int>(object, offset);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginEnvAtmCopyConstructorCB(void *object_dst,void const*object_src,int offset,int size)	0x5D9780	
void* CCustomCarEnvMapPipeline::pluginEnvAtmCopyConstructorCB(void* object_dst, void const* object_src, int offset, int size) {
	return plugin::CallAndReturn<void*, 0x5D9780, void*, void const*, int, int>(object_dst, object_src, offset, size);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginSpecMatDestructorCB(void *object)	0x5D97D0	
void* CCustomCarEnvMapPipeline::pluginSpecMatDestructorCB(void* object) {
	return plugin::CallAndReturn<void*, 0x5D97D0, void*>(object);
}

// Converted from cdecl void* CCustomCarEnvMapPipeline::pluginSpecMatCopyConstructorCB(void *object_dst,void const*object_src)	0x5D9830	
void* CCustomCarEnvMapPipeline::pluginSpecMatCopyConstructorCB(void* object_dst, void const* object_src) {
	return plugin::CallAndReturn<void*, 0x5D9830, void*, void const*>(object_dst, object_src);
}

// Converted from cdecl RwStream* CCustomCarEnvMapPipeline::pluginSpecMatStreamReadCB(RwStream *stream,int length,void *object)	0x5D9880	
RwStream* CCustomCarEnvMapPipeline::pluginSpecMatStreamReadCB(RwStream* stream, int length, void* object) {
	return plugin::CallAndReturn<RwStream*, 0x5D9880, RwStream*, int, void*>(stream, length, object);
}

// Converted from cdecl int CCustomCarEnvMapPipeline::CustomPipeRenderCB(RwResEntry *atomic,void *object,uchar flags1,uint flags2)	0x5D9900	
int CCustomCarEnvMapPipeline::CustomPipeRenderCB(RwResEntry* atomic, void* object, unsigned char flags1, unsigned int flags2) {
	return plugin::CallAndReturn<int, 0x5D9900, RwResEntry*, void*, unsigned char, unsigned int>(atomic, object, flags1, flags2);
}

// Converted from cdecl RxPipeline* CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe(void)	0x5D9F80	
RxPipeline* CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe() {
	return plugin::CallAndReturn<RxPipeline*, 0x5D9F80>();
}

// Converted from cdecl char CCustomCarEnvMapPipeline::CreatePipe(void)	0x5DA020	
char CCustomCarEnvMapPipeline::CreatePipe() {
	return plugin::CallAndReturn<char, 0x5DA020>();
}

// Converted from cdecl void CCustomCarEnvMapPipeline::DestroyPipe(void)	0x5DA130	
void CCustomCarEnvMapPipeline::DestroyPipe() {
	plugin::Call<0x5DA130>();
}

// Converted from cdecl void CCustomCarEnvMapPipeline::SetFxEnvTexture(RpMaterial *material,RwTexture *texture)	0x5DA230	
void CCustomCarEnvMapPipeline::SetFxEnvTexture(RpMaterial* material, RwTexture* texture) {
	plugin::Call<0x5DA230, RpMaterial*, RwTexture*>(material, texture);
}

// Converted from cdecl char CCustomCarEnvMapPipeline::RegisterPlugin(void)	0x5DA450	
char CCustomCarEnvMapPipeline::RegisterPlugin() {
	return plugin::CallAndReturn<char, 0x5DA450>();
}

// Converted from cdecl RpMaterial* CCustomCarEnvMapPipeline::CustomPipeMaterialSetup(RpMaterial *,void *)	0x5DA560	
RpMaterial* CCustomCarEnvMapPipeline::CustomPipeMaterialSetup(RpMaterial* arg0, void* arg1) {
	return plugin::CallAndReturn<RpMaterial*, 0x5DA560, RpMaterial*, void*>(arg0, arg1);
}

// Converted from cdecl RpAtomic* CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(RpAtomic *)	0x5DA610	
RpAtomic* CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(RpAtomic* arg0) {
	return plugin::CallAndReturn<RpAtomic*, 0x5DA610, RpAtomic*>(arg0);
}
