/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "rw/rwcore.h"
#include "rw/rphanim.h"
#include "rw/rpskin.h"
#include "rw/rpmatfx.h"
#include "rw/skeleton.h"

extern RwGlobals *&RwEngineInstance;

/* macro used to access global data structure (the root type is RwGlobals) */
#define RWSRCGLOBAL(variable) (RwEngineInstance->variable)

extern RsGlobalType &RsGlobal;

template<typename T>
T *GetD3DDevice() {
    return *reinterpret_cast<T **>(0x662EF0);
}

/* rwplcore.h */

RwFreeList* _rwFreeListCreate(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, const RwChar* fileCreate, RwUInt32 lineCreate); // 0x5C1790 gta3
RwFreeList* RwFreeListCreateAndPreallocateSpace(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, RwInt32 numBlocksToPreallocate, RwFreeList* inPlaceSpaceForFreeListStruct); // 0x5C1790 gta3
RwBool RwFreeListDestroy(RwFreeList* freelist); // 0x5C1720 gta3
RwInt32 RwFreeListPurge(RwFreeList* freelist); // 0x5C19F0 gta3
RwFreeList* RwFreeListForAllUsed(RwFreeList* freelist, RwFreeListCallBack fpCallBack, void* pData); // 0x5C1D40 gta3
RwInt32 RwFreeListPurgeAllFreeLists(void); // 0x5C1B90 gta3
RwStream* RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, const void* pData); // 0x5A3FE0 gta3
RwBool RwStreamClose(RwStream* stream, void* pData); // 0x5A3F10 gta3
RwUInt32 RwStreamRead(RwStream* stream, void* buffer, RwUInt32 length); // 0x5A3AD0 gta3
RwStream* RwStreamWrite(RwStream* stream, const void* buffer, RwUInt32 length); // 0x5A3C30 gta3
RwStream* RwStreamSkip(RwStream* stream, RwUInt32 offset); // 0x5A3DF0 gta3
RwInt32 _rwPluginRegistryAddPlugin(RwPluginRegistry* reg, RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5C35C0 gta3
RwInt32 _rwPluginRegistryGetPluginOffset(const RwPluginRegistry* reg, RwUInt32 pluginID); // 0x5C3590 gta3
const RwPluginRegistry* _rwPluginRegistryInitObject(const RwPluginRegistry* reg, void* object); // 0x5C37F0 gta3
const RwPluginRegistry* _rwPluginRegistryDeInitObject(const RwPluginRegistry* reg, void* object); // 0x5C3850 gta3
const RwPluginRegistry* _rwPluginRegistryCopyObject(const RwPluginRegistry* reg, void* dstObject, const void* srcObject); // 0x5C3880 gta3
RwInt32 _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB); // 0x5C39C0 gta3
RwInt32 _rwPluginRegistryAddPlgnStrmRightsCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB); // 0x5C39F0 gta3
const RwPluginRegistry* _rwPluginRegistryReadDataChunks(const RwPluginRegistry* reg, RwStream* stream, void* object); // 0x5C3A20 gta3
const RwPluginRegistry* _rwPluginRegistryWriteDataChunks(const RwPluginRegistry* reg, RwStream* stream, const void* object); // 0x5C3BE0 gta3
const RwPluginRegistry* _rwPluginRegistrySkipDataChunks(const RwPluginRegistry* reg, RwStream* stream); // 0x5C3CB0 gta3
RwInt32 _rwPluginRegistryGetSize(const RwPluginRegistry* reg, const void* object); // 0x5C3BA0 gta3
const RwPluginRegistry* _rwPluginRegistryInvokeRights(const RwPluginRegistry* reg, RwUInt32 id, void* obj, RwUInt32 extraData); // 0x5C3B50 gta3
RwBool RwMatrixDestroy(RwMatrix* mpMat); // 0x5A3300 gta3
RwMatrix* RwMatrixCreate(void); // 0x5A3330 gta3
RwMatrix* RwMatrixMultiply(RwMatrix* matrixOut, const RwMatrix* MatrixIn1, const RwMatrix* matrixIn2); // 0x5A28F0 gta3
RwMatrix* RwMatrixTransform(RwMatrix* matrix, const RwMatrix* transform, RwOpCombineType combineOp); // 0x5A31C0 gta3
//RwMatrix* RwMatrixOrthoNormalize(RwMatrix* matrixOut, const RwMatrix* matrixIn); // 0x643830
RwMatrix* RwMatrixInvert(RwMatrix* matrixOut, const RwMatrix* matrixIn); // 0x5A2C90 gta3
RwMatrix* RwMatrixScale(RwMatrix* matrix, const RwV3d* scale, RwOpCombineType combineOp); // 0x5A2EE0 gta3
RwMatrix* RwMatrixTranslate(RwMatrix* matrix, const RwV3d* translation, RwOpCombineType combineOp); // 0x5A3070 gta3
RwMatrix* RwMatrixRotate(RwMatrix* matrix, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp); // 0x5A2BF0 gta3
RwMatrix* RwMatrixRotateOneMinusCosineSine(RwMatrix* matrix, const RwV3d* unitAxis, RwReal oneMinusCosine, RwReal sine, RwOpCombineType combineOp); // 0x5A2960 gta3
RwMatrix* RwMatrixUpdate(RwMatrix* matrix); // 0x5A28E0 gta3
RwMatrix* RwMatrixOptimize(RwMatrix* matrix, const RwMatrixTolerance* tolerance); // 0x5A2820 gta3
RwReal _rwMatrixDeterminant(const RwMatrix* matrix); // 0x5A2520 gta3
RwReal _rwMatrixNormalError(const RwMatrix* matrix); // 0x5A25D0 gta3
RwReal _rwMatrixOrthogonalError(const RwMatrix* matrix); // 0x5A2570 gta3
RwReal _rwMatrixIdentityError(const RwMatrix* matrix); // 0x5A2660 gta3
//RwReal RwV3dNormalize(RwV3d* out, const RwV3d* in); // 0x646F20
RwReal RwV3dLength(const RwV3d* in); // 0x5A36A0 gta3
RwV3d* RwV3dTransformPoints(RwV3d* pointsOut, const RwV3d* pointsIn, RwInt32 numPoints, const RwMatrix* matrix); // 0x5A37D0 gta3
RwV3d* RwV3dTransformVectors(RwV3d* vectorsOut, const RwV3d* vectorsIn, RwInt32 numPoints, const RwMatrix* matrix); // 0x5A37E0 gta3
RwReal _rwSqrt(const RwReal num); // 0x5A3710 gta3
RwReal _rwInvSqrt(const RwReal num); // 0x5A3770 gta3
RwReal RwIm2DGetNearScreenZ(void); // 0x5A43A0 gta3
RwReal RwIm2DGetFarScreenZ(void); // 0x5A43B0 gta3
RwBool RwRenderStateGet(RwRenderState state, void* value); // 0x5A4410 gta3
RwBool RwRenderStateSet(RwRenderState state, void* value); // 0x5A43C0 gta3
RwBool RwIm2DRenderLine(RwIm2DVertex* vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2); // 0x5A4420 gta3
RwBool RwIm2DRenderPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices); // 0x5A4430 gta3
RwBool RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices, RwImVertexIndex* indices, RwInt32 numIndices); // 0x5A4440 gta3
RwBool RwEngineInit(const RwMemoryFunctions* memFuncs, RwUInt32 initFlags, RwUInt32 resArenaSize); // 0x5A12D0 gta3
RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor initCB, RwPluginObjectDestructor termCB); // 0x5A0DC0 gta3
RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID); // 0x5A0DF0 gta3
RwBool RwEngineOpen(RwEngineOpenParams* initParams); // 0x5A10E0 gta3
RwBool RwEngineStart(void); // 0x5A0FE0 gta3
RwBool RwEngineStop(void); // 0x5A0F90 gta3
RwBool RwEngineClose(void); // 0x5A1070 gta3
RwBool RwEngineTerm(void); // 0x5A1290 gta3
RwInt32 RwEngineGetNumSubSystems(void); // 0x5A0E10 gta3
RwSubSystemInfo* RwEngineGetSubSystemInfo(RwSubSystemInfo* subSystemInfo, RwInt32 subSystemIndex); // 0x5A0E40 gta3
RwInt32 RwEngineGetCurrentSubSystem(void); // 0x5A0E70 gta3
RwBool RwEngineSetSubSystem(RwInt32 subSystemIndex); // 0x5A0EA0 gta3
RwInt32 RwEngineGetNumVideoModes(void); // 0x5A0ED0 gta3
RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex); // 0x5A0F00 gta3
RwInt32 RwEngineGetCurrentVideoMode(void); // 0x5A0F30 gta3
RwBool RwEngineSetVideoMode(RwInt32 modeIndex); // 0x5A0F60 gta3
RwFileFunctions* RwOsGetFileInterface(void); // 0x5BF110 gta3
//RwError* RwErrorGet(RwError* code); // 0x669B40
RwError* RwErrorSet(RwError* code); // 0x5C3910 gta3
RwInt32 _rwerror(RwInt32 code, ...); // 0x5C3970 gta3
RwBool RwResourcesEmptyArena(void); // 0x5C3360 gta3
RwResEntry* RwResourcesAllocateResEntry(void* owner, RwResEntry* ownerRef, RwInt32 size, RwResEntryDestroyNotify destroyNotify); // 0x5C3170 gta3
RwBool RwResourcesFreeResEntry(RwResEntry* entry); // 0x5C3080 gta3
void _rwResourcesPurge(void); // 0x5C30F0 gta3
RwBool RwStreamFindChunk(RwStream* stream, RwUInt32 type, RwUInt32* lengthOut, RwUInt32* versionOut); // 0x5AA540 gta3
RwStream* _rwStreamWriteVersionedChunkHeader(RwStream* stream, RwInt32 type, RwInt32 size, RwUInt32 version, RwUInt32 buildNum); // 0x5AA4E0 gta3
RwStream* RwStreamWriteReal(RwStream* stream, const RwReal* reals, RwUInt32 numBytes); // 0x5AA680 gta3
RwStream* RwStreamWriteInt32(RwStream* stream, const RwInt32* ints, RwUInt32 numBytes); // 0x5AA720 gta3
RwStream* RwStreamReadReal(RwStream* stream, RwReal* reals, RwUInt32 numBytes); // 0x5AA740 gta3
RwStream* RwStreamReadInt32(RwStream* stream, RwInt32* ints, RwUInt32 numBytes); // 0x5AA7B0 gta3
void* RwMemLittleEndian32(void* mem, RwUInt32 size); // 0x5AA640 gta3
void* RwMemNative32(void* mem, RwUInt32 size); // 0x5AA650 gta3
//void* RwMemRealToFloat32(void* mem, RwUInt32 size); // 0x64FBE0
void* RwMemFloat32ToReal(void* mem, RwUInt32 size); // 0x5AA660 gta3

