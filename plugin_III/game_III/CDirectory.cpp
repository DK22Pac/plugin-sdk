/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDirectory.h"

// Converted from thiscall void CDirectory::CDirectory(int capacity) 0x4735C0
CDirectory::CDirectory(int capacity) {
    plugin::CallMethod<0x4735C0, CDirectory *, int>(this, capacity);
}

// Converted from thiscall void CDirectory::~CDirectory() 0x4735F0
CDirectory::~CDirectory() {
    plugin::CallMethod<0x4735F0, CDirectory *>(this);
}

// Converted from thiscall void CDirectory::AddItem(DirectoryInfo const&entry) 0x473600
void CDirectory::AddItem(DirectoryInfo const& entry) {
    plugin::CallMethod<0x473600, CDirectory *, DirectoryInfo const&>(this, entry);
}

// Converted from thiscall void CDirectory::ReadDirFile(char const*filename) 0x473630
void CDirectory::ReadDirFile(char const* filename) {
    plugin::CallMethod<0x473630, CDirectory *, char const*>(this, filename);
}

// Converted from thiscall bool CDirectory::WriteDirFile(char const*filename) 0x473690
bool CDirectory::WriteDirFile(char const* filename) {
    return plugin::CallMethodAndReturn<bool, 0x473690, CDirectory *, char const*>(this, filename);
}

// Converted from thiscall DirectoryInfo* CDirectory::FindItem(char const*name,uint &outOffset,uint &outSize) 0x4736E0
CDirectory::DirectoryInfo* CDirectory::FindItem(char const* name, unsigned int& outOffset, unsigned int& outSize) {
    return plugin::CallMethodAndReturn<DirectoryInfo*, 0x4736E0, CDirectory *, char const*, unsigned int&, unsigned int&>(this, name, outOffset, outSize);
}