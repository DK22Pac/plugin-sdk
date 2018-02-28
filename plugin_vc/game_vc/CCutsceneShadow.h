/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CShadowCamera.h"
#include "RenderWare.h"

class CCutsceneShadow
{
public:
	CShadowCamera m_Camera;
	bool m_bResample;
	char _pad0[3];
	CShadowCamera m_ResampleCamera;
	int m_nBlurPasses;
	CShadowCamera m_BlurCamera;
    bool m_bGradient;
	char _pad1[3];
	CShadowCamera m_GradientCamera;
	RpAtomic *m_pAtomic;
	int m_nRwObjectType;
	RpLight *m_pLight;
	RwSphere m_BoundingSphere;
	RwSphere m_BaseSphere;

	CCutsceneShadow();
	~CCutsceneShadow();

	bool Create(RwObject *object, int rasterSize, bool resample, int blurPasses, bool gradient);
	RwFrame *SetLightProperties(float angleY, float angleX, bool setLight);
	bool IsInitialized();
	CShadowCamera *GetShadowCamera(int ShadowType);
	RwRaster *Update();
	RwTexture *UpdateForCutscene();
	RwTexture *GetShadowRwTexture();
	void DrawBorderAroundTexture(RwRGBA  const& color);
};

VALIDATE_SIZE(CCutsceneShadow, 0x58);