/* rwcore.h */

RxHeap* RxHeapCreate(RwUInt32 size); // 0x5D1750 gta3
void RxHeapDestroy(RxHeap* heap); // 0x5D16F0 gta3
RwBool _rxHeapReset(RxHeap* heap); // 0x5D1680 gta3
void* RxHeapAlloc(RxHeap* heap, RwUInt32 size); // 0x5D1260 gta3
void RxHeapFree(RxHeap* heap, void* block); // 0x5D1070 gta3
RwBool _rxPipelineOpen(void); // 0x5C27E0 gta3
RwBool _rxPipelineClose(void); // 0x5C2780 gta3
RxPipeline* RxPipelineCreate(void); // 0x5C2E00 gta3
void _rxPipelineDestroy(RxPipeline* Pipeline); // 0x5C2E70 gta3
RxHeap* RxHeapGetGlobalHeap(void); // 0x5C2AD0 gta3
RxPipeline* RxPipelineExecute(RxPipeline* pipeline, void* data, RwBool heapReset); // 0x5C2D60 gta3
void _rxPacketDestroy(RxPacket* Packet); // 0x5D9810 gta3
RxPipelineNode* RxPipelineFindNodeByName(RxPipeline* pipeline, const RwChar* name, RxPipelineNode* start, RwInt32* nodeIndex); // 0x5D2B10 gta3
RxLockedPipe* RxPipelineLock(RxPipeline* pipeline); // 0x5D29F0 gta3
RxPipeline* RxLockedPipeUnlock(RxLockedPipe* pipeline); // 0x5D1FA0 gta3
RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags); // 0x5AD930 gta3
RwBool RwRasterDestroy(RwRaster* raster); // 0x5AD780 gta3
RwInt32 RwRasterGetNumLevels(RwRaster* raster); // 0x5AD8C0 gta3
RwRaster* RwRasterRenderFast(RwRaster* raster, RwInt32 x, RwInt32 y); // 0x5AD710 gta3
RwRaster* RwRasterRender(RwRaster* raster, RwInt32 x, RwInt32 y); // 0x5AD750 gta3
RwRaster* RwRasterPushContext(RwRaster* raster); // 0x5AD7C0 gta3
RwRaster* RwRasterPopContext(void); // 0x5AD870 gta3
RwRaster* RwRasterGetCurrentContext(void); // 0x5AD6D0 gta3
RwRaster* RwRasterShowRaster(RwRaster* raster, void* dev, RwUInt32 flags); // 0x5AD900 gta3
RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode); // 0x5AD9D0 gta3
RwRaster* RwRasterUnlock(RwRaster* raster); // 0x5AD6F0 gta3
RwUInt8* RwRasterLockPalette(RwRaster* raster, RwInt32 lockMode); // 0x5AD840 gta3
RwInt32 RwRasterRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5AD810 gta3
RxRenderStateVector* RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector* rsvp); // 0x5D9240 gta3
RwImage* RwImageCreate(RwInt32 width, RwInt32 height, RwInt32 depth); // 0x5A9120 gta3
RwBool RwImageDestroy(RwImage* image); // 0x5A9180 gta3
RwImage* RwImageAllocatePixels(RwImage* image); // 0x5A91E0 gta3
RwImage* RwImageFreePixels(RwImage* image); // 0x5A92A0 gta3
RwImage* RwImageCopy(RwImage* destImage, const RwImage* sourceImage); // 0x5A9F50 gta3
RwImage* RwImageApplyMask(RwImage* image, const RwImage* mask); // 0x5A93A0 gta3
RwImage* RwImageMakeMask(RwImage* image); // 0x5A92D0 gta3
RwImage* RwImageReadMaskedImage(const RwChar* imageName, const RwChar* maskname); // 0x5A9C10 gta3
RwImage* RwImageRead(const RwChar* imageName); // 0x5A9810 gta3
const RwChar* RwImageSetPath(const RwChar* path); // 0x5A9750 gta3
RwBool RwImageSetGamma(RwReal gammaValue); // 0x5AA2C0 gta3
RwImage* RwImageGammaCorrect(RwImage* image); // 0x5AA130 gta3
const RwChar* RwImageFindFileType(const RwChar* imageName); // 0x5A9B40 gta3
RwBool RwTextureSetMipmapping(RwBool enable); // 0x5A7130 gta3
RwBool RwTextureGetMipmapping(void); // 0x5A7120 gta3
RwBool RwTextureSetAutoMipmapping(RwBool enable); // 0x5A7100 gta3
RwBool RwTextureGetAutoMipmapping(void); // 0x5A7150 gta3
RwBool RwTextureRasterGenerateMipmaps(RwRaster* raster, RwImage* image); // 0x5A7780 gta3
RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name); // 0x5A73B0 gta3
RwTexture* RwTextureSetMaskName(RwTexture* texture, const RwChar* maskName); // 0x5A7420 gta3
RwTexDictionary* RwTexDictionaryCreate(void); // 0x5A7160 gta3
RwBool RwTexDictionaryDestroy(RwTexDictionary* dict); // 0x5A7200 gta3
RwTexture* RwTextureCreate(RwRaster* raster); // 0x5A72D0 gta3
RwBool RwTextureDestroy(RwTexture* texture); // 0x5A7330 gta3
//RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster); // 0x64DCC0
RwTexture* RwTexDictionaryAddTexture(RwTexDictionary* dict, RwTexture* texture); // 0x5A7490 gta3
RwTexture* RwTexDictionaryFindNamedTexture(RwTexDictionary* dict, const RwChar* name); // 0x5A74D0 gta3
RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName); // 0x5A7580 gta3
RwTexDictionary* RwTexDictionaryGetCurrent(void); // 0x5A7570 gta3
RwTexDictionary* RwTexDictionarySetCurrent(RwTexDictionary* dict); // 0x5A7550 gta3
const RwTexDictionary* RwTexDictionaryForAllTextures(const RwTexDictionary* dict, RwTextureCallBack fpCallBack, void* pData); // 0x5A7290 gta3
//RwInt32 RwTextureRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x64E310
void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm, RwUInt32 flags); // 0x5B6720 gta3
RwBool RwIm3DEnd(void); // 0x5B67F0 gta3
RwBool RwIm3DRenderLine(RwInt32 vert1, RwInt32 vert2); // 0x5B6980 gta3
RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices, RwInt32 numIndices); // 0x5B6820 gta3
RxPipeline* RwIm3DSetTransformPipeline(RxPipeline* pipeline); // 0x5B6A50 gta3
RxPipeline* RwIm3DSetRenderPipeline(RxPipeline* pipeline, RwPrimitiveType primType); // 0x5B6AC0 gta3
RwBool RwD3D8DeviceSupportsDXTTexture(void); // 0x5BAEB0 gta3
void* RwD3D8GetCurrentD3DDevice(void); // 0x5BA590 gta3
void RwD3D8EngineSetRefreshRate(RwUInt32 refreshRate); // 0x5B95D0 gta3
RwBool RwD3D8CameraAttachWindow(void* camera, void* hwnd); // 0x5B9640 gta3
RwBool RwD3D8SetVertexShader(RwUInt32 handle); // 0x5BAF90 gta3
RwBool RwD3D8SetPixelShader(RwUInt32 handle); // 0x5BAFD0 gta3
RwBool RwD3D8SetStreamSource(RwUInt32 streamNumber, void* streamData, RwUInt32 stride); // 0x5BB010 gta3
RwBool RwD3D8SetIndices(void* indexData, RwUInt32 baseVertexIndex); // 0x5BB060 gta3
RwBool RwD3D8DrawIndexedPrimitive(RwUInt32 primitiveType, RwUInt32 minIndex, RwUInt32 numVertices, RwUInt32 startIndex, RwUInt32 numIndices); // 0x5BB0B0 gta3
RwBool RwD3D8DrawPrimitive(RwUInt32 primitiveType, RwUInt32 startVertex, RwUInt32 numVertices); // 0x5BB140 gta3
RwBool RwD3D8SetTexture(RwTexture* texture, RwUInt32 stage); // 0x5B53A0 gta3
RwBool RwD3D8SetRenderState(RwUInt32 state, RwUInt32 value); // 0x5B3CF0 gta3
RwBool RwD3D8SetTextureStageState(RwUInt32 stage, RwUInt32 type, RwUInt32 value); // 0x5B3D60 gta3
RwBool RwD3D8SetTransform(RwUInt32 state, const void* matrix); // 0x5BB1D0 gta3
void RwD3D8GetRenderState(RwUInt32 state, void* value); // 0x5B3D40 gta3
void RwD3D8GetTransform(RwUInt32 state, void* matrix); // 0x5BB310 gta3
RwBool RwD3D8SetTransformWorld(const RwMatrix* matrix); // 0x5BB340 gta3
RwBool RwD3D8SetSurfaceProperties(const RwRGBA* color, const RwSurfaceProperties* surfaceProps, RwBool modulate); // 0x5BB490 gta3
RwBool RwD3D8SetLight(RwInt32 index, const void* light); // 0x5BB7A0 gta3
RwBool RwD3D8EnableLight(RwInt32 index, RwBool enable); // 0x5BB890 gta3
RwBool RwD3D8DynamicVertexBufferCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer); // 0x5BB9F0 gta3
void RwD3D8DynamicVertexBufferDestroy(void); // 0x5BBAE0 gta3
RwBool RwD3D8DynamicVertexBufferLock(RwUInt32 vertexSize, RwUInt32 numVertex, void* vertexBufferOut, void* vertexDataOut, RwUInt32* baseIndexOut); // 5BBD30 gta3
RwBool RwD3D8DynamicVertexBufferUnlock(void); // 0x5BBEB0 gta3
RwBool RwD3D8IndexBufferCreate(RwUInt32 numIndices, void* indexBuffer); // 0x5BBB10 gta3
RwBool RwD3D8CreatePixelShader(const RwUInt32* function, RwUInt32* handle); // 0x5BBB40 gta3
void RwD3D8DeletePixelShader(RwUInt32 handle); // 0x5BBB90 gta3
RwBool RwD3D8SetPixelShaderConstant(RwUInt32 registerAddress, const void* constantData, RwUInt32 constantCount); // 0x5BBC00 gta3
const void* RwD3D8GetCaps(void); // 0x5BBC30 gta3
RwBool RwD3D8CameraIsSphereFullyInsideFrustum(const void* camera, const void* sphere); // 0x5BBC40 gta3
RwBool RwD3D8CameraIsBBoxFullyInsideFrustum(const void* camera, const void* boundingBox); // 0x5BBCA0 gta3
void _rwD3D8TexDictionaryEnableRasterFormatConversion(RwBool enable); // 0x5BE280 gta3
//RwBool _rwDeviceRegisterPlugin(void); // 0x65B5C0
RwImage* RwImageResample(RwImage* dstImage, const RwImage* srcImage); // 0x5C72B0 gta3
RwImage* RwImageCreateResample(const RwImage* srcImage, RwInt32 width, RwInt32 height); // 0x5C7B30 gta3
RwImage* RwImageSetFromRaster(RwImage* image, RwRaster* raster); // 0x5BBF10 gta3
RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image); // 0x5BBF50 gta3
RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth, RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat); // 0x5BBF80 gta3
RwFrame* RwFrameForAllObjects(RwFrame* frame, RwObjectCallBack callBack, void* data); // 0x5A2340 gta3
RwFrame* RwFrameTranslate(RwFrame* frame, const RwV3d* v, RwOpCombineType combine); // 0x5A2000 gta3
RwFrame* RwFrameRotate(RwFrame* frame, const RwV3d* axis, RwReal angle, RwOpCombineType combine); // 0x5A21E0 gta3
RwFrame* RwFrameScale(RwFrame* frame, const RwV3d* v, RwOpCombineType combine); // 0x5A20A0 gta3
RwFrame* RwFrameTransform(RwFrame* frame, const RwMatrix* m, RwOpCombineType combine); // 0x5A2140 gta3
RwFrame* RwFrameOrthoNormalize(RwFrame* frame); // 0x5A2280 gta3
RwBool RwFrameDestroyHierarchy(RwFrame* frame); // 0x5A1BF0 gta3
RwFrame* RwFrameForAllChildren(RwFrame* frame, RwFrameCallBack callBack, void* data); // 0x5A1FC0 gta3
RwFrame* RwFrameRemoveChild(RwFrame* child); // 0x5A1ED0 gta3
RwFrame* RwFrameAddChild(RwFrame* parent, RwFrame* child); // 0x5A1D00 gta3
RwMatrix* RwFrameGetLTM(RwFrame* frame); // 0x5A1CE0 gta3
RwFrame* RwFrameUpdateObjects(RwFrame* frame); // 0x5A1C60 gta3
RwFrame* RwFrameCreate(void); // 0x5A1A00 gta3
RwBool RwFrameDestroy(RwFrame* frame); // 0x5A1A30 gta3
RwBool RwFrameDirty(const RwFrame* frame); // 0x5A1930 gta3
RwInt32 RwFrameRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5A2380 gta3
RwFrame* _rwFrameCloneAndLinkClones(RwFrame* root); // 0x5A1690 gta3
RwFrame* _rwFramePurgeClone(RwFrame* root); // 0x5A1880 gta3
void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame); // 0x5BC950 gta3
void _rwObjectHasFrameReleaseFrame(void); // 0x5BC9A0 gta3
//RwInt32 RwTextureRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x650480
RwUInt32 RwTextureStreamGetSize(const RwTexture* texture); // 0x5AA800 gta3
RwTexture* RwTextureStreamRead(RwStream* stream); // 0x5AAA40 gta3
const RwTexture* RwTextureStreamWrite(const RwTexture* texture, RwStream* stream); // 0x5AA870 gta3
//RwTexDictionary* RwTexDictionaryStreamRead(RwStream* stream); // 0x61E710
const RwTexDictionary* RwTexDictionaryStreamWrite(const RwTexDictionary* texDict, RwStream* stream); // 0x5AB020 gta3
RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5BBFF0 gta3
rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList); // 0x5BC020 gta3
rwFrameList* _rwFrameListStreamRead(RwStream* stream, rwFrameList* fl); // 0x5BC050 gta3
RwBBox* RwBBoxCalculate(RwBBox* boundBox, const RwV3d* verts, RwInt32 numVerts); // 0x5C5570 gta3
RwCamera* RwCameraBeginUpdate(RwCamera* camera); // 0x5A5030 gta3
RwCamera* RwCameraEndUpdate(RwCamera* camera); // 0x5A5020 gta3
RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode); // 0x5A51E0 gta3
RwCamera* RwCameraShowRaster(RwCamera* camera, void* pDev, RwUInt32 flags); // 0x5A5210 gta3
RwBool RwCameraDestroy(RwCamera* camera); // 0x5A5320 gta3
RwCamera* RwCameraCreate(void); // 0x5A5360 gta3
RwCamera* RwCameraSetViewOffset(RwCamera* camera, const RwV2d* offset); // 0x5A5040 gta3
RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow); // 0x5A52B0 gta3
RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection); // 0x5A5240 gta3
RwCamera* RwCameraSetNearClipPlane(RwCamera* camera, RwReal nearClip); // 0x5A5070 gta3
RwCamera* RwCameraSetFarClipPlane(RwCamera* camera, RwReal farClip); // 0x5A5140 gta3
RwInt32 RwCameraRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5A52F0 gta3
RwFrustumTestResult RwCameraFrustumTestSphere(const RwCamera* camera, const RwSphere* sphere); // 0x5A5170 gta3
RwCamera* RwCameraStreamRead(RwStream* stream); // 0x5C3D30 gta3

