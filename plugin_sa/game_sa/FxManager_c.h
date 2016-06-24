#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "List_c.h"
#include <game_sa\CVector.h>
#include <game_sa\FxFrustumInfo_c.h>
#include <game_sa\FxMemoryPool_c.h>

class PLUGIN_API FxManager_c
{
public:
	List_c m_fxSystemList;
	List_c m_particleList;
	void *m_pFxEmitters;
	List_c m_fxEmitterPrtList;
	int m_nFxTxdIndex;
	CVector *m_pWindDir;
	float *m_pfWindSpeed;
	FxFrustumInfo_c m_frustum;
	int m_nCurrentMatrix;
	RwMatrix *m_apMatrices[8];
	FxMemoryPool_c m_pool;

	void *LoadFxSystemBP(char *filename, int file);
};

VALIDATE_SIZE(FxManager_c, 0xB8);

extern PLUGIN_API FxManager_c &g_fxMan;