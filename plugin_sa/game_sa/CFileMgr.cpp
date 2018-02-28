/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileMgr.h"

char *CFileMgr::ms_dirName = (char *)0xB71A60;
char *CFileMgr::ms_rootDirName = (char *)0xB71AE0;
// functions
void CFileMgr::Initialise()
{
	((void (__cdecl *)())0x5386F0)();
}

int CFileMgr::ChangeDir(const char *path)
{
	return ((int (__cdecl *)(const char *))0x538730)(path);
}

int CFileMgr::SetDir(const char *path)
{
	return ((int (__cdecl *)(const char *))0x5387D0)(path);
}

int CFileMgr::SetDirMyDocuments()
{
	return ((int (__cdecl *)())0x538860)();
}

int CFileMgr::LoadFile(const char *path, unsigned char *buf, int size, const char *mode)
{
	return ((int (__cdecl *)(const char *, unsigned char *, int, const char *))0x538890)(path, buf, size, mode);
}

FILESTREAM CFileMgr::OpenFile(const char *path, const char *mode)
{
	return ((FILESTREAM (__cdecl *)(const char *, const char *))0x538900)(path, mode);
}

FILESTREAM CFileMgr::OpenFileForWriting(const char *path)
{
	return ((FILESTREAM (__cdecl *)(const char *))0x538910)(path);
}

FILESTREAM CFileMgr::OpenFileForAppending(const char *path)
{
	return ((FILESTREAM (__cdecl *)(const char *))0x538930)(path);
}

int CFileMgr::Read(FILESTREAM file, char *buf, int size)
{
	return ((int (__cdecl *)(FILESTREAM, char *, int))0x538950)(file, buf, size);
}

int CFileMgr::Write(FILESTREAM file, char *buf, int size)
{
	return ((int (__cdecl *)(FILESTREAM, char *, int))0x538970)(file, buf, size);
}

char CFileMgr::Seek(FILESTREAM file, int offset, int origin)
{
	return ((char (__cdecl *)(FILESTREAM, int, int))0x538990)(file, offset, origin);
}

char CFileMgr::ReadLine(FILESTREAM file, char *str, int num)
{
	return ((char (__cdecl *)(FILESTREAM, char *, int))0x5389B0)(file, str, num);
}

int CFileMgr::CloseFile(FILESTREAM file)
{
	return ((int (__cdecl *)(FILESTREAM))0x5389D0)(file);
}

int CFileMgr::GetFileLength(FILESTREAM file)
{
	return ((int (__cdecl *)(FILESTREAM))0x5389E0)(file);
}

int CFileMgr::Tell(FILESTREAM file)
{
	return ((int (__cdecl *)(FILESTREAM))0x538A20)(file);
}

bool CFileMgr::GetErrorReadWrite(FILESTREAM file)
{
	return ((bool (__cdecl *)(FILESTREAM))0x538A50)(file);
}