/* rpworld.h */

RxNodeDefinition* RxNodeDefinitionGetD3D8WorldSectorAllInOne(void); // 0x5DAAC0 gta3
RxNodeDefinition* RxNodeDefinitionGetD3D8AtomicAllInOne(void); // 0x5DC500 gta3
RwBool _rxD3D8VertexBufferManagerCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32* baseIndex); // 0x5DAC30 gta3
void _rxD3D8VertexBufferManagerDestroy(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32 baseIndex); // 0x5DAEB0 gta3
RpMaterial* RpMaterialCreate(void); // 0x5ADC30 gta3
RwBool RpMaterialDestroy(RpMaterial* material); // 0x5ADCB0 gta3
RpMaterial* RpMaterialSetTexture(RpMaterial* material, RwTexture* texture); // 0x5ADD10 gta3
RwInt32 RpMaterialRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5ADD40 gta3
RwInt32 RpMaterialRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5ADD70 gta3
RpMaterial* RpMaterialStreamRead(RwStream* stream); // 0x5ADDA0 gta3
RpMaterialList* _rpMaterialListInitialize(RpMaterialList* matList); // 0x5C8B70 gta3
RpMaterialList* _rpMaterialListDeinitialize(RpMaterialList* matList); // 0x5C8B10 gta3
RpMaterial* _rpMaterialListGetMaterial(const RpMaterialList* matList, RwInt32 matIndex); // 0x5C8B80 gta3
RwInt32 _rpMaterialListAppendMaterial(RpMaterialList* matList, RpMaterial* material); // 0x5C8B90 gta3
RwInt32 _rpMaterialListFindMaterialIndex(const RpMaterialList* matList, const RpMaterial* material); // 0x5C8C50 gta3
RpMaterialList* _rpMaterialListStreamRead(RwStream* stream, RpMaterialList* matList); // 0x5C8C80 gta3
void* _rpMeshOpen(void* instance, RwInt32 offset, RwInt32 size); // 0x5C9020 gta3
void* _rpMeshClose(void* instance, RwInt32 offset, RwInt32 size); // 0x5C8FF0 gta3
RpBuildMesh* _rpBuildMeshCreate(RwUInt32 bufferSize); // 0x5C9140 gta3
RwBool _rpBuildMeshDestroy(RpBuildMesh* mesh); // 0x5C9220 gta3
RwBool _rpMeshDestroy(RpMeshHeader* mesh); // 0x5C9260 gta3
RpBuildMesh* _rpBuildMeshAddTriangle(RpBuildMesh* mesh, RpMaterial* material, RwInt32 vert1, RwInt32 vert2, RwInt32 vert3); // 0x5C92A0 gta3
RpMeshHeader* _rpMeshHeaderForAllMeshes(RpMeshHeader* meshHeader, RpMeshCallBack fpCallBack, void* pData); // 0x5C9380 gta3
RwStream* _rpMeshWrite(const RpMeshHeader* meshHeader, const void* object, RwStream* stream, const RpMaterialList* matList); // 0x5C93C0 gta3
RpMeshHeader* _rpMeshRead(RwStream* stream, const void* object, const RpMaterialList* matList); // 0x5C9510 gta3
RwInt32 _rpMeshSize(const RpMeshHeader* meshHeader, const void* object); // 0x5C96E0 gta3
RpMeshHeader* _rpMeshHeaderCreate(RwUInt32 size); // 0x5C8FE0 gta3
RwInt32 RpWorldSectorRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5CB2B0 gta3
RwInt32 RpWorldSectorRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5CB2E0 gta3
RpMeshHeader* RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh* buildmesh, void* data); // 0x5C9730 gta3
RpMeshHeader* _rpTriListMeshGenerate(RpBuildMesh* buildMesh, void* data); // 0x5CAE10 gta3
RpMeshHeader* _rpMeshOptimise(RpBuildMesh* buildmesh, RwUInt32 flags); // 0x5CB230 gta3
RpLight* RpLightCreate(RwInt32 type); // 0x5BC7C0 gta3
RwBool RpLightDestroy(RpLight* light); // 0x5BC780 gta3
RpLight* RpLightSetRadius(RpLight* light, RwReal radius); // 0x5BC300 gta3
RpLight* RpLightSetColor(RpLight* light, const RwRGBAReal* color); // 0x5BC320 gta3
RwReal RpLightGetConeAngle(const RpLight* light); // 0x5BC370 gta3
RpLight* RpLightStreamRead(RwStream* stream); // 0x5BC5E0 gta3
RwInt32 RpLightRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5BC5B0 gta3
RwBool _rwD3D8LightsOpen(void); // 0x5D9C90 gta3
RwBool _rwD3D8LightsGlobalEnable(RpLightFlag flags); // 0x5D9F80 gta3
RwBool _rwD3D8LightLocalEnable(RpLight* light); // 0x5DA210 gta3
void _rwD3D8LightsEnable(RwBool enable, RwUInt32 type); // 0x5DA450 gta3
void _rwD3D8LightsClose(void); // 0x5D9EF0 gta3
const RpMorphTarget* RpMorphTargetCalcBoundingSphere(const RpMorphTarget* morphTarget, RwSphere* boundingSphere); // 0x5AC890 gta3
RwInt32 RpGeometryAddMorphTargets(RpGeometry* geometry, RwInt32 mtcount); // 0x5AC9A0 gta3
//RwInt32 RpGeometryAddMorphTarget(RpGeometry* geometry); // 0x64CBF0
const RpGeometry* RpGeometryTriangleSetVertexIndices(const RpGeometry* geometry, RpTriangle* triangle, RwUInt16 vert1, RwUInt16 vert2, RwUInt16 vert3); // 0x5ACB60 gta3
RpGeometry* RpGeometryTriangleSetMaterial(RpGeometry* geometry, RpTriangle* triangle, RpMaterial* material); // 0x5ACB90 gta3
RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack, void* pData); // 0x5ACBF0 gta3
RpGeometry* RpGeometryLock(RpGeometry* geometry, RwInt32 lockMode); // 0x5ACC30 gta3
RpGeometry* RpGeometryUnlock(RpGeometry* geometry); // 0x5ACC60 gta3
RpGeometry* RpGeometryCreate(RwInt32 numVert, RwInt32 numTriangles, RwUInt32 format); // 0x5ACD10 gta3
RwBool RpGeometryDestroy(RpGeometry* geometry); // 0x5ACF50 gta3
RwInt32 RpGeometryRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5ACFF0 gta3
RwInt32 RpGeometryRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5AD020 gta3
RpGeometry* RpGeometryStreamRead(RwStream* stream); // 0x5AD050 gta3
void _rpAtomicResyncInterpolatedSphere(RpAtomic* atomic); // 0x59E6C0 gta3
const RwSphere* RpAtomicGetWorldBoundingSphere(RpAtomic* atomic); // 0x59E800 gta3
RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData); // 0x59EDD0 gta3
RpClump* RpClumpForAllLights(RpClump* clump, RpLightCallBack callback, void* pData); // 0x59EE60 gta3
RpClump* RpClumpForAllCameras(RpClump* clump, RwCameraCallBack callback, void* pData); // 0x59EE10 gta3
RpAtomic* RpAtomicSetFrame(RpAtomic* atomic, RwFrame* frame); // 0x5A0600 gta3
RpClump* RpClumpRender(RpClump* clump); // 0x59ED80 gta3
RpClump* RpClumpRemoveAtomic(RpClump* clump, RpAtomic* atomic); // 0x59F6B0 gta3
RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic); // 0x59F680 gta3
RpClump* RpClumpRemoveLight(RpClump* clump, RpLight* light); // 0x59F6E0 gta3
RwBool RpClumpDestroy(RpClump* clump); // 0x59F500 gta3
RpClump* RpClumpCreate(void); // 0x59F490 gta3
RpClump* RpClumpClone(RpClump* clump); // 0x59F1B0 gta3
RwBool RpAtomicDestroy(RpAtomic* atomic); // 0x59F020 gta3
RpAtomic* RpAtomicClone(RpAtomic* atomic); // 0x59F0A0 gta3
RpAtomic* RpAtomicCreate(void); // 0x59EEB0 gta3
RpAtomic* RpAtomicSetGeometry(RpAtomic* atomic, RpGeometry* geometry, RwUInt32 flags); // 0x59EFA0 gta3
RwInt32 RpClumpGetNumAtomics(RpClump* clump); // 0x59ED50 gta3
RpClump* RpClumpStreamRead(RwStream* stream); // 0x59FC50 gta3
RwInt32 RpAtomicRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5A0510 gta3
RwInt32 RpClumpRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5A0540 gta3
RwInt32 RpAtomicRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5A0570 gta3
RwInt32 RpAtomicSetStreamAlwaysCallBack(RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB); // 0x5A05A0 gta3
RwInt32 RpAtomicSetStreamRightsCallBack(RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB); // 0x5A05C0 gta3
RwInt32 RpAtomicGetPluginOffset(RwUInt32 pluginID); // 0x5A05E0 gta3
RpWorldSector* _rpSectorDefaultRenderCallBack(RpWorldSector* sector); // 0x5AE0B0 gta3
RpWorld* RpWorldUnlock(RpWorld* world); // 0x5AE190 gta3
RwBool RpWorldPluginAttach(void); // 0x5AEAA0 gta3
RwBool RpWorldDestroy(RpWorld* world); // 0x5AE340 gta3
RpWorld* RpWorldCreate(RwBBox* boundingBox); // 0x5AE6A0 gta3
RpWorld* RpWorldSectorGetWorld(const RpWorldSector* sector); // 0x5AE2B0 gta3
RwInt32 RpWorldRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x5AEA40 gta3
RwInt32 RpWorldRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x5AEA70 gta3
void RxD3D8AllInOneSetRenderCallBack(RxPipelineNode* node, RxD3D8AllInOneRenderCallBack callback); // 0x5DFC60 gta3
RxPipeline* RpWorldSetDefaultSectorPipeline(RxPipeline* pipeline); // 0x5CB630 gta3
RxPipeline* RpAtomicSetDefaultPipeline(RxPipeline* pipeline); // 0x5CB670 gta3
RpWorld* RpWorldRemoveCamera(RpWorld* world, RwCamera* camera); // 0x5AFBB0 gta3
RpWorld* RpWorldAddCamera(RpWorld* world, RwCamera* camera); // 0x5AFB80 gta3
RpWorld* RpAtomicGetWorld(const RpAtomic* atomic); // 0x5AFC10 gta3
RpWorld* RpWorldAddClump(RpWorld* world, RpClump* clump); // 0x5AFC20 gta3
RpWorld* RpWorldAddLight(RpWorld* world, RpLight* light); // 0x5AFDA0 gta3
RpWorld* RpWorldRemoveLight(RpWorld* world, RpLight* light); // 0x5AFDF0 gta3

