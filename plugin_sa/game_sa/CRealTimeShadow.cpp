/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRealTimeShadow.h"

CRealTimeShadow::CRealTimeShadow()
{
	((void (__thiscall *)(CRealTimeShadow *))0x706410)(this);
}

CRealTimeShadow::~CRealTimeShadow()
{
	((void (__thiscall *)(CRealTimeShadow *))0x706440)(this);
}

RwFrame *CRealTimeShadow::SetLightProperties(float angle, float _unused_param, bool setLight)
{
	return ((RwFrame *(__thiscall *)(CRealTimeShadow *, float, float, bool))0x705900)(this, angle, _unused_param, setLight);
}

void CRealTimeShadow::Destroy()
{
	((void (__thiscall *)(CRealTimeShadow *))0x705990)(this);
}

CShadowCamera *CRealTimeShadow::GetShadowCamera()
{
	return ((CShadowCamera *(__thiscall *)(CRealTimeShadow *))0x7059E0)(this);
}

RwTexture *CRealTimeShadow::GetShadowRwTexture()
{
	return ((RwTexture *(__thiscall *)(CRealTimeShadow *))0x7059F0)(this);
}

void CRealTimeShadow::DrawBorderAroundTexture(RwRGBA  const& color)
{
	((void (__thiscall *)(CRealTimeShadow *, RwRGBA  const&))0x705A00)(this, color);
}

// this creates all stuff for shadow processing (cameras, textures)
bool CRealTimeShadow::Create(bool isBlurred, int blurPasses, bool drawMoreBlur)
{
	return ((bool (__thiscall *)(CRealTimeShadow *, bool, int, bool))0x706460)(this, isBlurred, blurPasses, drawMoreBlur);
}

// this one registers shadow for entity
bool CRealTimeShadow::SetupForThisEntity(CPhysical *owner)
{
	return ((bool (__thiscall *)(CRealTimeShadow *, CPhysical *))0x706520)(this, owner);
}

// this updates texture and give it to us
RwTexture *CRealTimeShadow::Update()
{
	return ((RwTexture *(__thiscall *)(CRealTimeShadow *))0x706600)(this);
}