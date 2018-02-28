/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileMgr.h"

char *CFileMgr::ms_dirName = (char *)0x7F9C18;
char *CFileMgr::ms_rootDirName = (char *)0x68BD50;

// Converted from cdecl int CFileMgr::GetErrorReadWrite(int fileHandle) 0x48DE90
int CFileMgr::GetErrorReadWrite(int fileHandle) {
    return plugin::CallAndReturn<int, 0x48DE90, int>(fileHandle);
}

// Converted from cdecl int CFileMgr::CloseFile(int fileHandle) 0x48DEA0
int CFileMgr::CloseFile(int fileHandle) {
    return plugin::CallAndReturn<int, 0x48DEA0, int>(fileHandle);
}

// Converted from cdecl bool CFileMgr::ReadLine(int fileHandle,char *buffer,int maxSize) 0x48DEB0
bool CFileMgr::ReadLine(int fileHandle, char* buffer, int maxSize) {
    return plugin::CallAndReturn<bool, 0x48DEB0, int, char*, int>(fileHandle, buffer, maxSize);
}

// Converted from cdecl bool CFileMgr::Seek(int fileHandle,int offset,int origin) 0x48DEE0
bool CFileMgr::Seek(int fileHandle, int offset, int origin) {
    return plugin::CallAndReturn<bool, 0x48DEE0, int, int, int>(fileHandle, offset, origin);
}

// Converted from cdecl int CFileMgr::Write(int fileHandle,char *buffer,int size) 0x48DF30
int CFileMgr::Write(int fileHandle, char* buffer, int size) {
    return plugin::CallAndReturn<int, 0x48DF30, int, char*, int>(fileHandle, buffer, size);
}

// Converted from cdecl int CFileMgr::Read(int fileHandle,char *buffer,int size) 0x48DF50
int CFileMgr::Read(int fileHandle, char* buffer, int size) {
    return plugin::CallAndReturn<int, 0x48DF50, int, char*, int>(fileHandle, buffer, size);
}

// Converted from cdecl int CFileMgr::OpenFileForWriting(char const*filepath) 0x48DF70
int CFileMgr::OpenFileForWriting(char const* filepath) {
    return plugin::CallAndReturn<int, 0x48DF70, char const*>(filepath);
}

// Converted from cdecl int CFileMgr::OpenFile(char const*filepath,char const*mode) 0x48DF90
int CFileMgr::OpenFile(char const* filepath, char const* mode) {
    return plugin::CallAndReturn<int, 0x48DF90, char const*, char const*>(filepath, mode);
}

// Converted from cdecl int CFileMgr::LoadFile(char const*filepath,uchar *buffer,int size,char const*mode) 0x48DFB0
int CFileMgr::LoadFile(char const* filepath, unsigned char* buffer, int size, char const* mode) {
    return plugin::CallAndReturn<int, 0x48DFB0, char const*, unsigned char*, int, char const*>(filepath, buffer, size, mode);
}

// Converted from cdecl void CFileMgr::SetDirMyDocuments(void) 0x48E020
void CFileMgr::SetDirMyDocuments() {
    plugin::Call<0x48E020>();
}

// Converted from cdecl void CFileMgr::SetDir(char const*dir) 0x48E030
void CFileMgr::SetDir(char const* dir) {
    plugin::Call<0x48E030, char const*>(dir);
}

// Converted from cdecl void CFileMgr::ChangeDir(char const*dir) 0x48E090
void CFileMgr::ChangeDir(char const* dir) {
    plugin::Call<0x48E090, char const*>(dir);
}

// Converted from cdecl void CFileMgr::Initialise(void) 0x48E100
void CFileMgr::Initialise() {
    plugin::Call<0x48E100>();
}