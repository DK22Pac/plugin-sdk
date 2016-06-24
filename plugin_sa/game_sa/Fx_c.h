#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "List_c.h"

enum FxQuality_e : unsigned int
{
	FXQUALITY_LOW,
	FXQUALITY_MEDIUM,
	FXQUALITY_HIGH,
	FXQUALITY_VERY_HIGH
};

class PLUGIN_API Fx_c
{
public:
	void *m_pPrtBlood;
	void *m_pPrtBoatsplash;
	void *m_pPrtBubble;
	void *m_pPrtCardebris;
	void *m_pPrtCollisionsmoke;
	void *m_pPrtGunshell;
	void *m_pPrtSand;
	void *m_pPrtSand2;
	void *m_pPrtSmoke_huge;
	void *m_pPrtSmokeII3expand;
	void *m_pPrtSpark;
	void *m_pPrtSpark2;
	void *m_pPrtSplash;
	void *m_pPrtWake;
	void *m_pPrtWatersplash;
	void *m_pPrtWheeldirt;
	void *m_pPrtGlass;
	List_c m_entityParticlesList;
	unsigned int m_nBloodPoolsCount;
	FxQuality_e m_fxQuality;
	unsigned int m_nVerticesCount2;
	unsigned int m_nVerticesCount;
	unsigned int m_nTransformRenderFlags;
	RwRaster *pRasterToRender;
	RwMatrixTag *m_pTransformLTM;
	void *m_pVerts;

	FxQuality_e GetFxQuality();
	void SetFxQuality(FxQuality_e quality);
};

VALIDATE_SIZE(Fx_c, 0x70);

extern PLUGIN_API Fx_c &g_fx;