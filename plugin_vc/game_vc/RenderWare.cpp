/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "RenderWare.h"

RwGlobals *&RwEngineInstance = *(RwGlobals **)0x7870C0;

RsGlobalType &RsGlobal = *(RsGlobalType *)0x9B48D8;

/* rwplcore.h */

RwFreeList* _rwFreeListCreate(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, const RwChar* fileCreate, RwUInt32 lineCreate) {
    return ((RwFreeList*(__cdecl *)(RwInt32, RwInt32, RwInt32, const RwChar*, RwUInt32))0x665460)(entrySize, entriesPerBlock, alignment, fileCreate, lineCreate);
}

RwFreeList* RwFreeListCreateAndPreallocateSpace(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment, RwInt32 numBlocksToPreallocate, RwFreeList* inPlaceSpaceForFreeListStruct) {
    return ((RwFreeList*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwInt32, RwFreeList*))0x665620)(entrySize, entriesPerBlock, alignment, numBlocksToPreallocate, inPlaceSpaceForFreeListStruct);
}

RwBool RwFreeListDestroy(RwFreeList* freelist) {
    return ((RwBool(__cdecl *)(RwFreeList*))0x665630)(freelist);
}

RwInt32 RwFreeListPurge(RwFreeList* freelist) {
    return ((RwInt32(__cdecl *)(RwFreeList*))0x6658A0)(freelist);
}

RwFreeList* RwFreeListForAllUsed(RwFreeList* freelist, RwFreeListCallBack fpCallBack, void* pData) {
    return ((RwFreeList*(__cdecl *)(RwFreeList*, RwFreeListCallBack, void*))0x665950)(freelist, fpCallBack, pData);
}

RwInt32 RwFreeListPurgeAllFreeLists(void) {
    return ((RwInt32(__cdecl *)(void))0x665A50)();
}

RwStream* RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, const void* pData) {
    return ((RwStream*(__cdecl *)(RwStreamType, RwStreamAccessType, const void*))0x6459C0)(type, accessType, pData);
}

RwBool RwStreamClose(RwStream* stream, void* pData) {
    return ((RwBool(__cdecl *)(RwStream*, void*))0x6458F0)(stream, pData);
}

RwUInt32 RwStreamRead(RwStream* stream, void* buffer, RwUInt32 length) {
    return ((RwUInt32(__cdecl *)(RwStream*, void*, RwUInt32))0x6454B0)(stream, buffer, length);
}

RwStream* RwStreamWrite(RwStream* stream, const void* buffer, RwUInt32 length) {
    return ((RwStream*(__cdecl *)(RwStream*, const void*, RwUInt32))0x645610)(stream, buffer, length);
}

RwStream* RwStreamSkip(RwStream* stream, RwUInt32 offset) {
    return ((RwStream*(__cdecl *)(RwStream*, RwUInt32))0x6457D0)(stream, offset);
}

RwInt32 _rwPluginRegistryAddPlugin(RwPluginRegistry* reg, RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x669790)(reg, size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 _rwPluginRegistryGetPluginOffset(const RwPluginRegistry* reg, RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(const RwPluginRegistry*, RwUInt32))0x669760)(reg, pluginID);
}

const RwPluginRegistry* _rwPluginRegistryInitObject(const RwPluginRegistry* reg, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*))0x6699C0)(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryDeInitObject(const RwPluginRegistry* reg, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*))0x669A20)(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryCopyObject(const RwPluginRegistry* reg, void* dstObject, const void* srcObject) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, void*, const void*))0x669A50)(reg, dstObject, srcObject);
}

RwInt32 _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwUInt32, RwPluginDataChunkAlwaysCallBack))0x669BE0)(reg, pluginID, alwaysCB);
}

RwInt32 _rwPluginRegistryAddPlgnStrmRightsCB(RwPluginRegistry* reg, RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB) {
    return ((RwInt32(__cdecl *)(RwPluginRegistry*, RwUInt32, RwPluginDataChunkRightsCallBack))0x669C10)(reg, pluginID, rightsCB);
}

const RwPluginRegistry* _rwPluginRegistryReadDataChunks(const RwPluginRegistry* reg, RwStream* stream, void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*, void*))0x669C40)(reg, stream, object);
}

const RwPluginRegistry* _rwPluginRegistryWriteDataChunks(const RwPluginRegistry* reg, RwStream* stream, const void* object) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*, const void*))0x669E00)(reg, stream, object);
}

const RwPluginRegistry* _rwPluginRegistrySkipDataChunks(const RwPluginRegistry* reg, RwStream* stream) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwStream*))0x669ED0)(reg, stream);
}

RwInt32 _rwPluginRegistryGetSize(const RwPluginRegistry* reg, const void* object) {
    return ((RwInt32(__cdecl *)(const RwPluginRegistry*, const void*))0x669DC0)(reg, object);
}

const RwPluginRegistry* _rwPluginRegistryInvokeRights(const RwPluginRegistry* reg, RwUInt32 id, void* obj, RwUInt32 extraData) {
    return ((const RwPluginRegistry*(__cdecl *)(const RwPluginRegistry*, RwUInt32, void*, RwUInt32))0x669D70)(reg, id, obj, extraData);
}

RwBool RwMatrixDestroy(RwMatrix* mpMat) {
    return ((RwBool(__cdecl *)(RwMatrix*))0x6445F0)(mpMat);
}

RwMatrix* RwMatrixCreate(void) {
    return ((RwMatrix*(__cdecl *)(void))0x644620)();
}

RwMatrix* RwMatrixMultiply(RwMatrix* matrixOut, const RwMatrix* MatrixIn1, const RwMatrix* matrixIn2) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*, const RwMatrix*))0x6437C0)(matrixOut, MatrixIn1, matrixIn2);
}

RwMatrix* RwMatrixTransform(RwMatrix* matrix, const RwMatrix* transform, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*, RwOpCombineType))0x644470)(matrix, transform, combineOp);
}

RwMatrix* RwMatrixOrthoNormalize(RwMatrix* matrixOut, const RwMatrix* matrixIn) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*))0x643830)(matrixOut, matrixIn);
}

RwMatrix* RwMatrixInvert(RwMatrix* matrixOut, const RwMatrix* matrixIn) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrix*))0x643F40)(matrixOut, matrixIn);
}

RwMatrix* RwMatrixScale(RwMatrix* matrix, const RwV3d* scale, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwOpCombineType))0x644190)(matrix, scale, combineOp);
}

RwMatrix* RwMatrixTranslate(RwMatrix* matrix, const RwV3d* translation, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwOpCombineType))0x644320)(matrix, translation, combineOp);
}

RwMatrix* RwMatrixRotate(RwMatrix* matrix, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwReal, RwOpCombineType))0x643EA0)(matrix, axis, angle, combineOp);
}

RwMatrix* RwMatrixRotateOneMinusCosineSine(RwMatrix* matrix, const RwV3d* unitAxis, RwReal oneMinusCosine, RwReal sine, RwOpCombineType combineOp) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwV3d*, RwReal, RwReal, RwOpCombineType))0x643C10)(matrix, unitAxis, oneMinusCosine, sine, combineOp);
}

RwMatrix* RwMatrixUpdate(RwMatrix* matrix) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*))0x6437B0)(matrix);
}

RwMatrix* RwMatrixOptimize(RwMatrix* matrix, const RwMatrixTolerance* tolerance) {
    return ((RwMatrix*(__cdecl *)(RwMatrix*, const RwMatrixTolerance*))0x6436F0)(matrix, tolerance);
}

RwReal _rwMatrixDeterminant(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))0x6433E0)(matrix);
}

RwReal _rwMatrixNormalError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))0x643490)(matrix);
}

RwReal _rwMatrixOrthogonalError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))0x643430)(matrix);
}

RwReal _rwMatrixIdentityError(const RwMatrix* matrix) {
    return ((RwReal(__cdecl *)(const RwMatrix*))0x643520)(matrix);
}

RwReal RwV3dNormalize(RwV3d* out, const RwV3d* in) {
    return ((RwReal(__cdecl *)(RwV3d*, const RwV3d*))0x646F20)(out, in);
}

RwReal RwV3dLength(const RwV3d* in) {
    return ((RwReal(__cdecl *)(const RwV3d*))0x647030)(in);
}

RwV3d* RwV3dTransformPoints(RwV3d* pointsOut, const RwV3d* pointsIn, RwInt32 numPoints, const RwMatrix* matrix) {
    return ((RwV3d*(__cdecl *)(RwV3d*, const RwV3d*, RwInt32, const RwMatrix*))0x647160)(pointsOut, pointsIn, numPoints, matrix);
}

