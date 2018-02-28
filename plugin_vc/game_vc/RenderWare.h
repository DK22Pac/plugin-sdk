/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

// TODO: Clean up RW headers

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
    return *reinterpret_cast<T **>(0x7897A8);
}

/* rwplcore.h */

RwFreeList* _rwFreeListCreate(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, const RwChar* fileCreate, RwUInt32 lineCreate); // 0x665460
RwFreeList* RwFreeListCreateAndPreallocateSpace(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, RwInt32 numBlocksToPreallocate, RwFreeList* inPlaceSpaceForFreeListStruct); // 0x665620
RwBool RwFreeListDestroy(RwFreeList* freelist); // 0x665630
RwInt32 RwFreeListPurge(RwFreeList* freelist); // 0x6658A0
RwFreeList* RwFreeListForAllUsed(RwFreeList* freelist, RwFreeListCallBack fpCallBack, void* pData); // 0x665950
RwInt32 RwFreeListPurgeAllFreeLists(void); // 0x665A50
RwStream* RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, const void* pData); // 0x6459C0
RwBool RwStreamClose(RwStream* stream, void* pData); // 0x6458F0
RwUInt32 RwStreamRead(RwStream* stream, void* buffer, RwUInt32 length); // 0x6454B0
RwStream* RwStreamWrite(RwStream* stream, const void* buffer, RwUInt32 length); // 0x645610
RwStream* RwStreamSkip(RwStream* stream, RwUInt32 offset); // 0x6457D0
RwInt32 _rwPluginRegistryAddPlugin(RwPluginRegistry* reg, RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x669790
RwInt32 _rwPluginRegistryGetPluginOffset(const RwPluginRegistry* reg, RwUInt32 pluginID); // 0x669760
const RwPluginRegistry* _rwPluginRegistryInitObject(const RwPluginRegistry* reg, void* object); // 0x6699C0
const RwPluginRegistry* _rwPluginRegistryDeInitObject(const RwPluginRegistry* reg, void* object); // 0x669A20
const RwPluginRegistry* _rwPluginRegistryCopyObject(const RwPluginRegistry* reg, void* dstObject, const void* srcObject); // 0x669A50
RwInt32 _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB); // 0x669BE0
RwInt32 _rwPluginRegistryAddPlgnStrmRightsCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB); // 0x669C10
const RwPluginRegistry* _rwPluginRegistryReadDataChunks(const RwPluginRegistry* reg, RwStream* stream, void* object); // 0x669C40
const RwPluginRegistry* _rwPluginRegistryWriteDataChunks(const RwPluginRegistry* reg, RwStream* stream, const void* object); // 0x669E00
const RwPluginRegistry* _rwPluginRegistrySkipDataChunks(const RwPluginRegistry* reg, RwStream* stream); // 0x669ED0
RwInt32 _rwPluginRegistryGetSize(const RwPluginRegistry* reg, const void* object); // 0x669DC0
const RwPluginRegistry* _rwPluginRegistryInvokeRights(const RwPluginRegistry* reg, RwUInt32 id, void* obj, RwUInt32 extraData); // 0x669D70
RwBool RwMatrixDestroy(RwMatrix* mpMat); // 0x6445F0
RwMatrix* RwMatrixCreate(void); // 0x644620
RwMatrix* RwMatrixMultiply(RwMatrix* matrixOut, const RwMatrix* MatrixIn1, const RwMatrix* matrixIn2); // 0x6437C0
RwMatrix* RwMatrixTransform(RwMatrix* matrix, const RwMatrix* transform, RwOpCombineType combineOp); // 0x644470
RwMatrix* RwMatrixOrthoNormalize(RwMatrix* matrixOut, const RwMatrix* matrixIn); // 0x643830
RwMatrix* RwMatrixInvert(RwMatrix* matrixOut, const RwMatrix* matrixIn); // 0x643F40
RwMatrix* RwMatrixScale(RwMatrix* matrix, const RwV3d* scale, RwOpCombineType combineOp); // 0x644190
RwMatrix* RwMatrixTranslate(RwMatrix* matrix, const RwV3d* translation, RwOpCombineType combineOp); // 0x644320
RwMatrix* RwMatrixRotate(RwMatrix* matrix, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp); // 0x643EA0
RwMatrix* RwMatrixRotateOneMinusCosineSine(RwMatrix* matrix, const RwV3d* unitAxis, RwReal oneMinusCosine, RwReal sine, RwOpCombineType combineOp); // 0x643C10
RwMatrix* RwMatrixUpdate(RwMatrix* matrix); // 0x6437B0
RwMatrix* RwMatrixOptimize(RwMatrix* matrix, const RwMatrixTolerance* tolerance); // 0x6436F0
RwReal _rwMatrixDeterminant(const RwMatrix* matrix); // 0x6433E0
RwReal _rwMatrixNormalError(const RwMatrix* matrix); // 0x643490
RwReal _rwMatrixOrthogonalError(const RwMatrix* matrix); // 0x643430
RwReal _rwMatrixIdentityError(const RwMatrix* matrix); // 0x643520
RwReal RwV3dNormalize(RwV3d* out, const RwV3d* in); // 0x646F20
RwReal RwV3dLength(const RwV3d* in); // 0x647030
RwV3d* RwV3dTransformPoints(RwV3d* pointsOut, const RwV3d* pointsIn, RwInt32 numPoints, const RwMatrix* matrix); // 0x647160
RwV3d* RwV3dTransformVectors(RwV3d* vectorsOut, const RwV3d* vectorsIn, RwInt32 numPoints, const RwMatrix* matrix); // 0x647170
RwReal _rwSqrt(const RwReal num); // 0x6470A0
RwReal _rwInvSqrt(const RwReal num); // 0x647100
RwReal RwIm2DGetNearScreenZ(void); // 0x649B80
RwReal RwIm2DGetFarScreenZ(void); // 0x649B90
RwBool RwRenderStateGet(RwRenderState state, void* value); // 0x649BF0
RwBool RwRenderStateSet(RwRenderState state, void* value); // 0x649BA0
RwBool RwIm2DRenderLine(RwIm2DVertex* vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2); // 0x649C00
RwBool RwIm2DRenderPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices); // 0x649C10
RwBool RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices, RwImVertexIndex* indices, RwInt32 numIndices); // 0x649C20
RwBool RwEngineInit(const RwMemoryFunctions* memFuncs, RwUInt32 initFlags, RwUInt32 resArenaSize); // 0x642F40
RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor initCB, RwPluginObjectDestructor termCB); // 0x642A30
RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID); // 0x642A60
RwBool RwEngineOpen(RwEngineOpenParams* initParams); // 0x642D50
RwBool RwEngineStart(void); // 0x642C50
RwBool RwEngineStop(void); // 0x642C00
RwBool RwEngineClose(void); // 0x642CE0
RwBool RwEngineTerm(void); // 0x642F00
RwInt32 RwEngineGetNumSubSystems(void); // 0x642A80
RwSubSystemInfo* RwEngineGetSubSystemInfo(RwSubSystemInfo* subSystemInfo, RwInt32 subSystemIndex); // 0x642AB0
RwInt32 RwEngineGetCurrentSubSystem(void); // 0x642AE0
RwBool RwEngineSetSubSystem(RwInt32 subSystemIndex); // 0x642B10
RwInt32 RwEngineGetNumVideoModes(void); // 0x642B40
RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex); // 0x642B70
RwInt32 RwEngineGetCurrentVideoMode(void); // 0x642BA0
RwBool RwEngineSetVideoMode(RwInt32 modeIndex); // 0x642BD0
RwFileFunctions* RwOsGetFileInterface(void); // 0x663580
RwError* RwErrorGet(RwError* code); // 0x669B40
RwError* RwErrorSet(RwError* code); // 0x669AE0
RwInt32 _rwerror(RwInt32 code, ...); // 0x669B90
RwBool RwResourcesEmptyArena(void); // 0x669520
RwResEntry* RwResourcesAllocateResEntry(void* owner, RwResEntry* ownerRef, RwInt32 size, RwResEntryDestroyNotify destroyNotify); // 0x669330
RwBool RwResourcesFreeResEntry(RwResEntry* entry); // 0x669240
void _rwResourcesPurge(void); // 0x6692B0
RwBool RwStreamFindChunk(RwStream* stream, RwUInt32 type, RwUInt32* lengthOut, RwUInt32* versionOut); // 0x64FAC0
RwStream* _rwStreamWriteVersionedChunkHeader(RwStream* stream, RwInt32 type, RwInt32 size, RwUInt32 version, RwUInt32 buildNum); // 0x64FA60
RwStream* RwStreamWriteReal(RwStream* stream, const RwReal* reals, RwUInt32 numBytes); // 0x64FC20
RwStream* RwStreamWriteInt32(RwStream* stream, const RwInt32* ints, RwUInt32 numBytes); // 0x64FCC0
RwStream* RwStreamReadReal(RwStream* stream, RwReal* reals, RwUInt32 numBytes); // 0x64FCE0
RwStream* RwStreamReadInt32(RwStream* stream, RwInt32* ints, RwUInt32 numBytes); // 0x64FD50
void* RwMemLittleEndian32(void* mem, RwUInt32 size); // 0x64FBC0
void* RwMemNative32(void* mem, RwUInt32 size); // 0x64FBD0
void* RwMemRealToFloat32(void* mem, RwUInt32 size); // 0x64FBE0
void* RwMemFloat32ToReal(void* mem, RwUInt32 size); // 0x64FC00