/* rtquat.h */

//RtQuat* RtQuatRotate(RtQuat* quat, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp); // 0x65ABD0

/* rtanim.h */

//RwBool RtAnimInitialize(void); // 0x64D840
//RwBool RtAnimRegisterInterpolationScheme(RtAnimInterpolatorInfo* interpolatorInfo); // 0x64D8D0
//RtAnimAnimation* RtAnimAnimationCreate(RwInt32 typeID, RwInt32 numFrames, RwInt32 flags, RwReal duration); // 0x64D970
//RtAnimAnimation* RtAnimAnimationDestroy(RtAnimAnimation* animation); // 0x64DA20
//RtAnimInterpolator* RtAnimInterpolatorCreate(RwInt32 numNodes, RwInt32 maxKeyFrameSize); // 0x64DA60
//void RtAnimInterpolatorDestroy(RtAnimInterpolator* anim); // 0x64DAC0
RwBool RtAnimInterpolatorSetCurrentAnim(RtAnimInterpolator* animI, RtAnimAnimation* anim); // 0x5B1200 gta3

/* rphanim.h */

RpHAnimHierarchy* RpHAnimHierarchyCreate(RwInt32 numNodes, RwUInt32* nodeFlags, RwInt32* nodeIDs, RpHAnimHierarchyFlag flags, RwInt32 maxKeyFrameSize); // 0x5B10E0 gta3
RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame); // 0x5B11F0 gta3
//RwMatrix* RpHAnimHierarchyGetMatrixArray(RpHAnimHierarchy* hierarchy); // 0x646370
RwBool RpHAnimHierarchyUpdateMatrices(RpHAnimHierarchy* hierarchy); // 0x5B1780 gta3
//RwInt32 RpHAnimIDGetIndex(RpHAnimHierarchy* hierarchy, RwInt32 ID); // 0x646390
RwBool RpHAnimPluginAttach(void); // 0x5B1D50 gta3
void RpHAnimKeyFrameApply(void* matrix, void* voidIFrame); // 0x5CDEE0 gta3
void RpHAnimKeyFrameBlend(void* voidOut, void* voidIn1, void* voidIn2, RwReal alpha); // 0x5CE420 gta3
void RpHAnimKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, RwReal time); // 0x5CE000 gta3
void RpHAnimKeyFrameAdd(void* voidOut, void* voidIn1, void* voidIn2); // 0x5CEAB0 gta3
void RpHAnimKeyFrameMulRecip(void* voidFrame, void* voidStart); // 0x5CE950 gta3
RtAnimAnimation* RpHAnimKeyFrameStreamRead(RwStream* stream, RtAnimAnimation* animation); // 0x5CE820 gta3
RwBool RpHAnimKeyFrameStreamWrite(RtAnimAnimation* animation, RwStream* stream); // 0x5CE8C0 gta3
RwInt32 RpHAnimKeyFrameStreamGetSize(RtAnimAnimation* animation); // 0x5CE930 gta3

