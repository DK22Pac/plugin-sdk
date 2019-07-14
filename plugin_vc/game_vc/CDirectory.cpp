/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDirectory.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CDirectory, void(int)) = ADDRESS_BY_VERSION(0x487430, 0, 0);
int ctor_gaddr_o(CDirectory, void(int)) = GLOBAL_ADDRESS_BY_VERSION(0x487430, 0, 0);

int dtor_addr(CDirectory) = ADDRESS_BY_VERSION(0x487420, 0, 0);
int dtor_gaddr(CDirectory) = GLOBAL_ADDRESS_BY_VERSION(0x487420, 0, 0);

int addrof(CDirectory::AddItem) = ADDRESS_BY_VERSION(0x4873F0, 0, 0);
int gaddrof(CDirectory::AddItem) = GLOBAL_ADDRESS_BY_VERSION(0x4873F0, 0, 0);

void CDirectory::AddItem(const CDirectory::DirectoryInfo *entry) {
    plugin::CallMethodDynGlobal<CDirectory *, const CDirectory::DirectoryInfo *>(gaddrof(CDirectory::AddItem), this, entry);
}

int addrof(CDirectory::FindItem) = ADDRESS_BY_VERSION(0x487220, 0, 0);
int gaddrof(CDirectory::FindItem) = GLOBAL_ADDRESS_BY_VERSION(0x487220, 0, 0);

bool CDirectory::FindItem(char const *name, unsigned int *outOffset, unsigned int *outSize) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDirectory *, char const *, unsigned int *, unsigned int *>(gaddrof(CDirectory::FindItem), this, name, outOffset, outSize);
}

int addrof(CDirectory::ReadDirFile) = ADDRESS_BY_VERSION(0x487370, 0, 0);
int gaddrof(CDirectory::ReadDirFile) = GLOBAL_ADDRESS_BY_VERSION(0x487370, 0, 0);

void CDirectory::ReadDirFile(char const *filename) {
    plugin::CallMethodDynGlobal<CDirectory *, char const *>(gaddrof(CDirectory::ReadDirFile), this, filename);
}

int addrof(CDirectory::WriteDirFile) = ADDRESS_BY_VERSION(0x487320, 0, 0);
int gaddrof(CDirectory::WriteDirFile) = GLOBAL_ADDRESS_BY_VERSION(0x487320, 0, 0);

bool CDirectory::WriteDirFile(char const *filename) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDirectory *, char const *>(gaddrof(CDirectory::WriteDirFile), this, filename);
}