RwV3d* RwV3dTransformVectors(RwV3d* vectorsOut, const RwV3d* vectorsIn, RwInt32 numPoints, const RwMatrix* matrix) {
    return ((RwV3d*(__cdecl *)(RwV3d*, const RwV3d*, RwInt32, const RwMatrix*))0x647170)(vectorsOut, vectorsIn, numPoints, matrix);
}

RwReal _rwSqrt(const RwReal num) {
    return ((RwReal(__cdecl *)(const RwReal))0x6470A0)(num);
}

RwReal _rwInvSqrt(const RwReal num) {
    return ((RwReal(__cdecl *)(const RwReal))0x647100)(num);
}

RwReal RwIm2DGetNearScreenZ(void) {
    return ((RwReal(__cdecl *)(void))0x649B80)();
}

RwReal RwIm2DGetFarScreenZ(void) {
    return ((RwReal(__cdecl *)(void))0x649B90)();
}

RwBool RwRenderStateGet(RwRenderState state, void* value) {
    return ((RwBool(__cdecl *)(RwRenderState, void*))0x649BF0)(state, value);
}

RwBool RwRenderStateSet(RwRenderState state, void* value) {
    return ((RwBool(__cdecl *)(RwRenderState, void*))0x649BA0)(state, value);
}

RwBool RwIm2DRenderLine(RwIm2DVertex* vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2) {
    return ((RwBool(__cdecl *)(RwIm2DVertex*, RwInt32, RwInt32, RwInt32))0x649C00)(vertices, numVertices, vert1, vert2);
}

RwBool RwIm2DRenderPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwIm2DVertex*, RwInt32))0x649C10)(primType, vertices, numVertices);
}

RwBool RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices, RwInt32 numVertices, RwImVertexIndex* indices, RwInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwIm2DVertex*, RwInt32, RwImVertexIndex*, RwInt32))0x649C20)(primType, vertices, numVertices, indices, numIndices);
}

RwBool RwEngineInit(const RwMemoryFunctions* memFuncs, RwUInt32 initFlags, RwUInt32 resArenaSize) {
    return ((RwBool(__cdecl *)(const RwMemoryFunctions*, RwUInt32, RwUInt32))0x642F40)(memFuncs, initFlags, resArenaSize);
}

RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor initCB, RwPluginObjectDestructor termCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor))0x642A30)(size, pluginID, initCB, termCB);
}

RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(RwUInt32))0x642A60)(pluginID);
}

RwBool RwEngineOpen(RwEngineOpenParams* initParams) {
    return ((RwBool(__cdecl *)(RwEngineOpenParams*))0x642D50)(initParams);
}

RwBool RwEngineStart(void) {
    return ((RwBool(__cdecl *)(void))0x642C50)();
}

RwBool RwEngineStop(void) {
    return ((RwBool(__cdecl *)(void))0x642C00)();
}

RwBool RwEngineClose(void) {
    return ((RwBool(__cdecl *)(void))0x642CE0)();
}

RwBool RwEngineTerm(void) {
    return ((RwBool(__cdecl *)(void))0x642F00)();
}

RwInt32 RwEngineGetNumSubSystems(void) {
    return ((RwInt32(__cdecl *)(void))0x642A80)();
}

RwSubSystemInfo* RwEngineGetSubSystemInfo(RwSubSystemInfo* subSystemInfo, RwInt32 subSystemIndex) {
    return ((RwSubSystemInfo*(__cdecl *)(RwSubSystemInfo*, RwInt32))0x642AB0)(subSystemInfo, subSystemIndex);
}

RwInt32 RwEngineGetCurrentSubSystem(void) {
    return ((RwInt32(__cdecl *)(void))0x642AE0)();
}

RwBool RwEngineSetSubSystem(RwInt32 subSystemIndex) {
    return ((RwBool(__cdecl *)(RwInt32))0x642B10)(subSystemIndex);
}

RwInt32 RwEngineGetNumVideoModes(void) {
    return ((RwInt32(__cdecl *)(void))0x642B40)();
}

RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex) {
    return ((RwVideoMode*(__cdecl *)(RwVideoMode*, RwInt32))0x642B70)(modeinfo, modeIndex);
}

RwInt32 RwEngineGetCurrentVideoMode(void) {
    return ((RwInt32(__cdecl *)(void))0x642BA0)();
}

RwBool RwEngineSetVideoMode(RwInt32 modeIndex) {
    return ((RwBool(__cdecl *)(RwInt32))0x642BD0)(modeIndex);
}

RwFileFunctions* RwOsGetFileInterface(void) {
    return ((RwFileFunctions*(__cdecl *)(void))0x663580)();
}

RwError* RwErrorGet(RwError* code) {
    return ((RwError*(__cdecl *)(RwError*))0x669B40)(code);
}

RwError* RwErrorSet(RwError* code) {
    return ((RwError*(__cdecl *)(RwError*))0x669AE0)(code);
}

RwInt32 _rwerror(RwInt32 code, ...) {
    return code;
}

RwBool RwResourcesEmptyArena(void) {
    return ((RwBool(__cdecl *)(void))0x669520)();
}

RwResEntry* RwResourcesAllocateResEntry(void* owner, RwResEntry* ownerRef, RwInt32 size, RwResEntryDestroyNotify destroyNotify) {
    return ((RwResEntry*(__cdecl *)(void*, RwResEntry*, RwInt32, RwResEntryDestroyNotify))0x669330)(owner, ownerRef, size, destroyNotify);
}

RwBool RwResourcesFreeResEntry(RwResEntry* entry) {
    return ((RwBool(__cdecl *)(RwResEntry*))0x669240)(entry);
}

void _rwResourcesPurge(void) {
    ((void(__cdecl *)(void))0x6692B0)();
}

RwBool RwStreamFindChunk(RwStream* stream, RwUInt32 type, RwUInt32* lengthOut, RwUInt32* versionOut) {
    return ((RwBool(__cdecl *)(RwStream*, RwUInt32, RwUInt32*, RwUInt32*))0x64FAC0)(stream, type, lengthOut, versionOut);
}

RwStream* _rwStreamWriteVersionedChunkHeader(RwStream* stream, RwInt32 type, RwInt32 size, RwUInt32 version, RwUInt32 buildNum) {
    return ((RwStream*(__cdecl *)(RwStream*, RwInt32, RwInt32, RwUInt32, RwUInt32))0x64FA60)(stream, type, size, version, buildNum);
}

RwStream* RwStreamWriteReal(RwStream* stream, const RwReal* reals, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, const RwReal*, RwUInt32))0x64FC20)(stream, reals, numBytes);
}

RwStream* RwStreamWriteInt32(RwStream* stream, const RwInt32* ints, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, const RwInt32*, RwUInt32))0x64FCC0)(stream, ints, numBytes);
}

RwStream* RwStreamReadReal(RwStream* stream, RwReal* reals, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, RwReal*, RwUInt32))0x64FCE0)(stream, reals, numBytes);
}

RwStream* RwStreamReadInt32(RwStream* stream, RwInt32* ints, RwUInt32 numBytes) {
    return ((RwStream*(__cdecl *)(RwStream*, RwInt32*, RwUInt32))0x64FD50)(stream, ints, numBytes);
}

void* RwMemLittleEndian32(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))0x64FBC0)(mem, size);
}

void* RwMemNative32(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))0x64FBD0)(mem, size);
}

void* RwMemRealToFloat32(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))0x64FBE0)(mem, size);
}

void* RwMemFloat32ToReal(void* mem, RwUInt32 size) {
    return ((void*(__cdecl *)(void*, RwUInt32))0x64FC00)(mem, size);
}

/* rwcore.h */

RxHeap* RxHeapCreate(RwUInt32 size) {
    return ((RxHeap*(__cdecl *)(RwUInt32))0x676EB0)(size);
}

void RxHeapDestroy(RxHeap* heap) {
    ((void(__cdecl *)(RxHeap*))0x676E50)(heap);
}

RwBool _rxHeapReset(RxHeap* heap) {
    return ((RwBool(__cdecl *)(RxHeap*))0x676DE0)(heap);
}

void* RxHeapAlloc(RxHeap* heap, RwUInt32 size) {
    return ((void*(__cdecl *)(RxHeap*, RwUInt32))0x676B70)(heap, size);
}

void RxHeapFree(RxHeap* heap, void* block) {
    ((void(__cdecl *)(RxHeap*, void*))0x676980)(heap, block);
}

RwBool _rxPipelineOpen(void) {
    return ((RwBool(__cdecl *)(void))0x668C10)();
}

RwBool _rxPipelineClose(void) {
    return ((RwBool(__cdecl *)(void))0x668BB0)();
}