/* rwcore.h */

RxHeap* RxHeapCreate(RwUInt32 size); // 0x676EB0
void RxHeapDestroy(RxHeap* heap); // 0x676E50
RwBool _rxHeapReset(RxHeap* heap); // 0x676DE0
void* RxHeapAlloc(RxHeap* heap, RwUInt32 size); // 0x676B70
void RxHeapFree(RxHeap* heap, void* block); // 0x676980
RwBool _rxPipelineOpen(void); // 0x668C10
RwBool _rxPipelineClose(void); // 0x668BB0
RxPipeline* RxPipelineCreate(void); // 0x668FC0
void _rxPipelineDestroy(RxPipeline* Pipeline); // 0x669030
RxHeap* RxHeapGetGlobalHeap(void); // 0x668F10
RxPipeline* RxPipelineExecute(RxPipeline* pipeline, void* data, RwBool heapReset); // 0x668F20
void _rxPacketDestroy(RxPacket* Packet); // 0x678510
RxPipelineNode* RxPipelineFindNodeByName(RxPipeline* pipeline, const RwChar* name, RxPipelineNode* start, RwInt32* nodeIndex); // 0x67AD70
RxLockedPipe* RxPipelineLock(RxPipeline* pipeline); // 0x67AC50
RxPipeline* RxLockedPipeUnlock(RxLockedPipe* pipeline); // 0x67A200
RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags); // 0x655490
RwBool RwRasterDestroy(RwRaster* raster); // 0x6552E0
RwInt32 RwRasterGetNumLevels(RwRaster* raster); // 0x655420
RwRaster* RwRasterRenderFast(RwRaster* raster, RwInt32 x, RwInt32 y); // 0x655270
RwRaster* RwRasterRender(RwRaster* raster, RwInt32 x, RwInt32 y); // 0x6552B0
RwRaster* RwRasterPushContext(RwRaster* raster); // 0x655320
RwRaster* RwRasterPopContext(void); // 0x6553D0
RwRaster* RwRasterGetCurrentContext(void); // 0x655230
RwRaster* RwRasterShowRaster(RwRaster* raster, void* dev, RwUInt32 flags); // 0x655460
RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode); // 0x655530
RwRaster* RwRasterUnlock(RwRaster* raster); // 0x655250
RwUInt8* RwRasterLockPalette(RwRaster* raster, RwInt32 lockMode); // 0x6553A0
RwInt32 RwRasterRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x655370
RxRenderStateVector* RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector* rsvp); // 0x678420
RwImage* RwImageCreate(RwInt32 width, RwInt32 height, RwInt32 depth); // 0x651250
RwBool RwImageDestroy(RwImage* image); // 0x6512B0
RwImage* RwImageAllocatePixels(RwImage* image); // 0x651310
RwImage* RwImageFreePixels(RwImage* image); // 0x6513D0
RwImage* RwImageCopy(RwImage* destImage, const RwImage* sourceImage); // 0x652080
RwImage* RwImageApplyMask(RwImage* image, const RwImage* mask); // 0x6514D0
RwImage* RwImageMakeMask(RwImage* image); // 0x651400
RwImage* RwImageReadMaskedImage(const RwChar* imageName, const RwChar* maskname); // 0x651D40
RwImage* RwImageRead(const RwChar* imageName); // 0x651940
const RwChar* RwImageSetPath(const RwChar* path); // 0x651880
RwBool RwImageSetGamma(RwReal gammaValue); // 0x6523F0
RwImage* RwImageGammaCorrect(RwImage* image); // 0x652260
const RwChar* RwImageFindFileType(const RwChar* imageName); // 0x651C70
RwBool RwTextureSetMipmapping(RwBool enable); // 0x64DC90
RwBool RwTextureGetMipmapping(void); // 0x64DCB0
RwBool RwTextureSetAutoMipmapping(RwBool enable); // 0x64DC60
RwBool RwTextureGetAutoMipmapping(void); // 0x64DC80
RwBool RwTextureRasterGenerateMipmaps(RwRaster* raster, RwImage* image); // 0x64E340
RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name); // 0x64DF40
RwTexture* RwTextureSetMaskName(RwTexture* texture, const RwChar* maskName); // 0x64DFB0
RwTexDictionary* RwTexDictionaryCreate(void); // 0x64DCF0
RwBool RwTexDictionaryDestroy(RwTexDictionary* dict); // 0x64DD90
RwTexture* RwTextureCreate(RwRaster* raster); // 0x64DE60
RwBool RwTextureDestroy(RwTexture* texture); // 0x64DEC0
RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster); // 0x64DCC0
RwTexture* RwTexDictionaryAddTexture(RwTexDictionary* dict, RwTexture* texture); // 0x64E020
RwTexture* RwTexDictionaryFindNamedTexture(RwTexDictionary* dict, const RwChar* name); // 0x64E060
RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName); // 0x64E110
RwTexDictionary* RwTexDictionaryGetCurrent(void); // 0x64E100
RwTexDictionary* RwTexDictionarySetCurrent(RwTexDictionary* dict); // 0x64E0E0
const RwTexDictionary* RwTexDictionaryForAllTextures(const RwTexDictionary* dict, RwTextureCallBack fpCallBack, void* pData); // 0x64DE20
RwInt32 RwTextureRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x64E310
void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm, RwUInt32 flags); // 0x65AE90
RwBool RwIm3DEnd(void); // 0x65AF60
RwBool RwIm3DRenderLine(RwInt32 vert1, RwInt32 vert2); // 0x65B0F0
RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices, RwInt32 numIndices); // 0x65AF90
RxPipeline* RwIm3DSetTransformPipeline(RxPipeline* pipeline); // 0x65B1C0
RxPipeline* RwIm3DSetRenderPipeline(RxPipeline* pipeline, RwPrimitiveType primType); // 0x65B210
RwBool RwD3D8DeviceSupportsDXTTexture(void); // 0x65F1F0
void* RwD3D8GetCurrentD3DDevice(void); // 0x65F140
void RwD3D8EngineSetRefreshRate(RwUInt32 refreshRate); // 0x65DBC0
RwBool RwD3D8CameraAttachWindow(void* camera, void* hwnd); // 0x65DC30
RwBool RwD3D8SetVertexShader(RwUInt32 handle); // 0x65F2F0
RwBool RwD3D8SetPixelShader(RwUInt32 handle); // 0x65F330
RwBool RwD3D8SetStreamSource(RwUInt32 streamNumber, void* streamData, RwUInt32 stride); // 0x65F370
RwBool RwD3D8SetIndices(void* indexData, RwUInt32 baseVertexIndex); // 0x65F3C0
RwBool RwD3D8DrawIndexedPrimitive(RwUInt32 primitiveType, RwUInt32 minIndex, RwUInt32 numVertices, RwUInt32 startIndex, RwUInt32 numIndices); // 0x65F410
RwBool RwD3D8DrawPrimitive(RwUInt32 primitiveType, RwUInt32 startVertex, RwUInt32 numVertices); // 0x65F4A0
RwBool RwD3D8SetTexture(RwTexture* texture, RwUInt32 stage); // 0x659850
RwBool RwD3D8SetRenderState(RwUInt32 state, RwUInt32 value); // 0x6582A0
RwBool RwD3D8SetTextureStageState(RwUInt32 stage, RwUInt32 type, RwUInt32 value); // 0x658310
RwBool RwD3D8SetTransform(RwUInt32 state, const void* matrix); // 0x65F530
void RwD3D8GetRenderState(RwUInt32 state, void* value); // 0x6582F0
void RwD3D8GetTransform(RwUInt32 state, void* matrix); // 0x65F670
RwBool RwD3D8SetTransformWorld(const RwMatrix* matrix); // 0x65F6A0
RwBool RwD3D8SetSurfaceProperties(const RwRGBA* color, const RwSurfaceProperties* surfaceProps, RwBool modulate); // 0x65F7F0
RwBool RwD3D8SetLight(RwInt32 index, const void* light); // 0x65FB20
RwBool RwD3D8EnableLight(RwInt32 index, RwBool enable); // 0x65FC10
RwBool RwD3D8DynamicVertexBufferCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer); // 0x65FD70
void RwD3D8DynamicVertexBufferDestroy(void); // 0x65FE60
RwBool RwD3D8DynamicVertexBufferLock(RwUInt32 vertexSize, RwUInt32 numVertex, void* vertexBufferOut, void* vertexDataOut, RwUInt32* baseIndexOut); // 0x6600A0
RwBool RwD3D8DynamicVertexBufferUnlock(void); // 0x660220
RwBool RwD3D8IndexBufferCreate(RwUInt32 numIndices, void* indexBuffer); // 0x640230
RwBool RwD3D8CreatePixelShader(const RwUInt32* function, RwUInt32* handle); // 0x65FE90
void RwD3D8DeletePixelShader(RwUInt32 handle); // 0x65FF00
RwBool RwD3D8SetPixelShaderConstant(RwUInt32 registerAddress, const void* constantData, RwUInt32 constantCount); // 0x65FF70
const void* RwD3D8GetCaps(void); // 0x65FFA0
RwBool RwD3D8CameraIsSphereFullyInsideFrustum(const void* camera, const void* sphere); // 0x65FFB0
RwBool RwD3D8CameraIsBBoxFullyInsideFrustum(const void* camera, const void* boundingBox); // 0x660010
void _rwD3D8TexDictionaryEnableRasterFormatConversion(RwBool enable); // 0x63EFD0
RwBool _rwDeviceRegisterPlugin(void); // 0x65B5C0
RwImage* RwImageResample(RwImage* dstImage, const RwImage* srcImage); // 0x671D80
RwImage* RwImageCreateResample(const RwImage* srcImage, RwInt32 width, RwInt32 height); // 0x672490
RwImage* RwImageSetFromRaster(RwImage* image, RwRaster* raster); // 0x660270
RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image); // 0x6602B0
RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth, RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat); // 0x6602E0
RwFrame* RwFrameForAllObjects(RwFrame* frame, RwObjectCallBack callBack, void* data); // 0x6453B0
RwFrame* RwFrameTranslate(RwFrame* frame, const RwV3d* v, RwOpCombineType combine); // 0x6450A0
RwFrame* RwFrameRotate(RwFrame* frame, const RwV3d* axis, RwReal angle, RwOpCombineType combine); // 0x645280
RwFrame* RwFrameScale(RwFrame* frame, const RwV3d* v, RwOpCombineType combine); // 0x645140
RwFrame* RwFrameTransform(RwFrame* frame, const RwMatrix* m, RwOpCombineType combine); // 0x6451E0
RwFrame* RwFrameOrthoNormalize(RwFrame* frame); // 0x645320
RwBool RwFrameDestroyHierarchy(RwFrame* frame); // 0x644C90
RwFrame* RwFrameForAllChildren(RwFrame* frame, RwFrameCallBack callBack, void* data); // 0x645060
RwFrame* RwFrameRemoveChild(RwFrame* child); // 0x644F70
RwFrame* RwFrameAddChild(RwFrame* parent, RwFrame* child); // 0x644DA0
RwMatrix* RwFrameGetLTM(RwFrame* frame); // 0x644D80
RwFrame* RwFrameUpdateObjects(RwFrame* frame); // 0x644D00
RwFrame* RwFrameCreate(void); // 0x644AA0
RwBool RwFrameDestroy(RwFrame* frame); // 0x644AD0
RwBool RwFrameDirty(const RwFrame* frame); // 0x6449D0
RwInt32 RwFrameRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x6453F0
RwFrame* _rwFrameCloneAndLinkClones(RwFrame* root); // 0x644730
RwFrame* _rwFramePurgeClone(RwFrame* root); // 0x644920
void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame); // 0x660CC0
void _rwObjectHasFrameReleaseFrame(void); // 0x660D10
RwInt32 RwTextureRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x650480
RwUInt32 RwTextureStreamGetSize(const RwTexture* texture); // 0x6504B0
RwTexture* RwTextureStreamRead(RwStream* stream); // 0x6506F0
const RwTexture* RwTextureStreamWrite(const RwTexture* texture, RwStream* stream); // 0x650520
RwTexDictionary* RwTexDictionaryStreamRead(RwStream* stream); // 0x61E710
const RwTexDictionary* RwTexDictionaryStreamWrite(const RwTexDictionary* texDict, RwStream* stream); // 0x650CD0
RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x660350
rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList); // 0x660380
rwFrameList* _rwFrameListStreamRead(RwStream* stream, rwFrameList* fl); // 0x6603B0
RwBBox* RwBBoxCalculate(RwBBox* boundBox, const RwV3d* verts, RwInt32 numVerts); // 0x66D8B0
RwCamera* RwCameraBeginUpdate(RwCamera* camera); // 0x64A820
RwCamera* RwCameraEndUpdate(RwCamera* camera); // 0x64A810
RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode); // 0x64A9D0
RwCamera* RwCameraShowRaster(RwCamera* camera, void* pDev, RwUInt32 flags); // 0x64AA00
RwBool RwCameraDestroy(RwCamera* camera); // 0x64AB10
RwCamera* RwCameraCreate(void); // 0x64AB50
RwCamera* RwCameraSetViewOffset(RwCamera* camera, const RwV2d* offset); // 0x64A830
RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow); // 0x64AAA0
RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection); // 0x64AA30
RwCamera* RwCameraSetNearClipPlane(RwCamera* camera, RwReal nearClip); // 0x64A860
RwCamera* RwCameraSetFarClipPlane(RwCamera* camera, RwReal farClip); // 0x64A930
RwInt32 RwCameraRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x64AAE0
RwFrustumTestResult RwCameraFrustumTestSphere(const RwCamera* camera, const RwSphere* sphere); // 0x64A960
RwCamera* RwCameraStreamRead(RwStream* stream); // 0x669F50

