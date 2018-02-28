/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileMgr.h"

char *CFileMgr::ms_dirName = (char *)0x713CA8;
char *CFileMgr::ms_rootDirName = (char *)0x5F18F8;

// Converted from cdecl void CFileMgr::Initialise(void) 0x478F80
void CFileMgr::Initialise() {
    plugin::Call<0x478F80>();
}

// Converted from cdecl void CFileMgr::ChangeDir(char const*dir) 0x478FB0
void CFileMgr::ChangeDir(char const* dir) {
    plugin::Call<0x478FB0, char const*>(dir);
}

// Converted from cdecl void CFileMgr::SetDir(char const*dir) 0x479020
void CFileMgr::SetDir(char const* dir) {
    plugin::Call<0x479020, char const*>(dir);
}

// Converted from cdecl void CFileMgr::SetDirMyDocuments(void) 0x479080
void CFileMgr::SetDirMyDocuments() {
    plugin::Call<0x479080>();
}

// Converted from cdecl int CFileMgr::LoadTextFile(char const*filepath,uchar *buffer,int size, char const*mode) 0x479090
FILESTREAM CFileMgr::LoadTextFile(char const* filepath, unsigned char* buffer, int size, char const* mode) {
    return plugin::CallAndReturn<int, 0x479090, char const*, unsigned char*, int, char const*>(filepath, buffer, size, mode);
}

// Converted from cdecl int CFileMgr::OpenFile(char const*filepath,char const*mode) 0x479100
FILESTREAM CFileMgr::OpenFile(char const* filepath, char const* mode) {
    return plugin::CallAndReturn<int, 0x479100, char const*, char const*>(filepath, mode);
}

// Converted from cdecl int CFileMgr::OpenFileForWriting(char const*filepath) 0x479120
FILESTREAM CFileMgr::OpenFileForWriting(char const* filepath) {
    return plugin::CallAndReturn<int, 0x479120, char const*>(filepath);
}

// Converted from cdecl int CFileMgr::Read(int fileHandle,char *buffer,int size) 0x479140
int CFileMgr::Read(FILESTREAM fileHandle, char* buffer, int size) {
    return plugin::CallAndReturn<FILESTREAM, 0x479140, int, char*, int>(fileHandle, buffer, size);
}

// Converted from cdecl int CFileMgr::Write(int fileHandle,char *buffer,int size) 0x479160
int CFileMgr::Write(FILESTREAM fileHandle, char* buffer, int size) {
    return plugin::CallAndReturn<FILESTREAM, 0x479160, int, char*, int>(fileHandle, buffer, size);
}

// Converted from cdecl bool CFileMgr::Seek(int fileHandle,int offset,int origin) 0x479180
bool CFileMgr::Seek(FILESTREAM fileHandle, int offset, int origin) {
    return plugin::CallAndReturn<bool, 0x479180, FILESTREAM, int, int>(fileHandle, offset, origin);
}

// Converted from cdecl bool CFileMgr::ReadLine(int fileHandle,char *buffer,int maxSize) 0x4791D0
bool CFileMgr::ReadLine(FILESTREAM fileHandle, char* buffer, int maxSize) {
    return plugin::CallAndReturn<bool, 0x4791D0, FILESTREAM, char*, int>(fileHandle, buffer, maxSize);
}

// Converted from cdecl int CFileMgr::CloseFile(int fileHandle) 0x479200
int CFileMgr::CloseFile(FILESTREAM fileHandle) {
    return plugin::CallAndReturn<int, 0x479200, FILESTREAM>(fileHandle);
}

// Converted from cdecl int CFileMgr::GetErrorReadWrite(int fileHandle) 0x479210
int CFileMgr::GetErrorReadWrite(FILESTREAM fileHandle) {
    return plugin::CallAndReturn<int, 0x479210, FILESTREAM>(fileHandle);
}