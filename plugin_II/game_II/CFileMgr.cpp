/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CFileMgr.h"

int CFileMgr::OpenFile(const char* name) {
    return plugin::CallStdAndReturn<int, 0x403160, const char*>(name);
}

int CFileMgr::CloseFile() {
    return plugin::CallStdAndReturn<int, 0x402EB0>();
}

size_t CFileMgr::Read(void* buff, int const& size) {
    return plugin::CallStdAndReturn<size_t, 0x402FB0, void*, int const&>(buff, size);
}

bool CFileMgr::ReadLine(void* buff, int const& size) {
    return plugin::CallStdAndReturn<bool, 0x403000, void*, int const&>(buff, size);
}

int CFileMgr::Seek(int const& size) {
    return plugin::CallStdAndReturn<int, 0x402F60, int const&>(size);
}