/* rpworld.h */

RxNodeDefinition* RxNodeDefinitionGetD3D8WorldSectorAllInOne(void); // 0x67B6C0
RxNodeDefinition* RxNodeDefinitionGetD3D8AtomicAllInOne(void); // 0x67CB90
RwBool _rxD3D8VertexBufferManagerCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32* baseIndex); // 0x667780
void _rxD3D8VertexBufferManagerDestroy(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32 baseIndex); // 0x667A40
RpMaterial* RpMaterialCreate(void); // 0x6557B0
RwBool RpMaterialDestroy(RpMaterial* material); // 0x655830
RpMaterial* RpMaterialSetTexture(RpMaterial* material, RwTexture* texture); // 0x655890
RwInt32 RpMaterialRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x6558C0
RwInt32 RpMaterialRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x6558F0
RpMaterial* RpMaterialStreamRead(RwStream* stream); // 0x655920
RpMaterialList* _rpMaterialListInitialize(RpMaterialList* matList); // 0x66DA10
RpMaterialList* _rpMaterialListDeinitialize(RpMaterialList* matList); // 0x66D9B0
RpMaterial* _rpMaterialListGetMaterial(const RpMaterialList* matList, RwInt32 matIndex); // 0x66DA20
RwInt32 _rpMaterialListAppendMaterial(RpMaterialList* matList, RpMaterial* material); // 0x66DA30
RwInt32 _rpMaterialListFindMaterialIndex(const RpMaterialList* matList, const RpMaterial* material); // 0x66DAF0
RpMaterialList* _rpMaterialListStreamRead(RwStream* stream, RpMaterialList* matList); // 0x66DB20
void* _rpMeshOpen(void* instance, RwInt32 offset, RwInt32 size); // 0x66DEC0
void* _rpMeshClose(void* instance, RwInt32 offset, RwInt32 size); // 0x66DE90
RpBuildMesh* _rpBuildMeshCreate(RwUInt32 bufferSize); // 0x66DFE0
RwBool _rpBuildMeshDestroy(RpBuildMesh* mesh); // 0x66E0C0
RwBool _rpMeshDestroy(RpMeshHeader* mesh); // 0x66E100
RpBuildMesh* _rpBuildMeshAddTriangle(RpBuildMesh* mesh, RpMaterial* material, RwInt32 vert1, RwInt32 vert2, RwInt32 vert3); // 0x66E140
RpMeshHeader* _rpMeshHeaderForAllMeshes(RpMeshHeader* meshHeader, RpMeshCallBack fpCallBack, void* pData); // 0x66E220
RwStream* _rpMeshWrite(const RpMeshHeader* meshHeader, const void* object, RwStream* stream, const RpMaterialList* matList); // 0x66E260
RpMeshHeader* _rpMeshRead(RwStream* stream, const void* object, const RpMaterialList* matList); // 0x66E3B0
RwInt32 _rpMeshSize(const RpMeshHeader* meshHeader, const void* object); // 0x66E580
RpMeshHeader* _rpMeshHeaderCreate(RwUInt32 size); // 0x66DE80
RwInt32 RpWorldSectorRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x6736C0
RwInt32 RpWorldSectorRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x6736F0
RpMeshHeader* RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh* buildmesh, void* data); // 0x66E5D0
RpMeshHeader* _rpTriListMeshGenerate(RpBuildMesh* buildMesh, void* data); // 0x66FCC0
RpMeshHeader* _rpMeshOptimise(RpBuildMesh* buildmesh, RwUInt32 flags); // 0x6700E0
RpLight* RpLightCreate(RwInt32 type); // 0x660B20
RwBool RpLightDestroy(RpLight* light); // 0x660AE0
RpLight* RpLightSetRadius(RpLight* light, RwReal radius); // 0x660660
RpLight* RpLightSetColor(RpLight* light, const RwRGBAReal* color); // 0x660680
RwReal RpLightGetConeAngle(const RpLight* light); // 0x6606D0
RpLight* RpLightStreamRead(RwStream* stream); // 0x660940
RwInt32 RpLightRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x660910
RwBool _rwD3D8LightsOpen(void); // 0x679870
RwBool _rwD3D8LightsGlobalEnable(RpLightFlag flags); // 0x679B60
RwBool _rwD3D8LightLocalEnable(RpLight* light); // 0x679D50
void _rwD3D8LightsEnable(RwBool enable, RwUInt32 type); // 0x679FC0
void _rwD3D8LightsClose(void); // 0x679AD0
const RpMorphTarget* RpMorphTargetCalcBoundingSphere(const RpMorphTarget* morphTarget, RwSphere* boundingSphere); // 0x64C920
RwInt32 RpGeometryAddMorphTargets(RpGeometry* geometry, RwInt32 mtcount); // 0x64CA30
RwInt32 RpGeometryAddMorphTarget(RpGeometry* geometry); // 0x64CBF0
const RpGeometry* RpGeometryTriangleSetVertexIndices(const RpGeometry* geometry, RpTriangle* triangle, RwUInt16 vert1, RwUInt16 vert2, RwUInt16 vert3); // 0x64CC00
RpGeometry* RpGeometryTriangleSetMaterial(RpGeometry* geometry, RpTriangle* triangle, RpMaterial* material); // 0x64CC30
RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack, void* pData); // 0x64CC90
RpGeometry* RpGeometryLock(RpGeometry* geometry, RwInt32 lockMode); // 0x64CCD0
RpGeometry* RpGeometryUnlock(RpGeometry* geometry); // 0x64CD00
RpGeometry* RpGeometryCreate(RwInt32 numVert, RwInt32 numTriangles, RwUInt32 format); // 0x64CDB0
RwBool RpGeometryDestroy(RpGeometry* geometry); // 0x64CFE0
RwInt32 RpGeometryRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x64D080
RwInt32 RpGeometryRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x64D0B0
RpGeometry* RpGeometryStreamRead(RwStream* stream); // 0x64D0E0
void _rpAtomicResyncInterpolatedSphere(RpAtomic* atomic); // 0x6405D0
const RwSphere* RpAtomicGetWorldBoundingSphere(RpAtomic* atomic); // 0x640710
RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData); // 0x640D00
RpClump* RpClumpForAllLights(RpClump* clump, RpLightCallBack callback, void* pData); // 0x640D90
RpClump* RpClumpForAllCameras(RpClump* clump, RwCameraCallBack callback, void* pData); // 0x640D40
RpAtomic* RpAtomicSetFrame(RpAtomic* atomic, RwFrame* frame); // 0x6423C0
RpClump* RpClumpRender(RpClump* clump); // 0x640CB0
RpClump* RpClumpRemoveAtomic(RpClump* clump, RpAtomic* atomic); // 0x6415E0
RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic); // 0x6415B0
RpClump* RpClumpRemoveLight(RpClump* clump, RpLight* light); // 0x641610
RwBool RpClumpDestroy(RpClump* clump); // 0x641430
RpClump* RpClumpCreate(void); // 0x6413C0
RpClump* RpClumpClone(RpClump* clump); // 0x6410E0
RwBool RpAtomicDestroy(RpAtomic* atomic); // 0x640F50
RpAtomic* RpAtomicClone(RpAtomic* atomic); // 0x640FD0
RpAtomic* RpAtomicCreate(void); // 0x640DE0
RpAtomic* RpAtomicSetGeometry(RpAtomic* atomic, RpGeometry* geometry, RwUInt32 flags); // 0x640ED0
RwInt32 RpClumpGetNumAtomics(RpClump* clump); // 0x640C80
RpClump* RpClumpStreamRead(RwStream* stream); // 0x641A10
RwInt32 RpAtomicRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x6422D0
RwInt32 RpClumpRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x642300
RwInt32 RpAtomicRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x642330
RwInt32 RpAtomicSetStreamAlwaysCallBack(RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB); // 0x642360
RwInt32 RpAtomicSetStreamRightsCallBack(RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB); // 0x642380
RwInt32 RpAtomicGetPluginOffset(RwUInt32 pluginID); // 0x6423A0
RpWorldSector* _rpSectorDefaultRenderCallBack(RpWorldSector* sector); // 0x654750
RpWorld* RpWorldUnlock(RpWorld* world); // 0x6547A0
RwBool RpWorldPluginAttach(void); // 0x655070
RwBool RpWorldDestroy(RpWorld* world); // 0x654950
RpWorld* RpWorldCreate(RwBBox* boundingBox); // 0x654C90
RpWorld* RpWorldSectorGetWorld(const RpWorldSector* sector); // 0x6548C0
RwInt32 RpWorldRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB); // 0x655010
RwInt32 RpWorldRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB); // 0x655040
void RxD3D8AllInOneSetRenderCallBack(RxPipelineNode* node, RxD3D8AllInOneRenderCallBack callback); // 0x678E30
RxPipeline* RpWorldSetDefaultSectorPipeline(RxPipeline* pipeline); // 0x673470
RxPipeline* RpAtomicSetDefaultPipeline(RxPipeline* pipeline); // 0x6734A0
RpWorld* RpWorldRemoveCamera(RpWorld* world, RwCamera* camera); // 0x654490
RpWorld* RpWorldAddCamera(RpWorld* world, RwCamera* camera); // 0x654460
RpWorld* RpAtomicGetWorld(const RpAtomic* atomic); // 0x6544F0
RpWorld* RpWorldAddClump(RpWorld* world, RpClump* clump); // 0x654500
RpWorld* RpWorldAddLight(RpWorld* world, RpLight* light); // 0x654680
RpWorld* RpWorldRemoveLight(RpWorld* world, RpLight* light); // 0x6546D0

