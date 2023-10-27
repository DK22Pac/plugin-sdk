/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileType.h"
#include "Patch.h"

static CFileTypeMgr* FileTypeMgrAddr;
CFileTypeMgr& FileTypeMgr = *(CFileTypeMgr*)FileTypeMgrAddr;

static int32_t* CFileTypeMgr__IndexOfType_WDRAddr;
int32_t& CFileTypeMgr::IndexOfType_WDR = *(int32_t*)CFileTypeMgr__IndexOfType_WDRAddr;

static int32_t* CFileTypeMgr__IndexOfType_WPLAddr;
int32_t& CFileTypeMgr::IndexOfType_WPL = *(int32_t*)CFileTypeMgr__IndexOfType_WPLAddr;

static uint32_t CFileTypeMgr__GetManagerAddr;
CFileTypeMgr* CFileTypeMgr::GetManager() {
    return plugin::CallAndReturnDyn<CFileTypeMgr*>(CFileTypeMgr__GetManagerAddr);
}

template<>
void plugin::InitPatterns<CFileTypeMgr>() {
    FileTypeMgrAddr = (CFileTypeMgr*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? 8B F0 A1 ? ? ? ? 8D 6C 6D 00", 1));
    CFileTypeMgr__IndexOfType_WDRAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? 6A 00", 1));
    CFileTypeMgr__IndexOfType_WPLAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? 68", 1));

    CFileTypeMgr__GetManagerAddr = plugin::GetPattern("B8 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 EC 24", 0);
}