RxPipeline* RxPipelineCreate(void) {
    return ((RxPipeline*(__cdecl *)(void))0x668FC0)();
}

void _rxPipelineDestroy(RxPipeline* Pipeline) {
    ((void(__cdecl *)(RxPipeline*))0x669030)(Pipeline);
}

RxHeap* RxHeapGetGlobalHeap(void) {
    return ((RxHeap*(__cdecl *)(void))0x668F10)();
}

RxPipeline* RxPipelineExecute(RxPipeline* pipeline, void* data, RwBool heapReset) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*, void*, RwBool))0x668F20)(pipeline, data, heapReset);
}

void _rxPacketDestroy(RxPacket* Packet) {
    ((void(__cdecl *)(RxPacket*))0x678510)(Packet);
}

RxPipelineNode* RxPipelineFindNodeByName(RxPipeline* pipeline, const RwChar* name, RxPipelineNode* start, RwInt32* nodeIndex) {
    return ((RxPipelineNode*(__cdecl *)(RxPipeline*, const RwChar*, RxPipelineNode*, RwInt32*))0x67AD70)(pipeline, name, start, nodeIndex);
}

RxLockedPipe* RxPipelineLock(RxPipeline* pipeline) {
    return ((RxLockedPipe*(__cdecl *)(RxPipeline*))0x67AC50)(pipeline);
}

RxPipeline* RxLockedPipeUnlock(RxLockedPipe* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxLockedPipe*))0x67A200)(pipeline);
}

RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags) {
    return ((RwRaster*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwInt32))0x655490)(width, height, depth, flags);
}

RwBool RwRasterDestroy(RwRaster* raster) {
    return ((RwBool(__cdecl *)(RwRaster*))0x6552E0)(raster);
}

RwInt32 RwRasterGetNumLevels(RwRaster* raster) {
    return ((RwInt32(__cdecl *)(RwRaster*))0x655420)(raster);
}

RwRaster* RwRasterRenderFast(RwRaster* raster, RwInt32 x, RwInt32 y) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwInt32, RwInt32))0x655270)(raster, x, y);
}

RwRaster* RwRasterRender(RwRaster* raster, RwInt32 x, RwInt32 y) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwInt32, RwInt32))0x6552B0)(raster, x, y);
}

RwRaster* RwRasterPushContext(RwRaster* raster) {
    return ((RwRaster*(__cdecl *)(RwRaster*))0x655320)(raster);
}

RwRaster* RwRasterPopContext(void) {
    return ((RwRaster*(__cdecl *)(void))0x6553D0)();
}

RwRaster* RwRasterGetCurrentContext(void) {
    return ((RwRaster*(__cdecl *)(void))0x655230)();
}

RwRaster* RwRasterShowRaster(RwRaster* raster, void* dev, RwUInt32 flags) {
    return ((RwRaster*(__cdecl *)(RwRaster*, void*, RwUInt32))0x655460)(raster, dev, flags);
}

RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode) {
    return ((RwUInt8*(__cdecl *)(RwRaster*, RwUInt8, RwInt32))0x655530)(raster, level, lockMode);
}

RwRaster* RwRasterUnlock(RwRaster* raster) {
    return ((RwRaster*(__cdecl *)(RwRaster*))0x655250)(raster);
}

RwUInt8* RwRasterLockPalette(RwRaster* raster, RwInt32 lockMode) {
    return ((RwUInt8*(__cdecl *)(RwRaster*, RwInt32))0x6553A0)(raster, lockMode);
}

RwInt32 RwRasterRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x655370)(size, pluginID, constructCB, destructCB, copyCB);
}

RxRenderStateVector* RxRenderStateVectorSetDefaultRenderStateVector(RxRenderStateVector* rsvp) {
    return ((RxRenderStateVector*(__cdecl *)(RxRenderStateVector*))0x678420)(rsvp);
}

RwImage* RwImageCreate(RwInt32 width, RwInt32 height, RwInt32 depth) {
    return ((RwImage*(__cdecl *)(RwInt32, RwInt32, RwInt32))0x651250)(width, height, depth);
}

RwBool RwImageDestroy(RwImage* image) {
    return ((RwBool(__cdecl *)(RwImage*))0x6512B0)(image);
}

RwImage* RwImageAllocatePixels(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))0x651310)(image);
}

RwImage* RwImageFreePixels(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))0x6513D0)(image);
}

RwImage* RwImageCopy(RwImage* destImage, const RwImage* sourceImage) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))0x652080)(destImage, sourceImage);
}

RwImage* RwImageApplyMask(RwImage* image, const RwImage* mask) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))0x6514D0)(image, mask);
}

RwImage* RwImageMakeMask(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))0x651400)(image);
}

RwImage* RwImageReadMaskedImage(const RwChar* imageName, const RwChar* maskname) {
    return ((RwImage*(__cdecl *)(const RwChar*, const RwChar*))0x651D40)(imageName, maskname);
}

RwImage* RwImageRead(const RwChar* imageName) {
    return ((RwImage*(__cdecl *)(const RwChar*))0x651940)(imageName);
}

const RwChar* RwImageSetPath(const RwChar* path) {
    return ((const RwChar*(__cdecl *)(const RwChar*))0x651880)(path);
}

RwBool RwImageSetGamma(RwReal gammaValue) {
    return ((RwBool(__cdecl *)(RwReal))0x6523F0)(gammaValue);
}

RwImage* RwImageGammaCorrect(RwImage* image) {
    return ((RwImage*(__cdecl *)(RwImage*))0x652260)(image);
}

const RwChar* RwImageFindFileType(const RwChar* imageName) {
    return ((const RwChar*(__cdecl *)(const RwChar*))0x651C70)(imageName);
}

RwBool RwTextureSetMipmapping(RwBool enable) {
    return ((RwBool(__cdecl *)(RwBool))0x64DC90)(enable);
}

RwBool RwTextureGetMipmapping(void) {
    return ((RwBool(__cdecl *)(void))0x64DCB0)();
}

RwBool RwTextureSetAutoMipmapping(RwBool enable) {
    return ((RwBool(__cdecl *)(RwBool))0x64DC60)(enable);
}

RwBool RwTextureGetAutoMipmapping(void) {
    return ((RwBool(__cdecl *)(void))0x64DC80)();
}

RwBool RwTextureRasterGenerateMipmaps(RwRaster* raster, RwImage* image) {
    return ((RwBool(__cdecl *)(RwRaster*, RwImage*))0x64E340)(raster, image);
}

RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name) {
    return ((RwTexture*(__cdecl *)(RwTexture*, const RwChar*))0x64DF40)(texture, name);
}

RwTexture* RwTextureSetMaskName(RwTexture* texture, const RwChar* maskName) {
    return ((RwTexture*(__cdecl *)(RwTexture*, const RwChar*))0x64DFB0)(texture, maskName);
}

RwTexDictionary* RwTexDictionaryCreate(void) {
    return ((RwTexDictionary*(__cdecl *)(void))0x64DCF0)();
}

RwBool RwTexDictionaryDestroy(RwTexDictionary* dict) {
    return ((RwBool(__cdecl *)(RwTexDictionary*))0x64DD90)(dict);
}

RwTexture* RwTextureCreate(RwRaster* raster) {
    return ((RwTexture*(__cdecl *)(RwRaster*))0x64DE60)(raster);
}

RwBool RwTextureDestroy(RwTexture* texture) {
    return ((RwBool(__cdecl *)(RwTexture*))0x64DEC0)(texture);
}

RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster) {
    return ((RwTexture*(__cdecl *)(RwTexture*, RwRaster*))0x64DCC0)(texture, raster);
}

RwTexture* RwTexDictionaryAddTexture(RwTexDictionary* dict, RwTexture* texture) {
    return ((RwTexture*(__cdecl *)(RwTexDictionary*, RwTexture*))0x64E020)(dict, texture);
}

RwTexture* RwTexDictionaryFindNamedTexture(RwTexDictionary* dict, const RwChar* name) {
    return ((RwTexture*(__cdecl *)(RwTexDictionary*, const RwChar*))0x64E060)(dict, name);
}

RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName) {
    return ((RwTexture*(__cdecl *)(const RwChar*, const RwChar*))0x64E110)(name, maskName);
}

RwTexDictionary* RwTexDictionaryGetCurrent(void) {
    return ((RwTexDictionary*(__cdecl *)(void))0x64E100)();
}

RwTexDictionary* RwTexDictionarySetCurrent(RwTexDictionary* dict) {
    return ((RwTexDictionary*(__cdecl *)(RwTexDictionary*))0x64E0E0)(dict);
}

