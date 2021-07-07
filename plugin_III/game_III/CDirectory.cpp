/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDirectory.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CDirectory, void(int)) = ADDRESS_BY_VERSION(0x4735C0, 0x4735C0, 0x4735C0);
int ctor_gaddr_o(CDirectory, void(int)) = GLOBAL_ADDRESS_BY_VERSION(0x4735C0, 0x4735C0, 0x4735C0);

int dtor_addr(CDirectory) = ADDRESS_BY_VERSION(0x4735F0, 0x4735F0, 0x4735F0);
int dtor_gaddr(CDirectory) = GLOBAL_ADDRESS_BY_VERSION(0x4735F0, 0x4735F0, 0x4735F0);

int addrof(CDirectory::AddItem) = ADDRESS_BY_VERSION(0x473600, 0x473600, 0x473600);
int gaddrof(CDirectory::AddItem) = GLOBAL_ADDRESS_BY_VERSION(0x473600, 0x473600, 0x473600);

void CDirectory::AddItem(CDirectory::DirectoryInfo const &entry) {
    plugin::CallMethodDynGlobal<CDirectory *, CDirectory::DirectoryInfo const &>(gaddrof(CDirectory::AddItem), this, entry);
}

int addrof(CDirectory::FindItem) = ADDRESS_BY_VERSION(0x4736E0, 0x4736E0, 0x4736E0);
int gaddrof(CDirectory::FindItem) = GLOBAL_ADDRESS_BY_VERSION(0x4736E0, 0x4736E0, 0x4736E0);

bool CDirectory::FindItem(char const *name, unsigned int &outOffset, unsigned int &outSize) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDirectory *, char const *, unsigned int &, unsigned int &>(gaddrof(CDirectory::FindItem), this, name, outOffset, outSize);
}

int addrof(CDirectory::ReadDirFile) = ADDRESS_BY_VERSION(0x473630, 0x473630, 0x473630);
int gaddrof(CDirectory::ReadDirFile) = GLOBAL_ADDRESS_BY_VERSION(0x473630, 0x473630, 0x473630);

void CDirectory::ReadDirFile(char const *fileName) {
    plugin::CallMethodDynGlobal<CDirectory *, char const *>(gaddrof(CDirectory::ReadDirFile), this, fileName);
}

int addrof(CDirectory::WriteDirFile) = ADDRESS_BY_VERSION(0x473690, 0x473690, 0x473690);
int gaddrof(CDirectory::WriteDirFile) = GLOBAL_ADDRESS_BY_VERSION(0x473690, 0x473690, 0x473690);

bool CDirectory::WriteDirFile(char const *fileName) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDirectory *, char const *>(gaddrof(CDirectory::WriteDirFile), this, fileName);
}
