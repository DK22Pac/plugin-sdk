/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileType.h"

CFileTypeMgr& FileTypeMgr = *gpatternt(CFileTypeMgr, "B9 ? ? ? ? E8 ? ? ? ? 8B F0 A1 ? ? ? ? 8D 6C 6D 00", 1);
int32_t& CFileTypeMgr::IndexOfType_WDR = *gpatternt(int32_t, "A3 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? 6A 00", 1);
int32_t& CFileTypeMgr::IndexOfType_WPL = *gpatternt(int32_t, "A3 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? 68", 1);
int32_t& CFileTypeMgr::IndexOfType_SCO = *gpatternt(int32_t, "A3 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 83 EC 44", 1);

CFileTypeMgr* CFileTypeMgr::GetManager() {
    return plugin::CallAndReturnDyn<CFileTypeMgr*>(gpattern("B8 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 EC 24"));
}
