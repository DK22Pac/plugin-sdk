#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "List_c.h"
#include "FxFrustumInfo_c.h"
#include "FxMemoryPool_c.h"
#include "FxSystemBP_c.h"
#include "FxSystem_c.h"

class FxEmitterPrt_c;

class FxManager_c {
public:
	List_c m_fxSystemBPList;
	List_c m_fxSystemList;
	void *m_pFxEmitters;
	List_c m_fxEmitterPrtList;
	int m_nFxTxdIndex;
	RwV3d *m_pWindDir;
	float *m_pfWindSpeed;
	FxFrustumInfo_c m_frustum;
	unsigned int m_nCurrentMatrix;
	RwMatrix *m_apMatrices[8];
	FxMemoryPool_c m_pool;

    ~FxManager_c();
    FxFrustumInfo_c* GetFrustumInfo();
    void CalcFrustumInfo(RwCamera* camera);
    void Render(RwCamera* camera, unsigned char arg1);
    FxSystemBP_c* FindFxSystemBP(char* name);
    void ReturnParticle(FxEmitterPrt_c* emitter);
    FxEmitterPrt_c* GetParticle(signed char arg0);
    void SetWindData(RwV3d* dir, float* speed);
    void FreeUpParticle();
    RwMatrix* FxRwMatrixCreate();
    void FxRwMatrixDestroy(RwMatrix* matrix);
    FxManager_c();
    bool ShouldCreate(FxSystemBP_c* bpSystem, RwMatrixTag* transform, RwMatrixTag* objectMatrix, unsigned char ignoreBoundingChecks);
    FxSystem_c* CreateFxSystem(FxSystemBP_c* bpSystem, RwMatrixTag* transform, RwMatrixTag* objectMatrix, unsigned char ignoreBoundingChecks);
    FxSystem_c* CreateFxSystem(FxSystemBP_c* bpSystem, RwV3d* position, RwMatrixTag* objectMatrix, unsigned char ignoreBoundingChecks);
    void DestroyFxSystem(FxSystem_c* system);
    void DestroyAllFxSystems();
    bool Init();
    void Exit();
    void Update(RwCamera* arg0, float timeDelta);
    void UnloadFxProject();
    FxSystem_c* CreateFxSystem(char* name, RwMatrixTag* transform, RwMatrixTag* objectMatrix, unsigned char ignoreBoundingChecks);
    FxSystem_c* CreateFxSystem(char* name, RwV3d* position, RwMatrixTag* objectMatrix, unsigned char ignoreBoundingChecks);
    FxSystemBP_c* LoadFxSystemBP(char* filename, int file);
    bool LoadFxProject(char* filename);
};

VALIDATE_SIZE(FxManager_c, 0xB8);

extern PLUGIN_API FxManager_c &g_fxMan;