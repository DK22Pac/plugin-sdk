/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CShadowCamera.h"


void CShadowCamera::DrawOutlineBorder(RwRGBA  const& color)
{
	((void (__thiscall *)(CShadowCamera*, RwRGBA  const&))0x625B60)(this, color);
}

RwRaster *CShadowCamera::RasterGradient(RwRaster *raster)
{
	return ((RwRaster *(__thiscall *)(CShadowCamera*, RwRaster *))0x6266A0)(this, raster);
}

RwRaster *CShadowCamera::RasterBlur(RwRaster *raster, int numPasses)
{
	return ((RwRaster *(__thiscall *)(CShadowCamera*, RwRaster *, int))0x626780)(this, raster, numPasses);
}

RwRaster *CShadowCamera::RasterResample(RwRaster *raster)
{
	return ((RwRaster *(__thiscall *)(CShadowCamera*, RwRaster *))0x626900)(this, raster);
}

RwRaster *CShadowCamera::MakeGradientRaster()
{
	return ((RwRaster *(__thiscall *)(CShadowCamera*))0x6269F0)(this);
}

void CShadowCamera::InvertRaster()
{
	((void (__thiscall *)(CShadowCamera*))0x626BD0)(this);
}

RwCamera *CShadowCamera::Update(RpAtomic *atomic)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera*, RpAtomic *))0x626D00)(this, atomic);
}

void CShadowCamera::Destroy()
{
	((void (__thiscall *)(CShadowCamera*))0x626DE0)(this);
}

RwCamera *CShadowCamera::Create(int rasterSize)
{
	return ((RwCamera *(__thiscall *)(CShadowCamera*, int))0x626E70)(this, rasterSize);
}