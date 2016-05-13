#include "CControllerConfigManager.h"

CControllerConfigManager &ControlsManager = *(CControllerConfigManager *)0xB70198;

void CControllerConfigManager::SaveSettings(int file)
{
	((void (__thiscall *)(CControllerConfigManager *, int))0x52D200)(this, file);
}

bool CControllerConfigManager::LoadSettings(int file)
{
	return ((bool (__thiscall *)(CControllerConfigManager *, int))0x530530)(this, file);
}