/* rtquat.h */

RtQuat* RtQuatRotate(RtQuat* quat, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp); // 0x65ABD0

/* rtanim.h */

RwBool RtAnimInitialize(void); // 0x64D840
RwBool RtAnimRegisterInterpolationScheme(RtAnimInterpolatorInfo* interpolatorInfo); // 0x64D8D0
RtAnimAnimation* RtAnimAnimationCreate(RwInt32 typeID, RwInt32 numFrames, RwInt32 flags, RwReal duration); // 0x64D970
RtAnimAnimation* RtAnimAnimationDestroy(RtAnimAnimation* animation); // 0x64DA20
RtAnimInterpolator* RtAnimInterpolatorCreate(RwInt32 numNodes, RwInt32 maxKeyFrameSize); // 0x64DA60
void RtAnimInterpolatorDestroy(RtAnimInterpolator* anim); // 0x64DAC0
RwBool RtAnimInterpolatorSetCurrentAnim(RtAnimInterpolator* animI, RtAnimAnimation* anim); // 0x64DAD0

/* rphanim.h */

RpHAnimHierarchy* RpHAnimHierarchyCreate(RwInt32 numNodes, RwUInt32* nodeFlags, RwInt32* nodeIDs, RpHAnimHierarchyFlag flags, RwInt32 maxKeyFrameSize); // 0x646280
RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame); // 0x646380
RwMatrix* RpHAnimHierarchyGetMatrixArray(RpHAnimHierarchy* hierarchy); // 0x646370
RwBool RpHAnimHierarchyUpdateMatrices(RpHAnimHierarchy* hierarchy); // 0x6463C0
RwInt32 RpHAnimIDGetIndex(RpHAnimHierarchy* hierarchy, RwInt32 ID); // 0x646390
RwBool RpHAnimPluginAttach(void); // 0x645C80
void RpHAnimKeyFrameApply(void* matrix, void* voidIFrame); // 0x66A8A0
void RpHAnimKeyFrameBlend(void* voidOut, void* voidIn1, void* voidIn2, RwReal alpha); // 0x66ADE0
void RpHAnimKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, RwReal time); // 0x66A9C0
void RpHAnimKeyFrameAdd(void* voidOut, void* voidIn1, void* voidIn2); // 0x66B440
void RpHAnimKeyFrameMulRecip(void* voidFrame, void* voidStart); // 0x66B2E0
RtAnimAnimation* RpHAnimKeyFrameStreamRead(RwStream* stream, RtAnimAnimation* animation); // 0x66B1E0
RwBool RpHAnimKeyFrameStreamWrite(RtAnimAnimation* animation, RwStream* stream); // 0x66B260
RwInt32 RpHAnimKeyFrameStreamGetSize(RtAnimAnimation* animation); // 0x66B2D0

