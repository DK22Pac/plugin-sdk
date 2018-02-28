/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneShadow.h"


void CCutsceneShadow::DrawBorderAroundTexture(RwRGBA  const& color)
{
	((void (__thiscall *)(CCutsceneShadow*, RwRGBA  const&))0x625B60)(this, color);
}

RwTexture *CCutsceneShadow::GetShadowRwTexture(void)
{
	return ((RwTexture *(__thiscall *)(CCutsceneShadow*))0x625B80)(this);
}

RwTexture *CCutsceneShadow::UpdateForCutscene(void)
{
	return ((RwTexture *(__thiscall *)(CCutsceneShadow*))0x625BA0)(this);
}

RwRaster *CCutsceneShadow::Update(void)
{
	return ((RwRaster *(__thiscall *)(CCutsceneShadow*))0x625BC0)(this);
}

CShadowCamera *CCutsceneShadow::GetShadowCamera(int ShadowType)
{
	return ((CShadowCamera *(__thiscall *)(CCutsceneShadow*, int))0x625D50)(this, ShadowType);
}

bool CCutsceneShadow::IsInitialized(void)
{
	return ((bool (__thiscall *)(CCutsceneShadow*))0x625D80)(this);
}

RwFrame *CCutsceneShadow::SetLightProperties(float angleY, float angleX, bool setLight)
{
	return ((RwFrame *(__thiscall *)(CCutsceneShadow*, float, float, bool))0x625D90)(this, angleY, angleX, setLight);
}

bool CCutsceneShadow::Create(RwObject *object, int rasterSize, bool resample, int blurPasses, bool gradient)
{
	return ((bool (__thiscall *)(CCutsceneShadow*, RwObject *, int, bool, int, bool))0x625E60)(this, object, rasterSize, resample, blurPasses, gradient);
}

CCutsceneShadow::~CCutsceneShadow()
{
	((void(__thiscall *)(CCutsceneShadow*))0x6263F0)(this);
}

CCutsceneShadow::CCutsceneShadow(void)
{
	((void(__thiscall *)(CCutsceneShadow*))0x626470)(this);
}