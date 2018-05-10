/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CScriptResourceManager.h"

PLUGIN_SOURCE_FILE

int addrof(CScriptResourceManager::AddToResourceManager) = ADDRESS_BY_VERSION(0x4704B0, 0, 0, 0, 0, 0);
int gaddrof(CScriptResourceManager::AddToResourceManager) = GLOBAL_ADDRESS_BY_VERSION(0x4704B0, 0, 0, 0, 0, 0);

void CScriptResourceManager::AddToResourceManager(int modelID, unsigned int ResourceType, CRunningScript *pScript) {
    plugin::CallMethodDynGlobal<CScriptResourceManager *, int, unsigned int, CRunningScript *>(gaddrof(CScriptResourceManager::AddToResourceManager), this, modelID, ResourceType, pScript);
}

int addrof(CScriptResourceManager::HasResourceBeenRequested) = ADDRESS_BY_VERSION(0x470620, 0, 0, 0, 0, 0);
int gaddrof(CScriptResourceManager::HasResourceBeenRequested) = GLOBAL_ADDRESS_BY_VERSION(0x470620, 0, 0, 0, 0, 0);

bool CScriptResourceManager::HasResourceBeenRequested(int ModelId, unsigned int a4) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CScriptResourceManager *, int, unsigned int>(gaddrof(CScriptResourceManager::HasResourceBeenRequested), this, ModelId, a4);
}

int addrof(CScriptResourceManager::RemoveFromResourceManager) = ADDRESS_BY_VERSION(0x470510, 0, 0, 0, 0, 0);
int gaddrof(CScriptResourceManager::RemoveFromResourceManager) = GLOBAL_ADDRESS_BY_VERSION(0x470510, 0, 0, 0, 0, 0);

bool CScriptResourceManager::RemoveFromResourceManager(int modelID, unsigned int ResourceType, CRunningScript *pScript) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CScriptResourceManager *, int, unsigned int, CRunningScript *>(gaddrof(CScriptResourceManager::RemoveFromResourceManager), this, modelID, ResourceType, pScript);
}