/* rpskin.h */

RwBool RpSkinPluginAttach(void); // 0x648C50
RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy); // 0x649930
RpHAnimHierarchy* RpSkinAtomicGetHAnimHierarchy(const RpAtomic* atomic); // 0x649950
RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin); // 0x649970
RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry); // 0x649960
RwUInt32 RpSkinGetNumBones(RpSkin* skin); // 0x6499C0
const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin); // 0x6499D0
const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin); // 0x6499E0
RpGeometry* _rpSkinInitialize(RpGeometry* geometry); // 0x66D410
RpGeometry* _rpSkinDeinitialize(RpGeometry* geometry); // 0x66D4F0

/* rpmatfx.h */

RwBool RpMatFXPluginAttach(void); // 0x655EB0
RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic); // 0x657020
RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags); // 0x657050
RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture, RwFrame* frame, RwBool useFrameBufferAlpha, RwReal coef); // 0x657180
RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material); // 0x6572F0
RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture); // 0x657310
RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame); // 0x6574D0
RwTexture* RpMatFXMaterialGetBumpMapBumpedTexture(const RpMaterial* material); // 0x657530
RwReal RpMatFXMaterialGetEnvMapCoefficient(const RpMaterial* material); // 0x6575A0
RpMaterial* RpMatFXMaterialSetDualTexture(RpMaterial* material, RwTexture* texture); // 0x6575F0

/* rpanisot.h */

RwInt8 RpAnisotGetMaxSupportedMaxAnisotropy(void); // 0x657660
RwTexture* RpAnisotTextureSetMaxAnisotropy(RwTexture* tex, RwInt8 val); // 0x657670
RwInt8 RpAnisotTextureGetMaxAnisotropy(RwTexture* tex); // 0x6576A0
RwBool RpAnisotPluginAttach(void); // 0x6576C0

/* rtbmp.h */

RwImage* RtBMPImageRead(const RwChar* imageName); // 0x657870

#define RWRSTATE(a) (reinterpret_cast<void *>(a))