const RwTexDictionary* RwTexDictionaryForAllTextures(const RwTexDictionary* dict, RwTextureCallBack fpCallBack, void* pData) {
    return ((const RwTexDictionary*(__cdecl *)(const RwTexDictionary*, RwTextureCallBack, void*))0x64DE20)(dict, fpCallBack, pData);
}

RwInt32 RwTextureRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x64E310)(size, pluginID, constructCB, destructCB, copyCB);
}

void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm, RwUInt32 flags) {
    return ((void*(__cdecl *)(RwIm3DVertex*, RwUInt32, RwMatrix*, RwUInt32))0x65AE90)(pVerts, numVerts, ltm, flags);
}

RwBool RwIm3DEnd(void) {
    return ((RwBool(__cdecl *)(void))0x65AF60)();
}

RwBool RwIm3DRenderLine(RwInt32 vert1, RwInt32 vert2) {
    return ((RwBool(__cdecl *)(RwInt32, RwInt32))0x65B0F0)(vert1, vert2);
}

RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices, RwInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwPrimitiveType, RwImVertexIndex*, RwInt32))0x65AF90)(primType, indices, numIndices);
}

RxPipeline* RwIm3DSetTransformPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))0x65B1C0)(pipeline);
}

RxPipeline* RwIm3DSetRenderPipeline(RxPipeline* pipeline, RwPrimitiveType primType) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*, RwPrimitiveType))0x65B210)(pipeline, primType);
}

RwBool RwD3D8DeviceSupportsDXTTexture(void) {
    return ((RwBool(__cdecl *)(void))0x65F1F0)();
}

void* RwD3D8GetCurrentD3DDevice(void) {
    return ((void*(__cdecl *)(void))0x65F140)();
}

void RwD3D8EngineSetRefreshRate(RwUInt32 refreshRate) {
    ((void(__cdecl *)(RwUInt32))0x65DBC0)(refreshRate);
}

RwBool RwD3D8CameraAttachWindow(void* camera, void* hwnd) {
    return ((RwBool(__cdecl *)(void*, void*))0x65DC30)(camera, hwnd);
}

RwBool RwD3D8SetVertexShader(RwUInt32 handle) {
    return ((RwBool(__cdecl *)(RwUInt32))0x65F2F0)(handle);
}

RwBool RwD3D8SetPixelShader(RwUInt32 handle) {
    return ((RwBool(__cdecl *)(RwUInt32))0x65F330)(handle);
}

RwBool RwD3D8SetStreamSource(RwUInt32 streamNumber, void* streamData, RwUInt32 stride) {
    return ((RwBool(__cdecl *)(RwUInt32, void*, RwUInt32))0x65F370)(streamNumber, streamData, stride);
}

RwBool RwD3D8SetIndices(void* indexData, RwUInt32 baseVertexIndex) {
    return ((RwBool(__cdecl *)(void*, RwUInt32))0x65F3C0)(indexData, baseVertexIndex);
}

RwBool RwD3D8DrawIndexedPrimitive(RwUInt32 primitiveType, RwUInt32 minIndex, RwUInt32 numVertices, RwUInt32 startIndex, RwUInt32 numIndices) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32, RwUInt32, RwUInt32))0x65F410)(primitiveType, minIndex, numVertices, startIndex, numIndices);
}

RwBool RwD3D8DrawPrimitive(RwUInt32 primitiveType, RwUInt32 startVertex, RwUInt32 numVertices) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32))0x65F4A0)(primitiveType, startVertex, numVertices);
}

RwBool RwD3D8SetTexture(RwTexture* texture, RwUInt32 stage) {
    return ((RwBool(__cdecl *)(RwTexture*, RwUInt32))0x659850)(texture, stage);
}

RwBool RwD3D8SetRenderState(RwUInt32 state, RwUInt32 value) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32))0x6582A0)(state, value);
}

RwBool RwD3D8SetTextureStageState(RwUInt32 stage, RwUInt32 type, RwUInt32 value) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, RwUInt32))0x658310)(stage, type, value);
}

RwBool RwD3D8SetTransform(RwUInt32 state, const void* matrix) {
    return ((RwBool(__cdecl *)(RwUInt32, const void*))0x65F530)(state, matrix);
}

void RwD3D8GetRenderState(RwUInt32 state, void* value) {
    ((void(__cdecl *)(RwUInt32, void*))0x6582F0)(state, value);
}

void RwD3D8GetTransform(RwUInt32 state, void* matrix) {
    ((void(__cdecl *)(RwUInt32, void*))0x65F670)(state, matrix);
}

RwBool RwD3D8SetTransformWorld(const RwMatrix* matrix) {
    return ((RwBool(__cdecl *)(const RwMatrix*))0x65F6A0)(matrix);
}

RwBool RwD3D8SetSurfaceProperties(const RwRGBA* color, const RwSurfaceProperties* surfaceProps, RwBool modulate) {
    return ((RwBool(__cdecl *)(const RwRGBA*, const RwSurfaceProperties*, RwBool))0x65F7F0)(color, surfaceProps, modulate);
}

RwBool RwD3D8SetLight(RwInt32 index, const void* light) {
    return ((RwBool(__cdecl *)(RwInt32, const void*))0x65FB20)(index, light);
}

RwBool RwD3D8EnableLight(RwInt32 index, RwBool enable) {
    return ((RwBool(__cdecl *)(RwInt32, RwBool))0x65FC10)(index, enable);
}

RwBool RwD3D8DynamicVertexBufferCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*))0x65FD70)(fvf, size, vertexBuffer);
}

void RwD3D8DynamicVertexBufferDestroy(void) {
    ((void(__cdecl *)(void))0x65FE60)();
}

RwBool RwD3D8DynamicVertexBufferLock(RwUInt32 vertexSize, RwUInt32 numVertex, void* vertexBufferOut, void* vertexDataOut, RwUInt32* baseIndexOut) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*, void*, RwUInt32*))0x6600A0)(vertexSize, numVertex, vertexBufferOut, vertexDataOut, baseIndexOut);
}

RwBool RwD3D8DynamicVertexBufferUnlock(void) {
    return ((RwBool(__cdecl *)(void))0x660220)();
}

RwBool RwD3D8IndexBufferCreate(RwUInt32 numIndices, void* indexBuffer) {
    return ((RwBool(__cdecl *)(RwUInt32, void*))0x640230)(numIndices, indexBuffer);
}

RwBool RwD3D8CreatePixelShader(const RwUInt32* function, RwUInt32* handle) {
    return ((RwBool(__cdecl *)(const RwUInt32*, RwUInt32*))0x65FE90)(function, handle);
}

void RwD3D8DeletePixelShader(RwUInt32 handle) {
    ((void(__cdecl *)(RwUInt32))0x65FF00)(handle);
}

RwBool RwD3D8SetPixelShaderConstant(RwUInt32 registerAddress, const void* constantData, RwUInt32 constantCount) {
    return ((RwBool(__cdecl *)(RwUInt32, const void*, RwUInt32))0x65FF70)(registerAddress, constantData, constantCount);
}

const void* RwD3D8GetCaps(void) {
    return ((const void*(__cdecl *)(void))0x65FFA0)();
}

RwBool RwD3D8CameraIsSphereFullyInsideFrustum(const void* camera, const void* sphere) {
    return ((RwBool(__cdecl *)(const void*, const void*))0x65FFB0)(camera, sphere);
}

RwBool RwD3D8CameraIsBBoxFullyInsideFrustum(const void* camera, const void* boundingBox) {
    return ((RwBool(__cdecl *)(const void*, const void*))0x660010)(camera, boundingBox);
}

void _rwD3D8TexDictionaryEnableRasterFormatConversion(RwBool enable) {
    ((void(__cdecl *)(RwBool))0x63EFD0)(enable);
}

RwBool _rwDeviceRegisterPlugin(void) {
    return ((RwBool(__cdecl *)(void))0x65B5C0)();
}

RwImage* RwImageResample(RwImage* dstImage, const RwImage* srcImage) {
    return ((RwImage*(__cdecl *)(RwImage*, const RwImage*))0x671D80)(dstImage, srcImage);
}

RwImage* RwImageCreateResample(const RwImage* srcImage, RwInt32 width, RwInt32 height) {
    return ((RwImage*(__cdecl *)(const RwImage*, RwInt32, RwInt32))0x672490)(srcImage, width, height);
}

RwImage* RwImageSetFromRaster(RwImage* image, RwRaster* raster) {
    return ((RwImage*(__cdecl *)(RwImage*, RwRaster*))0x660270)(image, raster);
}

RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image) {
    return ((RwRaster*(__cdecl *)(RwRaster*, RwImage*))0x6602B0)(raster, image);
}

RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth, RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat) {
    return ((RwImage*(__cdecl *)(RwImage*, RwInt32, RwInt32*, RwInt32*, RwInt32*, RwInt32*))0x6602E0)(ipImage, nRasterType, npWidth, npHeight, npDepth, npFormat);
}

RwFrame* RwFrameForAllObjects(RwFrame* frame, RwObjectCallBack callBack, void* data) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwObjectCallBack, void*))0x6453B0)(frame, callBack, data);
}

RwFrame* RwFrameTranslate(RwFrame* frame, const RwV3d* v, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwOpCombineType))0x6450A0)(frame, v, combine);
}

RwFrame* RwFrameRotate(RwFrame* frame, const RwV3d* axis, RwReal angle, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwReal, RwOpCombineType))0x645280)(frame, axis, angle, combine);
}

RwFrame* RwFrameScale(RwFrame* frame, const RwV3d* v, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwV3d*, RwOpCombineType))0x645140)(frame, v, combine);
}

RwFrame* RwFrameTransform(RwFrame* frame, const RwMatrix* m, RwOpCombineType combine) {
    return ((RwFrame*(__cdecl *)(RwFrame*, const RwMatrix*, RwOpCombineType))0x6451E0)(frame, m, combine);
}

RwFrame* RwFrameOrthoNormalize(RwFrame* frame) {
    return ((RwFrame*(__cdecl *)(RwFrame*))0x645320)(frame);
}

RwBool RwFrameDestroyHierarchy(RwFrame* frame) {
    return ((RwBool(__cdecl *)(RwFrame*))0x644C90)(frame);
}

RwFrame* RwFrameForAllChildren(RwFrame* frame, RwFrameCallBack callBack, void* data) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwFrameCallBack, void*))0x645060)(frame, callBack, data);
}

RwFrame* RwFrameRemoveChild(RwFrame* child) {
    return ((RwFrame*(__cdecl *)(RwFrame*))0x644F70)(child);
}

RwFrame* RwFrameAddChild(RwFrame* parent, RwFrame* child) {
    return ((RwFrame*(__cdecl *)(RwFrame*, RwFrame*))0x644DA0)(parent, child);
}

RwMatrix* RwFrameGetLTM(RwFrame* frame) {
    return ((RwMatrix*(__cdecl *)(RwFrame*))0x644D80)(frame);
}

RwFrame* RwFrameUpdateObjects(RwFrame* frame) {
    return ((RwFrame*(__cdecl *)(RwFrame*))0x644D00)(frame);
}

RwFrame* RwFrameCreate(void) {
    return ((RwFrame*(__cdecl *)(void))0x644AA0)();
}

RwBool RwFrameDestroy(RwFrame* frame) {
    return ((RwBool(__cdecl *)(RwFrame*))0x644AD0)(frame);
}

RwBool RwFrameDirty(const RwFrame* frame) {
    return ((RwBool(__cdecl *)(const RwFrame*))0x6449D0)(frame);
}

RwInt32 RwFrameRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x6453F0)(size, pluginID, constructCB, destructCB, copyCB);
}

RwFrame* _rwFrameCloneAndLinkClones(RwFrame* root) {
    return ((RwFrame*(__cdecl *)(RwFrame*))0x644730)(root);
}

RwFrame* _rwFramePurgeClone(RwFrame* root) {
    return ((RwFrame*(__cdecl *)(RwFrame*))0x644920)(root);
}

void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame) {
    ((void(__cdecl *)(void*, RwFrame*))0x660CC0)(object, frame);
}

void _rwObjectHasFrameReleaseFrame(void) {
    ((void(__cdecl *)(void))0x660D10)();
}

RwInt32 RwTextureRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x650480)(pluginID, readCB, writeCB, getSizeCB);
}

RwUInt32 RwTextureStreamGetSize(const RwTexture* texture) {
    return ((RwUInt32(__cdecl *)(const RwTexture*))0x6504B0)(texture);
}

RwTexture* RwTextureStreamRead(RwStream* stream) {
    return ((RwTexture*(__cdecl *)(RwStream*))0x6506F0)(stream);
}

const RwTexture* RwTextureStreamWrite(const RwTexture* texture, RwStream* stream) {
    return ((const RwTexture*(__cdecl *)(const RwTexture*, RwStream*))0x650520)(texture, stream);
}

RwTexDictionary* RwTexDictionaryStreamRead(RwStream* stream) {
    return ((RwTexDictionary*(__cdecl *)(RwStream*))0x61E710)(stream);
}

const RwTexDictionary* RwTexDictionaryStreamWrite(const RwTexDictionary* texDict, RwStream* stream) {
    return ((const RwTexDictionary*(__cdecl *)(const RwTexDictionary*, RwStream*))0x650CD0)(texDict, stream);
}

RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x660350)(pluginID, readCB, writeCB, getSizeCB);
}

rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList) {
    return ((rwFrameList*(__cdecl *)(rwFrameList*))0x660380)(frameList);
}

rwFrameList* _rwFrameListStreamRead(RwStream* stream, rwFrameList* fl) {
    return ((rwFrameList*(__cdecl *)(RwStream*, rwFrameList*))0x6603B0)(stream, fl);
}

RwBBox* RwBBoxCalculate(RwBBox* boundBox, const RwV3d* verts, RwInt32 numVerts) {
    return ((RwBBox*(__cdecl *)(RwBBox*, const RwV3d*, RwInt32))0x66D8B0)(boundBox, verts, numVerts);
}

RwCamera* RwCameraBeginUpdate(RwCamera* camera) {
    return ((RwCamera*(__cdecl *)(RwCamera*))0x64A820)(camera);
}

RwCamera* RwCameraEndUpdate(RwCamera* camera) {
    return ((RwCamera*(__cdecl *)(RwCamera*))0x64A810)(camera);
}

RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwRGBA*, RwInt32))0x64A9D0)(camera, colour, clearMode);
}

RwCamera* RwCameraShowRaster(RwCamera* camera, void* pDev, RwUInt32 flags) {
    return ((RwCamera*(__cdecl *)(RwCamera*, void*, RwUInt32))0x64AA00)(camera, pDev, flags);
}

RwBool RwCameraDestroy(RwCamera* camera) {
    return ((RwBool(__cdecl *)(RwCamera*))0x64AB10)(camera);
}

RwCamera* RwCameraCreate(void) {
    return ((RwCamera*(__cdecl *)(void))0x64AB50)();
}

RwCamera* RwCameraSetViewOffset(RwCamera* camera, const RwV2d* offset) {
    return ((RwCamera*(__cdecl *)(RwCamera*, const RwV2d*))0x64A830)(camera, offset);
}

RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow) {
    return ((RwCamera*(__cdecl *)(RwCamera*, const RwV2d*))0x64AAA0)(camera, viewWindow);
}

RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwCameraProjection))0x64AA30)(camera, projection);
}

RwCamera* RwCameraSetNearClipPlane(RwCamera* camera, RwReal nearClip) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwReal))0x64A860)(camera, nearClip);
}

RwCamera* RwCameraSetFarClipPlane(RwCamera* camera, RwReal farClip) {
    return ((RwCamera*(__cdecl *)(RwCamera*, RwReal))0x64A930)(camera, farClip);
}

RwInt32 RwCameraRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x64AAE0)(size, pluginID, constructCB, destructCB, copyCB);
}

RwFrustumTestResult RwCameraFrustumTestSphere(const RwCamera* camera, const RwSphere* sphere) {
    return ((RwFrustumTestResult(__cdecl *)(const RwCamera*, const RwSphere*))0x64A960)(camera, sphere);
}

RwCamera* RwCameraStreamRead(RwStream* stream) {
    return ((RwCamera*(__cdecl *)(RwStream*))0x669F50)(stream);
}

/* rpworld.h */

RxNodeDefinition* RxNodeDefinitionGetD3D8WorldSectorAllInOne(void) {
    return ((RxNodeDefinition*(__cdecl *)(void))0x67B6C0)();
}

RxNodeDefinition* RxNodeDefinitionGetD3D8AtomicAllInOne(void) {
    return ((RxNodeDefinition*(__cdecl *)(void))0x67CB90)();
}

RwBool _rxD3D8VertexBufferManagerCreate(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32* baseIndex) {
    return ((RwBool(__cdecl *)(RwUInt32, RwUInt32, void*, RwUInt32*))0x667780)(fvf, size, vertexBuffer, baseIndex);
}