/* rpskin.h */

RwBool RpSkinPluginAttach(void); // 0x5B07D0 gta3
RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy); // 0x5B1050 gta3
RpHAnimHierarchy* RpSkinAtomicGetHAnimHierarchy(const RpAtomic* atomic); // 0x5B1070 gta3
RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin); // 0x5B1090 gta3
RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry); // 0x5B1080 gta3
//RwUInt32 RpSkinGetNumBones(RpSkin* skin); // 0x6499C0
//const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin); // 0x6499D0
const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin); // 0x5B10D0 gta3
RpGeometry* _rpSkinInitialize(RpGeometry* geometry); // 0x5CDC50 gta3
RpGeometry* _rpSkinDeinitialize(RpGeometry* geometry); // 0x5CDD30 gta3

/* rpmatfx.h */

RwBool RpMatFXPluginAttach(void); // 0x5B2640 gta3
RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic); // 0x5B3750 gta3
RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags); // 0x5B3780 gta3
RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture, RwFrame* frame, RwBool useFrameBufferAlpha, RwReal coef); // 0x5B38D0 gta3
//RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material); // 0x6572F0
RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture); // 0x5B3A40 gta3
//RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame); // 0x6574D0
//RwTexture* RpMatFXMaterialGetBumpMapBumpedTexture(const RpMaterial* material); // 0x657530
//RwReal RpMatFXMaterialGetEnvMapCoefficient(const RpMaterial* material); // 0x6575A0
//RpMaterial* RpMatFXMaterialSetDualTexture(RpMaterial* material, RwTexture* texture); // 0x6575F0

/* rpanisot.h */

//RwInt8 RpAnisotGetMaxSupportedMaxAnisotropy(void); // 0x657660
//RwTexture* RpAnisotTextureSetMaxAnisotropy(RwTexture* tex, RwInt8 val); // 0x657670
//RwInt8 RpAnisotTextureGetMaxAnisotropy(RwTexture* tex); // 0x6576A0
//RwBool RpAnisotPluginAttach(void); // 0x6576C0

/* rtbmp.h */

RwImage* RtBMPImageRead(const RwChar* imageName); // 0x5AFE70 gta3