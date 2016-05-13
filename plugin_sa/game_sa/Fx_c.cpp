#include "Fx_c.h"

Fx_c &g_fx = *(Fx_c *)0xA9AE00;

FxQuality_e Fx_c::GetFxQuality()
{
	return ((FxQuality_e (__thiscall *)(Fx_c *))0x49EA50)(this);
	
}

void Fx_c::SetFxQuality(FxQuality_e quality)
{
	((void (__thiscall *)(Fx_c *, FxQuality_e))0x49EA40)(this, quality);
}