void _rxD3D8VertexBufferManagerDestroy(RwUInt32 fvf, RwUInt32 size, void* vertexBuffer, RwUInt32 baseIndex) {
    ((void(__cdecl *)(RwUInt32, RwUInt32, void*, RwUInt32))0x667A40)(fvf, size, vertexBuffer, baseIndex);
}

RpMaterial* RpMaterialCreate(void) {
    return ((RpMaterial*(__cdecl *)(void))0x6557B0)();
}

RwBool RpMaterialDestroy(RpMaterial* material) {
    return ((RwBool(__cdecl *)(RpMaterial*))0x655830)(material);
}

RpMaterial* RpMaterialSetTexture(RpMaterial* material, RwTexture* texture) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))0x655890)(material, texture);
}

RwInt32 RpMaterialRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x6558C0)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpMaterialRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x6558F0)(pluginID, readCB, writeCB, getSizeCB);
}

RpMaterial* RpMaterialStreamRead(RwStream* stream) {
    return ((RpMaterial*(__cdecl *)(RwStream*))0x655920)(stream);
}

RpMaterialList* _rpMaterialListInitialize(RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RpMaterialList*))0x66DA10)(matList);
}

RpMaterialList* _rpMaterialListDeinitialize(RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RpMaterialList*))0x66D9B0)(matList);
}

RpMaterial* _rpMaterialListGetMaterial(const RpMaterialList* matList, RwInt32 matIndex) {
    return ((RpMaterial*(__cdecl *)(const RpMaterialList*, RwInt32))0x66DA20)(matList, matIndex);
}

RwInt32 _rpMaterialListAppendMaterial(RpMaterialList* matList, RpMaterial* material) {
    return ((RwInt32(__cdecl *)(RpMaterialList*, RpMaterial*))0x66DA30)(matList, material);
}

RwInt32 _rpMaterialListFindMaterialIndex(const RpMaterialList* matList, const RpMaterial* material) {
    return ((RwInt32(__cdecl *)(const RpMaterialList*, const RpMaterial*))0x66DAF0)(matList, material);
}

RpMaterialList* _rpMaterialListStreamRead(RwStream* stream, RpMaterialList* matList) {
    return ((RpMaterialList*(__cdecl *)(RwStream*, RpMaterialList*))0x66DB20)(stream, matList);
}

void* _rpMeshOpen(void* instance, RwInt32 offset, RwInt32 size) {
    return ((void*(__cdecl *)(void*, RwInt32, RwInt32))0x66DEC0)(instance, offset, size);
}

void* _rpMeshClose(void* instance, RwInt32 offset, RwInt32 size) {
    return ((void*(__cdecl *)(void*, RwInt32, RwInt32))0x66DE90)(instance, offset, size);
}

RpBuildMesh* _rpBuildMeshCreate(RwUInt32 bufferSize) {
    return ((RpBuildMesh*(__cdecl *)(RwUInt32))0x66DFE0)(bufferSize);
}

RwBool _rpBuildMeshDestroy(RpBuildMesh* mesh) {
    return ((RwBool(__cdecl *)(RpBuildMesh*))0x66E0C0)(mesh);
}

RwBool _rpMeshDestroy(RpMeshHeader* mesh) {
    return ((RwBool(__cdecl *)(RpMeshHeader*))0x66E100)(mesh);
}

RpBuildMesh* _rpBuildMeshAddTriangle(RpBuildMesh* mesh, RpMaterial* material, RwInt32 vert1, RwInt32 vert2, RwInt32 vert3) {
    return ((RpBuildMesh*(__cdecl *)(RpBuildMesh*, RpMaterial*, RwInt32, RwInt32, RwInt32))0x66E140)(mesh, material, vert1, vert2, vert3);
}

RpMeshHeader* _rpMeshHeaderForAllMeshes(RpMeshHeader* meshHeader, RpMeshCallBack fpCallBack, void* pData) {
    return ((RpMeshHeader*(__cdecl *)(RpMeshHeader*, RpMeshCallBack, void*))0x66E220)(meshHeader, fpCallBack, pData);
}

RwStream* _rpMeshWrite(const RpMeshHeader* meshHeader, const void* object, RwStream* stream, const RpMaterialList* matList) {
    return ((RwStream*(__cdecl *)(const RpMeshHeader*, const void*, RwStream*, const RpMaterialList*))0x66E260)(meshHeader, object, stream, matList);
}

RpMeshHeader* _rpMeshRead(RwStream* stream, const void* object, const RpMaterialList* matList) {
    return ((RpMeshHeader*(__cdecl *)(RwStream*, const void*, const RpMaterialList*))0x66E3B0)(stream, object, matList);
}

RwInt32 _rpMeshSize(const RpMeshHeader* meshHeader, const void* object) {
    return ((RwInt32(__cdecl *)(const RpMeshHeader*, const void*))0x66E580)(meshHeader, object);
}

RpMeshHeader* _rpMeshHeaderCreate(RwUInt32 size) {
    return ((RpMeshHeader*(__cdecl *)(RwUInt32))0x66DE80)(size);
}

RwInt32 RpWorldSectorRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x6736C0)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpWorldSectorRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x6736F0)(pluginID, readCB, writeCB, getSizeCB);
}

RpMeshHeader* RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh* buildmesh, void* data) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, void*))0x66E5D0)(buildmesh, data);
}

RpMeshHeader* _rpTriListMeshGenerate(RpBuildMesh* buildMesh, void* data) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, void*))0x66FCC0)(buildMesh, data);
}

RpMeshHeader* _rpMeshOptimise(RpBuildMesh* buildmesh, RwUInt32 flags) {
    return ((RpMeshHeader*(__cdecl *)(RpBuildMesh*, RwUInt32))0x6700E0)(buildmesh, flags);
}

RpLight* RpLightCreate(RwInt32 type) {
    return ((RpLight*(__cdecl *)(RwInt32))0x660B20)(type);
}

RwBool RpLightDestroy(RpLight* light) {
    return ((RwBool(__cdecl *)(RpLight*))0x660AE0)(light);
}

RpLight* RpLightSetRadius(RpLight* light, RwReal radius) {
    return ((RpLight*(__cdecl *)(RpLight*, RwReal))0x660660)(light, radius);
}

RpLight* RpLightSetColor(RpLight* light, const RwRGBAReal* color) {
    return ((RpLight*(__cdecl *)(RpLight*, const RwRGBAReal*))0x660680)(light, color);
}

RwReal RpLightGetConeAngle(const RpLight* light) {
    return ((RwReal(__cdecl *)(const RpLight*))0x6606D0)(light);
}

RpLight* RpLightStreamRead(RwStream* stream) {
    return ((RpLight*(__cdecl *)(RwStream*))0x660940)(stream);
}

RwInt32 RpLightRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x660910)(size, pluginID, constructCB, destructCB, copyCB);
}

RwBool _rwD3D8LightsOpen(void) {
    return ((RwBool(__cdecl *)(void))0x679870)();
}

RwBool _rwD3D8LightsGlobalEnable(RpLightFlag flags) {
    return ((RwBool(__cdecl *)(RpLightFlag))0x679B60)(flags);
}

RwBool _rwD3D8LightLocalEnable(RpLight* light) {
    return ((RwBool(__cdecl *)(RpLight*))0x679D50)(light);
}

void _rwD3D8LightsEnable(RwBool enable, RwUInt32 type) {
    ((void(__cdecl *)(RwBool, RwUInt32))0x679FC0)(enable, type);
}

void _rwD3D8LightsClose(void) {
    ((void(__cdecl *)(void))0x679AD0)();
}

const RpMorphTarget* RpMorphTargetCalcBoundingSphere(const RpMorphTarget* morphTarget, RwSphere* boundingSphere) {
    return ((const RpMorphTarget*(__cdecl *)(const RpMorphTarget*, RwSphere*))0x64C920)(morphTarget, boundingSphere);
}

RwInt32 RpGeometryAddMorphTargets(RpGeometry* geometry, RwInt32 mtcount) {
    return ((RwInt32(__cdecl *)(RpGeometry*, RwInt32))0x64CA30)(geometry, mtcount);
}

RwInt32 RpGeometryAddMorphTarget(RpGeometry* geometry) {
    return ((RwInt32(__cdecl *)(RpGeometry*))0x64CBF0)(geometry);
}

const RpGeometry* RpGeometryTriangleSetVertexIndices(const RpGeometry* geometry, RpTriangle* triangle, RwUInt16 vert1, RwUInt16 vert2, RwUInt16 vert3) {
    return ((const RpGeometry*(__cdecl *)(const RpGeometry*, RpTriangle*, RwUInt16, RwUInt16, RwUInt16))0x64CC00)(geometry, triangle, vert1, vert2, vert3);
}

