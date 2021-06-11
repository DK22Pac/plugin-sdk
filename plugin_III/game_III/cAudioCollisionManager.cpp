/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioCollisionManager.h"

PLUGIN_SOURCE_FILE

int addrof(cAudioCollisionManager::AddCollisionToRequestedQueue) = ADDRESS_BY_VERSION(0x5685E0, 0x568930, 0x568830);
int gaddrof(cAudioCollisionManager::AddCollisionToRequestedQueue) = GLOBAL_ADDRESS_BY_VERSION(0x5685E0, 0x568930, 0x568830);

void cAudioCollisionManager::AddCollisionToRequestedQueue() {
    plugin::CallMethodDynGlobal<cAudioCollisionManager *>(gaddrof(cAudioCollisionManager::AddCollisionToRequestedQueue), this);
}
