/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CShadowCamera.h"
#include "CSphere.h"

#pragma pack(push, 4)
class PLUGIN_API CRealTimeShadow
{
public:
	class CPhysical *m_pOwner;
	unsigned __int8 m_bCreated;
	unsigned __int8 m_nIntensity;
	CShadowCamera m_Camera;
	unsigned __int8 m_bBlurred;
	CShadowCamera m_BlurCamera;
	unsigned __int32 m_dwBlurPasses;
	unsigned __int8 m_bDrawMoreBlur;
	unsigned __int32 m_dwRwObjectType;
	struct RpLight *m_pLight;
	CSphere m_BoundingSphere;
	CSphere m_BaseSphere;

	CRealTimeShadow();
	~CRealTimeShadow();

	struct RwFrame *SetLightProperties(float angle, float _unused_param, bool setLight);
	void Destroy();
	CShadowCamera *GetShadowCamera();
	struct RwTexture *GetShadowRwTexture();
	void DrawBorderAroundTexture(RwRGBA  const& color);
	// this creates all stuff for shadow processing (cameras, textures)
	bool Create(bool isBlurred, int blurPasses, bool drawMoreBlur);
	// this one registers shadow for entity
	bool SetupForThisEntity(class CPhysical *owner);
	// this updates texture and give it to us
	RwTexture *Update();
};
#pragma pack(pop)

VALIDATE_SIZE(CRealTimeShadow, 0x4C);