RpGeometry* RpGeometryTriangleSetMaterial(RpGeometry* geometry, RpTriangle* triangle, RpMaterial* material) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpTriangle*, RpMaterial*))0x64CC30)(geometry, triangle, material);
}

RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack, void* pData) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpMaterialCallBack, void*))0x64CC90)(geometry, fpCallBack, pData);
}

RpGeometry* RpGeometryLock(RpGeometry* geometry, RwInt32 lockMode) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RwInt32))0x64CCD0)(geometry, lockMode);
}

RpGeometry* RpGeometryUnlock(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))0x64CD00)(geometry);
}

RpGeometry* RpGeometryCreate(RwInt32 numVert, RwInt32 numTriangles, RwUInt32 format) {
    return ((RpGeometry*(__cdecl *)(RwInt32, RwInt32, RwUInt32))0x64CDB0)(numVert, numTriangles, format);
}

RwBool RpGeometryDestroy(RpGeometry* geometry) {
    return ((RwBool(__cdecl *)(RpGeometry*))0x64CFE0)(geometry);
}

RwInt32 RpGeometryRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x64D080)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpGeometryRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x64D0B0)(pluginID, readCB, writeCB, getSizeCB);
}

RpGeometry* RpGeometryStreamRead(RwStream* stream) {
    return ((RpGeometry*(__cdecl *)(RwStream*))0x64D0E0)(stream);
}

void _rpAtomicResyncInterpolatedSphere(RpAtomic* atomic) {
    ((void(__cdecl *)(RpAtomic*))0x6405D0)(atomic);
}

const RwSphere* RpAtomicGetWorldBoundingSphere(RpAtomic* atomic) {
    return ((const RwSphere*(__cdecl *)(RpAtomic*))0x640710)(atomic);
}

RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomicCallBack, void*))0x640D00)(clump, callback, pData);
}

RpClump* RpClumpForAllLights(RpClump* clump, RpLightCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RpLightCallBack, void*))0x640D90)(clump, callback, pData);
}

RpClump* RpClumpForAllCameras(RpClump* clump, RwCameraCallBack callback, void* pData) {
    return ((RpClump*(__cdecl *)(RpClump*, RwCameraCallBack, void*))0x640D40)(clump, callback, pData);
}

RpAtomic* RpAtomicSetFrame(RpAtomic* atomic, RwFrame* frame) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RwFrame*))0x6423C0)(atomic, frame);
}

RpClump* RpClumpRender(RpClump* clump) {
    return ((RpClump*(__cdecl *)(RpClump*))0x640CB0)(clump);
}

RpClump* RpClumpRemoveAtomic(RpClump* clump, RpAtomic* atomic) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomic*))0x6415E0)(clump, atomic);
}

RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic) {
    return ((RpClump*(__cdecl *)(RpClump*, RpAtomic*))0x6415B0)(clump, atomic);
}

RpClump* RpClumpRemoveLight(RpClump* clump, RpLight* light) {
    return ((RpClump*(__cdecl *)(RpClump*, RpLight*))0x641610)(clump, light);
}

RwBool RpClumpDestroy(RpClump* clump) {
    return ((RwBool(__cdecl *)(RpClump*))0x641430)(clump);
}

RpClump* RpClumpCreate(void) {
    return ((RpClump*(__cdecl *)(void))0x6413C0)();
}

RpClump* RpClumpClone(RpClump* clump) {
    return ((RpClump*(__cdecl *)(RpClump*))0x6410E0)(clump);
}

RwBool RpAtomicDestroy(RpAtomic* atomic) {
    return ((RwBool(__cdecl *)(RpAtomic*))0x640F50)(atomic);
}

RpAtomic* RpAtomicClone(RpAtomic* atomic) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*))0x640FD0)(atomic);
}

RpAtomic* RpAtomicCreate(void) {
    return ((RpAtomic*(__cdecl *)(void))0x640DE0)();
}

RpAtomic* RpAtomicSetGeometry(RpAtomic* atomic, RpGeometry* geometry, RwUInt32 flags) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RpGeometry*, RwUInt32))0x640ED0)(atomic, geometry, flags);
}

RwInt32 RpClumpGetNumAtomics(RpClump* clump) {
    return ((RwInt32(__cdecl *)(RpClump*))0x640C80)(clump);
}

RpClump* RpClumpStreamRead(RwStream* stream) {
    return ((RpClump*(__cdecl *)(RwStream*))0x641A10)(stream);
}

RwInt32 RpAtomicRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x6422D0)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpClumpRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x642300)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpAtomicRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x642330)(pluginID, readCB, writeCB, getSizeCB);
}

RwInt32 RpAtomicSetStreamAlwaysCallBack(RwUInt32 pluginID, RwPluginDataChunkAlwaysCallBack alwaysCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkAlwaysCallBack))0x642360)(pluginID, alwaysCB);
}

RwInt32 RpAtomicSetStreamRightsCallBack(RwUInt32 pluginID, RwPluginDataChunkRightsCallBack rightsCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkRightsCallBack))0x642380)(pluginID, rightsCB);
}

RwInt32 RpAtomicGetPluginOffset(RwUInt32 pluginID) {
    return ((RwInt32(__cdecl *)(RwUInt32))0x6423A0)(pluginID);
}

RpWorldSector* _rpSectorDefaultRenderCallBack(RpWorldSector* sector) {
    return ((RpWorldSector*(__cdecl *)(RpWorldSector*))0x654750)(sector);
}

RpWorld* RpWorldUnlock(RpWorld* world) {
    return ((RpWorld*(__cdecl *)(RpWorld*))0x6547A0)(world);
}

RwBool RpWorldPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))0x655070)();
}

RwBool RpWorldDestroy(RpWorld* world) {
    return ((RwBool(__cdecl *)(RpWorld*))0x654950)(world);
}

RpWorld* RpWorldCreate(RwBBox* boundingBox) {
    return ((RpWorld*(__cdecl *)(RwBBox*))0x654C90)(boundingBox);
}

RpWorld* RpWorldSectorGetWorld(const RpWorldSector* sector) {
    return ((RpWorld*(__cdecl *)(const RpWorldSector*))0x6548C0)(sector);
}

RwInt32 RpWorldRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor constructCB, RwPluginObjectDestructor destructCB, RwPluginObjectCopy copyCB) {
    return ((RwInt32(__cdecl *)(RwInt32, RwUInt32, RwPluginObjectConstructor, RwPluginObjectDestructor, RwPluginObjectCopy))0x655010)(size, pluginID, constructCB, destructCB, copyCB);
}

RwInt32 RpWorldRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB, RwPluginDataChunkWriteCallBack writeCB, RwPluginDataChunkGetSizeCallBack getSizeCB) {
    return ((RwInt32(__cdecl *)(RwUInt32, RwPluginDataChunkReadCallBack, RwPluginDataChunkWriteCallBack, RwPluginDataChunkGetSizeCallBack))0x655040)(pluginID, readCB, writeCB, getSizeCB);
}

void RxD3D8AllInOneSetRenderCallBack(RxPipelineNode* node, RxD3D8AllInOneRenderCallBack callback) {
    ((void(__cdecl *)(RxPipelineNode*, RxD3D8AllInOneRenderCallBack))0x678E30)(node, callback);
}

RxPipeline* RpWorldSetDefaultSectorPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))0x673470)(pipeline);
}

RxPipeline* RpAtomicSetDefaultPipeline(RxPipeline* pipeline) {
    return ((RxPipeline*(__cdecl *)(RxPipeline*))0x6734A0)(pipeline);
}

RpWorld* RpWorldRemoveCamera(RpWorld* world, RwCamera* camera) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RwCamera*))0x654490)(world, camera);
}

RpWorld* RpWorldAddCamera(RpWorld* world, RwCamera* camera) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RwCamera*))0x654460)(world, camera);
}

RpWorld* RpAtomicGetWorld(const RpAtomic* atomic) {
    return ((RpWorld*(__cdecl *)(const RpAtomic*))0x6544F0)(atomic);
}

RpWorld* RpWorldAddClump(RpWorld* world, RpClump* clump) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpClump*))0x654500)(world, clump);
}

RpWorld* RpWorldAddLight(RpWorld* world, RpLight* light) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpLight*))0x654680)(world, light);
}

RpWorld* RpWorldRemoveLight(RpWorld* world, RpLight* light) {
    return ((RpWorld*(__cdecl *)(RpWorld*, RpLight*))0x6546D0)(world, light);
}

/* rtquat.h */

RtQuat* RtQuatRotate(RtQuat* quat, const RwV3d* axis, RwReal angle, RwOpCombineType combineOp) {
    return ((RtQuat*(__cdecl *)(RtQuat*, const RwV3d*, RwReal, RwOpCombineType))0x65ABD0)(quat, axis, angle, combineOp);
}

