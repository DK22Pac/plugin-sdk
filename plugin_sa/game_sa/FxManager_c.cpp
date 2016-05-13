#include "FxManager_c.h"

FxManager_c &g_fxMan = *(FxManager_c *)0xA9AE80;

void *FxManager_c::LoadFxSystemBP(char *filename, int file)
{
	return ((void *(__thiscall *)(FxManager_c *, char *, int))0x5C1F50)(this, filename, file);
}