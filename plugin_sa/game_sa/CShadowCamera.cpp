/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShadowCamera.h"

CShadowCamera::CShadowCamera()
{
	((void (__thiscall *)(CShadowCamera *))0x7053F0)(this);
}

CShadowCamera::~CShadowCamera()
{
	((void (__thiscall *)(CShadowCamera *))0x705400)(this);
}

void CShadowCamera::CreateTexture()
{
	((void (__thiscall *)(CShadowCamera *))0x705480)(this);
}

RwCamera *CShadowCamera::SetFrustum(float viewWindow)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, float))0x7054C0)(this, viewWindow);
}

RwCamera *CShadowCamera::SetLight(RpLight *light)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, RpLight *))0x705520)(this, light);
}

RwCamera *CShadowCamera::SetCenter(RwV3d *center)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, RwV3d *))0x705590)(this, center);
}

void CShadowCamera::InvertRaster()
{
	((void (__thiscall *)(CShadowCamera *))0x705660)(this);
}

RwRaster *CShadowCamera::GetRwRenderRaster()
{
	return ((RwRaster *(__thiscall *)(CShadowCamera *))0x705770)(this);
}

RwTexture *CShadowCamera::GetRwRenderTexture()
{
	return ((RwTexture *(__thiscall *)(CShadowCamera *))0x705780)(this);
}

RwRaster *CShadowCamera::DrawOutlineBorder(RwRGBA  const& color)
{
	return ((RwRaster *(__thiscall *)(CShadowCamera *, RwRGBA const&))0x705790)(this, color);
}

RwCamera *CShadowCamera::Create(int rasterSize)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, int))0x705B60)(this, rasterSize);
}

RwCamera *CShadowCamera::Update(RpClump *object)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, RpClump *))0x705BF0)(this, object);
}

RwCamera *CShadowCamera::Update(RpAtomic *object)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera *, RpAtomic *))0x705C80)(this, object);
}

void CShadowCamera::MakeGradientRaster()
{
	((void (__thiscall *)(CShadowCamera *))0x705D20)(this);
}

RwImage *CShadowCamera::CreateRwImage()
{
	return ((RwImage *(__thiscall *)(CShadowCamera *))0x705EF0)(this);
}

RwRaster *CShadowCamera::DrawBlurInRect(RwRect *rect)
{
	return ((RwRaster *(__thiscall *)(CShadowCamera *, RwRect *))0x705F50)(this, rect);
}

void CShadowCamera::RasterResample(RwRaster *raster)
{
	((void (__thiscall *)(CShadowCamera *, RwRaster *))0x706070)(this, raster);
}

void CShadowCamera::RasterBlur(RwRaster *raster, int numPasses)
{
	((void (__thiscall *)(CShadowCamera *, RwRaster *, int))0x706170)(this, raster, numPasses);
}