/* rtanim.h */

RwBool RtAnimInitialize(void) {
    return ((RwBool(__cdecl *)(void))0x64D840)();
}

RwBool RtAnimRegisterInterpolationScheme(RtAnimInterpolatorInfo* interpolatorInfo) {
    return ((RwBool(__cdecl *)(RtAnimInterpolatorInfo*))0x64D8D0)(interpolatorInfo);
}

RtAnimAnimation* RtAnimAnimationCreate(RwInt32 typeID, RwInt32 numFrames, RwInt32 flags, RwReal duration) {
    return ((RtAnimAnimation*(__cdecl *)(RwInt32, RwInt32, RwInt32, RwReal))0x64D970)(typeID, numFrames, flags, duration);
}

RtAnimAnimation* RtAnimAnimationDestroy(RtAnimAnimation* animation) {
    return ((RtAnimAnimation*(__cdecl *)(RtAnimAnimation*))0x64DA20)(animation);
}

RtAnimInterpolator* RtAnimInterpolatorCreate(RwInt32 numNodes, RwInt32 maxKeyFrameSize) {
    return ((RtAnimInterpolator*(__cdecl *)(RwInt32, RwInt32))0x64DA60)(numNodes, maxKeyFrameSize);
}

void RtAnimInterpolatorDestroy(RtAnimInterpolator* anim) {
    ((void(__cdecl *)(RtAnimInterpolator*))0x64DAC0)(anim);
}

RwBool RtAnimInterpolatorSetCurrentAnim(RtAnimInterpolator* animI, RtAnimAnimation* anim) {
    return ((RwBool(__cdecl *)(RtAnimInterpolator*, RtAnimAnimation*))0x64DAD0)(animI, anim);
}

/* rphanim.h */

RpHAnimHierarchy* RpHAnimHierarchyCreate(RwInt32 numNodes, RwUInt32* nodeFlags, RwInt32* nodeIDs, RpHAnimHierarchyFlag flags, RwInt32 maxKeyFrameSize) {
    return ((RpHAnimHierarchy*(__cdecl *)(RwInt32, RwUInt32*, RwInt32*, RpHAnimHierarchyFlag, RwInt32))0x646280)(numNodes, nodeFlags, nodeIDs, flags, maxKeyFrameSize);
}

RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame) {
    return ((RpHAnimHierarchy*(__cdecl *)(RwFrame*))0x646380)(frame);
}

RwMatrix* RpHAnimHierarchyGetMatrixArray(RpHAnimHierarchy* hierarchy) {
    return ((RwMatrix*(__cdecl *)(RpHAnimHierarchy*))0x646370)(hierarchy);
}

RwBool RpHAnimHierarchyUpdateMatrices(RpHAnimHierarchy* hierarchy) {
    return ((RwBool(__cdecl *)(RpHAnimHierarchy*))0x6463C0)(hierarchy);
}

RwInt32 RpHAnimIDGetIndex(RpHAnimHierarchy* hierarchy, RwInt32 ID) {
    return ((RwInt32(__cdecl *)(RpHAnimHierarchy*, RwInt32))0x646390)(hierarchy, ID);
}

RwBool RpHAnimPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))0x645C80)();
}

void RpHAnimKeyFrameApply(void* matrix, void* voidIFrame) {
    ((void(__cdecl *)(void*, void*))0x66A8A0)(matrix, voidIFrame);
}

void RpHAnimKeyFrameBlend(void* voidOut, void* voidIn1, void* voidIn2, RwReal alpha) {
    ((void(__cdecl *)(void*, void*, void*, RwReal))0x66ADE0)(voidOut, voidIn1, voidIn2, alpha);
}

void RpHAnimKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, RwReal time) {
    ((void(__cdecl *)(void*, void*, void*, RwReal))0x66A9C0)(voidOut, voidIn1, voidIn2, time);
}

void RpHAnimKeyFrameAdd(void* voidOut, void* voidIn1, void* voidIn2) {
    ((void(__cdecl *)(void*, void*, void*))0x66B440)(voidOut, voidIn1, voidIn2);
}

void RpHAnimKeyFrameMulRecip(void* voidFrame, void* voidStart) {
    ((void(__cdecl *)(void*, void*))0x66B2E0)(voidFrame, voidStart);
}

RtAnimAnimation* RpHAnimKeyFrameStreamRead(RwStream* stream, RtAnimAnimation* animation) {
    return ((RtAnimAnimation*(__cdecl *)(RwStream*, RtAnimAnimation*))0x66B1E0)(stream, animation);
}

RwBool RpHAnimKeyFrameStreamWrite(RtAnimAnimation* animation, RwStream* stream) {
    return ((RwBool(__cdecl *)(RtAnimAnimation*, RwStream*))0x66B260)(animation, stream);
}

RwInt32 RpHAnimKeyFrameStreamGetSize(RtAnimAnimation* animation) {
    return ((RwInt32(__cdecl *)(RtAnimAnimation*))0x66B2D0)(animation);
}

/* rpskin.h */

RwBool RpSkinPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))0x648C50)();
}

RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*, RpHAnimHierarchy*))0x649930)(atomic, hierarchy);
}

RpHAnimHierarchy* RpSkinAtomicGetHAnimHierarchy(const RpAtomic* atomic) {
    return ((RpHAnimHierarchy*(__cdecl *)(const RpAtomic*))0x649950)(atomic);
}

RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*, RpSkin*))0x649970)(geometry, skin);
}

RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry) {
    return ((RpSkin*(__cdecl *)(RpGeometry*))0x649960)(geometry);
}

RwUInt32 RpSkinGetNumBones(RpSkin* skin) {
    return ((RwUInt32(__cdecl *)(RpSkin*))0x6499C0)(skin);
}

const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin) {
    return ((const RwMatrixWeights*(__cdecl *)(RpSkin*))0x6499D0)(skin);
}

const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin) {
    return ((const RwMatrix*(__cdecl *)(RpSkin*))0x6499E0)(skin);
}

RpGeometry* _rpSkinInitialize(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))0x66D410)(geometry);
}

RpGeometry* _rpSkinDeinitialize(RpGeometry* geometry) {
    return ((RpGeometry*(__cdecl *)(RpGeometry*))0x66D4F0)(geometry);
}

/* rpmatfx.h */

RwBool RpMatFXPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))0x655EB0)();
}

RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic) {
    return ((RpAtomic*(__cdecl *)(RpAtomic*))0x657020)(atomic);
}

RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RpMatFXMaterialFlags))0x657050)(material, flags);
}

RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture, RwFrame* frame, RwBool useFrameBufferAlpha, RwReal coef) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*, RwFrame*, RwBool, RwReal))0x657180)(material, texture, frame, useFrameBufferAlpha, coef);
}

RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material) {
    return ((RpMatFXMaterialFlags(__cdecl *)(const RpMaterial*))0x6572F0)(material);
}

RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))0x657310)(material, texture);
}

RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwFrame*))0x6574D0)(material, frame);
}

RwTexture* RpMatFXMaterialGetBumpMapBumpedTexture(const RpMaterial* material) {
    return ((RwTexture*(__cdecl *)(const RpMaterial*))0x657530)(material);
}

RwReal RpMatFXMaterialGetEnvMapCoefficient(const RpMaterial* material) {
    return ((RwReal(__cdecl *)(const RpMaterial*))0x6575A0)(material);
}

RpMaterial* RpMatFXMaterialSetDualTexture(RpMaterial* material, RwTexture* texture) {
    return ((RpMaterial*(__cdecl *)(RpMaterial*, RwTexture*))0x6575F0)(material, texture);
}

/* rpanisot.h */

RwInt8 RpAnisotGetMaxSupportedMaxAnisotropy(void) {
    return ((RwInt8(__cdecl *)(void))0x657660)();
}

RwTexture* RpAnisotTextureSetMaxAnisotropy(RwTexture* tex, RwInt8 val) {
    return ((RwTexture*(__cdecl *)(RwTexture*, RwInt8))0x657670)(tex, val);
}

RwInt8 RpAnisotTextureGetMaxAnisotropy(RwTexture* tex) {
    return ((RwInt8(__cdecl *)(RwTexture*))0x6576A0)(tex);
}

RwBool RpAnisotPluginAttach(void) {
    return ((RwBool(__cdecl *)(void))0x6576C0)();
}

/* rtbmp.h */

RwImage* RtBMPImageRead(const RwChar* imageName) {
    return ((RwImage*(__cdecl *)(const RwChar*))0x657870)(imageName);
}